{blanks}+				{echo(yytext);}
{newline}				{ NewLine(1); }
^#.*$					{echo(yytext);}
"/*"(\\.|[^\\*/]|"*"[^/])*"*/"		{echo(yytext);}
{L}({L}|{D})*":"	{ 
			  if (yyleng >= 99) oops("String too long");
			  else {
			     unsigned char c;
			     char *str;
			     str = (char *) malloc(yyleng+2);
			     c = strlen(yytext);
			     strcpy(&(str[1]),yytext);
			     str[0] = c;
			     str[c] = '\0';
			     yylval.string = &(str[1]);
			  }
			  MYRET(LABEL) 
			}
({L}({L}|{D})*\/)+{L}({L}|{D})* {
			  if (yyleng >= 99) oops("String too long");
			  else {
			     unsigned char c;
			     char *str;
			     str = (char *) malloc(yyleng+2);
			     c = strlen(yytext);
			     strcpy(&(str[1]),yytext);
			     str[0] = c;
			     yylval.string = &(str[1]);
			  }
			  MYRET(IDENTIFIER) 
			}
"<"{L}({L}|{D})*">"		{ 
			  if (yyleng >= 99) oops("String too long");
			  else {
			     unsigned char c;
			     char *str;
			     str = (char *) malloc(yyleng+2);
			     c = strlen(yytext);
			     strcpy(&(str[1]),yytext);
			     str[0] = c;
			     yylval.string = &(str[1]);
			  }
			  if (IsTypeSymbol(yytext))
			       MYRET(IDENTIFIER)  /* was TYPENAME */
			  else MYRET(IDENTIFIER) 
			}
{L}({L}|{D})*		{ 
			  if (yyleng >= 99) oops("String too long");
			  else {
			     unsigned char c;
			     char *str;
			     str = (char *) malloc(yyleng+2);
			     c = strlen(yytext);
			     strcpy(&(str[1]),yytext);
			     str[0] = c;
			     yylval.string = &(str[1]);
			  }
			  if (IsTypeSymbol(yytext))
			       MYRET(IDENTIFIER)  /* was TYPENAME */
			  else MYRET(IDENTIFIER) 
			}

0[xX]{H}+		{ yylval.intval = (int) strtol(yytext,(char**)NULL,0);
		           MYRET(INTCONSTANT) }
0[xX]{H}+[lL]		{ yylval.longval = strtoll(yytext,(char**)NULL,0);
		           MYRET(LONGCONSTANT) /*all longs need work*/}
0			{ yylval.intval = 0; MYRET(INTCONSTANT) }
0{O}*	   		{ yylval.intval = (int) strtol(yytext,(char**)NULL,0);
		           MYRET(INTCONSTANT) }
0{O}*[lL]		{ yylval.longval = strtoll(yytext,(char**)NULL,0);
		           MYRET(LONGCONSTANT) }
[+-]{D}*   		{ yylval.intval = (int) strtol(yytext,(char**)NULL,0);
		           MYRET(INTCONSTANT) }
{D}*	   		{ yylval.intval = (int) strtol(yytext,(char**)NULL,0);
		           MYRET(INTCONSTANT) }
{D}*[lL]		{ yylval.longval = strtoll(yytext,(char**)NULL,0);
		           MYRET(LONGCONSTANT) }
\'\\n\'			{ yylval.charval = '\n';   MYRET(CHARCONSTANT) }
\'\\.\'			{ yylval.charval = yytext[2];   MYRET(CHARCONSTANT) }
\'.\'			{ yylval.charval = yytext[1];   MYRET(CHARCONSTANT) }
'(\\.|[^\\'])+'		{ oops("What was that?");   MYRET(CHARCONSTANT) }

{D}+{E}[dD]?			{ yylval.doubleval = atof(yytext); 
				MYRET(DOUBLECONSTANT) }
{D}*"."{D}+({E})?[dD]?	{ yylval.doubleval = atof(yytext); 
				MYRET(DOUBLECONSTANT) }
{D}+"."({E})?[dD]?	{ yylval.doubleval = atof(yytext); 
				MYRET(DOUBLECONSTANT) }
{D}+{E}[fF]		{ yylval.floatval = (float) atof(yytext); 
				MYRET(FLOATCONSTANT) }
{D}*"."{D}+({E})?[fF]	 { yylval.floatval = (float) atof(yytext); 
				MYRET(FLOATCONSTANT) }
{D}+"."({E})?[fF]	{ yylval.floatval = (float) atof(yytext); 
				MYRET(FLOATCONSTANT) }

\"(\\.|[^\\"])*\"	{
			  if (yyleng >= 99) oops("String too long");
			  else {
			/*
			     unsigned char c;
			     int textlength;
			     char *str;
			     str = (char *) malloc(yyleng);
			     textlength = yyleng-2;
			     c = textlength;
			     strncpy(&(str[1]),&(yytext[1]),textlength);
			     str[0] = c;
			     yylval.string = &(str[1]);
			*/
			     /* Length of new string is 2 less than the length
			        of the orig. string since we strip the quotes
				out; but we add one to the length for the 
				terminating null */
			     yylval.string = (char*) malloc((yyleng-1)*sizeof(char));
			     strncpy(yylval.string,&(yytext[1]),yyleng-2);
			     yylval.string[yyleng-2]='\0';
			     #ifdef DEBUG
			     printf("yyleng %i, yylval.string %s, yylval.string's length %i",yyleng, yylval.string, strlen(yylval.string));
			     #endif   
			  }
			  MYRET(STRING_LITERAL) 
			}

"="			{ MYRET('=') }
"<"			{ MYRET('<') }
">"			{ MYRET('>') }
"["			{ MYRET('[') }
"]"			{ MYRET(']') }
"("			{ MYRET('(') }
")"			{ MYRET(')') }
","			{ MYRET(',') }
"."			{ MYRET('.') }
"{"			{ MYRET('{') }
"}"			{ MYRET('}') }
"?"			{ MYRET('?') }
":"			{ MYRET(':') }
.					{echo(yytext); 
                                         oops("Illegal character");
                                        }
%%
/* Listing routines */

void StartListing(void) {
   printf("%s","*     Java Assembler\n\n");
   linenumber = 0;
   col        = 1;
   NewLine(1);
}

void EndListing(void) {
   printf("%s","\n\n*     End of Assembly \n\n");
}

void NewLine(int bump) 
{
   linenumber += bump;
   if (bump) {
      col = 1;
      printf("\n%7d: ",linenumber);
      }
   else printf("\n%s%6d: ","*",linenumber);
}

void echo(char *text) 
{
   col += strlen(yytext);
   printf("%s",yytext);
}

void StartMessage(void) {
   int i;
   NewLine(0);
   printf("%*s",col,"^^^ ");
}

void EndMessage(void) {
   int i;
   NewLine(0);
   printf("%*s",col," ");
}

void message(char *text) 
{
   StartMessage();
   printf("%s",text);
   EndMessage();
}

void ABORT(int line, int col)
{
   fprintf(stderr,"Aborting due to error at line %d, column %d\n",
                  line, col);
   EndListing();
   exit(1);
}

void warning(char *text)
{
   message(text);
   fprintf(stderr,"%s\n",text);
}
void oops(char *text) 
{
   message(text);
   fprintf(stderr,"%s\n",text);
   ABORT(linenumber,col);
}

int LineNumber() {
  return(linenumber);
}
int ColNumber() {
  return(col);
}
