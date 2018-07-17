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
extern YYSTYPE yylval;
