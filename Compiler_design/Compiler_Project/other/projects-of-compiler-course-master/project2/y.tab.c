/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20160324

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "yacl.y"
/*A10515001 李大祥 compiler project2*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int  yylex  (void);
void  yyerror  (const char *str);


int isShouldAdd = 0;
int keyId = 1;
int itemDepth = 0;

#define SIZE 1024
#define MAX_LINE_LENG 1024

struct DataItem {
   char idName[100];
   char type[100];
   char value[100];
   int key;
   int depth;
};

struct DataItem* *hashArray;

/*Creates a symbol table.*/
struct DataItem* * create(){
  static struct DataItem* newHashArray[SIZE] ;
  return newHashArray;
};
/*Returns index of the entry for int key*/
int lookup(char *idName , int depth) {
   int hashIndex = 1;
   int isFind = 0;

   while(hashArray[hashIndex] != NULL) {
      if(strcmp(hashArray[hashIndex]->idName, idName) == 0 && hashArray[hashIndex]->depth == depth)
      {
        isFind = 1;
        break;
      }
      else
      {
        ++hashIndex;
      }
   }
   if(isFind == 1){
     return hashIndex;
   }
   else{
     return -1;
   }
}
/*Inserts s into  the symbol table*/
void insert(char *idName , char *type, char *value) {
	
	   struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
	   strcpy(item->idName, idName);
	   strcpy(item->type, type);
		strcpy(item->value, value);
		item->depth = itemDepth;
	   	item->key = keyId;

		hashArray[keyId] = item;
		keyId ++;
}

void clear(){
   for(int i = 1;i < SIZE;i++)
   {
 		if(hashArray[i] != NULL)
	    {
	      	hashArray[i] = NULL;
	    }
 	}
}

/*Dumps all entries of the symbol table. returns index of the entry.*/
void dump() {
   for(int i = 1;i < SIZE;i++)
   {
 		if(hashArray[i] != NULL)
	    {
	      printf("%-*d:%-*s%-*s%-*s%-*d\n", 5, i, 20, hashArray[i]->idName, 15, hashArray[i]->type, 30, hashArray[i]->value, 5, hashArray[i]->depth);
	    }
 	}
 	clear();
}


#line 95 "yacl.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
  char typeOF[200];
  char val[200];
  double double_type;
  int int_type;
  int int_val;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 128 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define STR 257
