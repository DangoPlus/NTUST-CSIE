%{

#include <stdio.h>
#include <string.h>
#include "parser.h"

#define MAX_STR 255

static char* dup_lit(const char* lit);

%}

%option noyywrap
%option nounput
%option noinput

ID [a-zA-Z_][a-zA-Z0-9_]*

%%

_        { return '_'; }
new      { return T_NEW; }
Box      { return T_BOX; }
bool     { return T_BOOL; }
i32      { return T_I32; }
u8       { return T_U8; }
else     { return T_ELSE; }
enum     { return T_ENUM; }
false    { return T_FALSE; }
fn       { return T_FN; }
if       { return T_IF; }
let      { return T_LET; }
loop     { return T_LOOP; }
match    { return T_MATCH; }
mut      { return T_MUT; }
ref      { return T_REF; }
return   { return T_RETURN; }
struct   { return T_STRUCT; }
true     { return T_TRUE; }
while    { return T_WHILE; }

"//"[^\r\n]* { /* Eat single-line comments. */ }

"/*"([^*]|("*"+([^*/])))*"*"+"/" { /* Eat multi-line comments. */ }

b\"(\\\"|\\\\|[^"\r\n\\])*\" { yylval.str = dup_lit(yytext); return T_LIT_STR; }

b'(\\'|\\\\|[^'\r\n\\])*' {
      char* c = dup_lit(yytext);
      yylval.num = *c;
      free(c);
      return T_LIT_U8;
}

{ID}     { yylval.str = strndup(yytext, MAX_STR); return T_ID; }

[0-9][0-9_]*    { yylval.num = atoi(yytext); return T_LIT_I32; }

;      { return ';'; }
,      { return ','; }
\.     { return '.'; }
\(     { return '('; }
\)     { return ')'; }
\{     { return '{'; }
\}     { return '}'; }
\[     { return '['; }
\]     { return ']'; }
::     { return T_COLONCOLON; }
:      { return ':'; }
==    { return T_EQEQ; }
=>    { return T_EQGT; }
=     { return '='; }
\!=   { return T_NEQ; }
\!    { return '!'; }
\<=   { return T_LEQ; }
\<    { return '<'; }
\>=   { return T_GEQ; }
\>    { return '>'; }
-\>  { return T_MINUSGT; }
-    { return '-'; }
-=   { return T_MINUSEQ; }
&&   { return T_ANDAND; }
&    { return '&'; }
\|\| { return T_OROR; }
\|   { return '|'; }
\+   { return '+'; }
\+=  { return T_PLUSEQ; }
\*   { return '*'; }
\*=  { return T_MULEQ; }
\/   { return '/'; }
\/=  { return T_DIVEQ; }
%    { return '%'; }
%=   { return T_MODEQ; }

[ \n\t\r]+             { }

. {
      fprintf(stderr, "Error: unrecognized character: %s\n", yytext);
      return T_UNKNOWN;
}

%%

static char* dup_lit(const char* lit) {
      char* new_lit = malloc(MAX_STR + 1);
      int i = 0;
      for (const char* c = lit+2; *c && i < MAX_STR; ++c, ++i) {
            if (*c == '\\') ++c;
            new_lit[i] = *c;
      }
      new_lit[i-1] = 0; // final quote
      return new_lit;
}


