/* AuthorName: µÀ“ª√»
 * StudentID: 0643111281
 * Time: 2008-10-28
 */

/*Global types and vars for C- compiler*/

#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

/*MAXRESERVED = the number of reserved words*/
#define MAXRESERVED 6

typedef enum
{/*book-keeping tokens*/
 ENDFILE,ERROR, 
 /*reserved words*/
 IF,ELSE,INT,RETURN,VOID,WHILE,    
 /*multicharacter tokens*/
 ID,NUM,   
 /*special symbols*/
 PLUS,MINUS,TIMES,OVER,LT,GT,NLT,NGT,EQU,NEQU,ASSIGN,SEMI,DOT,
 RBR,LBR,RSBR,LSBR,RLBR,LLBR
}TokenType;

extern FILE* source;  /*source code text file*/
extern FILE* listing;  /*listing output text file*/
extern FILE* code;  /*code text file for TM simulator*/

extern int lineno;  /*source line number for listing*/

/***********************************/
/*****    Flags for tracing    *****/
/***********************************/

/*EchoSource = TRUE causes the source program to be 
 *echoed to the listing file with line numbers during parsing
 */
extern int EchoSource;

/*TraceScan = TRUE causes token information to be printed
 *to the listing file as each token is recognized by the scanner
 */
extern int TraceScan;

/*Error = TRUE prevents further passes if an error occurs*/
extern int Error;
#endif






