%{
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "y.tab.h"
#define MAX_LINE_LENG 256
// #define LIST     		strcat(buf,yytext)
// #define token(t)		{ printf("<'%s'>\n",t);return(caps(t));}
// #define caps(t) 		{for(int i = 0; i < strlen(t); i++){t[i] = toupper(t[i]);};printf("<%s>\n", t); }
// #define keyword(t) 		{ caps(t);return(caps(t));}
// #define tokenInteger	{ printf("<%s:%s>\n","integer",yytext);}
// #define tokenReal 		{ printf("<%s:%s>\n","real", yytext);}
// #define tokenBoolean 	{ printf("<%s:%s>\n","boolean",yytext);}
// #define tokenId			{insert(yytext); printf("<%s:%s>\n","id",yytext);}
// #define tokenString(t,s){ printf("<%s:%s>\n","string",s);return(s);}
#define simOp {strcpy(yylval.val, yytext);}

int linecount = 1;
char buf[MAX_LINE_LENG];
char str[512];
char tempStr[1024];
// symbol table 
// create we need hashtable to cteate the contain for symbol
// int symbolnum = 0;
// void insert(char* tokenIdVa){
	// int symbolIndexStr = 66;
	// char *strss;
		// printf("<'%s'>\n",tokenIdVa);
	// printf("<'%d'>\n\n\n",symbolIndexStr);
	// printf("<'%s'>\n",strss);
	// printf("<'%d'>\n\n\n",symbolIndexStr);


	// // sprintf(strChar, "%d", symbolnum);
	// sprintf(strss, "%d", symbolIndexStr);
	// hash_table_insert(tokenIdVa,strChar);
	// const char *key1 = "aaammd";
	// printf("<'%s'>\n",tokenIdVa);
	// symbolnum ++;
// }
	// void lookup(const char* skey){
	// 	HashNode* reason_lookup = hash_table_lookup(skey);
	// 	printf("%s  %d\n",  reason_lookup->sKey,reason_lookup->nValue);
	// }
//insert
//lookup
//dump
//symbol table
%}

%x	String
%x 	Comm
%x  Coms
digital      [0-9]
integer      {digital}+
real         -?(([0-9]+)([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?)
letter       [a-zA-Z]
identifier   {letter}({letter}|{digital})*
whitespace   [ \t]+

%%
"("     {return('(');}
")"     {return(')');}
","     {return(',');}
":"     {return(':');}
";"     {return(';');}
"["     {return('[');}
"]"     {return(']');}
"{"     {return('{');}
"}"     {return('}');}
"+"     {return('+');}
"-"     {return('-');}
"*"     {return('*');}
"/"     {return('/');}
"%"     {return('%');}
"<"     {return('<');}
"->"    {return(FU_OP);}
"<="    {return(LE_OP);}
">="    {return(GE_OP);}
">"     {return('>');}
"=="    {return(EQ_OP);}
"!="    {return(NE_OP);}
"&&"    {return(AND);}
"||"    {return(OR);}
"!"     {return('!');}
"="     {return('=');}
"+="    {return(ADD_ASSIGN);}
"-="    {return(SUB_ASSIGN);}
"*="    {return(MUL_ASSIGN);}
"/="    {return(DIV_ASSIGN);}
"true"        {simOp;return(TRUE);}
"false"       {simOp;return(FALSE);}
"bool"   	    {simOp;return(BOOL);}
"break"   	  {simOp;return(BREAK);}
"char"    	  {simOp;return(CHAR);}
"continue"    {simOp;return(CONTINUE);}
"do"   		    {simOp;return(DO);}
"else"    	  {simOp;return(ELSE);}
"enum"    	  {simOp;return(ENUM);}
"extern"      {simOp;return(BOOL);}
"float"    	  {simOp;return(FLOAT);}
"for"    	    {simOp;return(FOR);}
"fn"   		    {simOp;return(FUNC);}
"if"   		    {simOp;return(IF);}
"in"   		    {simOp;return(IN);}
"int"   	    {simOp;return(INT);}
"let"    	    {simOp;return(LET);}
"loop"    	  {simOp;return(LOOP);}
"match"    	  {simOp;return(MATCH);}
"mut"         {simOp;return(MUT);}
"print"       {simOp;return(PRINT);}
"println"     {simOp;return(PRINTLN);}
"pub"    	    {simOp;return(PUB);}
"return"      {simOp;return(RETURN);}
"self"    	  {simOp;return(SELF);}
"static"      {simOp;return(STATIC);}
"str"    	    {simOp;return(STR);}
"struct"      {simOp;return(STRUCT);}
"use"    	    {simOp;return(USE);}
"where"    	  {simOp;return(WHERE);}
"while"    	  {simOp;return(WHILE);}

{identifier}  		{simOp;return(IDENTIFIER);}
{integer}     		{yylval.int_type = atoi(yytext);return (INTEGER);}
{real}        		{sscanf(yytext, "%f", &yylval.float_type);return(FLOATTYPE);}
"//"          		{
                	BEGIN Coms;
            		}
<Coms>\n 	{
                      // printf("%d: %s", linecount++, buf);
                      buf[0] = '\0';
                      BEGIN 0;
                    }
<Coms>.    {
                    }
"/*"               {
                      BEGIN Comm;
                    }
<Comm>\n {
                      // printf("%d: %s", linecount++, buf);
                      buf[0] = '\0';
                     	}
<Comm>"*/"	{
                      		BEGIN 0;
                    	}
<Comm>.     {
                    	}
\"{1}       {     
                          BEGIN(String);
                      }
<String>([^"]*)+ {
                          strcat(tempStr, yytext);
                  }
<String>"\"\""    {
  strcat(tempStr, "\"\"");
                  }
<String>\"{1}     {
                          strcpy(yylval.val, tempStr);
                          tempStr[0] = '\0';BEGIN(INITIAL);
                          return (STR);
                  }
\n 			  		{
        			
        			// printf("%d: %s", linecount++, buf);
        			buf[0] = '\0';
        			}
[ \t]*  			{}

%%
// int main(){
// 	// hash_table_init();
// 	yylex();

// 	// hash_table_print();
//   // add the aim we need to finds
// 	// lookup("add");
// }

// 	int yywrap(){
// 		return 1;
// 	}
// printf("%d:%s\n", linecount, buf);
// printf("bad character:’%s’\n",yytext);
// exit(-1);
