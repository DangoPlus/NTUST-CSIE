%{
#define MAX_LINE_LENG 256
#define LIST  strcat(buf,yytext)
#define token(t) {LIST;printf("<%s>\n","t");}
#define tokenInteger(t) {LIST;printf("<INTEGER:%s>\n","t");return INTEGER;}
#define tokenReal(t) {LIST;printf("<REALVAL:%s>\n","t");return REAL;}
#define tokenString(t,s) {LIST;printf("<%s:%s>\n","t",s);return t;}
#include <stdio.h>
#include <ctype.h>
#include "symbol.h"
#include "y.tab.h"
}

char *strupr(char *str){
    char *orign=str;
    for (; *str != '\0'; str++)
        *str = toupper(*str);
    return orign;
}

new_table id_table;
int linenum = 1;
char buf[MAX_LINE_LENG];
char str[MAX_LINE_LENG];
%}

creat;
%x COMMENT
%x COMMENT1
%x STRING
digit ([0-9])
integer ({digit}+)
letter ([A-Za-z])
identifier({letter}({letter}|{digit})*)
boolean (true|false)
real ([+|-]?{digit}*\.{digit}+|{digit}+\.)

%%


","  {token("','");return COMMA;}
":"  {token("':'");return COLON;}

";"  {token("';'");return SEMICOLON;}

"("  {token("'('");return LP;}
")"  {token("')'");return RP;}

"["  {token("'['");return LSB;}
"]"  {token("']'");return RSB;}

"{"  {token("'{'");return LCB;}
"}"  {token("'}'");return RCB;}

"+" {token("'+'");return PLUS;}
"-" {token("'-'");return MINUS;}
"*" {token("'*'");return MULTIPLY;}
"/" {token("'/'");return DIVIDE;}

"^"  {token("'^'");return CARET;}

"%"  {token("'%'");return MODULUS;}

"<"  {token("'<'");return LT;}
"<="  {token("'<='");return LE;}
">="  {token("'>='");return GE;}
">"  {token("'>'");return GT;}
"=="  {token("'=='");return EQ;}
"!="  {token("'!='");return NE; }

"&"  {token("'&'");return AND;}
"|"  {token("'|'");return OR;}
"!"  {token("'!'");return NOR;}

"="  {token("'='");return EQUALS;}

"+="  {token("'+='");return PLUSEQUALS;}
"-="  {token("'-='");return MINUSEQUALS;}
"*="  {token("'*='");return MULTIPLYEQUALS;}
"/="  {token("'/='");return DIVIDEEQUALS;}

bool     |
break    |
case     |
const    |
continue |
default  |
else     |
for      |
func     |
go       |
if       |
import   |
int      |
read     |
nil      |
print    |
println  |
real     |
return   |
string   |
struct   |
switch   |
type     |
var      |
void     |
while    {token(strupr(yytext));}

{boolean} {tokenString("BOOLEAN",yytext);}

{identifier} {
              yylval.m_sId=yytext;
              if(id_table.lookfor(yytext)==0) id_table.insert(yytext);
              tokenString("IDENTIFIER",yytext);

{integer} {
          yylval.m_nInt=atoi(yytext);
          tokenInteger(yylval.m_nInt);
          }

{real}    {
          yylval.m_fREAL=atof(yytext);
          tokenReal(yylval.m_fREAL);
          }
\" {
   LIST;
   BEGIN STRING;
   }


"//" {
     LIST;
     BEGIN COMMENT;
}

"/*" {
     LIST;
     BEGIN COMMENT1;
}


\n   {
     LIST;
     printf("%d: %s", linenum, buf);
     linenum++;
     buf[0] = '\0';
     }

[ \t]* {LIST;}




.      {
       LIST;
       printf("%d:%s\n", linenum, buf);
       printf("bad character:'%s'\n",yytext);
       exit(-1);
       }

<STRING>'\"' {
           char c=input();
           if(c=='\"')
               {
                LIST;
                strcat(buf,"\"");
                strcat(str,yytext);
               }
           else
            {
             tokenString("string",str);
             unput(c);
             yylval.m_str = str;
             str[0]='\0';
             BEGIN INITIAL;
            }
          }

<STRING>.  {
           LIST;
           strcat(str,yytext);
           }

<COMMENT>\n {
              LIST;
              printf("%d: %s", linenum, buf);
              linenum++;
              buf[0]='\0';
              BEGIN INITIAL;
             }

<COMMENT>.    {
               LIST;
              }

<COMMENT1>"*/" {
             LIST;
             BEGIN INITIAL;
             }

<COMMENT1>\n {
             LIST;
             printf("%d: %s", linenum, buf);
             buf[0]='\0';
             linenum++;
             }

<COMMENT1>. {
            LIST;
            }


%%
int yywrap(void)
{
    puts("\nsymbol table:\n");
    id_table.printTable();
    puts("-----the file is end");
    return 1;
}
