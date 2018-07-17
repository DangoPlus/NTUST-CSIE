"" {token(’(’);}
"" {token(’(’);}
"" {token(’(’);}
"" {token(’(’);}
"" {token(’(’);}

%{
#define MAX_LINE_LENG 256
#define LIST strcat(buf, yytext)
#define tokenSysmbol(t) {LIST; printf("<'%s'>\n", "t");}
#define tokenKey(t) {LIST; printf("<%S>\n", "t");}
#define tokenInteger(t, i) {LIST; printf("<%s:%d>\n", "t", i);}
#define tokenString(t, s) {LIST; printf("<%s:%s>\n", "t", s);}
<’(’>
int linenum = 0;
char buf[MAX_LINE_LENG];
%}

%%

",|" {tokenSymbol(’,’);}
":" {tokenSymbol(’:’);}
";" {tokenSymbol(’;’);}
"(" {tokenSymbol(’()’);}
")" {tokenSymbol(’)’);}
"[" {tokenSymbol(’[’);}
"]" {tokenSymbol(’]’);}
"{" {tokenSymbol('{');}
"}" {tokenSymbol(’}’);}
"+" {tokenSymbol(’+’);}
"-" {tokenSymbol(’-’);}
"*" {tokenSymbol(’*’);}
"/" {tokenSymbol(’/’);}
"^" {tokenSymbol(’^’);}
"%" {tokenSymbol(’%’);}
"<" {tokenSymbol(’<’);}
"<=" {tokenSymbol(’<=’);}
">=" {tokenSymbol(’>=’);}
">" {tokenSymbol(’>’);}
"==" {tokenSymbol(’==’);}
"!=" {tokenSymbol(’’);}
"&" {tokenSymbol(’&’);}
"|" {tokenSymbol(’|’);}
"!" {tokenSymbol(’!’);}
"!=" {tokenSymbol(’!=’);}
"=" {tokenSymbol(’=’);}
"+=" {tokenSymbol(’+=’);}
"-=" {tokenSymbol(’-=’);}
"*=" {tokenSymbol(’*=’);}
"/=" {tokenSymbol(’/=’);}


bool break case const continue default else false for func go if import int nil print println
real return string struct switch true type var void while







\n 	{
			LIST;
			printf("%d: %s", linenum, buf);
			linenum++;
			buf[0] = ’\0’;
		}

[ \t]* {LIST;}
 {
		LIST;
		printf("%d:%s\n", linenum, buf);
		printf("bad character:’%s’\n", yytext);
		exit(-1);
	}
% %
