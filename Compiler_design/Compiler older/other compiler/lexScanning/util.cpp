/* AuthorName: µÀ“ª√»
 * StudentID: 0643111281
 * Time: 2008-10-28
 */

/*Utility function implementation for the C- compiler*/

#include "globals.h"
#include "util.h"

/*procedure printToken prints a token 
 *and its lexeme to the listing file
 */
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

/*function copyString allocates and 
 *makes a new copy of an existing string
 */
char * copyString(char * s)
{
	int n;
	char * t;
	if(s==NULL) return NULL;
	n = strlen(s)+1;
	t =(char *) malloc(n);
	if(t==NULL)
		fprintf(listing,"Out of memory error at line %d\n",lineno);
	else strcpy(t,s);
	return t;
}


