%{
 #include "y.tab.h"
 #include "com.h"
 int lineno = 1;
%} 
delim  [ \t\n]
ws   {delim}+
letter  [A-Za-z]
digit  [0-9]
id   {letter}({letter}|{digit})*
number  {digit}+(\.{digit}+)?(E[+\-]?(digit)+)?
string  \"(\\.|[^\\"])*\"
character  '(\\.|[^\\'])'
comment    (\#[^\n]*)|(\/\*(((\*)*[^\*\/]+(\/)*)*|(\*)*|(\/)*)\*\/)|(\/\/[^\n]*)

%%
"\n"  {lineno++;}
{comment} {}
{ws} {}
"char"  {return(CHAR);}
"else"  {return(ELSE);}
"if"  {return(IF);}
"int"  {return(INT);}
"return" {return(RETURN);}
"void"  {return(VOID);}
"while"  {return(WHILE);}
"__stdcall" {return(__STDCALL);}
"__cdecl" {return(__CDECL);}
{id}  {yylval.symType = makeSym( yytext ); return ID;}
{number} {yylval.symType = makeSym( yytext ); return NUM;}
{string} {yylval.symType = makeSym( yytext ); return STRING;}
{character} {yylval.symType = makeSym( yytext ); return CHARACTER;}
"<"   {return LT;}
">"   {return GT;}
"<="  {return LE;}
">="  {return GE;}
"=="  {return EQ;}
"!="  {return NE;}
"|"   {return OR;}
"&&"	{return AND;}  
"{"   {enterscope(); return '{';}
"}"   {exitscope(); return '}';}
"("   {return '(';};
")"   {return ')';};
"["   {return '[';};
"]"   {return ']';};
"+"   {return '+';};
"-"   {return '-';};
"*"   {return '*';};
"/"   {return '/';};
"%"   {return '%';};
";"   {return ';';};
"="   {return '=';};
","   {return ',';};
%%
int yywrap()
{
 return 1;
}
