%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
#define SIZE		1024
#define MAX_LINE_LENG	1024
#define STRLEN		1024

int yylex( void );
void yyerror( const char *str );

int	judge		= 0;
int	key_id		= 1;
int	itemDepth	= 0;

struct symbol_table {
	char	idName[100];
	char	type[100];
	char	value[100];
	int	key;
	int	depth;
};

struct symbol_table* *hash_table;

/* Creates a symbol table. */
	struct symbol_table* * create()
	{
		static struct symbol_table* newhash_table[SIZE];
		return(newhash_table);
	};
/* Returns index of the entry for int key */
	int lookup( char *idName, int depth )
	{
		int	hash_index	= 1;
		int	find		= 0;

		while ( hash_table[hash_index] != NULL )
		{
			if ( strcmp( hash_table[hash_index]->idName, idName ) == 0 && hash_table[hash_index]->depth == depth )
			{
				find = 1;
				break;
			}else  {
				++hash_index;
			}
		}
		if ( find == 1 )
		{
			return(hash_index);
		}else  {
			return(-1);
		}
	}


/* Inserts s into  the symbol table */
	void insert( char *idName, char *type, char *value )
	{
		struct symbol_table *item = (struct symbol_table *) malloc( sizeof(struct symbol_table) );
		strcpy( item->idName, idName );
		strcpy( item->type, type );
		strcpy( item->value, value );
		item->depth	= itemDepth;
		item->key	= key_id;

		hash_table[key_id] = item;
		key_id++;
	}


	void clear()
	{
		for ( int i = 1; i < SIZE; i++ )
		{
			if ( hash_table[i] != NULL )
			{
				hash_table[i] = NULL;
			}
		}
	}


/* Dumps all entries of the symbol table. returns index of the entry. */
	void dump()
	{
		for ( int i = 1; i < SIZE; i++ )
		{
			if ( hash_table[i] != NULL )
			{
				printf( "%d:%-*s%-*s%-*s\n", i, 10, hash_table[i]->idName, 10, hash_table[i]->type, 10, hash_table[i]->value );
			}
		}
		clear();
	}

%}
%start program


%union {
	char	typeOF[200];
	char	val[200];
	double	double_type;
	int	int_type;
	int	int_val;
};
%token <val> STR TRUE FALSE IDENTIFIER BOOL STRINGKEYWORD REAL INT ENUM FLOAT CHAR
%token LE_OP GE_OP EQ_OP NE_OP AND OR NOR EQUALS WHILE WHERE
%token BREAK CONTINUE DEFAULT ELSE MATCH MUT
%token FOR FN DO IF IN PRINT PRINTLN EXTERN LET LOOP PUB
%token RETURN STATIC STRUCT SWITCH SELF USE
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN
%token <double_type> REALCONSTANTS
%token <int_type> INTEGER
%type  <val> value_decl program primary_expr type_specifier decl_list declarator

%%

primary_expr
: value_decl
| decl_list
| primary_expr value_decl
| primary_expr decl_list
;

unary_expr
: primary_expr
| '-' primary_expr
;

multi_expr
: unary_expr
| multi_expr '*' unary_expr
| multi_expr '/' unary_expr
| multi_expr '%' unary_expr
;

additive_expr
: multi_expr
| additive_expr '+' multi_expr
| additive_expr '-' multi_expr
;


relational_expr
: additive_expr
| relational_expr '<' primary_expr
| relational_expr '>' primary_expr
| relational_expr LE_OP primary_expr
| relational_expr GE_OP primary_expr
;

equal_expr
: relational_expr
| equal_expr EQ_OP relational_expr
| equal_expr NE_OP relational_expr
;

and_expr
: equal_expr
| and_expr '&' equal_expr
;

excl_or_expr
: and_expr
| excl_or_expr '^' and_expr
;

incl_or_expr
: excl_or_expr
| incl_or_expr '|' excl_or_expr
;

assign_expr
: incl_or_expr
| incl_or_expr '=' assign_expr
;

expr
: assign_expr
| expr assign_expr
;


type_specifier
: BOOL
| STRINGKEYWORD
| REAL
| INT
| FLOAT
;

value_decl
: STR  {
	strcpy( $$, $1 );
}
| TRUE  {
	strcpy( $$, $1 );
}
| FALSE {
	strcpy( $$, $1 );
}
| INTEGER
{
	char str_temp[50];
	sprintf( str_temp, "%d", $1 );
	strcpy( $$, str_temp );
}
| REALCONSTANTS
{
	char str_temp[50];
	sprintf( str_temp, "%g", $1 );
	strcpy( $$, str_temp );
}
;

decl_list
: declarator
| decl_list '(' decl_list ')'
| decl_list ','
;

declarator
: IDENTIFIER
| value_decl
;

para_list
: para_decl
| para_list ',' para_decl
;
para_decl
: IDENTIFIER type_specifier
{
	insert( $1, $2, "" );
}
;

// decl_list
//  : declaration
// | decl_list declaration
// ;

// declaration
// : CONST IDENTIFIER '=' value_decl {
// 	insert( $2, "const", $4 );
// }
// | VAR IDENTIFIER type_specifier {
// 	insert( $2, $3, "" );
// }
// | VAR IDENTIFIER type_specifier '=' value_decl {
// 	insert( $2, $3, "" );
// }
// | VAR IDENTIFIER '[' INTEGER ']' type_specifier {
// 	insert( $2, "array", $6 );
// }
// ;

short_stat
: IDENTIFIER '[' INTEGER ']' '=' expr
| PRINT expr
| PRINTLN expr
| RETURN
| RETURN expr
;

compound_start
: '{'
{
	if ( judge == 1 )
	{
		itemDepth++;
	}else  {
		judge++;
	}
}
;

compound_end
: '}'
{
	itemDepth--;
}
;

compound_stat
: compound_start stat_list compound_end
| compound_start decl_list compound_end
| compound_start decl_list stat_list compound_end
| compound_start compound_end
;

expr_stat
:  expr
;

select_stat
: IF '(' expr ')' statement
| IF '(' expr ')' statement ELSE statement
;

iteration_stat
: FOR '(' expr_stat ')' statement
| FOR '(' expr_stat ";" expr_stat ')' statement
| FOR '(' expr_stat ";"  expr_stat ";"  expr_stat ')' statement
;

// jump_statement
// : GO IDENTIFIER '(' expr_stat ')'
// ;

stat_list
: statement
| stat_list statement
;

statement
: short_stat
| compound_stat
| expr_stat
| select_stat
| iteration_stat
;

fn_expr:
FN {
	judge = 0;
	itemDepth++;
};

FN_def
: fn_expr type_specifier IDENTIFIER '(' para_list ')' compound_stat
{
	insert( $3, $2, "" );
}
| fn_expr IDENTIFIER '(' para_list ')' compound_stat
{
	insert( $2, "", "" );
}
| fn_expr type_specifier IDENTIFIER '('  ')' compound_stat
{
	insert( $3, $2, "" );
}
| fn_expr IDENTIFIER '('  ')' compound_stat
{
	insert( $2, "", "" );
}
;

ext_decl
: FN_def
| decl_list
| IDENTIFIER '(' decl_list ')'
;

program
: ext_decl
| program ext_decl
;

%%

void yyerror( const char *str )
{
	printf("error:%s\n",str);
}


int yywrap()
{
	return(1);
}


int main()
{
	judge		= 0;
	itemDepth	= 0;
	hash_table	= create();
	yyparse();
	printf( "Symbol Table\n" );
	dump();
	return(0);
}


