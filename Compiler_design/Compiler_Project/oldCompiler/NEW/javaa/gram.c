/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 260 "javaa.y" /* yacc.c:339  */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "types.h"
#include "utils.h"
#include "build.h"
#include "protos.h"
#include "listing.h"

#line 77 "javaa.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "javaa.tab.h".  */
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
#line 289 "javaa.y" /* yacc.c:355  */

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

#line 478 "javaa.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_JAVAA_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 389 "javaa.y" /* yacc.c:358  */

   static void     CheckStructDcl(Type,int);
   static MimeType GenBlankMimeType();
   static Type     GenBlankType();
   static TreeNode *MakeBinOpSubTree(int, TreeNode *, TreeNode *);
   static TreeNode *MakeUnOpSubTree(int, TreeNode *);
   static TreeNode *MakeFuncSibs(TreeNode *, TreeNode *, TreeNode *,
              TreeNode *, TreeNode *);
   static TreeNode *GenEntryArgs(TreeNode *);

#line 505 "javaa.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   850

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  271
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  346
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  434

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   515

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     265,   266,     2,     2,   267,     2,   263,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   270,     2,
       2,   264,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   268,     2,   269,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   261,     2,   262,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   403,   403,   403,   408,   409,   414,   412,   421,   425,
     427,   432,   434,   442,   446,   453,   459,   467,   473,   481,
     483,   487,   489,   493,   495,   499,   501,   505,   507,   511,
     513,   517,   519,   523,   525,   529,   531,   535,   537,   539,
     541,   543,   547,   549,   553,   555,   560,   561,   564,   569,
     573,   577,   581,   586,   591,   596,   597,   601,   606,   601,
     622,   624,   628,   630,   635,   637,   641,   643,   652,   654,
     657,   662,   668,   670,   673,   678,   681,   685,   690,   697,
     699,   701,   703,   705,   707,   709,   711,   713,   721,   723,
     727,   732,   737,   739,   744,   748,   751,   754,   756,   758,
     760,   764,   768,   771,   774,   777,   783,   786,   789,   796,
     799,   802,   805,   808,   812,   815,   820,   822,   824,   826,
     828,   830,   832,   834,   836,   838,   840,   842,   844,   846,
     848,   850,   852,   854,   856,   858,   860,   862,   864,   866,
     868,   870,   872,   874,   876,   878,   880,   882,   884,   886,
     888,   890,   892,   894,   896,   898,   900,   902,   904,   906,
     908,   910,   912,   914,   916,   918,   920,   922,   924,   926,
     928,   930,   932,   934,   936,   938,   940,   942,   944,   946,
     948,   950,   952,   954,   956,   958,   960,   962,   964,   966,
     968,   970,   972,   974,   976,   978,   980,   982,   984,   986,
     988,   990,   992,   994,   996,   998,  1000,  1002,  1004,  1006,
    1008,  1010,  1012,  1014,  1016,  1018,  1020,  1022,  1024,  1026,
    1028,  1030,  1032,  1034,  1036,  1038,  1040,  1042,  1044,  1046,
    1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,  1066,
    1068,  1070,  1072,  1074,  1076,  1078,  1080,  1082,  1084,  1086,
    1088,  1090,  1092,  1094,  1096,  1098,  1100,  1102,  1104,  1106,
    1108,  1110,  1112,  1114,  1118,  1120,  1122,  1124,  1126,  1132,
    1134,  1136,  1141,  1143,  1145,  1147,  1152,  1154,  1156,  1160,
    1162,  1164,  1166,  1168,  1170,  1172,  1174,  1176,  1178,  1180,
    1182,  1184,  1186,  1188,  1190,  1192,  1194,  1196,  1198,  1203,
    1205,  1207,  1209,  1211,  1213,  1215,  1217,  1219,  1221,  1223,
    1225,  1227,  1231,  1233,  1237,  1239,  1242,  1244,  1248,  1250,
    1252,  1254,  1256,  1258,  1260,  1262,  1266,  1270,  1274,  1278,
    1282,  1287,  1295,  1297,  1300,  1302,  1307,  1311,  1313,  1316,
    1318,  1322,  1324,  1327,  1330,  1334,  1336
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LABEL", "IDENTIFIER", "INTCONSTANT",
  "LONGCONSTANT", "FLOATCONSTANT", "DOUBLECONSTANT", "CHARCONSTANT",
  "STRING_LITERAL", "CLASS", "EXTENDS", "ACCESS", "IMPLEMENTS", "FIELD",
  "METHOD", "MAX_STACK", "MAX_LOCALS", "CODE", "PUBLIC", "PRIVATE",
  "PROTECTED", "ABSTRACT", "FINAL", "INTERFACE", "STATIC", "NATIVE",
  "SYNCHRONIZED", "TRANSIENT", "VOLATILE", "BYTE", "CHAR", "DOUBLE",
  "FLOAT", "INT", "LONG", "SHORT", "BOOLEAN", "VOID", "DEFAULT", "TO",
  "EXCEPTIONS", "SOURCEFILE", "THROWS", "LINENUMBERTABLE",
  "LOCALVARIABLETABLE", "ACC_PUBLIC", "ACC_PRIVATE", "ACC_PROTECTED",
  "ACC_STATIC", "ACC_FINAL", "ACC_SYNCHRONIZED", "ACC_VOLATILE",
  "ACC_TRANSIENT", "ACC_NATIVE", "ACC_INTERFACE", "ACC_ABSTRACT", "AALOAD",
  "AASTORE", "ACONST_NULL", "ALOAD_0", "ALOAD_1", "ALOAD_2", "ALOAD_3",
  "ANEWARRAY", "ARETURN", "ARRAYLENGTH", "ASTORE_0", "ASTORE_1",
  "ASTORE_2", "ASTORE_3", "ATHROW", "BALOAD", "BASTORE", "BIPUSH",
  "CALOAD", "CASTORE", "CHECKCAST", "D2F", "D2I", "D2L", "DADD", "DALOAD",
  "DASTORE", "DCMPG", "DCMPL", "DCONST_0", "DCONST_1", "DDIV", "DLOAD_0",
  "DLOAD_1", "DLOAD_2", "DLOAD_3", "DMUL", "DNEG", "DREM", "DRETURN",
  "DSTORE_0", "DSTORE_1", "DSTORE_2", "DSTORE_3", "DSUB", "DUP", "DUP_X1",
  "DUP_X2", "DUP2", "DUP2_X1", "DUP2_X2", "F2D", "F2I", "F2L", "FADD",
  "FALOAD", "FASTORE", "FCMPG", "FCMPL", "FCONST_0", "FCONST_1",
  "FCONST_2", "FDIV", "FLOAD_0", "FLOAD_1", "FLOAD_2", "FLOAD_3", "FMUL",
  "FNEG", "FREM", "FRETURN", "FSTORE_0", "FSTORE_1", "FSTORE_2",
  "FSTORE_3", "FSUB", "GETFIELD", "GETSTATIC", "GOTO", "GOTO_W", "I2B",
  "I2C", "I2D", "I2F", "I2L", "I2S", "IADD", "IALOAD", "IAND", "IASTORE",
  "ICONST_0", "ICONST_1", "ICONST_2", "ICONST_3", "ICONST_4", "ICONST_5",
  "ICONST_M1", "IDIV", "IF_ACMPEQ", "IF_ACMPNE", "IF_ICMPEQ", "IF_ICMPNE",
  "IF_ICMPLT", "IF_ICMPGE", "IF_ICMPGT", "IF_ICMPLE", "IFEQ", "IFNE",
  "IFLT", "IFGE", "IFGT", "IFLE", "IFNONNULL", "IFNULL", "ILOAD_0",
  "ILOAD_1", "ILOAD_2", "ILOAD_3", "IMUL", "INEG", "IOR", "IREM",
  "IRETURN", "ISHL", "ISHR", "ISTORE_0", "ISTORE_1", "ISTORE_2",
  "ISTORE_3", "ISUB", "IUSHR", "IXOR", "JSR", "JSR_W", "L2D", "L2F", "L2I",
  "LADD", "LALOAD", "LAND", "LASTORE", "LCMP", "LCONST_0", "LCONST_1",
  "LDIV", "LLOAD_0", "LLOAD_1", "LLOAD_2", "LLOAD_3", "LMUL", "LNEG",
  "LOR", "LREM", "LRETURN", "LSHL", "LSHR", "LSTORE_0", "LSTORE_1",
  "LSTORE_2", "LSTORE_3", "LSUB", "LUSHR", "LXOR", "MONITORENTER",
  "MONITOREXIT", "NOP", "POP", "POP2", "RETURN", "SALOAD", "SASTORE",
  "SWAP", "IINC", "INSTANCEOF", "INVOKEINTERFACE", "INVOKENONVIRTUAL",
  "INVOKESTATIC", "INVOKEVIRTUAL", "LDC", "LDC_W", "LDC2_W",
  "MULTIANEWARRAY", "NEW", "NEWARRAY", "PUTFIELD", "PUTSTATIC", "SIPUSH",
  "ILOAD", "FLOAD", "ALOAD", "LLOAD", "DLOAD", "ISTORE", "FSTORE",
  "ASTORE", "LSTORE", "DSTORE", "RET", "WIDE", "LOAD", "STORE",
  "LOOKUPSWITCH", "TABLESWITCH", "'{'", "'}'", "'.'", "'='", "'('", "')'",
  "','", "'['", "']'", "':'", "$accept", "compilation_unit", "$@1",
  "classlist", "class", "$@2", "class_modifiers", "classword",
  "superclass", "classname", "classfieldmethodname", "endname",
  "abstract_entry", "final_entry", "public_entry", "interface_entry",
  "static_entry", "native_entry", "synchronized_entry", "transient_entry",
  "volatile_entry", "access_specifier", "interfaces", "interfacelist",
  "fieldlist", "field", "fieldconstant", "field_modifiers", "methodlist",
  "method", "$@3", "$@4", "throwslist", "throwsentries", "max_locals_decl",
  "returntype", "arguments", "argumentlist", "methodarguments",
  "methodargumentlist", "methodargument", "type", "basetype", "arrayadder",
  "method_modifiers", "localvar", "arrayorclassname", "code", "op_list",
  "op_line", "label", "op", "no_arg_op", "one_arg_op", "methodref_arg_op",
  "fieldref_arg_op", "class_arg_op", "label_arg_op", "localvar_arg_op",
  "localvar_arg", "lookuplist", "tablelist", "newarraytype", "argument",
  "exceptiontable", "exceptionslist", "linenumbertable", "linenumberlist",
  "localvariabletable", "localvariablelist", "sourcefilename", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   123,   125,    46,    61,    40,    41,    44,    91,    93,
      58
};
# endif

