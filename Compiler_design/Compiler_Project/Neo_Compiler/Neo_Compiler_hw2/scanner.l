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
"->"         {stryy;return (AR_OP);}
"=="         {stryy;return (EQ_OP);}
"!="         {stryy; return (NE_OP);}
"="          {return ('=');}
":"          {return (':');}
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
"&&"		 {return (AND);}
"||"         {return (OR);}
"bool"       {stryy;return(BOOL);}
"true" 		 {stryy;return (TRUE);}
"false"		 {stryy;return (FALSE);}
"break"      {stryy;return(BREAK);}
"char"       {stryy;return(CHAR);}
"continue"   {stryy;return(CONTINUE);}
"do"         {stryy;return(DO);}
"else"       {stryy;return(ELSE);}
"enum"       {stryy;return(ENUM);}
"extern"     {stryy;return(EXTERN);}
"float"      {stryy;return(FLOAT);}
"for"        {stryy;return(FOR);}
"fn"         {stryy;return(FN);}
"if"         {stryy;return(IF);}
"in"         {stryy;return(IN);}
"int"        {stryy;return(INT);}
"let"        {stryy;return(LET);}
"loop"       {stryy;return(LOOP);}
"match"      {stryy;return(MATCH);}
"mut"        {stryy;return(MUT);}
"print"      {stryy;return(PRINT);}
"println"    {stryy;return(PRINTLN);}
"pub"        {stryy;return(PUB);}
"return"     {stryy;return(RETURN);}
"self"       {stryy;return(SELF);}
"static"     {stryy;return(STATIC);}
"str"        {stryy;return(STR);}
"struct"     {stryy;return(STRUCT);}
"switch"     {stryy;return(SWITCH);}
"use"        {stryy;return(USE);}
"where"      {stryy;return(WHERE);}
"while"      {stryy;return(WHILE);}

{identifier} {stryy;return (IDENTIFIER);}
{integer}    {yylval.int_type = atoi(yytext);return (INTEGER);}
{real}       {sscanf(yytext, "%f", &yylval.float_type);return (FLOATPOINT);}

\"{1} 		 {BEGIN(STATE_string);}
<STATE_string>([^"]*)+ {strcat(strbuf, yytext);}
<STATE_string>"\"\"" 	 {strcat(strbuf, "\"\"");}
<STATE_string>\"{1}    {strcpy(yylval.val, strbuf);strbuf[0] = '\0';BEGIN(INITIAL);return (STR);}

(" ")* ;
^[ \t]*\n ;

[ \t]+$ ;

[\t\n]+   ;

%%