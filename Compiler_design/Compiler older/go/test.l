%{
#include <stdio.h>

#define LIST     strcat(buf,yytext)
#define token(t) {LIST; printf("<%s>\n","t");}
#define tokenInteger(t,i) {LIST; printf("<%s:%d>\n","t",i);}
#define tokenString(t,s) {LIST; printf("<%s:%s>\n","t",s);}
#define MAX_LINE_LENG 256

int linenum = 1;
char buf[MAX_LINE_LENG];

#define return_print printf("token is %s\n", yytext)
%}
number[0-9]+
identifier[a-zA-z_][a-zA-Z_0-9]*
%%
\(									{return_print;}
\)									{return_print;}
\{									{return_print;}
\}									{return_print;}
\[									{return_print;}
\]									{return_print;}
\;									{return_print;}
if 									{return_print;}
then								{return_print;}
else								{return_print;}
for     					  {return_print;}
while 							{return_print;}
{number}            {printf("token is number %s\n", yytext);}
{identifier}        {printf("token is identifier %s\n", yytext );}
\n      {
        LIST;
        printf("%d: %s", linenum++, buf);
        buf[0] = '\0';
        }
[ \t]*  {LIST;}

.       {
        LIST;
        printf("%d:%s\n", linenum+1, buf);
        printf("bad character:'%s'\n",yytext);
        exit(-1);
        }


%%
int main()
{
yylex();
printf( "%d of lines",
linenum );
}
