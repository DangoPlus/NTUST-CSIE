/* AuthorName: µÀ“ª√»
 * StudentID: 0643111281
 * Time: 2008-10-28
 */

/*Main program for the C- compiler*/

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "lexScanning.h"

/*allocate global variables*/
int lineno = 0;
FILE* source; 
FILE* listing;  


int EchoSource = TRUE;
int TraceScan = TRUE;
int Error = FALSE;

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