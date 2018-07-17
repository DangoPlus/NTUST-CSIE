/* AuthorName: µÀ“ª√»
 * StudentID: 0643111281
 * Time: 2008-10-28
 */

/*The scanner interface for the C- compiler*/

#ifndef _SCAN_H_
#define _SCAN_H_

/*MAXTOKENLEN is the maximum size of a token*/
#define MAXTOKENLEN 40

/*tokenString array stores the lexeme of each token*/
extern char tokenString[MAXTOKENLEN+1];

/*function getToken returns the next token in source file*/
TokenType getToken(void);

#endif