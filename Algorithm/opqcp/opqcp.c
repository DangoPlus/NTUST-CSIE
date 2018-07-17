/* opqcp - Makes opaque copies of a group of sources to support a flavor
 * of distribution with the security of an object-only version but the ability
 * to recompile on a variety of machines like a source distribution.
 * 
 * The idea is that there is a lot of information in good sources which is
 * not needed by the compiler or linker, but which conveys the meaning of the
 * program to a programmer.  We try to write the most understandable programs
 * possible, opqcp aspires to translate them into the least understandable.
 * 
 *   Comments, #includes, #define'ed constants and macros - stripped or 
 * 	expanded by pouring the source through the C preprocessor.
 * 
 *   Global symbols - translated into unreadable equivalents or preserved
 * 	if needed to link to the program or function.  A global dictionary
 * 	must have previously been derived from the .o file symbol tables.
 * 	(All C reserved keywords are preserved automatically.)
 * 
 *   Local identifiers - Translated into unreadable equivalents within
 * 	a single source file.  This applies to everything not in the global
 * 	table (variables, typedefs, struct fields, etc.)
 * 
 *   Indentation/Whitespace - The tokens are packed on screen-width lines with
 * 	all whitespace removed.
 * 
 * Arguments (dash args precede file and destdir args.):
 *   -d dictfile - (Optional, may be repeated.) Contains a wordlist that is
 * 	entered into a symbol table of global names.  Lines with just a name
 *  	mark that identifier as a clear global to preserve in the output.  
 *	(All C reserved words are automatically preserved in this way.)
 * 	Lines with a name and its translation separated by a blank character
 * 	denote an opaque global which is translated the same everywhere.
 * 	All other symbols will be locally translated and may be different in
 * 	each source file.
 * 
 *   -Idir - (Optional, may be repeated.) Include directory arguments passed
 * 	on to the C preprocessor.
 * 
 *   -f - Filter mode, just opacifies stdin to stdout.  File and
 * 	directory arguments are ignored and the input must already have
 * 	been run through "cc -E" if preprocessing is desired.
 * 
 *   -t - Token trace (for testing).  Forces filter mode, prints token
 *	types and values.
 * 
 *   filenames.c - (Required except in filter mode, may be repeated.) 
 * 	Source files to obfuscate.
 * 
 *   destdir - (One required as the last argument except in filter mode.)
 *  	Where to put the opaque copies of the source files.
 * 	The copies have the same names as the originals, but opqcp
 * 	refuses to overwrite a file with itself.
 */

#include "misc.h"
#include "symtab.h"
#include "sys/types.h"
#include "sys/stat.h"
#include "ctype.h"

string c_keywords[] =		/* From K&R, appendix A, section 2.3. */
{
    "int", "char", "float", "double", "struct", "union", "enum", "long",
    "short", "unsigned", "auto", "extern", "register", "typedef", "static",
    "goto", "return", "sizeof", "break", "continue", "if", "else", "for",
    "do", "while", "switch", "case", "default", "entry", "fortran", "asm",
    "main",			    /* Reserved for main program functions. */
    "void"				/* Not in K&R, added since then. */
};
int n_keywords = sizeof c_keywords / sizeof( string );

