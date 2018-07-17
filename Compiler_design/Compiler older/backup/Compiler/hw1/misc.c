// alpha   [A-Za-z]
// digit   [0-9]
//
// // number[0-9]+
// identifier    [a-zA-z_][a-zA-Z_0-9]*


// [ \t\r]			        break;
// \(									{return_print;}
// \)									{return_print;}
// \{									{return_print;}
// \}									{return_print;}
// \[									{return_print;}
// \]									{return_print;}
// \;									{return_print;}
// int			return INT;
// if			return IF;
// else			return ELSE;
// return			return RETURN;
// float			return FLOAT;
// struct			return STRUCT;
// {number}            {printf("token is number %s\n", yytext);}
// {identifier}        {printf("token is identifier %s\n", yytext );}
// \n      {
//         LIST;
//         printf("%d: %s", linenum++, buf);
//         buf[0] = '\0';
//         }
// [ \t]*  {LIST;}
//
// .       {
//         LIST;
//         printf("%d:%s\n", linenum+1, buf);
//         printf("bad character:'%s'\n",yytext);
//         exit(-1);
//         }
//


// int main()
// {
// yylex();
// printf( "%d of lines",
// linenum );
// }



{number}     {tokenInteger('yytext',i)}
{identifier} {tokenID('yytext')}
{newline}    {linenum++;}
{whitespace} {}


#define return_print printf("token is %s\n", yytext)



char* symbol_table[MAX_LINE_LENG];
char idtable[MAX_LINE_LENG][MAX_LINE_LENG];
int idpointer = 0;