#define YYPACT_NINF -314

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-314)))

#define YYTABLE_NINF -88

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -314,    14,     5,  -314,  -314,  -314,    13,    32,     7,  -314,
    -314,    45,  -314,    34,    41,  -314,    30,    62,    53,  -314,
    -314,  -195,  -314,    62,  -192,    62,  -314,    62,  -314,  -314,
    -314,    55,    20,  -314,  -314,  -314,    49,  -314,    57,    -4,
    -314,  -314,     7,    42,    20,    71,  -314,  -178,    56,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,    83,  -180,
      57,  -314,  -314,  -314,    59,  -174,  -177,  -314,     5,  -314,
    -314,  -314,    27,  -314,  -180,     7,    26,  -314,  -314,  -314,
    -314,  -314,    64,  -314,    89,  -314,  -314,    66,  -170,  -314,
    -314,    42,  -169,  -314,  -171,    94,    58,    42,  -314,    62,
      82,  -314,  -314,    62,    95,  -314,    85,    96,  -314,  -314,
    -157,  -314,    63,   333,  -155,    65,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,    42,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,    33,
    -314,    26,  -314,  -314,  -314,  -314,  -314,  -314,    42,  -314,
     -16,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,    68,   104,
     107,  -314,  -314,   590,  -314,  -314,    19,    26,    42,    62,
     108,    33,  -314,  -148,    69,  -154,  -152,  -314,  -314,  -314,
     112,   114,   115,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,   117,    78,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,   114,   114,  -314,  -314,  -314,    -1,
    -314,  -139,  -138,  -146,  -314,  -137,  -140,  -314,  -134,   123,
    -136,  -314,   126,  -314,     0,  -314,  -314,  -180,   127,    42,
     128,    92,    42,   130,   131,  -314,     1,  -314,  -128,  -314,
    -129,  -314,  -127,  -132,  -123,   137,  -124,    43,  -314,   139,
    -314,   127,   140,    42,   142,  -314,  -114,  -314,  -314,  -314,
      42,  -314,  -314,  -314,   128,   144,   145,  -314,   144,  -118,
     146,  -314,  -314,  -314
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    20,     1,    19,     3,    20,    10,    22,     4,
       9,     0,    21,    24,    12,    23,    26,     0,    43,    25,
       8,    14,    11,     0,     0,     0,    45,    42,    47,    13,
      44,     6,    41,    56,    46,    40,    37,    39,    28,   346,
      38,    27,    22,     0,    41,     0,    55,     0,    34,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     0,    89,
      28,   345,     7,    33,    36,    53,     0,    78,    20,    57,
      35,    54,     0,    48,    89,    22,     0,    49,    51,    50,
      52,    88,    30,    67,     0,    66,    29,    32,     0,    31,
      90,    73,     0,    72,    75,    76,    61,     0,    77,     0,
       0,    74,    63,    60,     0,    62,    65,     0,    58,    64,
       0,    96,   333,    94,     0,   338,   101,   116,   117,   118,
     119,   120,   121,   122,     0,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   264,   132,   133,   276,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   272,   273,   279,   280,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   297,
     298,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,     0,
     277,     0,   270,   269,   271,   265,   266,   267,     0,   278,
       0,   274,   275,   268,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   263,   310,   311,     0,     0,
       0,    99,    95,     0,    98,   102,     0,     0,     0,     0,
       0,     0,   336,     0,   342,    92,     0,   107,   313,   312,
       0,     0,     0,   322,   319,   321,   320,   324,   325,   323,
     318,   115,     0,     0,    91,   100,    97,   326,   327,   328,
     330,   331,   329,   103,     0,     0,   106,   109,   110,     0,
     340,     0,     0,     0,   111,    16,     0,   114,     0,     0,
       0,   104,     0,   332,     0,   344,    59,    89,     0,    69,
     315,     0,    69,     0,     0,   337,     0,    93,    18,    15,
       0,    68,    71,     0,     0,     0,     0,     0,   339,     0,
     341,     0,     0,     0,     0,   112,     0,   105,   335,   334,
       0,    17,   108,    70,   315,   317,     0,   314,   317,     0,
       0,   316,   113,   343
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -314,  -314,  -314,   147,  -314,  -314,  -314,  -314,  -314,   -17,
    -313,  -261,    84,   -31,  -314,  -314,    97,  -314,  -314,  -314,
    -314,   110,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -282,  -237,  -257,  -314,    61,
    -314,   -41,  -117,   -73,  -314,  -164,  -135,  -314,  -314,  -314,
    -314,  -163,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -167,
    -263,  -266,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,    33,     7,    11,    18,    57,
     376,   399,     8,    13,    16,    20,    42,    87,    90,    64,
      71,    38,    24,    27,    31,    34,    73,    43,    39,    46,
      76,   110,   100,   103,   108,    84,   400,   401,    92,    93,
      94,    85,    59,    67,    69,   321,   337,   112,   113,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   340,
     404,   429,   351,   363,   115,   369,   334,   384,   372,   396,
      47
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    81,    58,   382,   394,   409,    26,   336,    29,   341,
      30,    48,    44,    -5,     3,   343,   344,   345,   346,   347,
     348,   349,   350,   357,   358,   359,   360,   361,     4,   362,
      21,    12,    77,    78,    79,    80,     4,   338,   339,    45,
      35,    36,    37,    10,    82,   364,    21,    21,   418,    14,
      95,   380,   381,    17,    15,    19,    95,    49,    50,    51,
      52,    53,    54,    55,    56,    83,    21,    23,    25,    28,
      32,    40,   320,    49,    50,    51,    52,    53,    54,    55,
      56,    61,   102,    41,    62,    63,   105,    65,    66,    70,
      72,    86,    74,    88,    89,    91,    97,    96,    98,   104,
     106,   109,    99,   107,   111,   114,   332,   335,   352,   353,
     333,   354,   367,   370,   -87,   371,   373,   374,   375,   379,
     377,   378,   385,   387,   386,   389,   388,   390,   391,   392,
     393,   398,   405,   403,   407,   411,   408,   412,   414,   415,
     413,   416,   417,   420,   432,   422,   424,   425,   428,   430,
     421,   433,    75,     9,    60,   406,   423,    68,   101,   355,
     356,   427,   431,   342,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   336,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   383,   395,   410,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   335,   320,     0,     0,     0,     0,   365,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   366,     0,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   116,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   402,     0,
       0,   402,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    51,    52,    53,    54,
      55,    56,   402,     0,     0,     0,     0,     0,     0,   426,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     419,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,    50,    51,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319
};