main( argc, argv )
int argc;
string argv[];
{
    boolean filter_mode = FALSE, token_trace = FALSE;
    int i, j, k, l, arg_num;
    hash_table * globals, * locals;
    id * symbol;
    string *name_ptr, *arg_ptr, arg;
    static char I_args[BUFSIZ] = { '\0' };
    char buffer[BUFSIZ], buffer2[BUFSIZ];
    struct stat stat_buffer;
    FILE * dict_in, * input, * output, * popen();
    dev_t input_dev;
    ino_t input_inode;
    string directory, name, translation, index();

    char chr, * chr_ptr , token[BUFSIZ], * token_end, string_type;
    int token_length, line_length;
    enum { NONE, SYMBOL, STRING, NUMBER, OTHER }
	token_type, prev_token_type;
    static string token_type_strings[] =
	 { "none", "symbol", "string", "number", "other" };
    boolean whitespace;
    /* These characters will not be separated if they occur together. */
    string op_diphthong_chars = "=!<>&|+-*/%&^";

    /* Some simple macros to stream characters through the token recognizer. */
#   define NEW_TOKEN ( token_end = token, *token_end = '\0' )
#   define NEXT ( OUT, IN )
#   define OUT ( *token_end++ = chr, *token_end = '\0' )
#   define IN ( chr = getc( input ) )
#   define NEW_LINE ( line_length = 0 )

    int local_counter = 0;
#   define NLOCALS 5000
    static char local_names[NLOCALS][6];

    /* Save a lot of hassle by putting the local name strings in a static
     * array where they can be re-used.  The var_value cells of the ids in
     * a hashed symbol table are second class citizens in that they are not
     * freed when the hash table is freed, although the var_name strings are.
     */
    for ( i=0; i < NLOCALS/1000; i++ ) /* Initialize the local name strings. */
	for ( j=0; j<=9; j++ )
	    for ( k=0; k<=9; k++ )
		for ( l=0; l<=9; l++ )
		{
		    chr_ptr = local_names[local_counter++];
		    *chr_ptr++ = 'l';	/* Leading letter. */
		    if ( i ) *chr_ptr++ = '0' + i;	/* Thousands. */
		    if ( i || j ) *chr_ptr++ = '0' + j;	/* Hundreds. */
		    if ( i || j || k ) *chr_ptr++ = '0' + k;	/* Tens. */
		    *chr_ptr++ = '0' + l;	/* Ones. */
		    *chr_ptr = '\0';
		}
    
    /* Start out the global dictionary with the C keywords. */
    globals = new_hash_table( 1000 );
    for ( i=0, name_ptr = c_keywords; i < n_keywords; i++, name_ptr++ )
	new_symbol( *name_ptr, globals );

    /* Process dash arguments. */
    for ( arg_num=1, arg_ptr = &argv[1], arg = *arg_ptr;
	  arg_num < argc;
	  arg_num++, arg_ptr++, arg = *arg_ptr )
    {
	if ( arg[0] != '-' )
	    break;	/* Only do dash args here. */

	/* Process -d (global dictionary) args. */
	if ( strcmp( arg, "-d" ) == 0 )
	{
	    if ( ++arg_num >= argc-1 ) break;	/* Ignore -d at the end. */
	    arg = *++arg_ptr;

	    if ( (dict_in = fopen( arg, "r" )) == NULL )
	    {
		sprintf( buffer, "opqcp: Can't open dictionary %s\n", arg );
		perror( buffer );
		exit( 1 );
	    }

	    while( fgets( buffer, BUFSIZ, dict_in ) != NULL )
	    {
		/* Trash the newline fgets puts in the buffer. */
		buffer[ strlen(buffer)-1 ] = '\0';
		 
		/* Optional translation is separated from name by a blank. */
		if ( (translation = index( buffer, ' ' )) != NULL )
		    *translation++ = '\0';    /* Terminate the name string. */

		/* Link in a copy of the name string. */
		name = NEW( char, strlen(buffer)+1 );
		strcpy( name, buffer );
		symbol = new_symbol( name, globals );

		/* Translation will be NULL if symbol is to be left alone. */
		if ( translation != NULL )
		{
		    /* Link in a copy of the translation string. */
		    symbol->var_value = NEW( char, strlen(translation)+1 );
		    strcpy( symbol->var_value, translation );
		}
	    }
	    fclose( dict_in );
	}
	/* Process -Idir (cpp include directory) argument(s). */
	else if ( strncmp( arg, "-I", 2 ) == 0 )
	{
	    strcat( I_args, " " );
	    strcat( I_args, arg );
	}
	/* Process a -t (token trace) argument. */
	else if ( strcmp( arg, "-t" ) == 0 )
	{
	    token_trace = TRUE;		/* For testing. */
	    goto filter;		/* Forces filter mode. */
	}
	/* Process a -f (filter mode) argument. */
	else if ( strcmp( arg, "-f" ) == 0 )
	{
	filter:
	    filter_mode = TRUE;		/* No-ops all of the file handling. */
	    input = stdin;
	    output = stdout;
	}
	else
	    break; 			/* Out if invalid dash arg. */
    }

    /* Usage message if bad dash flag or no file and dir args . */
    if ( arg[0] == '-'  || !filter_mode && argc-arg_num < 2 )
    {
	fprintf( stderr, "%s\n%s\n",
	    "usage: opqcp [-d dict]* [-Idir]* [srcfile]+ destdir",
	    "  or   opqcp [-d dict]* -f" );
	exit( 2 );
    }

    /* Check that the last argument is a directory. */
    if ( !filter_mode )
    {
	if ( stat( directory = argv[argc-1], &stat_buffer ) == -1 )
	{
	    sprintf( buffer, "opqcp: Can't stat directory %s\n", directory );
	    perror( buffer );
	    exit( 1 );
	}
	if ( ! (stat_buffer.st_mode & S_IFDIR) )
	{
	    fprintf( stderr, "opqcp: %s is not a directory.\n", directory );
	    exit( 1 );
	}
    }

    /* Loop through the file arguments. */
    for ( ; filter_mode || arg_num < argc-1; arg_num++, arg_ptr++ )
    {
	if ( filter_mode )
	    arg = "(stdin)";
	else
	{
	    arg = *arg_ptr;

	    /* Before opening the output file, check that it isn't the same
	     * as the input file.  (This would result in clearing the file
	     * before it was read!)
	     */
	    if ( stat( arg, &stat_buffer ) == -1 )
	    {
		sprintf( buffer, "opqcp: Can't stat input file %s\n", arg );
		perror( buffer );
		continue;		/* Go do next file arg. */
	    }
	    /* Might as well check that it's a plain file while we're here. */
	    if ( ! (stat_buffer.st_mode & S_IFREG) )
	    {
		fprintf( stderr, "opqcp: %s is not a plain file.\n", arg );
		continue;		/* Go do next file arg. */
	    }
	    input_dev = stat_buffer.st_dev;
	    input_inode = stat_buffer.st_ino;

	    sprintf( buffer, "%s/%s", directory, arg ); /* Output file path. */
	    if ( stat( buffer, &stat_buffer ) == 0 )
	    {	       /* We can only stat an already existing output file. */
		/* Check for inode collision to guard against overwriting. */
		if ( stat_buffer.st_dev == input_dev &&
		     stat_buffer.st_ino == input_inode )
		{
		    fprintf( stderr, "opqcp: Can't copy file %s to itself.\n",
			     arg );
		    continue;		/* Go on to next file arg. */
		}
		/* Check that it's a plain file while we're here. */
		if ( ! (stat_buffer.st_mode & S_IFREG) )
		{
		    fprintf( stderr, "opqcp: %s is not a plain file.\n",
			     buffer );
		    continue;		/* Go on to next file arg. */
		}
	    }

	    /* Open the opaque source file on the destination directory. */
	    if ( (output = fopen( buffer, "w" )) == NULL )
	    {
		sprintf( buffer, "opqcp: Can't write file %s",arg );
		perror( buffer );
		continue;		/* Go on to the next file. */
	    }

	    /* Copyright notice. */
	    fputs( "/* Licensed material, Copyright ", output );
	    fputs( "(c) 1985, University of Utah. */\n", output );

	    /* Read the source file through the C preprocessor. */
	    sprintf( buffer2, "cc -E %s %s", I_args, arg );
	    if ( (input = popen( buffer2, "r" )) == NULL )
	    {
		sprintf( buffer2, "opqcp: Couldn't start cpp on %s.",arg );
		perror( buffer2 );
		fclose( output );	/* It was already opened. */
		unlink( buffer );	/* Wipe out the empty output file. */
		continue;		/* Go on to the next file. */
	    }
	}

	/* Local dictionary lasts only through a single source file. */
	locals = new_hash_table( 1000 );
	local_counter = 0;

	/* Transfer tokens from the cpp stream to a packed output file. */
	chr = '\n'; /* In effect, the end of the line before the first line. */
	NEW_LINE;			/* Start first line of output. */
	prev_token_type = NONE;
	/* Back here at the beginning of each token. */
	while( chr != EOF )
	{
	    NEW_TOKEN;		/* Set up to collect a token. */
	    token_type = NONE;
	    whitespace = FALSE;

	    /* Flush whitespace before a token. */
	    while( isspace( chr ) )
	    {
		whitespace = TRUE;

		if ( chr != '\n' )
		    IN;		/* Character after blank or tab. */
		else
		{
		    IN;		/* First character on a line. */
		    if ( chr == '#' )
		    {
			/* Flush C preprocessor linenumber statements. */
			while ( chr != '\n' && chr != EOF )
			    IN;		/* Go until the newline is found. */
		    }
		}
	    }

	    /* Identifiers, keywords, etc.  Underscore is a letter. */
	    if ( isalpha( chr ) || chr == '_' )
	    {
		token_type = SYMBOL;

		/* Grab the alpha and then alphanumeric characters. */
		NEXT;
		while ( isalnum( chr ) || chr == '_' ) NEXT;

		/* Look the symbol up in the global dictionary. */
		if ( (symbol = find_symbol( token, globals )) != NULL )
		{
		    /* Substitute a global translation if there is one. */
		    if ( symbol->var_value != NULL )
		    {
			strcpy( token, symbol->var_value );
		    }
		}
		else
		{
		    /* Look the symbol up in the local dictionary. */
		    if ( (symbol = find_symbol( token, locals )) == NULL )
		    {
			/* New symbol, assign a local translation. */
			name = NEW( char, strlen(token)+1 );
			strcpy( name, token );
			symbol = new_symbol( name, locals );
			symbol->var_value = local_names[++local_counter];
		    }
		    /* Translate symbol to the local equivalent. */
		    strcpy( token, symbol->var_value );
		}
	    }
	    /* Character constants and strings. */
	    else if ( chr == '"' || chr == '\'' )
	    {
		token_type = STRING;
		string_type = chr;	/* Remember which kind of quote. */
		NEXT;	  /* Stash quote, get first char of string. */
		while ( chr != string_type )
		{
		    if ( chr != '\\' )
			NEXT;    /* Stash non-backslash char, go ahead. */
		    else
		    /* Handle backslash escapes. */
		    {
			NEXT;   /* Stash backslash, go to escaped char. */
			if ( string_type != '"' || chr != '\n' )
			    NEXT;	/* Stash escaped char, go ahead. */
			else
			{
			    /* Weird special case.  Strings can be
			     * continued onto the next line if they
			     * precede the newline with a backslash.
			     */
			    NEXT;	/* Stash escaped newline, go ahead. */
			    if ( strlen(token) + line_length > 77 )
				fputs( "\n", output ); /* Break before. */
			    /* Put out the string with escaped newline. */
			    fputs( token, output );
			    /* Start a new line and a new token. */
			    NEW_LINE; NEW_TOKEN;
			}
		    }
		}
		NEXT;		/* Stash closing quote. */
	    }
	    /* Numbers.  (This can be a bit simplified over a real
	     * lexical analyzer, since it only has to correctly
	     * recognize all valid number forms, not detect subtle
	     * syntax errors.)
	     */
	    else if ( isdigit( chr ) )
	    {
	    number:
		token_type = NUMBER;

		/* Initial numeric part. */
		if ( chr == '0' )
		{  /* Could be an octal or hex constant, or just a "0". */
		    NEXT;
		    if ( chr == 'x' || chr == 'X' )
		    {
			NEXT;	/* Get first char of hex constant. */
			while( isdigit( chr ) || chr >= 'a' && chr <= 'f'
					      || chr >= 'A' && chr <= 'F' )
			    NEXT;	/* Read through hex constant. */
		    }
		    else		/* Octal integer constant. */
			while ( isdigit( chr ) ) NEXT;
		}
		else
		    /* Decimal integer, or part of a floating pt number. */
		    while ( isdigit( chr ) ) NEXT;

		/* Optional integer "l" suffix, fraction, or exponent. */
		if ( chr == 'l' || chr == 'L' )
		    NEXT;
		else
		{
		    /* Optional fractional part on floats. */
		    if ( chr == '.' )
		    {
			NEXT;	/* Get first char of fraction. */
			while ( isdigit( chr ) ) NEXT;
		    }

		    /* Optional exponent. */
		    if ( chr == 'e' || chr == 'E' )
		    {
			NEXT;	/* Get first char of exponent. */
			/* Optional sign on exponent. */
			if ( chr == '+' || chr == '-' ) NEXT;
			while ( isdigit( chr ) ) NEXT;	/* Exponent. */
		    }
		}
	    }
	    /* Operators and single-character tokens for punctuation. */
	    else if( chr != EOF )
	    {
		token_type = OTHER;

		/* Dot may be either a leading decimal point on a number,
		 * or a structure access operator. We have a number if the
		 * following character is a digit.
		 */
		if ( chr == '.' )
		{
		    NEXT;
		    if ( isdigit( chr ) )
			goto number;	/* Yep, leading decimal point. */
		}
		else			/* Everything other than dots. */
		{
		    /* Keep operator diphthongs contiguous. */
		    if ( index( op_diphthong_chars, chr ) != NULL )
			while ( index( op_diphthong_chars, chr ) != NULL )
			    NEXT;	/* Collect diphthong characters. */
		    else
			NEXT;		/* Single-character token. */
		}
	    }

	    if ( token_trace )
		fprintf( output, "type = %s, token = `",
		    token_type_strings[ (int)token_type ] );

	    /* Got a token in the buffer, pack it onto an output line. */
	    token_length = strlen( token );
	    if ( token_length + line_length > 77 )  /* Time for line break? */
	    {
		fputs( "\n", output );	/* Line break. */
		NEW_LINE;		/* Start next line. */
	    }
	    /* Need to preserve blanks between symbols or numbers, and
	     * between operators next to = signs so they don't run together.
	     */
	    else if ( (prev_token_type==SYMBOL || prev_token_type==NUMBER) &&
			   (token_type==SYMBOL || token_type==NUMBER)   ||
		      token[0] == '=' && whitespace )	/* Space before =. */
	    {
		fputs( " ", output );
		line_length++;
	    }

	    /* Add token to the output stream. */
	    fputs( token, output );
	    line_length += token_length;

	    if ( token[token_length-1] == '=' && isspace( chr ) )
	    {
		fputs( " ", output );	/* Space after = sign. */
		line_length++;
	    }

	    if ( token_trace )
		fprintf( output, "'\n" );

	    prev_token_type = token_type;
	}
	/* EOF. */
	fputs( "\n", output );		/* End of line at end of file. */

	if ( filter_mode )
	    exit( 0 );			/* Done. */
	else
	{
	    pclose( input );
	    fclose( output );
	    fr_hash_table( locals );
	}
    }					/* Next file. */
}
