%k5000
ucase        [A-Z]
lcase        [a-z]
letter       ({ucase}|{lcase})
zero         0
nonzero      [1-9]
sign         [+-]
digit        ({zero}|{nonzero})
blanks       [ \t\f]
newline      \n
D                       [0-9]
O                       [0-7]
L                       [a-zA-Z_]
H                       [a-fA-F0-9]
E                       [Ee][+-]?{D}+
FS                      (f|F|l|L)
IS                      (u|U|l|L)*


%{
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <stdio.h>
#include "types.h"
#include "gram.h"
#include "listing.h"
#include "utils.h"
#include "build.h"
#include "protos.h"
#define MYRET(a)        \
	{             \
	echo(yytext); \
	return((a));  \
	}
#define RETKEY(a)                         \
	{                                 \
	echo(yytext);                     \
	yylval.rk.terminal = a;           \
	strcpy(yylval.rk.string,yytext);  \
	return((a));                      \
	}
   int linenumber;
   int col;
%}

%%