static const yytype_int16 yycheck[] =
{
      17,    74,    43,     4,     4,     4,    23,   124,    25,   291,
      27,    42,    16,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,     4,     5,     6,     7,     8,    23,    10,
       4,    24,     5,     6,     7,     8,    23,     4,     5,    43,
      20,    21,    22,    11,    75,   327,     4,     4,     5,     4,
      91,   364,   365,    12,    20,    25,    97,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     4,    14,   263,   261,
      15,    22,   113,    31,    32,    33,    34,    35,    36,    37,
      38,    10,    99,    26,   262,    29,   103,     4,   268,    30,
     264,    27,   269,     4,    28,   265,   267,   266,     4,    17,
       5,     5,    44,    18,   261,    42,   261,   124,    40,     5,
      45,     4,     4,   261,   268,    46,   268,     5,     4,    41,
       5,     4,   261,   269,   262,   265,   263,   261,     5,   265,
       4,     4,    40,     5,     4,   263,     5,   266,   270,   262,
     267,     4,   266,     4,   262,     5,     4,   261,     4,     4,
     411,     5,    68,     6,    44,   392,   413,    60,    97,   323,
     323,   424,   428,   298,   331,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   298,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   262,   262,   262,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   298,   323,    -1,    -1,    -1,    -1,   328,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   329,    -1,   387,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   389,    -1,
      -1,   392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,   413,    -1,    -1,    -1,    -1,    -1,    -1,   420,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     407,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   272,   273,     0,    23,   274,   275,   277,   283,   274,
      11,   278,    24,   284,     4,    20,   285,    12,   279,    25,
     286,     4,   280,    14,   293,   263,   280,   294,   261,   280,
     280,   295,    15,   276,   296,    20,    21,    22,   292,   299,
      22,    26,   287,   298,    16,    43,   300,   341,   284,    31,
      32,    33,    34,    35,    36,    37,    38,   280,   312,   313,
     292,    10,   262,    29,   290,     4,   268,   314,   287,   315,
      30,   291,   264,   297,   269,   283,   301,     5,     6,     7,
       8,   314,   284,    39,   306,   312,    27,   288,     4,    28,
     289,   265,   309,   310,   311,   312,   266,   267,     4,    44,
     303,   310,   280,   304,    17,   280,     5,    18,   305,     5,
     302,   261,   318,   319,    42,   335,     3,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     312,   316,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   261,    45,   337,   280,   313,   317,     4,     5,
     330,   306,   317,    31,    32,    33,    34,    35,    36,    37,
      38,   333,    40,     5,     4,   316,   322,     4,     5,     6,
       7,     8,    10,   334,   306,   312,   280,     4,   330,   336,
     261,    46,   339,   268,     5,     4,   281,     5,     4,    41,
     281,   281,     4,   262,   338,   261,   262,   269,   263,   265,
     261,     5,   265,     4,     4,   262,   340,   314,     4,   282,
     307,   308,   312,     5,   331,    40,   307,     4,     5,     4,
     262,   263,   266,   267,   270,   262,     4,   266,     5,   280,
       4,   282,     5,   308,     4,   261,   312,   331,     4,   332,
       4,   332,   262,     5
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   271,   273,   272,   274,   274,   276,   275,   277,   278,
     278,   279,   279,   280,   280,   281,   281,   282,   282,   283,
     283,   284,   284,   285,   285,   286,   286,   287,   287,   288,
     288,   289,   289,   290,   290,   291,   291,   292,   292,   292,
     292,   292,   293,   293,   294,   294,   295,   295,   296,   297,
     297,   297,   297,   297,   298,   299,   299,   301,   302,   300,
     303,   303,   304,   304,   305,   305,   306,   306,   307,   307,
     308,   308,   309,   309,   310,   310,   311,   311,   312,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   314,   314,
     315,   316,   317,   317,   318,   319,   319,   320,   320,   320,
     320,   321,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   324,   324,   324,   324,   324,   325,
     325,   325,   326,   326,   326,   326,   327,   327,   327,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   330,   330,   331,   331,   332,   332,   333,   333,
     333,   333,   333,   333,   333,   333,   334,   334,   334,   334,
     334,   334,   335,   335,   336,   336,   336,   337,   337,   338,
     338,   339,   339,   340,   340,   341,   341
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     0,    11,     4,     1,
       0,     2,     0,     3,     1,     3,     1,     3,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     2,     1,
       1,     0,     2,     0,     2,     1,     2,     0,     6,     2,
       2,     2,     2,     0,     4,     2,     0,     0,     0,    20,
       2,     0,     2,     1,     2,     0,     1,     1,     1,     0,
       3,     1,     1,     0,     3,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       5,     2,     1,     4,     1,     2,     0,     2,     1,     1,
       2,     1,     1,     2,     3,     6,     2,     2,     7,     2,
       2,     3,     6,     9,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     0,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     0,     5,     5,     0,     4,     0,     3,
       0,     4,     0,     6,     0,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 403 "javaa.y" /* yacc.c:1646  */
    { InitAssembler();}
#line 2094 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 404 "javaa.y" /* yacc.c:1646  */
    { EndAssembler();}
#line 2100 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 414 "javaa.y" /* yacc.c:1646  */
    {
		SetThisClass((yyvsp[-6].intval), (yyvsp[-4].string), (yyvsp[-3].string));
		}
#line 2108 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 422 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-3].intval) | (yyvsp[-2].intval) | (yyvsp[-1].intval) | (yyvsp[0].intval);}
#line 2114 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 426 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2120 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 427 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2126 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 433 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string);}
#line 2132 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 434 "javaa.y" /* yacc.c:1646  */
    {
	    char* tempstring;
	    tempstring = (char *) malloc(strlen("java/lang/Object"));
	    strcpy(tempstring,"java/lang/Object");
	    (yyval.string) = tempstring;
	  }
#line 2143 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 443 "javaa.y" /* yacc.c:1646  */
    {
		  (yyval.string) = ConsStrings((yyvsp[-2].string),ConsStrings("/",(yyvsp[0].string)));
		}
#line 2151 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 447 "javaa.y" /* yacc.c:1646  */
    {
		  (yyval.string) = (yyvsp[0].string);
		}
#line 2159 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 454 "javaa.y" /* yacc.c:1646  */
    {
		  if ((yyvsp[0].classfieldmethodstruct).classname == NULL) (yyval.classfieldmethodstruct).classname = (yyvsp[-2].string);
		  else (yyval.classfieldmethodstruct).classname = ConsStrings((yyvsp[-2].string),ConsStrings("/",(yyvsp[0].classfieldmethodstruct).classname));
		  (yyval.classfieldmethodstruct).fieldmethodname = (yyvsp[0].classfieldmethodstruct).fieldmethodname;
		}
#line 2169 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 460 "javaa.y" /* yacc.c:1646  */
    {
		  (yyval.classfieldmethodstruct).classname = GetThisClass();
		  (yyval.classfieldmethodstruct).fieldmethodname = (yyvsp[0].string);
		}
#line 2178 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 468 "javaa.y" /* yacc.c:1646  */
    {
		  if ((yyvsp[0].classfieldmethodstruct).classname == NULL) (yyval.classfieldmethodstruct).classname = (yyvsp[-2].string);
		  else (yyval.classfieldmethodstruct).classname = ConsStrings((yyvsp[-2].string),ConsStrings("/",(yyvsp[0].classfieldmethodstruct).classname));
		  (yyval.classfieldmethodstruct).fieldmethodname = (yyvsp[0].classfieldmethodstruct).fieldmethodname;
		}
#line 2188 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 474 "javaa.y" /* yacc.c:1646  */
    {
		  (yyval.classfieldmethodstruct).classname = NULL;
		  (yyval.classfieldmethodstruct).fieldmethodname = (yyvsp[0].string);
		}
#line 2197 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 482 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = 0x0400;}
#line 2203 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 483 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=0;}
#line 2209 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 488 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = 0x0010;}
#line 2215 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 489 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=0;}
#line 2221 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 494 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = 0x0001;}
#line 2227 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 495 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=0;}
#line 2233 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 500 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = 0x0200;}
#line 2239 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 501 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=0;}
#line 2245 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 506 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = 0x0008;}
#line 2251 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 507 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=0;}
#line 2257 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 512 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = 0x0100;}
#line 2263 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 513 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=0;}
#line 2269 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 518 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = 0x0020;}
#line 2275 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 519 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=0;}
#line 2281 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 524 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = 0x0080;}
#line 2287 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 525 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=0;}
#line 2293 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 530 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = 0x0040;}
#line 2299 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 531 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=0;}
#line 2305 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 536 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = 2;}
#line 2311 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 538 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = 6;}
#line 2317 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 540 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = 4;}
#line 2323 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 542 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = 1;}
#line 2329 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 543 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=0;}
#line 2335 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 548 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2341 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 549 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2347 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 554 "javaa.y" /* yacc.c:1646  */
    { AddToInterfaceList((yyvsp[0].string));}
#line 2353 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 556 "javaa.y" /* yacc.c:1646  */
    { AddToInterfaceList((yyvsp[0].string));}
#line 2359 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 561 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2365 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 565 "javaa.y" /* yacc.c:1646  */
    {NewField((yyvsp[-4].intval)|(yyvsp[-3].intval), (yyvsp[-1].string), (yyvsp[-2].string), (yyvsp[0].argtype));}
#line 2371 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 570 "javaa.y" /* yacc.c:1646  */
    {(yyval.argtype).type = INTCONSTANT;
              (yyval.argtype).intval = (yyvsp[0].intval);
             }
#line 2379 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 574 "javaa.y" /* yacc.c:1646  */
    {(yyval.argtype).type = FLOATCONSTANT;
              (yyval.argtype).floatval = (yyvsp[0].floatval);
             }
#line 2387 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 578 "javaa.y" /* yacc.c:1646  */
    {(yyval.argtype).type = LONGCONSTANT;
              (yyval.argtype).longval = (yyvsp[0].longval);
             }
#line 2395 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 582 "javaa.y" /* yacc.c:1646  */
    {(yyval.argtype).type = DOUBLECONSTANT;
              (yyval.argtype).doubleval = (yyvsp[0].doubleval);
             }
#line 2403 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 586 "javaa.y" /* yacc.c:1646  */
    {(yyval.argtype).type = 0;
             }
#line 2410 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 592 "javaa.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-3].intval) | (yyvsp[-2].intval) | (yyvsp[-1].intval) | (yyvsp[0].intval) ;}
#line 2416 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 597 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2422 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 601 "javaa.y" /* yacc.c:1646  */
    {NewNewMethod((yyvsp[-1].intval)|(yyvsp[0].intval));}
#line 2428 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 606 "javaa.y" /* yacc.c:1646  */
    { 
	    char* tmpstr; 
	    /*message("Calling NewMethod.");*/
	    tmpstr = ConsStrings("(",ConsStrings((yyvsp[-5].string),ConsStrings(")",(yyvsp[-8].string))));
	    /*message(tmpstr);*/
	    NewMethod((yyvsp[-7].string), tmpstr, (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2439 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 618 "javaa.y" /* yacc.c:1646  */
    {EndMethod();}
#line 2445 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 623 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2451 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 624 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2457 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 629 "javaa.y" /* yacc.c:1646  */
    {AddToThrowsList((yyvsp[0].string));}
#line 2463 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 631 "javaa.y" /* yacc.c:1646  */
    {AddToThrowsList((yyvsp[0].string));}
#line 2469 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 636 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[0].intval);}
#line 2475 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 637 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval) = -1;}
#line 2481 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 642 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 2487 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 644 "javaa.y" /* yacc.c:1646  */
    { char* tempstring;
	     	  tempstring = (char *) malloc(strlen("B"));
	     	  strcpy(tempstring,"V");
	     	  (yyval.string) = tempstring;
	  	}
#line 2497 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 653 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string);}
#line 2503 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 654 "javaa.y" /* yacc.c:1646  */
    {(yyval.string) = NULL;}
#line 2509 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 658 "javaa.y" /* yacc.c:1646  */
    {
		  /*message("in arguments with comma.");*/
		  (yyval.string) = ConsStrings((yyvsp[-2].string),(yyvsp[0].string));
		}
#line 2518 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 663 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); /*message("in arguments");*/}
#line 2524 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 669 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string);}
#line 2530 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 670 "javaa.y" /* yacc.c:1646  */
    {(yyval.string) = NULL;}
#line 2536 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 674 "javaa.y" /* yacc.c:1646  */
    {
		  /*message("in arguments with comma.");*/
		  (yyval.string) = ConsStrings((yyvsp[-2].string),(yyvsp[0].string));
		}
#line 2545 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 679 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); /*message("in arguments");*/}
#line 2551 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 682 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); 
		  /*message("calling IncrementLocalVarSlot");*/
		  IncrementLocalVarSlot((yyvsp[0].string)); /*message("in methodargument");*/}
#line 2559 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 686 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[-1].string); NewLocalVar((yyvsp[0].string), (yyvsp[-1].string));/*message("in methodargument");*/}
#line 2565 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 691 "javaa.y" /* yacc.c:1646  */
    {
		  /*message("In type.");*/
		  (yyval.string) = ConsStrings((yyvsp[0].string),(yyvsp[-1].string));
		}
#line 2574 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 698 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = ConsStrings("B",""); }
#line 2580 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 700 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = ConsStrings("C",""); }
#line 2586 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 702 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = ConsStrings("D",""); }
#line 2592 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 704 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = ConsStrings("F",""); }
#line 2598 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 706 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = ConsStrings("I",""); }
#line 2604 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 708 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = ConsStrings("J",""); }
#line 2610 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 710 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = ConsStrings("S",""); }
#line 2616 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 712 "javaa.y" /* yacc.c:1646  */
    { (yyval.string) = ConsStrings("Z",""); }
#line 2622 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 714 "javaa.y" /* yacc.c:1646  */
    {
		 (yyval.string) = ConsStrings("L", ConsStrings((yyvsp[0].string),";"));
	   	 /*message($$);*/
		 /*message("Got classname.");*/}
#line 2631 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 722 "javaa.y" /* yacc.c:1646  */
    {(yyval.string) = ConsStrings("[",(yyvsp[0].string));}
#line 2637 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 723 "javaa.y" /* yacc.c:1646  */
    {(yyval.string)=NULL;}
#line 2643 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 729 "javaa.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-4].intval) | (yyvsp[-3].intval) | (yyvsp[-2].intval) | (yyvsp[-1].intval) | (yyvsp[0].intval);}
#line 2649 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 733 "javaa.y" /* yacc.c:1646  */
    {NewLocalVar((yyvsp[0].string), (yyvsp[-1].string));}
#line 2655 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 738 "javaa.y" /* yacc.c:1646  */
    {(yyval.string) = (yyvsp[0].string);}
#line 2661 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 740 "javaa.y" /* yacc.c:1646  */
    {(yyval.string) = ConsStrings("[",ConsStrings((yyvsp[0].string),(yyvsp[-3].string)));}
#line 2667 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 745 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2673 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 749 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2679 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 751 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2685 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 755 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2691 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 757 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2697 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 759 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2703 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 761 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 2709 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 765 "javaa.y" /* yacc.c:1646  */
    {DefineLabel((yyvsp[0].string));}
#line 2715 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 769 "javaa.y" /* yacc.c:1646  */
    {GenNoArgCode((yyvsp[0].intval));
		}
#line 2722 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 772 "javaa.y" /* yacc.c:1646  */
    {GenOneArgCode((yyvsp[-1].intval), (yyvsp[0].argtype));
		}
#line 2729 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 775 "javaa.y" /* yacc.c:1646  */
    {GenFieldArgCode((yyvsp[-2].intval), (yyvsp[0].classfieldmethodstruct).classname, (yyvsp[0].classfieldmethodstruct).fieldmethodname, (yyvsp[-1].string));
		}
#line 2736 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 779 "javaa.y" /* yacc.c:1646  */
    {GenMethodArgCode((yyvsp[-5].intval), (yyvsp[-3].classfieldmethodstruct).classname, (yyvsp[-3].classfieldmethodstruct).fieldmethodname,
		         	 ConsStrings("(",ConsStrings((yyvsp[-1].string),
				   ConsStrings(")",(yyvsp[-4].string))))); 
		}
#line 2745 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 784 "javaa.y" /* yacc.c:1646  */
    {GenClassArgCode((yyvsp[-1].intval), (yyvsp[0].string));
		}
#line 2752 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 787 "javaa.y" /* yacc.c:1646  */
    {GenClassArgCode((yyvsp[-1].Rk).terminal, (yyvsp[0].string));
		}
#line 2759 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 791 "javaa.y" /* yacc.c:1646  */
    {GenINVOKEINTERFACECode((yyvsp[-6].Rk).terminal, (yyvsp[-4].classfieldmethodstruct).classname,
				 (yyvsp[-4].classfieldmethodstruct).fieldmethodname,
		         	 ConsStrings("(",ConsStrings((yyvsp[-2].string),
				   ConsStrings(")",(yyvsp[-5].string)))), (yyvsp[0].intval)); 
		}
#line 2769 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 797 "javaa.y" /* yacc.c:1646  */
    {GenLabelArgCode((yyvsp[-1].intval), (yyvsp[0].string));
		}
#line 2776 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 800 "javaa.y" /* yacc.c:1646  */
    {GenLocalVarArgCode((yyvsp[-1].intval),(yyvsp[0].intval));
		}
#line 2783 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 803 "javaa.y" /* yacc.c:1646  */
    {GenIINCCode((yyvsp[-2].Rk).terminal,(yyvsp[-1].intval),(yyvsp[0].intval));
		}
#line 2790 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 806 "javaa.y" /* yacc.c:1646  */
    {GenLOOKUPSWITCHCode((yyvsp[-5].Rk).terminal,(yyvsp[-3].string),(yyvsp[-1].lookuplistptr));
		}
#line 2797 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 810 "javaa.y" /* yacc.c:1646  */
    {GenTABLESWITCHCode((yyvsp[-8].Rk).terminal,(yyvsp[-7].intval),(yyvsp[-5].intval),(yyvsp[-3].string),(yyvsp[-1].tablelistptr));
		}
#line 2804 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 813 "javaa.y" /* yacc.c:1646  */
    {GenMULTIANEWARRAYCode((yyvsp[-2].Rk).terminal,(yyvsp[-1].string),(yyvsp[0].intval));
		}
#line 2811 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 816 "javaa.y" /* yacc.c:1646  */
    {GenNEWARRAYCode((yyvsp[-1].Rk).terminal,(yyvsp[0].intval));
		}
#line 2818 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 821 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2824 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 823 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2830 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 825 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2836 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 827 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2842 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 829 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2848 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 831 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2854 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 833 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2860 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 835 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2866 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 837 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2872 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 839 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2878 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 841 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2884 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 843 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2890 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 845 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2896 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 847 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2902 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 849 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2908 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 851 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2914 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 853 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2920 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 855 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2926 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 857 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2932 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 859 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2938 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 861 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2944 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 863 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2950 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 865 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2956 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 867 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2962 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 869 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2968 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 871 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2974 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 873 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2980 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 875 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2986 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 877 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2992 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 879 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2998 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 881 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3004 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 883 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3010 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 885 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3016 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 887 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3022 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 889 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3028 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 891 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3034 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 893 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3040 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 895 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3046 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 897 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3052 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 899 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3058 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 901 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3064 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 903 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3070 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 905 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3076 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 907 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3082 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 909 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3088 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 911 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3094 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 913 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3100 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 915 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3106 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 917 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3112 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 919 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3118 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 921 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3124 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 923 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3130 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 925 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3136 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 927 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3142 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 929 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3148 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 931 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3154 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 933 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3160 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 935 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3166 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 937 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3172 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 939 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3178 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 941 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3184 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 943 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3190 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 945 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3196 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 947 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3202 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 949 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3208 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 951 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3214 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 953 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3220 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 955 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3226 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 957 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3232 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 959 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3238 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 961 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3244 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 963 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3250 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 965 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3256 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 967 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3262 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 969 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3268 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 971 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3274 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 973 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3280 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 975 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3286 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 977 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3292 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 979 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3298 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 981 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3304 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 983 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3310 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 985 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3316 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 987 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3322 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 989 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3328 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 991 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3334 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 993 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3340 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 995 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3346 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 997 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3352 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 999 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3358 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1001 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3364 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1003 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3370 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1005 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3376 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1007 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3382 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1009 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3388 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1011 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3394 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1013 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3400 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1015 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3406 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1017 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3412 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1019 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3418 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1021 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3424 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1023 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3430 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1025 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3436 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1027 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3442 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1029 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3448 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1031 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3454 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1033 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3460 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1035 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3466 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1037 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3472 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1039 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3478 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1041 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3484 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1043 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3490 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1045 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3496 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1047 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3502 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1049 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3508 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1051 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3514 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1053 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3520 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1055 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3526 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1057 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3532 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1059 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3538 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1061 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3544 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1063 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3550 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1065 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3556 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1067 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3562 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1069 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3568 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1071 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3574 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1073 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3580 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1075 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3586 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1077 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3592 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1079 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3598 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1081 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3604 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1083 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3610 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1085 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3616 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1087 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3622 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1089 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3628 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1091 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3634 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1093 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3640 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1095 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3646 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1097 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3652 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1099 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3658 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1101 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3664 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1103 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3670 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1105 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3676 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1107 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3682 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1109 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3688 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1111 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3694 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1113 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3700 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1115 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3706 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1119 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3712 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1121 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3718 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1123 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3724 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1125 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3730 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1127 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3736 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1133 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3742 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1135 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3748 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1137 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3754 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1142 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3760 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1144 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3766 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1146 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3772 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1148 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3778 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1153 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3784 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1155 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3790 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1157 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3796 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1161 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3802 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1163 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3808 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1165 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3814 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1167 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3820 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1169 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3826 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1171 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3832 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1173 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3838 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1175 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3844 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1177 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3850 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1179 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3856 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1181 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3862 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1183 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3868 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1185 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3874 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1187 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3880 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1189 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3886 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1191 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3892 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1193 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3898 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1195 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3904 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1197 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3910 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1199 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3916 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1204 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3922 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1206 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3928 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1208 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3934 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1210 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3940 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1212 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3946 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1214 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3952 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1216 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3958 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1218 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3964 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1220 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3970 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1222 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3976 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1224 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3982 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1226 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3988 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1228 "javaa.y" /* yacc.c:1646  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3994 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1232 "javaa.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[0].intval);}
#line 4000 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1234 "javaa.y" /* yacc.c:1646  */
    { (yyval.intval) = GetLocalVar((yyvsp[0].string));}
#line 4006 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1238 "javaa.y" /* yacc.c:1646  */
    { (yyval.lookuplistptr) = AddToLookupList((yyvsp[0].lookuplistptr),(yyvsp[-3].intval),(yyvsp[-1].string)); }
#line 4012 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1239 "javaa.y" /* yacc.c:1646  */
    {(yyval.lookuplistptr) = NULL;}
#line 4018 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1243 "javaa.y" /* yacc.c:1646  */
    { (yyval.tablelistptr) = AddToTableList((yyvsp[0].tablelistptr),(yyvsp[-1].string)); }
#line 4024 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1244 "javaa.y" /* yacc.c:1646  */
    {(yyval.tablelistptr) = NULL;}
#line 4030 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1249 "javaa.y" /* yacc.c:1646  */
    { (yyval.intval) = 4;}
#line 4036 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1251 "javaa.y" /* yacc.c:1646  */
    { (yyval.intval) = 5;}
#line 4042 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1253 "javaa.y" /* yacc.c:1646  */
    { (yyval.intval) = 6;}
#line 4048 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1255 "javaa.y" /* yacc.c:1646  */
    { (yyval.intval) = 7;}
#line 4054 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1257 "javaa.y" /* yacc.c:1646  */
    { (yyval.intval) = 8;}
#line 4060 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1259 "javaa.y" /* yacc.c:1646  */
    { (yyval.intval) = 9;}
#line 4066 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1261 "javaa.y" /* yacc.c:1646  */
    { (yyval.intval) = 10;}
#line 4072 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1263 "javaa.y" /* yacc.c:1646  */
    { (yyval.intval) = 11;}
#line 4078 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1267 "javaa.y" /* yacc.c:1646  */
    {(yyval.argtype).type = IDENTIFIER;
              (yyval.argtype).stringval = (yyvsp[0].string);
             }
#line 4086 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1271 "javaa.y" /* yacc.c:1646  */
    {(yyval.argtype).type = INTCONSTANT;
              (yyval.argtype).intval = (yyvsp[0].intval);
             }
#line 4094 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1275 "javaa.y" /* yacc.c:1646  */
    {(yyval.argtype).type = LONGCONSTANT;
              (yyval.argtype).longval = (yyvsp[0].longval);
             }
#line 4102 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1279 "javaa.y" /* yacc.c:1646  */
    {(yyval.argtype).type = STRING_LITERAL;
              (yyval.argtype).stringval = (yyvsp[0].string);
             }
#line 4110 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1283 "javaa.y" /* yacc.c:1646  */
    {(yyval.argtype).type = FLOATCONSTANT;
              (yyval.argtype).floatval = (yyvsp[0].floatval);
	      /*message("got a float constant.");*/
             }
#line 4119 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1288 "javaa.y" /* yacc.c:1646  */
    {(yyval.argtype).type = DOUBLECONSTANT;
              (yyval.argtype).doubleval = (yyvsp[0].doubleval);
	      /*message("got a double constant.");*/
             }
#line 4128 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1296 "javaa.y" /* yacc.c:1646  */
    { break; }
#line 4134 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1297 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 4140 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1301 "javaa.y" /* yacc.c:1646  */
    { AddToExceptionList((yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string)); }
#line 4146 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1303 "javaa.y" /* yacc.c:1646  */
    { 
		  if ((yyvsp[0].intval) != 0) oops("Must have a class name or 0 here.");
	          AddToExceptionList((yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),NULL); 
		}
#line 4155 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1307 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 4161 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1312 "javaa.y" /* yacc.c:1646  */
    { break; }
#line 4167 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1313 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 4173 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1317 "javaa.y" /* yacc.c:1646  */
    { AddToLineNumberList((yyvsp[-1].string),(yyvsp[0].intval)); }
#line 4179 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1318 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 4185 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1323 "javaa.y" /* yacc.c:1646  */
    { break; }
#line 4191 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1324 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 4197 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1329 "javaa.y" /* yacc.c:1646  */
    { AddToUserLocalVarList((yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].intval)); }
#line 4203 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1330 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 4209 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1335 "javaa.y" /* yacc.c:1646  */
    { SetSourceFile((yyvsp[0].string)); }
#line 4215 "javaa.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1336 "javaa.y" /* yacc.c:1646  */
    {break;}
#line 4221 "javaa.tab.c" /* yacc.c:1646  */
    break;


#line 4225 "javaa.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1338 "javaa.y" /* yacc.c:1906  */

