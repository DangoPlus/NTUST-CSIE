%{
/****************************************************************************
lexScanning.l
ParserWizard generated Lex file.

Date: 2008Äê11ÔÂ5ÈÕ
****************************************************************************/
%}

/////////////////////////////////////////////////////////////////////////////
%{
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
%}

digit        [0-9]
number       {digit}+
letter       [a-zA-Z]
identifier   {letter}+
newline      \n
whitespace   [ \t]+

%%

/////////////////////////////////////////////////////////////////////////////
"if"         {return IF;}
"else"       {return ELSE;}
"int"        {return INT;}
"return"     {return RETURN;}
"void"       {return VOID;}
"while"      {return WHILE;}
"+"          {return PLUS;} 
"-"          {return MINUS;} 
"*"          {return TIMES;} 
"/"          {return OVER;} 
"<"          {return LT;} 
">"          {return GT;} 
"<="          {return NGT;} 
">="          {return NLT;} 
"=="          {return EQU;} 
"!="          {return NEQU;} 
"="          {return ASSIGN;} 
";"          {return SEMI;} 
","          {return DOT;} 
"("          {return RBR;} 
")"          {return LBR;} 
"["          {return RSBR;} 
"]"          {return LSBR;} 
"{"          {return RLBR;} 
"}"          {return LLBR;} 
{number}     {return NUM;}
{identifier} {return ID;}
{newline}    {lineno++;}
{whitespace} {/* skip whitespace*/}
"/*"         { char c;
               int done = FALSE;
               ECHO;
               do
               { while((c=input())!='*')
                   putchar(c);
                 putchar(c);
                 while((c=input())=='*')
                   putchar(c);
                 putchar(c);
                 if(c=='/')done = TRUE;
               } while(!done);          
             }
.            {return ERROR;}

%%

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

	case PLUS:	fprintf(listing,"+\n"); break;
	case MINUS:	fprintf(listing,"-\n"); break;
    case TIMES:	fprintf(listing,"*\n"); break;
	case OVER:	fprintf(listing,"/\n"); break;
	case LT:	fprintf(listing,"<\n"); break;
	case GT:	fprintf(listing,">\n"); break;
	case NLT:	fprintf(listing,">=\n"); break;
	case NGT:	fprintf(listing,"<=\n"); break;
	case EQU:	fprintf(listing,"==\n"); break;
	case NEQU:	fprintf(listing,"!=\n"); break;
	case ASSIGN:	fprintf(listing,"=\n"); break;
	case SEMI:	fprintf(listing,";\n"); break;
	case DOT:	fprintf(listing,",\n"); break;
	case RBR:	fprintf(listing,"(\n"); break;
	case LBR:	fprintf(listing,")\n"); break;
	case RSBR:	fprintf(listing,"[\n"); break;
	case LSBR:	fprintf(listing,"]\n"); break;
	case RLBR:	fprintf(listing,"{\n"); break;
	case LLBR:	fprintf(listing,"}\n"); break;

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
  // fprintf(listing,"This is a test!\n");
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
	if(argc != 2)
	{
		fprintf(stderr,"usage: %s <filename>\n",argv[0]);
		exit(1);
	}
	strcpy(pgm,argv[1]);

	if(strchr(pgm,'.') == NULL)
		strcat(pgm,".c-");
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



