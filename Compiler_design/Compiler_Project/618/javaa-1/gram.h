/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_JAVAA_TAB_H_INCLUDED
# define YY_YY_JAVAA_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LABEL = 258,
    IDENTIFIER = 259,
    INTCONSTANT = 260,
    LONGCONSTANT = 261,
    FLOATCONSTANT = 262,
    DOUBLECONSTANT = 263,
    CHARCONSTANT = 264,
    STRING_LITERAL = 265,
    CLASS = 266,
    EXTENDS = 267,
    ACCESS = 268,
    IMPLEMENTS = 269,
    FIELD = 270,
    METHOD = 271,
    MAX_STACK = 272,
    MAX_LOCALS = 273,
    CODE = 274,
    PUBLIC = 275,
    PRIVATE = 276,
    PROTECTED = 277,
    ABSTRACT = 278,
    FINAL = 279,
    INTERFACE = 280,
    STATIC = 281,
    NATIVE = 282,
    SYNCHRONIZED = 283,
    TRANSIENT = 284,
    VOLATILE = 285,
    BYTE = 286,
    CHAR = 287,
    DOUBLE = 288,
    FLOAT = 289,
    INT = 290,
    LONG = 291,
    SHORT = 292,
    BOOLEAN = 293,
    VOID = 294,
    DEFAULT = 295,
    TO = 296,
    EXCEPTIONS = 297,
    SOURCEFILE = 298,
    THROWS = 299,
    LINENUMBERTABLE = 300,
    LOCALVARIABLETABLE = 301,
    ACC_PUBLIC = 302,
    ACC_PRIVATE = 303,
    ACC_PROTECTED = 304,
    ACC_STATIC = 305,
    ACC_FINAL = 306,
    ACC_SYNCHRONIZED = 307,
    ACC_VOLATILE = 308,
    ACC_TRANSIENT = 309,
    ACC_NATIVE = 310,
    ACC_INTERFACE = 311,
    ACC_ABSTRACT = 312,
    AALOAD = 313,
    AASTORE = 314,
    ACONST_NULL = 315,
    ALOAD_0 = 316,
    ALOAD_1 = 317,
    ALOAD_2 = 318,
    ALOAD_3 = 319,
    ANEWARRAY = 320,
    ARETURN = 321,
    ARRAYLENGTH = 322,
    ASTORE_0 = 323,
    ASTORE_1 = 324,
    ASTORE_2 = 325,
    ASTORE_3 = 326,
    ATHROW = 327,
    BALOAD = 328,
    BASTORE = 329,
    BIPUSH = 330,
    CALOAD = 331,
    CASTORE = 332,
    CHECKCAST = 333,
    D2F = 334,
    D2I = 335,
    D2L = 336,
    DADD = 337,
    DALOAD = 338,
    DASTORE = 339,
    DCMPG = 340,
    DCMPL = 341,
    DCONST_0 = 342,
    DCONST_1 = 343,
    DDIV = 344,
    DLOAD_0 = 345,
    DLOAD_1 = 346,
    DLOAD_2 = 347,
    DLOAD_3 = 348,
    DMUL = 349,
    DNEG = 350,
    DREM = 351,
    DRETURN = 352,
    DSTORE_0 = 353,
    DSTORE_1 = 354,
    DSTORE_2 = 355,
    DSTORE_3 = 356,
    DSUB = 357,
    DUP = 358,
    DUP_X1 = 359,
    DUP_X2 = 360,
    DUP2 = 361,
    DUP2_X1 = 362,
    DUP2_X2 = 363,
    F2D = 364,
    F2I = 365,
    F2L = 366,
    FADD = 367,
    FALOAD = 368,
    FASTORE = 369,
    FCMPG = 370,
    FCMPL = 371,
    FCONST_0 = 372,
    FCONST_1 = 373,
    FCONST_2 = 374,
    FDIV = 375,
    FLOAD_0 = 376,
    FLOAD_1 = 377,
    FLOAD_2 = 378,
    FLOAD_3 = 379,
    FMUL = 380,
    FNEG = 381,
    FREM = 382,
    FRETURN = 383,
    FSTORE_0 = 384,
    FSTORE_1 = 385,
    FSTORE_2 = 386,
    FSTORE_3 = 387,
    FSUB = 388,
    GETFIELD = 389,
    GETSTATIC = 390,
    GOTO = 391,
    GOTO_W = 392,
    I2B = 393,
    I2C = 394,
    I2D = 395,
    I2F = 396,
    I2L = 397,
    I2S = 398,
    IADD = 399,
    IALOAD = 400,
    IAND = 401,
    IASTORE = 402,
    ICONST_0 = 403,
    ICONST_1 = 404,
    ICONST_2 = 405,
    ICONST_3 = 406,
    ICONST_4 = 407,
    ICONST_5 = 408,
    ICONST_M1 = 409,
    IDIV = 410,
    IF_ACMPEQ = 411,
    IF_ACMPNE = 412,
    IF_ICMPEQ = 413,
    IF_ICMPNE = 414,
    IF_ICMPLT = 415,
    IF_ICMPGE = 416,
    IF_ICMPGT = 417,
    IF_ICMPLE = 418,
    IFEQ = 419,
    IFNE = 420,
    IFLT = 421,
    IFGE = 422,
    IFGT = 423,
    IFLE = 424,
    IFNONNULL = 425,
    IFNULL = 426,
    ILOAD_0 = 427,
    ILOAD_1 = 428,
    ILOAD_2 = 429,
    ILOAD_3 = 430,
    IMUL = 431,
    INEG = 432,
    IOR = 433,
    IREM = 434,
    IRETURN = 435,
    ISHL = 436,
    ISHR = 437,
    ISTORE_0 = 438,
    ISTORE_1 = 439,
    ISTORE_2 = 440,
    ISTORE_3 = 441,
    ISUB = 442,
    IUSHR = 443,
    IXOR = 444,
    JSR = 445,
    JSR_W = 446,
    L2D = 447,
    L2F = 448,
    L2I = 449,
    LADD = 450,
    LALOAD = 451,
    LAND = 452,
    LASTORE = 453,
    LCMP = 454,
    LCONST_0 = 455,
    LCONST_1 = 456,
    LDIV = 457,
    LLOAD_0 = 458,
    LLOAD_1 = 459,
    LLOAD_2 = 460,
    LLOAD_3 = 461,
    LMUL = 462,
    LNEG = 463,
    LOR = 464,
    LREM = 465,
    LRETURN = 466,
    LSHL = 467,
    LSHR = 468,
    LSTORE_0 = 469,
    LSTORE_1 = 470,
    LSTORE_2 = 471,
    LSTORE_3 = 472,
    LSUB = 473,
    LUSHR = 474,
    LXOR = 475,
    MONITORENTER = 476,
    MONITOREXIT = 477,
    NOP = 478,
    POP = 479,
    POP2 = 480,
    RETURN = 481,
    SALOAD = 482,
    SASTORE = 483,
    SWAP = 484,
    IINC = 485,
    INSTANCEOF = 486,
    INVOKEINTERFACE = 487,
    INVOKENONVIRTUAL = 488,
    INVOKESTATIC = 489,
    INVOKEVIRTUAL = 490,
    LDC = 491,
    LDC_W = 492,
    LDC2_W = 493,
    MULTIANEWARRAY = 494,
    NEW = 495,
    NEWARRAY = 496,
    PUTFIELD = 497,
    PUTSTATIC = 498,
    SIPUSH = 499,
    ILOAD = 500,
    FLOAD = 501,
    ALOAD = 502,
    LLOAD = 503,
    DLOAD = 504,
    ISTORE = 505,
    FSTORE = 506,
    ASTORE = 507,
    LSTORE = 508,
    DSTORE = 509,
    RET = 510,
    WIDE = 511,
    LOAD = 512,
    STORE = 513,
    LOOKUPSWITCH = 514,
    TABLESWITCH = 515
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 289 "javaa.y" /* yacc.c:1916  */

   Terminal        rk;
   Terminal        NT;
   Terminal        RK;
   Terminal        Rk;

   float           floatval;
   double          doubleval;
   char            charval;
   int             intval;
   long            longval;
   char           *string;

   BaseType        basetype;
   StorageClass    storageclass;
   TypeQualifier   typequalifier;
   ArgType	   argtype;
  
   lookupentry *   lookuplistptr;
   tableentry *    tablelistptr;

   struct {
	char* classname;
	char* fieldmethodname;
   }		classfieldmethodstruct;

   struct _declinfo {
      int   function;
      int   ptrcount;
      int   dimsize[7];
      int   numdims;
      char *name;
   }               declinfo;
   
   struct {
      TreeNode *formals;
      struct _declinfo D;
   }               funcstuff;

   struct {
      Type          T;
      StorageClass  C;
      TypeQualifier Q;
   } declspecs;

   struct {
      Type          T;
      StorageClass  C;
      TypeQualifier Q;
      TreeNode     *node;
   } declspecsnode;

   struct {
      Type          T;
      StorageClass  C;
      TypeQualifier Q;
      Symbol       *headsym;
      Symbol       *prevsym;
   } structdeclspecs;

   struct {
      Symbol   *headsym;
      Symbol   *prevsym;
   } headprevsym;

   struct {
      int       spec;
      int       val;
      char     *id;
   } idspecval;

   struct {
      Symbol   *sym;
      int       val;
   } symval;

   Type            typetype;

   Symbol         *sym;

   struct {
      TreeNode *decl;
      TreeNode *func;
   } declfunc;

   struct {
      TreeNode *decl;
      TreeNode *func;
      TreeNode *exprs;
      TreeNode *last;
   } declfuncexprs;

   struct {
      TreeNode *exprs;
      TreeNode *last;
   } exprslast;

   TreeNode       *node;

#line 415 "javaa.tab.h" /* yacc.c:1916  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_JAVAA_TAB_H_INCLUDED  */
