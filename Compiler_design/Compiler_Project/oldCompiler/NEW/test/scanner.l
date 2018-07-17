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

"<=" {strcpy(yylval.val, yytext);return (LE_OP);}
">=" {strcpy(yylval.val, yytext);return (GE_OP);}
"==" {strcpy(yylval.val, yytext);return (EQ_OP);}
"!=" {strcpy(yylval.val, yytext);return (NE_OP);}
"+=" {strcpy(yylval.val, yytext);return (ADD_ASSIGN);}
"-=" {strcpy(yylval.val, yytext);return (SUB_ASSIGN);}
"*=" {strcpy(yylval.val, yytext);return (MUL_ASSIGN);}
"/=" {strcpy(yylval.val, yytext);return (DIV_ASSIGN);}

"bool" {strcpy(yylval.val, yytext);return (BOOL);}
"break" {strcpy(yylval.val, yytext);return (BREAK);}
"case" {strcpy(yylval.val, yytext);return (CASE);}
"const" {strcpy(yylval.val, yytext);return (CONST);}
"continue" {strcpy(yylval.val, yytext);return (CONTINUE);}
"default" {strcpy(yylval.val, yytext);return (DEFAULT);}
"else" {strcpy(yylval.val, yytext);return (ELSE);}
"for" {strcpy(yylval.val, yytext);return (FOR);}
"func" {strcpy(yylval.val, yytext);return (FUNC);}
"go" {strcpy(yylval.val, yytext);return (GO);}
"if" {strcpy(yylval.val, yytext);return (IF);}
"import" {strcpy(yylval.val, yytext);return (IMPORT);}
"int" {strcpy(yylval.val, yytext);return (INT);}
"nil" {strcpy(yylval.val, yytext);return (NIL);}
"print" {strcpy(yylval.val, yytext);return (PRINT);}
"println" {strcpy(yylval.val, yytext);return (PRINTLN);}
"real" {strcpy(yylval.val, yytext);return (REAL);}
"return" {strcpy(yylval.val, yytext);return (RETURN);}
"string" {strcpy(yylval.val, yytext);return (STRINGKEYWORD);}
"struct" {strcpy(yylval.val, yytext);return (STRUCT);}
"switch" {strcpy(yylval.val, yytext);return (SWITCH);}
"var" {strcpy(yylval.val, yytext);return (VAR);}
"void" {strcpy(yylval.val, yytext);return (VOID);}
"while" {strcpy(yylval.val, yytext);return (WHILE);}
"read" {strcpy(yylval.val, yytext);return (READ);}

true {strcpy(yylval.val, yytext);return (TRUE);}
false {strcpy(yylval.val, yytext);return (FALSE);}


([a-zA-Z]+[a-zA-Z0-9]*) {strcpy(yylval.val, yytext);return (IDENTIFIER);}
[0-9]+ {yylval.int_type = atoi(yytext);return (INTEGER);}

-?(([0-9]+)([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?) {sscanf(yytext, "%lf", &yylval.double_type);return (REALCONSTANTS);}

\"{1} {BEGIN(STRING);}
<STRING>([^"]*)+ {strcat(tempStrBuf, yytext);}
<STRING>"\"\"" {strcat(tempStrBuf, "\"\"");}
<STRING>\"{1} {strcpy(yylval.val, tempStrBuf);tempStrBuf[0] = '\0';BEGIN(INITIAL);
return (STR);}

(" ")* ;
^[ \t]*\n ;

[ \t]+$ ;

[\t\n]+   ;

%%