#define TRUE 258
#define FALSE 259
#define IDENTIFIER 260
#define BOOL 261
#define STRINGKEYWORD 262
#define REAL 263
#define INT 264
#define VOID 265
#define REALCONSTANTS 266
#define INTEGER 267
#define BREAK 268
#define CASE 269
#define CONST 270
#define CONTINUE 271
#define DEFAULT 272
#define ELSE 273
#define FOR 274
#define FUNC 275
#define GO 276
#define IF 277
#define IMPORT 278
#define NIL 279
#define PRINT 280
#define PRINTLN 281
#define RETURN 282
#define STRUCT 283
#define SWITCH 284
#define VAR 285
#define WHILE 286
#define READ 287
#define LE_OP 288
#define GE_OP 289
#define EQ_OP 290
#define NE_OP 291
#define ADD_ASSIGN 292
#define SUB_ASSIGN 293
#define MUL_ASSIGN 294
#define DIV_ASSIGN 295
#define number_declaration 296
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    2,    2,    2,    2,    6,    6,    7,    7,    7,    7,
    8,    8,    8,    9,    9,    9,    9,    9,   10,   10,
   10,   11,   11,   12,   12,   13,   13,   14,   14,   15,
   15,    3,    3,    3,    3,    3,    1,    1,    1,    1,
    1,    4,    4,    4,    5,    5,   16,   16,   17,   18,
   18,   19,   19,   19,   19,   20,   20,   20,   20,   20,
   20,   21,   22,   23,   23,   23,   23,   25,   26,   26,
   28,   28,   28,   29,   24,   24,   27,   27,   27,   27,
   27,   27,   30,   31,   31,   31,   31,   32,   32,   32,
    0,    0,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    2,    1,    2,    1,    3,    3,    3,
    1,    3,    3,    1,    3,    3,    3,    3,    1,    3,
    3,    1,    3,    1,    3,    1,    3,    1,    3,    1,
    2,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    4,    2,    1,    1,    1,    3,    2,    1,
    2,    4,    3,    5,    6,    6,    2,    2,    2,    1,
    2,    1,    1,    3,    3,    4,    2,    1,    5,    7,
    5,    7,    9,    5,    1,    2,    1,    1,    1,    1,
    1,    1,    1,    7,    6,    6,    5,    1,    1,    4,
    1,    2,
};
static const YYINT yydefred[] = {                         0,
    0,    0,   83,    0,    0,    0,   50,    0,   88,   91,
    0,    0,    0,   92,   51,    0,   32,   33,   34,   35,
   36,    0,   37,   38,   39,   45,   41,   40,   46,    0,
   42,    0,    0,    0,    0,    0,    0,   90,   44,   52,
    0,    0,    0,    0,    0,   47,    0,    0,    0,   54,
   49,   62,    0,   87,    0,    0,    0,    0,   43,   55,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   63,
    0,    0,    0,    7,    0,    0,    0,    0,    0,    0,
    0,   30,    0,    0,   77,   67,   78,    0,   79,   80,
   75,   81,   82,   85,   48,   86,    0,    0,    0,    0,
    0,    0,    0,    0,   59,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   31,   65,    0,   64,   76,   84,    0,
    0,    0,    0,    8,    9,   10,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   29,   66,    0,
    0,    0,    0,    0,    0,   71,    0,   74,    0,    0,
    0,    0,    0,   72,    0,   70,    0,   73,
};
static const YYINT yydgoto[] = {                          5,
   71,   72,   22,   73,   31,   74,   75,   76,   77,   78,
   79,   80,   81,   82,   83,   45,   46,    6,    7,   85,
   53,   86,   87,   88,   89,   90,   91,   92,   93,    8,
    9,   10,
};
static const YYINT yysindex[] = {                      -230,
   45, -173,    0, -147, -230, -232,    0,  196,    0,    0,
 -124,   62,  -63,    0,    0,   88,    0,    0,    0,    0,
    0, -135,    0,    0,    0,    0,    0,    0,    0,   25,
    0,   85, -138,   76,  -41,   98, -124,    0,    0,    0,
   46,   85,  -58,   26,  -27,    0,  -30,   74,  -58,    0,
    0,    0, 1256,    0,   26, -108,   26,   23,    0,    0,
   64,  114, -101,  120,   71,   71,   71,  -92, -124,    0,
    0, -124,   10,    0,   63,   13,  -40, -254,  133,   78,
  -26,    0,   71, 1256,    0,    0,    0, 1287,    0,    0,
    0,    0,    0,    0,    0,    0,   26,  -88,   71,  145,
   71,   71,   71,   71,    0, -124,    0,   10,   71,   71,
   71,   71,   71, -124, -124, -124, -124,   71,   71,   71,
   71,   71,   71,    0,    0, 1287,    0,    0,    0,   96,
  -18,   71,   38,    0,    0,    0,   63,   63, -124, -124,
 -124, -124,  -40,  -40, -254,  133,   78,    0,    0,  132,
 1313,   71,  154, 1313,   71,    0,  -12,    0,  -61,   71,
 1313,   71, 1313,    0,  172,    0, 1313,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    4,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    1,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   59,    0,    0,    0,    0,    0, -107,    0,    0,    0,
  -35,  358,  103,    0,  430,  533,  757, 1110, 1070, 1196,
  330,    0, 1158,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  232,  288,  678,    0,  404,   33,  149,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  456,  497,  817,  845,
  886,  933,  793,  805, 1142, 1184, 1230,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, 1359,  865,
    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   75,  -54,    8,  512,    0,   67,  -64,    0,  -10,  100,
   97,   99,    0,   28,  -33,  182,  177,  181,    7,    0,
    0,  -45,  -13,  151,  -80,    0,  706,    0,    0,    0,
    0,  231,
};
#define YYTABLESIZE 1646
static const YYINT yytable[] = {                         44,
   53,    1,    1,   89,   46,    1,    1,    1,   46,    1,
   57,    1,   15,   55,  106,   60,   56,   60,  131,  116,
   34,  117,  151,    1,    1,    1,    1,   33,  161,    1,
   54,  102,  103,  104,  123,  118,  119,    2,  125,    2,
  152,   94,  127,   96,    3,   53,  162,  137,  138,   37,
   51,  153,    4,   39,    4,  113,   60,  112,    1,  139,
  140,  141,  142,   97,   37,   38,   56,  133,   39,    3,
    3,  157,   46,    3,    3,    3,   46,    3,  154,    3,
  149,  165,   69,  129,   11,   29,   12,    1,    1,    1,
   15,    3,    3,    3,    3,   45,   45,  122,   45,  111,
   45,   45,   45,   45,  109,   45,   40,  143,  144,  110,
  124,   29,   13,   37,   59,   69,   50,   39,   45,   45,
   45,  160,   32,   53,   36,   53,    3,   35,   41,  124,
  124,  124,   23,   24,   25,   26,   42,   47,   49,    2,
    2,   27,   28,    2,    2,    2,  107,    2,   52,    2,
  148,   43,   45,   99,   98,    3,    3,    3,  100,  101,
  124,    2,    2,    2,    2,   60,   60,  105,   60,   60,
  120,  121,   60,   60,   60,  134,  135,  136,  130,   60,
  107,   45,   45,   45,  132,    4,    4,  124,  150,    4,
    4,    4,  155,    4,  158,    4,    2,   17,   18,   19,
   20,   21,   17,   18,   19,   20,   21,    4,    4,    4,
    4,  163,  167,  107,  107,  107,  107,  146,   43,  145,
  147,    1,    1,    1,    1,    2,    2,    2,   58,   43,
    1,    1,   95,   84,  126,   14,    0,    1,    1,    0,
    1,    1,    4,    0,    1,    1,    1,  114,  115,    0,
    0,    1,    1,    1,    1,    1,    0,   53,   53,   53,
   53,    0,    0,   89,    0,    0,   53,   53,    0,    0,
   53,    4,    4,    4,   53,   53,   53,   53,   89,    0,
   53,   53,   53,    0,    0,   53,    0,   53,    0,    3,
    3,    3,    3,    0,   23,   24,   25,   26,    3,    3,
    0,    0,    0,   27,   28,    3,    3,    0,    3,    3,
    0,    0,    3,    3,    3,   45,   45,   45,   45,    3,
    3,    3,    3,    3,   45,   45,    0,   23,   24,   25,
   26,   45,   45,    0,   45,   45,   27,   28,   45,   45,
   45,   23,   24,   25,    0,   45,   45,   45,   45,   45,
   27,   28,    0,    0,   57,    0,   57,    0,    0,    2,
    2,    2,    2,    0,    0,    0,    0,    0,    2,    2,
   28,    0,    0,    0,   28,    2,    2,    0,    2,    2,
    0,    0,    2,    2,    2,    0,    0,    0,   28,    2,
    2,    2,    2,    2,    5,    5,    0,    0,    5,    5,
    5,    0,    5,    0,    5,    4,    4,    4,    4,    0,
   58,    0,   58,    0,    4,    4,    5,    5,    5,    5,
    0,    4,    4,    0,    4,    4,    0,    0,    4,    4,
    4,    0,    0,    0,    0,    4,    4,    4,    4,    4,
    6,    6,    0,    0,    6,    6,    6,    0,    6,    0,
    6,    5,   28,    0,   28,   16,   17,   18,   19,   20,
   21,    0,    6,    6,    6,    6,    0,   11,    0,    0,
   11,    0,   11,    0,   11,    0,    0,    0,    0,    0,
    5,    5,    5,    0,    0,    0,    0,    0,   11,   11,
   11,   11,    0,   13,    0,    0,   13,    6,   13,    0,
   13,    0,    0,    0,   57,   57,    0,   57,   57,    0,
    0,   57,   57,   57,   13,   13,   13,   13,   57,    0,
    0,    0,   30,   11,    0,    0,    6,    6,    6,    0,
    0,    0,    0,    0,   12,    0,    0,   12,    0,   12,
    0,   12,    0,    0,    0,    0,    0,    0,   48,   13,
    0,    0,   11,   11,   11,   12,   12,   12,   12,    0,
   58,   58,    0,   58,   58,    0,    0,   58,   58,   58,
   14,    0,    0,   14,   58,    0,    0,    0,   13,   13,
   13,    0,    0,  108,    0,    0,   28,   28,   28,   28,
   12,   14,   14,   14,   14,   28,   28,    0,    0,    0,
    0,    0,   28,   28,    0,   28,   28,    0,    0,   28,
   28,   28,    0,    0,    0,    0,   28,  108,    0,   12,
   12,   12,    0,    0,    0,    0,   14,    0,    0,    0,
    5,    5,    0,    5,    5,    0,    0,    5,    5,    5,
    0,    0,    0,    0,    5,    5,    5,    5,    5,    0,
  108,  108,  108,  108,    0,   14,   14,   14,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    6,    6,    0,    6,
    6,    0,    0,    6,    6,    6,   11,   11,   11,   11,
    6,    6,    6,    6,    6,   11,   11,    0,    0,    0,
    0,    0,   11,   11,    0,   11,   11,    0,    0,   11,
   11,   11,   13,   13,   13,   13,   11,   11,   11,   11,
   11,   13,   13,    0,    0,    0,    0,    0,   13,   13,
    0,   13,   13,    0,    0,   13,   13,   13,    0,    0,
    0,    0,   13,   13,   13,   13,   13,    0,    0,    0,
    0,    0,    0,   12,   12,   12,   12,    0,    0,    0,
    0,    0,   12,   12,    0,    0,    0,    0,    0,   12,
   12,    0,   12,   12,    0,    0,   12,   12,   12,    0,
    0,    0,    0,   12,   12,   12,   12,   12,    0,   14,
   14,   14,   14,  128,   19,    0,    0,   19,   14,   14,
   61,   19,   61,    0,    0,   14,   14,    0,   14,   14,
    0,    0,   14,   14,   14,   19,    0,   19,    0,   14,
   14,   14,   14,   14,    0,    0,    0,    0,    0,    0,
   20,  128,    0,   20,    0,    0,    0,   20,    0,    0,
    0,    0,   21,    0,    0,   21,    0,    0,    0,   21,
   19,   20,    0,   20,   17,    0,  156,   17,    0,  159,
    0,   17,    0,   21,    0,   21,  164,    0,  166,    0,
    0,    0,  168,    0,    0,   17,   17,   17,   17,   19,
   19,   19,   18,    0,    0,   18,   20,    0,    0,   18,
    0,    0,    0,    0,    0,    0,    0,    0,   21,    0,
    0,    0,    0,   18,   18,   18,   18,    0,    0,    0,
   17,    0,    0,    0,    0,   20,   20,   20,    0,    0,
    0,    0,    0,   15,    0,    0,   15,   21,   21,   21,
   15,    0,    0,    0,    0,    0,    0,    0,   18,   17,
   17,   17,    0,    0,   15,   15,   15,   15,    0,    0,
   61,   61,    0,   61,   61,    0,    0,   61,   61,   61,
    0,    0,    0,    0,   61,    0,    0,   18,   18,   18,
   16,    0,    0,   16,    0,    0,    0,   16,    0,   15,
    0,    0,    0,    0,    0,    0,    0,   56,    0,   56,
    0,   16,   16,   16,   16,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   15,   15,
   15,    0,    0,   19,   19,   19,   19,    0,    0,    0,
    0,    0,   19,   19,    0,    0,   16,    0,    0,   19,
   19,    0,   19,   19,    0,    0,   19,   19,   19,    0,
    0,    0,    0,   19,    0,    0,   19,   19,    0,   20,
   20,   20,   20,    0,    0,   16,   16,   16,   20,   20,
    0,   21,   21,   21,   21,   20,   20,    0,   20,   20,
   21,   21,   20,   20,   20,    0,    0,   21,   21,   20,
   21,   21,   20,   20,   21,   21,   21,    0,    0,   17,
   17,   21,   17,   17,   21,   21,   17,   17,   17,    0,
    0,    0,    0,   17,   17,   17,   17,   17,    0,    0,
   24,    0,    0,    0,   24,    0,    0,   18,   18,    0,
   18,   18,    0,    0,   18,   18,   18,    0,   24,    0,
   24,   18,   18,   18,   18,   18,    0,   56,   56,    0,
   56,   56,    0,    0,   56,   56,   56,   22,    0,    0,
   22,   56,    0,    0,   22,    0,    0,    0,   15,   15,
    0,   15,   15,   24,    0,   15,   15,   15,   22,    0,
   22,    0,   15,   15,   15,   15,   15,    0,    0,   23,
    0,    0,   23,    0,    0,    0,   23,    0,    0,    0,
    0,    0,   24,   24,   24,    0,    0,    0,   68,    0,
   23,    0,   23,   22,    0,   16,   16,    0,   16,   16,
    0,    0,   16,   16,   16,    0,   68,    0,    0,   16,
   16,   16,   16,   16,   25,    0,    0,    0,   25,    0,
    0,    0,   22,   22,   22,   23,   26,    0,    0,    0,
   26,    0,   25,    0,   25,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   26,    0,   26,    0,    0,    0,
    0,    0,    0,    0,   23,   23,   23,    0,    0,    0,
   27,    0,    0,    0,   27,    0,    0,   25,    0,    0,
   68,    0,   68,    0,    0,    0,    0,    0,   27,    0,
   27,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   69,    0,    0,    0,    0,    0,   25,   25,   25,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   26,   26,
   26,    0,    0,    0,    0,    0,   24,   24,   24,   24,
    0,   69,    0,    0,    0,   24,   24,    0,    0,    0,
    0,    0,   24,   24,    0,   24,   24,    0,    0,   24,
   24,   24,   27,   27,   27,    0,   24,   69,    0,    0,
    0,    0,    0,    0,    0,    0,   22,   22,   22,   22,
    0,    0,    0,    0,    0,   22,   22,    0,   52,    0,
   70,    0,   22,   22,    0,   22,   22,    0,    0,   22,
   22,   22,    0,    0,    0,    0,   22,    0,   23,   23,
   23,   23,    0,   69,    0,    0,    0,   23,   23,   52,
    0,   70,    0,    0,   23,   23,    0,   23,   23,    0,
    0,   23,   23,   23,    0,    0,    0,    0,   23,    0,
   68,   68,    0,   68,   68,   52,    0,   68,   68,   68,
   25,   25,   25,   25,   68,    0,    0,    0,    0,   25,
   25,    0,   26,   26,   26,   26,   25,   25,    0,   25,
   25,   26,   26,   25,   25,   25,    0,    0,   26,   26,
   25,   26,   26,    0,    0,   26,   26,   26,    0,    0,
    0,   69,   26,   69,    0,    0,   27,   27,   27,   27,
    0,    0,    0,    0,    0,   27,   27,    0,    0,    0,
    0,    0,   27,   27,    0,   27,   27,    0,    0,   27,
   27,   27,   23,   24,   25,   61,   27,    0,    0,    0,
    0,   27,   28,    0,    0,    2,    0,    0,    0,   62,
    0,   63,   64,    0,    0,   65,   66,   67,    0,    0,
    4,    0,   68,   23,   24,   25,   61,    0,    0,    0,
    0,    0,   27,   28,    0,    0,    0,    0,    0,    0,
   62,    0,   63,   64,    0,    0,   65,   66,   67,   23,
   24,   25,   61,   68,    0,    0,    0,    0,   27,   28,
    0,    0,    0,    0,    0,    0,   62,    0,   63,   64,
    0,    0,   65,   66,   67,    0,    0,    0,    0,   68,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   69,   69,   69,   69,    0,
    0,    0,    0,    0,   69,   69,    0,    0,    0,    0,
    0,    0,   69,    0,   69,   69,    0,    0,   69,   69,
   69,    0,    0,    0,    0,   69,
};
static const YYINT yycheck[] = {                         41,
    0,   37,   38,    0,   40,   41,   42,   43,   44,   45,
   41,   47,    6,   41,   69,  123,   44,  125,   99,   60,
   13,   62,   41,   59,   60,   61,   62,   91,   41,  260,
   44,   65,   66,   67,   61,  290,  291,  270,   84,  270,
   59,   55,   88,   57,  275,   45,   59,  112,  113,   40,
   43,  132,  285,   44,  285,   43,   49,   45,   94,  114,
  115,  116,  117,   41,   40,   41,   44,  101,   44,   37,
   38,  152,   40,   41,   42,   43,   44,   45,   41,   47,
  126,  162,   45,   97,   40,   11,  260,  123,  124,  125,
   84,   59,   60,   61,   62,   37,   38,  124,   40,   37,
   42,   43,   44,   45,   42,   47,   32,  118,  119,   47,
   83,   37,  260,   40,   41,   45,   42,   44,   60,   61,
   62,  155,   61,  123,  260,  125,   94,   40,  267,  102,
  103,  104,  257,  258,  259,  260,   61,   40,   93,   37,
   38,  266,  267,   41,   42,   43,   72,   45,  123,   47,
  123,  260,   94,   40,   91,  123,  124,  125,  260,   40,
  133,   59,   60,   61,   62,  273,  274,  260,  276,  277,
   38,   94,  280,  281,  282,  109,  110,  111,  267,  287,
  106,  123,  124,  125,   40,   37,   38,  160,   93,   41,
   42,   43,   61,   45,   41,   47,   94,  261,  262,  263,
  264,  265,  261,  262,  263,  264,  265,   59,   60,   61,
   62,  273,   41,  139,  140,  141,  142,  121,  260,  120,
  122,  257,  258,  259,  260,  123,  124,  125,   47,  260,
  266,  267,   56,   53,   84,    5,   -1,  273,  274,   -1,
  276,  277,   94,   -1,  280,  281,  282,  288,  289,   -1,
   -1,  287,  288,  289,  290,  291,   -1,  257,  258,  259,
  260,   -1,   -1,  260,   -1,   -1,  266,  267,   -1,   -1,
  270,  123,  124,  125,  274,  275,  276,  277,  275,   -1,
  280,  281,  282,   -1,   -1,  285,   -1,  287,   -1,  257,
  258,  259,  260,   -1,  257,  258,  259,  260,  266,  267,
   -1,   -1,   -1,  266,  267,  273,  274,   -1,  276,  277,
   -1,   -1,  280,  281,  282,  257,  258,  259,  260,  287,
  288,  289,  290,  291,  266,  267,   -1,  257,  258,  259,
  260,  273,  274,   -1,  276,  277,  266,  267,  280,  281,
  282,  257,  258,  259,   -1,  287,  288,  289,  290,  291,
  266,  267,   -1,   -1,  123,   -1,  125,   -1,   -1,  257,
  258,  259,  260,   -1,   -1,   -1,   -1,   -1,  266,  267,
   41,   -1,   -1,   -1,   45,  273,  274,   -1,  276,  277,
   -1,   -1,  280,  281,  282,   -1,   -1,   -1,   59,  287,
  288,  289,  290,  291,   37,   38,   -1,   -1,   41,   42,
   43,   -1,   45,   -1,   47,  257,  258,  259,  260,   -1,
  123,   -1,  125,   -1,  266,  267,   59,   60,   61,   62,
   -1,  273,  274,   -1,  276,  277,   -1,   -1,  280,  281,
  282,   -1,   -1,   -1,   -1,  287,  288,  289,  290,  291,
   37,   38,   -1,   -1,   41,   42,   43,   -1,   45,   -1,
   47,   94,  123,   -1,  125,  260,  261,  262,  263,  264,
  265,   -1,   59,   60,   61,   62,   -1,   38,   -1,   -1,
   41,   -1,   43,   -1,   45,   -1,   -1,   -1,   -1,   -1,
  123,  124,  125,   -1,   -1,   -1,   -1,   -1,   59,   60,
   61,   62,   -1,   38,   -1,   -1,   41,   94,   43,   -1,
   45,   -1,   -1,   -1,  273,  274,   -1,  276,  277,   -1,
   -1,  280,  281,  282,   59,   60,   61,   62,  287,   -1,
   -1,   -1,   11,   94,   -1,   -1,  123,  124,  125,   -1,
   -1,   -1,   -1,   -1,   38,   -1,   -1,   41,   -1,   43,
   -1,   45,   -1,   -1,   -1,   -1,   -1,   -1,   37,   94,
   -1,   -1,  123,  124,  125,   59,   60,   61,   62,   -1,
  273,  274,   -1,  276,  277,   -1,   -1,  280,  281,  282,
   38,   -1,   -1,   41,  287,   -1,   -1,   -1,  123,  124,
  125,   -1,   -1,   72,   -1,   -1,  257,  258,  259,  260,
   94,   59,   60,   61,   62,  266,  267,   -1,   -1,   -1,
   -1,   -1,  273,  274,   -1,  276,  277,   -1,   -1,  280,
  281,  282,   -1,   -1,   -1,   -1,  287,  106,   -1,  123,
  124,  125,   -1,   -1,   -1,   -1,   94,   -1,   -1,   -1,
  273,  274,   -1,  276,  277,   -1,   -1,  280,  281,  282,
   -1,   -1,   -1,   -1,  287,  288,  289,  290,  291,   -1,
  139,  140,  141,  142,   -1,  123,  124,  125,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  273,  274,   -1,  276,
  277,   -1,   -1,  280,  281,  282,  257,  258,  259,  260,
  287,  288,  289,  290,  291,  266,  267,   -1,   -1,   -1,
   -1,   -1,  273,  274,   -1,  276,  277,   -1,   -1,  280,
  281,  282,  257,  258,  259,  260,  287,  288,  289,  290,
  291,  266,  267,   -1,   -1,   -1,   -1,   -1,  273,  274,
   -1,  276,  277,   -1,   -1,  280,  281,  282,   -1,   -1,
   -1,   -1,  287,  288,  289,  290,  291,   -1,   -1,   -1,
   -1,   -1,   -1,  257,  258,  259,  260,   -1,   -1,   -1,
   -1,   -1,  266,  267,   -1,   -1,   -1,   -1,   -1,  273,
  274,   -1,  276,  277,   -1,   -1,  280,  281,  282,   -1,
   -1,   -1,   -1,  287,  288,  289,  290,  291,   -1,  257,
  258,  259,  260,   88,   38,   -1,   -1,   41,  266,  267,
  123,   45,  125,   -1,   -1,  273,  274,   -1,  276,  277,
   -1,   -1,  280,  281,  282,   59,   -1,   61,   -1,  287,
  288,  289,  290,  291,   -1,   -1,   -1,   -1,   -1,   -1,
   38,  126,   -1,   41,   -1,   -1,   -1,   45,   -1,   -1,
   -1,   -1,   38,   -1,   -1,   41,   -1,   -1,   -1,   45,
   94,   59,   -1,   61,   38,   -1,  151,   41,   -1,  154,
   -1,   45,   -1,   59,   -1,   61,  161,   -1,  163,   -1,
   -1,   -1,  167,   -1,   -1,   59,   60,   61,   62,  123,
  124,  125,   38,   -1,   -1,   41,   94,   -1,   -1,   45,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   94,   -1,
   -1,   -1,   -1,   59,   60,   61,   62,   -1,   -1,   -1,
   94,   -1,   -1,   -1,   -1,  123,  124,  125,   -1,   -1,
   -1,   -1,   -1,   38,   -1,   -1,   41,  123,  124,  125,
   45,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   94,  123,
  124,  125,   -1,   -1,   59,   60,   61,   62,   -1,   -1,
  273,  274,   -1,  276,  277,   -1,   -1,  280,  281,  282,
   -1,   -1,   -1,   -1,  287,   -1,   -1,  123,  124,  125,
   38,   -1,   -1,   41,   -1,   -1,   -1,   45,   -1,   94,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  123,   -1,  125,
   -1,   59,   60,   61,   62,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  123,  124,
  125,   -1,   -1,  257,  258,  259,  260,   -1,   -1,   -1,
   -1,   -1,  266,  267,   -1,   -1,   94,   -1,   -1,  273,
  274,   -1,  276,  277,   -1,   -1,  280,  281,  282,   -1,
   -1,   -1,   -1,  287,   -1,   -1,  290,  291,   -1,  257,
  258,  259,  260,   -1,   -1,  123,  124,  125,  266,  267,
   -1,  257,  258,  259,  260,  273,  274,   -1,  276,  277,
  266,  267,  280,  281,  282,   -1,   -1,  273,  274,  287,
  276,  277,  290,  291,  280,  281,  282,   -1,   -1,  273,
  274,  287,  276,  277,  290,  291,  280,  281,  282,   -1,
   -1,   -1,   -1,  287,  288,  289,  290,  291,   -1,   -1,
   41,   -1,   -1,   -1,   45,   -1,   -1,  273,  274,   -1,
  276,  277,   -1,   -1,  280,  281,  282,   -1,   59,   -1,
   61,  287,  288,  289,  290,  291,   -1,  273,  274,   -1,
  276,  277,   -1,   -1,  280,  281,  282,   38,   -1,   -1,
   41,  287,   -1,   -1,   45,   -1,   -1,   -1,  273,  274,
   -1,  276,  277,   94,   -1,  280,  281,  282,   59,   -1,
   61,   -1,  287,  288,  289,  290,  291,   -1,   -1,   38,
   -1,   -1,   41,   -1,   -1,   -1,   45,   -1,   -1,   -1,
   -1,   -1,  123,  124,  125,   -1,   -1,   -1,   41,   -1,
   59,   -1,   61,   94,   -1,  273,  274,   -1,  276,  277,
   -1,   -1,  280,  281,  282,   -1,   59,   -1,   -1,  287,
  288,  289,  290,  291,   41,   -1,   -1,   -1,   45,   -1,
   -1,   -1,  123,  124,  125,   94,   41,   -1,   -1,   -1,
   45,   -1,   59,   -1,   61,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   59,   -1,   61,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  123,  124,  125,   -1,   -1,   -1,
   41,   -1,   -1,   -1,   45,   -1,   -1,   94,   -1,   -1,
  123,   -1,  125,   -1,   -1,   -1,   -1,   -1,   59,   -1,
   61,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   45,   -1,   -1,   -1,   -1,   -1,  123,  124,  125,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  123,  124,
  125,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,  260,
   -1,   45,   -1,   -1,   -1,  266,  267,   -1,   -1,   -1,
   -1,   -1,  273,  274,   -1,  276,  277,   -1,   -1,  280,
  281,  282,  123,  124,  125,   -1,  287,   45,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,  260,
   -1,   -1,   -1,   -1,   -1,  266,  267,   -1,  123,   -1,
  125,   -1,  273,  274,   -1,  276,  277,   -1,   -1,  280,
  281,  282,   -1,   -1,   -1,   -1,  287,   -1,  257,  258,
  259,  260,   -1,   45,   -1,   -1,   -1,  266,  267,  123,
   -1,  125,   -1,   -1,  273,  274,   -1,  276,  277,   -1,
   -1,  280,  281,  282,   -1,   -1,   -1,   -1,  287,   -1,
  273,  274,   -1,  276,  277,  123,   -1,  280,  281,  282,
  257,  258,  259,  260,  287,   -1,   -1,   -1,   -1,  266,
  267,   -1,  257,  258,  259,  260,  273,  274,   -1,  276,
  277,  266,  267,  280,  281,  282,   -1,   -1,  273,  274,
  287,  276,  277,   -1,   -1,  280,  281,  282,   -1,   -1,
   -1,  123,  287,  125,   -1,   -1,  257,  258,  259,  260,
   -1,   -1,   -1,   -1,   -1,  266,  267,   -1,   -1,   -1,
   -1,   -1,  273,  274,   -1,  276,  277,   -1,   -1,  280,
  281,  282,  257,  258,  259,  260,  287,   -1,   -1,   -1,
   -1,  266,  267,   -1,   -1,  270,   -1,   -1,   -1,  274,
   -1,  276,  277,   -1,   -1,  280,  281,  282,   -1,   -1,
  285,   -1,  287,  257,  258,  259,  260,   -1,   -1,   -1,
   -1,   -1,  266,  267,   -1,   -1,   -1,   -1,   -1,   -1,
  274,   -1,  276,  277,   -1,   -1,  280,  281,  282,  257,
  258,  259,  260,  287,   -1,   -1,   -1,   -1,  266,  267,
   -1,   -1,   -1,   -1,   -1,   -1,  274,   -1,  276,  277,
   -1,   -1,  280,  281,  282,   -1,   -1,   -1,   -1,  287,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  257,  258,  259,  260,   -1,
   -1,   -1,   -1,   -1,  266,  267,   -1,   -1,   -1,   -1,
   -1,   -1,  274,   -1,  276,  277,   -1,   -1,  280,  281,
  282,   -1,   -1,   -1,   -1,  287,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 296
#define YYUNDFTOKEN 331
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"'%'","'&'",0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,
0,0,0,"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"'['",0,"']'","'^'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"'{'","'|'","'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"STR","TRUE","FALSE","IDENTIFIER",
"BOOL","STRINGKEYWORD","REAL","INT","VOID","REALCONSTANTS","INTEGER","BREAK",
"CASE","CONST","CONTINUE","DEFAULT","ELSE","FOR","FUNC","GO","IF","IMPORT",
"NIL","PRINT","PRINTLN","RETURN","STRUCT","SWITCH","VAR","WHILE","READ","LE_OP",
"GE_OP","EQ_OP","NE_OP","ADD_ASSIGN","SUB_ASSIGN","MUL_ASSIGN","DIV_ASSIGN",
"number_declaration",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"primary_expression : value_declaration",
"primary_expression : declarator_list",
"primary_expression : primary_expression value_declaration",
"primary_expression : primary_expression declarator_list",
"unary_expression : primary_expression",
"unary_expression : '-' primary_expression",
"multiplicative_expression : unary_expression",
"multiplicative_expression : multiplicative_expression '*' unary_expression",
"multiplicative_expression : multiplicative_expression '/' unary_expression",
"multiplicative_expression : multiplicative_expression '%' unary_expression",
"additive_expression : multiplicative_expression",
"additive_expression : additive_expression '+' multiplicative_expression",
"additive_expression : additive_expression '-' multiplicative_expression",
"relational_expression : additive_expression",
"relational_expression : relational_expression '<' primary_expression",
"relational_expression : relational_expression '>' primary_expression",
"relational_expression : relational_expression LE_OP primary_expression",
"relational_expression : relational_expression GE_OP primary_expression",
"equality_expression : relational_expression",
"equality_expression : equality_expression EQ_OP relational_expression",
"equality_expression : equality_expression NE_OP relational_expression",
"and_expression : equality_expression",
"and_expression : and_expression '&' equality_expression",
"exclusive_or_expression : and_expression",
"exclusive_or_expression : exclusive_or_expression '^' and_expression",
"inclusive_or_expression : exclusive_or_expression",
"inclusive_or_expression : inclusive_or_expression '|' exclusive_or_expression",
"assignment_expression : inclusive_or_expression",
"assignment_expression : inclusive_or_expression '=' assignment_expression",
"expression : assignment_expression",
"expression : expression assignment_expression",
"type_specifier : BOOL",
"type_specifier : STRINGKEYWORD",
"type_specifier : REAL",
"type_specifier : INT",
"type_specifier : VOID",
"value_declaration : STR",
"value_declaration : TRUE",
"value_declaration : FALSE",
"value_declaration : INTEGER",
"value_declaration : REALCONSTANTS",
"declarator_list : declarator",
"declarator_list : declarator_list '(' declarator_list ')'",
"declarator_list : declarator_list ','",
"declarator : IDENTIFIER",
"declarator : value_declaration",
"parameter_list : parameter_declaration",
"parameter_list : parameter_list ',' parameter_declaration",
"parameter_declaration : IDENTIFIER type_specifier",
"declaration_list : declaration",
"declaration_list : declaration_list declaration",
"declaration : CONST IDENTIFIER '=' value_declaration",
"declaration : VAR IDENTIFIER type_specifier",
"declaration : VAR IDENTIFIER type_specifier '=' value_declaration",
"declaration : VAR IDENTIFIER '[' INTEGER ']' type_specifier",
"simple_statment : IDENTIFIER '[' INTEGER ']' '=' expression",
"simple_statment : PRINT expression",
"simple_statment : PRINTLN expression",
"simple_statment : READ IDENTIFIER",
"simple_statment : RETURN",
"simple_statment : RETURN expression",
"compound_start : '{'",
"compound_end : '}'",
"compound_statement : compound_start statement_list compound_end",
"compound_statement : compound_start declaration_list compound_end",
"compound_statement : compound_start declaration_list statement_list compound_end",
"compound_statement : compound_start compound_end",
"expression_statement : expression",
"selection_statement : IF '(' expression ')' statement",
"selection_statement : IF '(' expression ')' statement ELSE statement",
"iteration_statement : FOR '(' expression_statement ')' statement",
"iteration_statement : FOR '(' expression_statement ';' expression_statement ')' statement",
"iteration_statement : FOR '(' expression_statement ';' expression_statement ';' expression_statement ')' statement",
"jump_statement : GO IDENTIFIER '(' expression_statement ')'",
"statement_list : statement",
"statement_list : statement_list statement",
"statement : simple_statment",
"statement : compound_statement",
"statement : expression_statement",
"statement : selection_statement",
"statement : iteration_statement",
"statement : jump_statement",
"func_expression : FUNC",
"function_definition : func_expression type_specifier IDENTIFIER '(' parameter_list ')' compound_statement",
"function_definition : func_expression IDENTIFIER '(' parameter_list ')' compound_statement",
"function_definition : func_expression type_specifier IDENTIFIER '(' ')' compound_statement",
"function_definition : func_expression IDENTIFIER '(' ')' compound_statement",
"external_declaration : function_definition",
"external_declaration : declaration_list",
"external_declaration : IDENTIFIER '(' declarator_list ')'",
"program : external_declaration",
"program : program external_declaration",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 367 "yacl.y"

void yyerror(const char *str){
    printf("error:%s\n",str);
}

int yywrap(){
    return 1;
}

int main()
{
	isShouldAdd = 0;
	itemDepth = 0;
	hashArray = create();

    yyparse();
    ;

    printf("%s\n", "------Test Lookup In example.go:------");
    printf("%-*s%-*s\n", 20 ,"Name" ,10 , "Depth");
    if (lookup("a" , 0) >= 0 && lookup("a" , 1) >= 0)
    {
    	printf("%-*s%-*d\n", 20 ,hashArray[lookup("a" , 0)]->idName ,5 , hashArray[lookup("a" , 0)]->depth);
    	printf("%-*s%-*d\n", 20 ,hashArray[lookup("a" , 1)]->idName ,5 , hashArray[lookup("a" , 1)]->depth);
    }
    
    printf("\n\n%s\n", "------Symbol Table:------");
    printf("%-*s%-*s\n", 20 ,"Name" ,10 , "Depth");
    printf("%-*s:%-*s%-*s%-*s%-*d\n", 5, "Index:", 20, "Name", 15, "Type", 30, "Value", 5, "Depth");
  	dump();
  	return 0;
}
#line 820 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 37:
#line 194 "yacl.y"
	{
		strcpy(yyval.val, yystack.l_mark[0].val);
	}
break;
case 38:
#line 197 "yacl.y"
	{
		strcpy(yyval.val, yystack.l_mark[0].val);
	}
break;
case 39:
#line 200 "yacl.y"
	{
		strcpy(yyval.val, yystack.l_mark[0].val);
	}
break;
case 40:
#line 204 "yacl.y"
	{
		char tempStr[50];
		sprintf( tempStr, "%d", yystack.l_mark[0].int_type );
		strcpy(yyval.val, tempStr);
	}
break;
case 41:
#line 210 "yacl.y"
	{
		char tempStr[50];
		sprintf( tempStr, "%g", yystack.l_mark[0].double_type );
		strcpy(yyval.val, tempStr);
	}
break;
case 49:
#line 236 "yacl.y"
	{
		insert(yystack.l_mark[-1].val, yystack.l_mark[0].val , "");
	}
break;
case 52:
#line 247 "yacl.y"
	{
		insert(yystack.l_mark[-2].val, "const" , yystack.l_mark[0].val);
	}
break;
case 53:
#line 250 "yacl.y"
	{
		insert(yystack.l_mark[-1].val, yystack.l_mark[0].val, "");
	}
break;
case 54:
#line 253 "yacl.y"
	{
		insert(yystack.l_mark[-3].val, yystack.l_mark[-2].val, "");
	}
break;
case 55:
#line 256 "yacl.y"
	{
		insert(yystack.l_mark[-4].val, "array" , yystack.l_mark[0].val);
	}
break;
case 62:
#line 272 "yacl.y"
	{
		if (isShouldAdd == 1)
		{
			itemDepth++;
		}
		else{
			isShouldAdd++;
		}
	}
break;
case 63:
#line 285 "yacl.y"
	{
		itemDepth--;
	}
break;
case 83:
#line 331 "yacl.y"
	{
		isShouldAdd = 0;
		itemDepth++;
	}
break;
case 84:
#line 338 "yacl.y"
	{
		insert(yystack.l_mark[-4].val, yystack.l_mark[-5].val, "");
	}
break;
case 85:
#line 342 "yacl.y"
	{
		insert(yystack.l_mark[-4].val, "", "");
	}
break;
case 86:
#line 346 "yacl.y"
	{
		insert(yystack.l_mark[-3].val, yystack.l_mark[-4].val, "");
	}
break;
case 87:
#line 350 "yacl.y"
	{
		insert(yystack.l_mark[-3].val, "", "");
	}
break;
#line 1135 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
