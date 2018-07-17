%{
#include <stdio.h>
#include <ctype.h>
#include "y.tab.h"
#define STRLEN 1000
char strbuf[STRLEN];

#define stryy {strcpy(yylval.val, yytext);}
%}

%x STATE_string
digs        [0-9]
integer      {digs}+
real         -?(([0-9]+)([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?)
letter       [a-zA-Z]
identifier   {letter}({letter}|{digs})*
%%

"/*"([^\*]|(\*)*[^\*/])*(\*)*"*/" {}
"//"[^\n]* {}

"+"          {return ('+');}
"-"          {return ('-');}
"*"          {return ('*');}
"/"          {return ('/');}
"<"          {return ('<');}
">"          {return ('>');}
"<="         {stryy;return (LE_OP);}
">="         {stryy;return (GE_OP);}
"=="         {stryy;return (EQ_OP);}
"!="         {stryy; return (NE_OP);}
"="          {return ('=');}
";"          {return (';');}
","          {return (',');}
"("          {return ('(');}
")"          {return (')');}
"["          {return ('[');}
"]"          {return (']');}
"{"          {return ('{');}
"}"          {return ('}');}
"^" 		 {return (',');}
"%"			 {return ('%');}
"&"			 {return ('&');}
"bool"       {stryy;return(BOOL);}
true 		 {stryy;return (TRUE);}
false 		 {stryy;return (FALSE);}
"break"      {stryy;return(BREAK);}
"case"       {stryy;return(CASE);}
"const"      {stryy;return(CONST);}
"continue"   {stryy;return(CONTINUE);}
"default"    {stryy;return(DEFAULT);}
"else"       {stryy;return(ELSE);}
"for"        {stryy;return(FOR);}
"func"       {stryy;return(FUNC);}
"go"         {stryy;return(GO);}
"if"         {stryy;return(IF);}
"import"     {stryy;return(IMPORT);}
"int"        {stryy;return(INT);}
"read"       {stryy;return (READ);}
"nil"        {stryy;return(NIL);}
"print"      {stryy;return(PRINT);}
"println"    {stryy;return(PRINTLN);}
"real"       {stryy;return(REAL);}
"return"     {stryy;return(RETURN);}
"string"     {stryy;return(STRING);}
"struct"     {stryy;return(STRUCT);}
"switch"     {stryy;return(SWITCH);}
"type"       {stryy;return(TYPE);}
"var"        {stryy;return(VAR);}
"void"       {stryy;return(VOID);}
"while"      {stryy;return(WHILE);}

{identifier} {stryy;return (IDENTIFIER);}
{integer}    {yylval.int_type = atoi(yytext);return (INTEGER);}
{real}       {sscanf(yytext, "%lf", &yylval.double_type);return (REALCONSTANTS);}

\"{1} 		 {BEGIN(STATE_string);}
<STATE_string>([^"]*)+ {strcat(strbuf, yytext);}
<STATE_string>"\"\"" 	 {strcat(strbuf, "\"\"");}
<STATE_string>\"{1}    {strcpy(yylval.val, strbuf);strbuf[0] = '\0';BEGIN(INITIAL);return (STR);}

(" ")* ;
^[ \t]*\n ;

[ \t]+$ ;

[\t\n]+   ;

%%