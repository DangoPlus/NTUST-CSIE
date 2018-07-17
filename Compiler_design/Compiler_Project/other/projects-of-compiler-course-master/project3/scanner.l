%{
//A10515001 李大祥 compiler project2

char tempStrBuf[1024];

#include "y.tab.h"
#include <stdio.h>
        
%}
%x STRING
%%

"/*"([^\*]|(\*)*[^\*/])*(\*)*"*/" {}
"//"[^\n]* {}

"," {return (',');}
":" {return (':');}
";" {return (';');}
"(" {return ('(');}
")" {return (')');}
"[" {return ('[');}
"]" {return (']');}
"{" {return ('{');}
"}" {return ('}');}
"+" {return ('+');}
"-" {return ('-');}
"*" {return ('*');}
"/" {return ('/');}
"^" {return (',');}
"%" {return ('%');}
"&" {return ('&');}
"!" {return ('!');}
"=" {return ('=');}
"<" {return ('<');}
">" {return ('>');}

"<=" {strcpy(yylval.str, yytext);return (LE_OP);}
">=" {strcpy(yylval.str, yytext);return (GE_OP);}
"==" {strcpy(yylval.str, yytext);return (EQ_OP);}
"!=" {strcpy(yylval.str, yytext);return (NE_OP);}
"+=" {strcpy(yylval.str, yytext);return (ADD_ASSIGN);}
"-=" {strcpy(yylval.str, yytext);return (SUB_ASSIGN);}
"*=" {strcpy(yylval.str, yytext);return (MUL_ASSIGN);}
"/=" {strcpy(yylval.str, yytext);return (DIV_ASSIGN);}

"bool" {strcpy(yylval.str, yytext);return (BOOL);}
"break" {strcpy(yylval.str, yytext);return (BREAK);}
"case" {strcpy(yylval.str, yytext);return (CASE);}
"const" {strcpy(yylval.str, yytext);return (CONST);}
"continue" {strcpy(yylval.str, yytext);return (CONTINUE);}
"default" {strcpy(yylval.str, yytext);return (DEFAULT);}
"else" {strcpy(yylval.str, yytext);return (ELSE);}
"for" {strcpy(yylval.str, yytext);return (FOR);}
"func" {strcpy(yylval.str, yytext);return (FUNC);}
"go" {strcpy(yylval.str, yytext);return (GO);}
"if" {strcpy(yylval.str, yytext);return (IF);}
"import" {strcpy(yylval.str, yytext);return (IMPORT);}
"int" {strcpy(yylval.str, yytext);return (INT);}
"nil" {strcpy(yylval.str, yytext);return (NIL);}
"print" {strcpy(yylval.str, yytext);return (PRINT);}
"println" {strcpy(yylval.str, yytext);return (PRINTLN);}
"real" {strcpy(yylval.str, yytext);return (REAL);}
"return" {strcpy(yylval.str, yytext);return (RETURN);}
"string" {strcpy(yylval.str, yytext);return (STRINGKEYWORD);}
"struct" {strcpy(yylval.str, yytext);return (STRUCT);}
"switch" {strcpy(yylval.str, yytext);return (SWITCH);}
"var" {strcpy(yylval.str, yytext);return (VAR);}
"void" {strcpy(yylval.str, yytext);return (VOID);}
"while" {strcpy(yylval.str, yytext);return (WHILE);}
"read" {strcpy(yylval.str, yytext);return (READ);}

true {strcpy(yylval.str, yytext);return (TRUE);}
false {strcpy(yylval.str, yytext);return (FALSE);}


([a-zA-Z]+[a-zA-Z0-9]*) {strcpy(yylval.str, yytext);return (IDENTIFIER);}
[0-9]+ {yylval.int_type = atoi(yytext);return (INTEGER);}

-?(([0-9]+)([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?) {sscanf(yytext, "%lf", &yylval.double_type);return (REALCONSTANTS);}

\"{1} {BEGIN(STRING);}
<STRING>([^"]*)+ {strcat(tempStrBuf, yytext);}
<STRING>"\"\"" {strcat(tempStrBuf, "\"\"");}
<STRING>\"{1} {strcpy(yylval.str, tempStrBuf);tempStrBuf[0] = '\0';BEGIN(INITIAL);
return (STR);}

(" ")* ;
^[ \t]*\n ;

[ \t]+$ ;

[\t\n]+   ;

%%
void yyerror(const char *str) {
	printf("error:%s\n", str);
}

int yywrap() {
	return 1;
}