/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 1 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* lexScanning.c
* C source file generated from lexScanning.l.
* 
* Date: 11/20/08
* Time: 09:49:06
* 
* ALex Version: 2.07
****************************************************************************/

#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#line 1 ".\\lexScanning.l"

/****************************************************************************
lexScanning.l
ParserWizard generated Lex file.

Date: 2008Äê11ÔÂ5ÈÕ
****************************************************************************/

#line 11 ".\\lexScanning.l"

#include "globals.h"
#include "scan.h"
/*lexeme of indentifier or reserved word*/
char tokenString[MAXTOKENLEN+1];
int lineno = 0;
FILE* source; 
FILE* listing;  
int EchoSource = TRUE;
int TraceScan = TRUE;
int Error = FALSE;

#line 62 "lexScanning.c"
/* repeated because of possible precompiled header */
#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#include ".\lexScanning.h"

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/* yytext */
static char YYNEAR yysatext[(YYTEXT_SIZE) + 1];		/* extra char for \0 */
char YYFAR *YYNEAR YYDCDECL yystext = yysatext;
char YYFAR *YYNEAR YYDCDECL yytext = yysatext;
int YYNEAR YYDCDECL yystext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_max = (YYTEXT_MAX);

/* yystatebuf */
#if (YYTEXT_SIZE) != 0
static int YYNEAR yysastatebuf[(YYTEXT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysstatebuf = yysastatebuf;
int YYFAR *YYNEAR YYDCDECL yystatebuf = yysastatebuf;
#else
int YYFAR *YYNEAR YYDCDECL yysstatebuf = NULL;
int YYFAR *YYNEAR YYDCDECL yystatebuf = NULL;
#endif

/* yyunputbuf */
#if (YYUNPUT_SIZE) != 0
static int YYNEAR yysaunputbuf[(YYUNPUT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = yysaunputbuf;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = yysaunputbuf;
#else
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = NULL;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = NULL;
#endif
int YYNEAR YYDCDECL yysunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_max = (YYUNPUT_MAX);

/* backwards compatability with lex */
#ifdef input
#ifdef YYPROTOTYPE
int YYCDECL yyinput(void)
#else
int YYCDECL yyinput()
#endif
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
#ifdef YYPROTOTYPE
void YYCDECL yyoutput(int ch)
#else
void YYCDECL yyoutput(ch)
int ch;
#endif
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
#ifdef YYPROTOTYPE
void YYCDECL yyunput(int ch)
#else
void YYCDECL yyunput(ch)
int ch;
#endif
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		/* <warning: unreachable code> off */
#endif
#endif

#ifdef YYPROTOTYPE
int YYCDECL yylexeraction(int action)
#else
int YYCDECL yylexeraction(action)
int action;
#endif
{
	yyreturnflg = YYTRUE;
	switch (action) {
	case 1:
		{
#line 34 ".\\lexScanning.l"
return IF;
#line 183 "lexScanning.c"
		}
		break;
	case 2:
		{
#line 35 ".\\lexScanning.l"
return ELSE;
#line 190 "lexScanning.c"
		}
		break;
	case 3:
		{
#line 36 ".\\lexScanning.l"
return INT;
#line 197 "lexScanning.c"
		}
		break;
	case 4:
		{
#line 37 ".\\lexScanning.l"
return RETURN;
#line 204 "lexScanning.c"
		}
		break;
	case 5:
		{
#line 38 ".\\lexScanning.l"
return VOID;
#line 211 "lexScanning.c"
		}
		break;
	case 6:
		{
#line 39 ".\\lexScanning.l"
return WHILE;
#line 218 "lexScanning.c"
		}
		break;
	case 7:
		{
#line 40 ".\\lexScanning.l"
return PLUS;
#line 225 "lexScanning.c"
		}
		break;
	case 8:
		{
#line 41 ".\\lexScanning.l"
return MINUS;
#line 232 "lexScanning.c"
		}
		break;
	case 9:
		{
#line 42 ".\\lexScanning.l"
return TIMES;
#line 239 "lexScanning.c"
		}
		break;
	case 10:
		{
#line 43 ".\\lexScanning.l"
return OVER;
#line 246 "lexScanning.c"
		}
		break;
	case 11:
		{
#line 44 ".\\lexScanning.l"
return LT;
#line 253 "lexScanning.c"
		}
		break;
	case 12:
		{
#line 45 ".\\lexScanning.l"
return GT;
#line 260 "lexScanning.c"
		}
		break;
	case 13:
		{
#line 46 ".\\lexScanning.l"
return NGT;
#line 267 "lexScanning.c"
		}
		break;
	case 14:
		{
#line 47 ".\\lexScanning.l"
return NLT;
#line 274 "lexScanning.c"
		}
		break;
	case 15:
		{
#line 48 ".\\lexScanning.l"
return EQU;
#line 281 "lexScanning.c"
		}
		break;
	case 16:
		{
#line 49 ".\\lexScanning.l"
return NEQU;
#line 288 "lexScanning.c"
		}
		break;
	case 17:
		{
#line 50 ".\\lexScanning.l"
return ASSIGN;
#line 295 "lexScanning.c"
		}
		break;
	case 18:
		{
#line 51 ".\\lexScanning.l"
return SEMI;
#line 302 "lexScanning.c"
		}
		break;
	case 19:
		{
#line 52 ".\\lexScanning.l"
return DOT;
#line 309 "lexScanning.c"
		}
		break;
	case 20:
		{
#line 53 ".\\lexScanning.l"
return RBR;
#line 316 "lexScanning.c"
		}
		break;
	case 21:
		{
#line 54 ".\\lexScanning.l"
return LBR;
#line 323 "lexScanning.c"
		}
		break;
	case 22:
		{
#line 55 ".\\lexScanning.l"
return RSBR;
#line 330 "lexScanning.c"
		}
		break;
	case 23:
		{
#line 56 ".\\lexScanning.l"
return LSBR;
#line 337 "lexScanning.c"
		}
		break;
	case 24:
		{
#line 57 ".\\lexScanning.l"
return RLBR;
#line 344 "lexScanning.c"
		}
		break;
	case 25:
		{
#line 58 ".\\lexScanning.l"
return LLBR;
#line 351 "lexScanning.c"
		}
		break;
	case 26:
		{
#line 59 ".\\lexScanning.l"
return NUM;
#line 358 "lexScanning.c"
		}
		break;
	case 27:
		{
#line 60 ".\\lexScanning.l"
return ID;
#line 365 "lexScanning.c"
		}
		break;
	case 28:
		{
#line 61 ".\\lexScanning.l"
lineno++;
#line 372 "lexScanning.c"
		}
		break;
	case 29:
		{
#line 62 ".\\lexScanning.l"
/* skip whitespace*/
#line 379 "lexScanning.c"
		}
		break;
	case 30:
		{
#line 63 ".\\lexScanning.l"
 char c;
               int done = FALSE;
               ECHO;
               do
               { while((c=input())!='*')
                   putchar(c);
                 putchar(c);
                 while((c=input())=='*')
                   putchar(c);
                 putchar(c);
                 if(c=='/'){
					 done = TRUE;
				     putchar('\n');
				 }
               } while(!done);  
             
#line 398 "lexScanning.c"
		}
		break;
	case 31:
		{
#line 76 ".\\lexScanning.l"
return ERROR;
#line 405 "lexScanning.c"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = YYFALSE;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		/* <warning: unreachable code> to the old state */
#endif
#endif
YYCONST yymatch_t YYNEARFAR YYBASED_CODE YYDCDECL yymatch[] = {
	0
};

int YYNEAR YYDCDECL yytransitionmax = 176;
YYCONST yytransition_t YYNEARFAR YYBASED_CODE YYDCDECL yytransition[] = {
	{ 0, 0 },
	{ 4, 1 },
	{ 5, 1 },
	{ 4, 4 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 35, 23 },
	{ 31, 16 },
	{ 32, 17 },
	{ 33, 18 },
	{ 34, 22 },
	{ 30, 13 },
	{ 37, 24 },
	{ 38, 25 },
	{ 36, 23 },
	{ 39, 26 },
	{ 4, 1 },
	{ 6, 1 },
	{ 4, 4 },
	{ 40, 34 },
	{ 41, 36 },
	{ 42, 37 },
	{ 43, 38 },
	{ 44, 39 },
	{ 7, 1 },
	{ 8, 1 },
	{ 9, 1 },
	{ 10, 1 },
	{ 11, 1 },
	{ 12, 1 },
	{ 45, 40 },
	{ 13, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 46, 42 },
	{ 15, 1 },
	{ 16, 1 },
	{ 17, 1 },
	{ 18, 1 },
	{ 47, 43 },
	{ 48, 44 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 20, 1 },
	{ 49, 46 },
	{ 21, 1 },
	{ 50, 48 },
	{ 51, 49 },
	{ 29, 6 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 22, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 23, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 24, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 25, 1 },
	{ 26, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 19, 1 },
	{ 27, 1 },
	{ 0, 0 },
	{ 28, 1 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 },
	{ 19, 51 }
};

YYCONST yystate_t YYNEARFAR YYBASED_CODE YYDCDECL yystate[] = {
	{ 0, 0, 0 },
	{ -3, -8, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 31 },
	{ 0, -6, 29 },
	{ 0, 0, 28 },
	{ 0, 27, 31 },
	{ 0, 0, 20 },
	{ 0, 0, 21 },
	{ 0, 0, 9 },
	{ 0, 0, 7 },
	{ 0, 0, 19 },
	{ 0, 0, 8 },
	{ 0, -23, 10 },
	{ 0, -44, 26 },
	{ 0, 0, 18 },
	{ 0, -46, 11 },
	{ 0, -45, 17 },
	{ 0, -44, 12 },
	{ 51, 0, 27 },
	{ 0, 0, 22 },
	{ 0, 0, 23 },
	{ 51, -90, 27 },
	{ 51, -88, 27 },
	{ 51, -81, 27 },
	{ 51, -90, 27 },
	{ 51, -81, 27 },
	{ 0, 0, 24 },
	{ 0, 0, 25 },
	{ 0, 0, 16 },
	{ 0, 0, 30 },
	{ 0, 0, 13 },
	{ 0, 0, 15 },
	{ 0, 0, 14 },
	{ 51, -88, 27 },
	{ 51, 0, 1 },
	{ 51, -88, 27 },
	{ 51, -87, 27 },
	{ 51, -75, 27 },
	{ 51, -74, 27 },
	{ 51, -63, 27 },
	{ 51, 0, 3 },
	{ 51, -67, 27 },
	{ 51, -45, 27 },
	{ 51, -52, 27 },
	{ 51, 0, 2 },
	{ 51, -30, 27 },
	{ 51, 0, 5 },
	{ 51, -15, 27 },
	{ 51, -23, 27 },
	{ 51, 0, 6 },
	{ 0, 53, 4 }
};

YYCONST yybackup_t YYNEARFAR YYBASED_CODE YYDCDECL yybackup[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

#line 78 ".\\lexScanning.l"


/////////////////////////////////////////////////////////////////////////////
void printToken( TokenType token, const char* tokenString)
{
	switch (token)
	{
	case ENDFILE:
		fprintf(listing,"EOF\n");
		break;
    case ERROR:
		fprintf(listing,"ERROR, val= %s\n",tokenString);
		break;

	case IF:
		fprintf(listing,"Reserved word, name= %s\n",tokenString);
		break;
	case ELSE:
		fprintf(listing,"Reserved word, name= %s\n",tokenString);
		break;
	case INT:
		fprintf(listing,"Reserved word, name= %s\n",tokenString);
		break;
	case RETURN:
		fprintf(listing,"Reserved word, name= %s\n",tokenString);
		break;
	case VOID:
		fprintf(listing,"Reserved word, name= %s\n",tokenString);
		break;
	case WHILE:
		fprintf(listing,"Reserved word, name= %s\n",tokenString);
		break;

	case ID:
		fprintf(listing,"ID, name= %s\n",tokenString);
		break;
	case NUM:
		fprintf(listing,"NUM, val= %s\n",tokenString);
		break;

	case PLUS:	fprintf(listing,"Special symbol: +\n"); break;
	case MINUS:	fprintf(listing,"Special symbol: -\n"); break;
    case TIMES:	fprintf(listing,"Special symbol: *\n"); break;
	case OVER:	fprintf(listing,"Special symbol: /\n"); break;
	case LT:	fprintf(listing,"Special symbol: <\n"); break;
	case GT:	fprintf(listing,"Special symbol: >\n"); break;
	case NLT:	fprintf(listing,"Special symbol: >=\n"); break;
	case NGT:	fprintf(listing,"Special symbol: <=\n"); break;
	case EQU:	fprintf(listing,"Special symbol: ==\n"); break;
	case NEQU:	fprintf(listing,"Special symbol: !=\n"); break;
	case ASSIGN:	fprintf(listing,"Special symbol: =\n"); break;
	case SEMI:	fprintf(listing,"Special symbol: ;\n"); break;
	case DOT:	fprintf(listing,"Special symbol: ,\n"); break;
	case RBR:	fprintf(listing,"Special symbol: (\n"); break;
	case LBR:	fprintf(listing,"Special symbol: )\n"); break;
	case RSBR:	fprintf(listing,"Special symbol: [\n"); break;
	case LSBR:	fprintf(listing,"Special symbol: ]\n"); break;
	case RLBR:	fprintf(listing,"Special symbol: {\n"); break;
	case LLBR:	fprintf(listing,"Special symbol: }\n"); break;

	default: /*should never happen*/
		fprintf(listing,"Unknown token: %d\n",token);
	}
}

TokenType getToken(void)
{  
   static int firstTime = TRUE;
   TokenType currentToken;
   if(firstTime)
   { firstTime=FALSE;
     lineno++;
     yyin=source;
     yyout=listing;
   }
   currentToken = yylex();
   strncpy(tokenString,yytext,MAXTOKENLEN);
   if(TraceScan){
     fprintf(listing,"\t%d: ", lineno);
     printToken(currentToken,tokenString);
   }
   return currentToken;
}

main(int argc, char * argv[])
{

	char pgm[20];  /*source code file name*/
	
	strcpy(pgm,"D:\\lexScanning\\Debug\\test.c-");
	
	source = fopen(pgm,"r");
	if(source == NULL)
	{
		fprintf(stderr,"File %s not found\n",pgm);
		exit(1);
	}
	listing = stdout; /*send listing to screen*/
	fprintf(listing,"\nC- COMPILATION: %s\n",pgm);

	while(getToken()!=ENDFILE);

	return 0;
}




