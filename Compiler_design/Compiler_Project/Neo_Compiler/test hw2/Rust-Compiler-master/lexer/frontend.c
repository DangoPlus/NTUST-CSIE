#include "lexer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*This file finds the matching token and print out the matching result*/

void removeChar(char *str, char garbage) {
		char *src, *dst;
		for (src = dst = str; *src != '\0'; src++) {
			*dst = *src;
			if (*dst != garbage) dst++;
		}
		*dst = '\0';
}

static void token_print(int token) {
	char* yystr;
	char* wordsrc;
	char* worddst;
	char* buffer;
	int i = 0, j = 0;

	switch (token) {
		case LITCHAR: 
		buffer = yytext;
        	wordsrc = malloc(strlen(buffer)+1);
        	worddst = malloc(strlen(buffer)+1);
       		
       		strcpy(wordsrc, buffer);

       		if (wordsrc[0] != 'b' && wordsrc[1] != '\'')
			{
				printf("error\n");
			}

		    wordsrc++;
            wordsrc++;
            wordsrc[strlen(wordsrc)-1] = 0;
           

          	if (strlen(wordsrc) > 2) 
          	{
          		printf("LITCHAR(%s) is too long \n", wordsrc);
          		exit(1);
          	}

          	for (i = 0; i < strlen(wordsrc); i++)
			{
				//check if within range
				if(((int)wordsrc[i] > 31 && (int)wordsrc[i] < 127))
				{
					//when encounter "\"
					if ((int)wordsrc[i] == 92)
					{
						//ignore "'" and move to next character
						if ((int)wordsrc[i+1] == 39)
						{
							worddst[j] = wordsrc[i+1];
							j++;
							i++;
						}
						//ignore "\" and move to next character
						else if ((int)wordsrc[i+1] == 92)
						{
							worddst[j] = wordsrc[i+1];
							j++;
							i++;
						}
						//ignore space
						else if ((int)wordsrc[i+1] == 32)
						{
						}
						else
						{
							printf("%c is NOT an acceptable escape character\n", wordsrc[i]);
							exit(1);
						}
					}
					else if (((int)wordsrc[i] == 34) || ((int)wordsrc[i] == 39) || ((int)wordsrc[i] == 39))
					{
						printf("%c needs to be escaped \n", wordsrc[i]);
						exit(1);
					}
					else
					{
						worddst[j] = wordsrc[i];
						j++;
					}
				}
				else
				{
					printf("%c is NOT in the range \n", wordsrc[i]);
					exit(1);
				}
			}
            printf("LITCHAR(%c)\n", worddst[0]);
            break;
        case LITSTR:
        	
			buffer = yytext;
        	wordsrc = malloc(strlen(buffer)+1);
        	worddst = malloc(strlen(buffer)+1);
       		
       		strcpy(wordsrc, buffer);

       		if (wordsrc[0] != 'b' && wordsrc[1] != '\'')
			{
				printf("error\n");
			}

		    wordsrc++;
            wordsrc++;
            wordsrc[strlen(wordsrc)-1] = 0;
         

			for (i = 0; i < strlen(wordsrc); i++)
			{
				//check if within range
				if(((int)wordsrc[i] > 31 && (int)wordsrc[i] < 127))
				{
					//when encounter "\"
					if ((int)wordsrc[i] == 92)
					{
						//ignore """ and move on
						if ((int)wordsrc[i+1] == 34)
						{
							worddst[j] = wordsrc[i+1];
							j++;
							i++;
						}
						//ignore "\" and move on
						else if ((int)wordsrc[i+1] == 92)
						{
							worddst[j] = wordsrc[i+1];
							j++;
							i++;
						}
						//ignore space
						else if ((int)wordsrc[i+1] == 32)
						{
						}
						else
						{
							printf("%c is NOT an acceptable escape character\n", wordsrc[i]);
							exit(1);
						}
					}
					else if (((int)wordsrc[i] == 34) || ((int)wordsrc[i] == 39) || ((int)wordsrc[i] == 39))
					{
						printf("%c needs to be escaped \n", wordsrc[i]);
						exit(1);
					}
					else
					{
						worddst[j] = wordsrc[i];
						j++;
					}
				}
				else
				{
					printf("%c is NOT in the range \n", wordsrc[i]);
					exit(1);
				}
			}
            printf("LITSTR(%s)\n", worddst);
            break;
		case LITDEC: 
			yystr = malloc(strlen(yytext)+1);
			strcpy(yystr, yytext);
			removeChar(yystr, '_');
			printf("LITDEC(%s)\n", yystr);
			free(yystr);
			break;
		case DECERROR:
			printf("There is an error in (%s): contains illegal character(s)\n", yytext);
			break;
		case abstractK:
			printf("abstract\n");
			break;
		case ALIGNOF:
			printf("alignof\n");
			break;
		case asK:
			printf("as\n");
			break;
		case beK:
			printf("be\n");
			break;	
		case box:
			printf("box\n");
			break;		
		case breakK:
			printf("break\n");
			break;		
		case constK:
			printf("const\n");
			break;		
		case continueK:
			printf("continue\n");
			break;			
		case crate:
			printf("crate\n");
			break;		
		case doK:
			printf("do\n");
			break;	
		case elseK:
			printf("else\n");
			break;		
		case enumK:
			printf("enum\n");
			break;		
		case externK:
			printf("extern\n");
			break;		
		case finalK:
			printf("final\n");
			break;		
		case fn:
			printf("fn\n");
			break;	
		case forK:
			printf("for\n");
			break;	
		case ifK:
			printf("if\n");
			break;	
		case impl:
			printf("impl\n");
			break;		
		case in:
			printf("in\n");
			break;	
		case let:
			printf("let\n");
			break;	
		case loop:
			printf("loop\n");
			break;		
		case macro_rules:
			printf("macro_rules\n");
			break;				  
		case macro:
			printf("macro\n");
			break;
		case match:
			printf("match\n");
			break;		
		case modK:
			printf("mod\n");
			break;		
		case move:
			printf("move\n");
			break;		
		case mut:
			printf("mut\n");
			break;		
		case offsetof:
			printf("offsetof\n");
			break;			
		case override:
			printf("override\n");
			break;			
		case priv:
			printf("priv\n");
			break;		
		case pub:
			printf("pub\n");
			break;		
		case pure:
			printf("pure\n");
			break;		
		case refK:
			printf("ref\n");
			break;		
		case returnK:
			printf("return\n");
			break;		
		case sizeofK:
			printf("sizeof\n");
			break;	
		case staticK:
			printf("static\n");
			break;		
		case self:
			printf("self\n");
			break;		
		case structK:
			printf("struct\n");
			break;		
		case super:
			printf("super\n");
			break;	
		case trait:
			printf("trait\n");
			break;		
		case typeofK:
			printf("typeof\n");
			break;		
		case type:
			printf("type\n");
			break;		
		case unsafe:
			printf("unsafe\n");
			break;		
		case unsized:
			printf("unsized\n");
			break;			
		case use:
			printf("use\n");
			break;		
		case virtual:
			printf("virtual\n");
			break;		
		case whereK:
			printf("where\n");
			break;		
		case whileK:
			printf("while\n");
			break;		
		case yield:
			printf("yield\n");
			break;
		case boolK:
			printf("bool\n");
			break;
		case u8:
			printf("u8\n");
			break;
		case u16:
			printf("u16\n");
			break;
		case u32:
			printf("u32\n");
			break;
		case u64:
			printf("u64\n");
			break;
		case i8:
			printf("i8\n");
			break;
		case i16:
			printf("i16\n");
			break;
		case i32:
			printf("i32\n");
			break;
		case i64:
			printf("i64\n");
			break;
		case f32:
			printf("f32\n");
			break;
		case f64:
			printf("f64\n");
			break;
		case usize:
			printf("usize\n");
			break;
		case isize:
			printf("isize\n");
			break;
		case charK:
			printf("char\n");
			break;
		case str:
			printf("str\n");
			break;		
		case LPAREN:
			printf("(\n");
			break;
		case RPAREN:
			printf(")\n");
			break;
		case ADD:
			printf("+\n");
			break;
		case SUB:
			printf("-\n");
			break;
		case MUL:
			printf("*\n");
			break;
		case DIV:
			printf("/\n");
			break;
		case INTDIV:
			printf("\\\n");
			break;
		case QUALIFIER:
			printf("::\n");
			break;
		case ELEMENTSELECT:
			printf("->\n");
			break;
		case RARROW:
			printf("=>\n");
			break;
		case POUNDNOT:
			printf("#!\n");
			break;
		case POUND:
			printf("#\n");
			break;
		case SINGLEQ:
			printf("'\n");
			break;
		case DOUBELQ:
			printf("\"\n");
			break;
		case DOLLAR:
			printf("$\n");
			break;
		case LBRACK:
			printf("[\n");
			break;
		case RBRACK:
			printf("]\n");
			break;
		case LCBRACK:
			printf("{\n");
			break;
		case RCBRACK:
			printf("}\n");
			break;
		case COMMA:
			printf(",\n");
			break;
		case SEMICOLON:
			printf(";\n");
			break;
		case DIVEQU:
			printf("/=\n");
			break;
		case REMAINEQU:
			printf("%=\n");
			break;
		case REMAINDER:
			printf("%\n");
			break;
		case ANDEQU:
			printf("&=\n");
			break;
		case LOGICAND:
			printf("&&\n");
			break;
		case AND:
			printf("&\n");
			break;
		case OREQU:
			printf("|=\n");
			break;
		case LOGICOR:
			printf("||\n");
			break;
		case INCLUOR:
			printf("|\n");
			break;
		case EXCOREQU:
			printf("^=\n");
			break;
		case EXCLUSIVEOR:
			printf("^\n");
			break;
		case LOGICLEFTSHIFTEQU:
			printf("<<=\n");
			break;
		case LOGICLEFTSHIFT:
			printf("<<\n");
			break;
		case LOGICRIGHTSHIFTEQU:
			printf(">>=\n");
			break;
		case LOGICRIGHTSHIFT:
			printf(">>\n");
			break;
		case LESSEQU:
			printf("<=\n");
			break;
		case GREATEREQU:
			printf(">=\n");
			break;
		case LESS:
			printf("<\n");
			break;
		case GREATER:
			printf(">\n");
			break;
		case ADDEQU:
			printf("+=\n");
			break;
		case SUBEQU:
			printf("-=\n");
			break;
		case MULEQU:
			printf("*=\n");
			break;
		case LOGICEQU:
			printf("==\n");
			break;
		case NOTEQU:
			printf("!=\n");
			break;
		case EQU:
			printf("=\n");
			break;
		case TRUE:
			printf("LITBOOL(%s)\n", yytext);
			break;
		case FALSE:
			printf("LITBOOL(%s)\n", yytext);
			break;
		case ID:
			printf("ID(%s)\n", yytext);
			break;
		case IDERROR:
			printf("There is an error in (%s): contains illegal character(s)\n", yytext);
			break;
		default:
			fprintf(stderr, "Error: unknown character: %s \n", yytext);
	}
}

int main(void) {
      int token;

      while ((token = yylex())) {
            token_print(token);
      }

      return 0;
}
