%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
#include "symbol.h"

#define LIST    				strcat(buf, yytext)
#define token(t)    			{ 								\
									LIST; 						\
									printf("<%s>\n", yytext); 	\
									return t; 					\
								}

#define tokenType(type, val) 	{ 										\
									LIST; 								\
									printf("<%s: %s>\n", #type, val); 	\
									return type; 						\
								}

#define tokenString(val) 		{ 														\
									LIST; 												\
									printf("<%s: %s>\n", "STRING", stringTemp);			\
									stringTemp[0] = '\0';	 							\
									BEGIN(INITIAL);										\
									return STRING;										\
								}

#define MAX_LINE_LENG 1024

extern "C"{
	int yywrap();
	int yylex();
}

// For print lines.
int linenum = 1;
char buf[MAX_LINE_LENG];

// For state of comment and string.
int mutiCommentTimes = 0;
char stringTemp[MAX_LINE_LENG];

%}

alphabet		[a-zA-z]
alphabets		[a-zA-z]+

dig				[0-9]
digs			[0-9]+

integer			{digs}
plain_real		[+-]?{digs}"."{digs}
expreal			[+-]?{digs}"."{digs}[Ee][+-]?{digs}
real			{plain_real}|{expreal}|[+-]?{digs}[Ee][+-]?{digs}

ID				{alphabet}({alphabet}|{dig})*

%x IN_STRING
%x IN_COMMENT
%x IN_LINECOMMENT

%%

{integer}       {
					yylval.Token.tokenType = T_INT;
					yylval.Token.intVal = atoi(yytext);
					tokenType(INTEGER, yytext);
				}

{real}          {
					yylval.Token.tokenType = T_FLOAT;
					yylval.Token.floatVal = atof(yytext);
					tokenType(REAL, yytext);
				}

\"              {
					LIST;
					BEGIN(IN_STRING);
				}

<IN_STRING>\"   {
					yylval.Token.tokenType = T_STRING;
					yylval.Token.stringVal = strdup(yytext);
					tokenString(stringTemp);
				}

<IN_STRING>\n   {
					LIST;
					printf("%d: %s", linenum++, buf);
					buf[0] = '\0';
					strcat(stringTemp, "\n");
				}

<IN_STRING>\"\" {
					LIST;
					strcat(stringTemp, "\"");
				}

<IN_STRING>.    {
					LIST;
					strcat(stringTemp, yytext);
				}

","		{ token(','); }
":"		{ token(':'); }
";"		{ token(';'); }
"("		{ token('('); }
")"		{ token(')'); }
"["		{ token('['); }
"]"		{ token(']'); }
"{"		{ token('{'); }
"}"		{ token('}'); }

"+"		{ token('+'); }
"-"		{ token('-'); }
"*"		{ token('*'); }
"/"		{ token('/'); }
"++"    { token(OP_INCREMENT); }
"--"    { token(OP_DECREMENT); }

"%"		{ token('%'); }
"<"		{ token('<'); }
">"		{ token('>'); }
"<="    { token(OP_LESS_EQUAL); }
">="    { token(OP_GREAT_EQUAL); }
"=="    { token(OP_EQUAL); }
"!="    { token(OP_NOT_EQUAL); }
"&&"    { token(OP_AND); }
"||"    { token(OP_OR); }

"!"		{ token('!'); }
"="		{ token('='); }
"+="    { token(OP_ADDITION_ASSIGNMENT); }
"-="    { token(OP_SUBTRACTION_ASSIGNMENT); }
"*="    { token(OP_MULTIPLICATION_ASSIGNMENT); }
"/="    { token(OP_DIVISION_ASSIGNMENT); }

"true"			{ yylval.Token.tokenType = T_BOOL; yylval.Token.boolVal = true; token(KW_TRUE); }
"false"			{ yylval.Token.tokenType = T_BOOL; yylval.Token.boolVal = false; token(KW_FALSE); }

"bool"			{ token(KW_BOOL); }
"break"			{ token(KW_BREAK); }
"char"			{ token(KW_CHAR); }
"continue"		{ token(KW_CONTINUE); }
"do"			{ token(KW_DO); }
"else"			{ token(KW_ELSE); }
"enum"			{ token(KW_ENUM); }
"extern"		{ token(KW_EXTERN); }
"float"			{ token(KW_FLOAT); }
"for"			{ token(KW_FOR); }
"fn"			{ token(KW_FN); }
"if"			{ token(KW_IF); }
"in"			{ token(KW_IN); }
"int"			{ token(KW_INT); }
"let"			{ token(KW_LET); }
"loop"			{ token(KW_LOOP); }
"match"			{ token(KW_MATCH); }
"mut"			{ token(KW_MUT); }
"print"			{ token(KW_PRINT); }
"println"		{ token(KW_PRINTLN); }
"pub"			{ token(KW_PUB); }
"return"		{ token(KW_RETURN); }
"self"			{ token(KW_SELF); }
"static"		{ token(KW_STATIC); }
"str"			{ token(KW_STR); }
"struct"		{ token(KW_STRUCT); }
"use"			{ token(KW_USE); }
"where"			{ token(KW_WHERE); }
"while"			{ token(KW_WHILE); }

{ID}			{
					yylval.Token.stringVal = strdup(yytext);
					tokenType(ID, yytext);
				}

"/*"	{
			LIST;
			mutiCommentTimes++;
			BEGIN(IN_COMMENT);
		}

<IN_COMMENT>"*/"		{
							LIST;
							mutiCommentTimes--;
							if (mutiCommentTimes == 0)
								BEGIN(INITIAL);
						}

<IN_COMMENT>"/*"		{
							LIST;
							mutiCommentTimes++;
						}

<IN_COMMENT>\n			{
							LIST;
							printf("%d: %s", linenum++, buf);
							buf[0] = '\0';
						}

<IN_COMMENT>.			{ LIST; }

"//"	{
			LIST;
			BEGIN(IN_LINECOMMENT);
		}

<IN_LINECOMMENT>\n		{
							LIST;
							printf("%d: %s", linenum++, buf);
							buf[0] = '\0';
							BEGIN(INITIAL);
						}

<IN_LINECOMMENT>.		{ LIST; }

[ \t]*		{ LIST; }

\n|\r\n		{
				LIST;
				printf("%d: %s", linenum++, buf);
				buf[0] = '\0';
			}

.			{
				LIST;
				printf("%d:%s\n", linenum, buf);
				printf("bad character:'%s'\n", yytext);
				exit(-1);
			}

%%

// called by lexical analyzer if end of the input file.
int yywrap()
{
	printf("%d:%s\n", linenum, buf);
	if(stringTemp[0] != '\0')
	{
		printf("unterminated double quote string error\n");
		exit(0);
	}
	return 1;
}
