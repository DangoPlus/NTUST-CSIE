/* copyright 1996 Jason Hunt and Washington University, St. Louis */
#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "protos.h"
#include "listing.h"
#include "build.h"
extern int yydebug;
extern int UseStdOut;
extern FILE *yyin;
main(int argc, char *argv[]){
  int result;
  if (argc == 1) {
    fprintf(stderr, "Usage: javaa filename\n");
    exit(1);
  }
  yyin = fopen(argv[1], "r"); 
  UseStdOut = 0;
  /* yydebug = 1; */
  StartListing();
  result = yyparse();
  EndListing();
  return(result);
}
void yyerror(char *text) 
{
   oops(text);
}
int yywrap(void){EndListing(); return(1);}
