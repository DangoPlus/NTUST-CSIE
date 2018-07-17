/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.5"

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
   ArgType     argtype;

   lookupentry *   lookuplistptr;
   tableentry *    tablelistptr;

   struct {
    char* classname;
    char* fieldmethodname;
   }        classfieldmethodstruct;

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
     427,   432,   434,   443,   447,   454,   460,   468,   474,   482,
     484,   488,   490,   494,   496,   500,   502,   506,   508,   512,
     514,   518,   520,   524,   526,   530,   532,   536,   538,   540,
     542,   544,   548,   550,   554,   556,   561,   562,   565,   570,
     574,   578,   582,   587,   592,   597,   598,   602,   607,   602,
     623,   625,   629,   631,   636,   638,   642,   644,   653,   655,
     658,   663,   669,   671,   674,   679,   682,   686,   691,   698,
     700,   702,   704,   706,   708,   710,   712,   714,   722,   724,
     728,   733,   738,   740,   745,   749,   752,   755,   757,   759,
     761,   765,   769,   772,   775,   778,   784,   787,   790,   797,
     800,   803,   806,   809,   813,   816,   821,   823,   825,   827,
     829,   831,   833,   835,   837,   839,   841,   843,   845,   847,
     849,   851,   853,   855,   857,   859,   861,   863,   865,   867,
     869,   871,   873,   875,   877,   879,   881,   883,   885,   887,
     889,   891,   893,   895,   897,   899,   901,   903,   905,   907,
     909,   911,   913,   915,   917,   919,   921,   923,   925,   927,
     929,   931,   933,   935,   937,   939,   941,   943,   945,   947,
     949,   951,   953,   955,   957,   959,   961,   963,   965,   967,
     969,   971,   973,   975,   977,   979,   981,   983,   985,   987,
     989,   991,   993,   995,   997,   999,  1001,  1003,  1005,  1007,
    1009,  1011,  1013,  1015,  1017,  1019,  1021,  1023,  1025,  1027,
    1029,  1031,  1033,  1035,  1037,  1039,  1041,  1043,  1045,  1047,
    1049,  1051,  1053,  1055,  1057,  1059,  1061,  1063,  1065,  1067,
    1069,  1071,  1073,  1075,  1077,  1079,  1081,  1083,  1085,  1087,
    1089,  1091,  1093,  1095,  1097,  1099,  1101,  1103,  1105,  1107,
    1109,  1111,  1113,  1115,  1119,  1121,  1123,  1125,  1127,  1133,
    1135,  1137,  1142,  1144,  1146,  1148,  1153,  1155,  1157,  1161,
    1163,  1165,  1167,  1169,  1171,  1173,  1175,  1177,  1179,  1181,
    1183,  1185,  1187,  1189,  1191,  1193,  1195,  1197,  1199,  1204,
    1206,  1208,  1210,  1212,  1214,  1216,  1218,  1220,  1222,  1224,
    1226,  1228,  1232,  1234,  1238,  1240,  1243,  1245,  1249,  1251,
    1253,  1255,  1257,  1259,  1261,  1263,  1267,  1271,  1275,  1279,
    1283,  1288,  1296,  1298,  1301,  1303,  1308,  1312,  1314,  1317,
    1319,  1323,  1325,  1328,  1331,  1335,  1337
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
    default: /* Avoid compiler warnings. */
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
#line 403 "javaa.y" /* yacc.c:1663  */
    { InitAssembler();}
#line 2095 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 3:
#line 404 "javaa.y" /* yacc.c:1663  */
    { EndAssembler();}
#line 2101 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 6:
#line 414 "javaa.y" /* yacc.c:1663  */
    {
        SetThisClass((yyvsp[-6].intval), (yyvsp[-4].string), (yyvsp[-3].string));
        }
#line 2109 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 8:
#line 422 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = (yyvsp[-3].intval) | (yyvsp[-2].intval) | (yyvsp[-1].intval) | (yyvsp[0].intval);}
#line 2115 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 9:
#line 426 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2121 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 10:
#line 427 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2127 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 11:
#line 433 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = (yyvsp[0].string);}
#line 2133 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 12:
#line 434 "javaa.y" /* yacc.c:1663  */
    {
        char* tempstring;
        int len = strlen("java/lang/Object")+1;
        tempstring = (char *) malloc(sizeof(char)*len);
        strncpy(tempstring,"java/lang/Object", len);
        (yyval.string) = tempstring;
      }
#line 2145 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 13:
#line 444 "javaa.y" /* yacc.c:1663  */
    {
          (yyval.string) = ConsStrings((yyvsp[-2].string),ConsStrings("/",(yyvsp[0].string)));
        }
#line 2153 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 14:
#line 448 "javaa.y" /* yacc.c:1663  */
    {
          (yyval.string) = (yyvsp[0].string);
        }
#line 2161 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 15:
#line 455 "javaa.y" /* yacc.c:1663  */
    {
          if ((yyvsp[0].classfieldmethodstruct).classname == NULL) (yyval.classfieldmethodstruct).classname = (yyvsp[-2].string);
          else (yyval.classfieldmethodstruct).classname = ConsStrings((yyvsp[-2].string),ConsStrings("/",(yyvsp[0].classfieldmethodstruct).classname));
          (yyval.classfieldmethodstruct).fieldmethodname = (yyvsp[0].classfieldmethodstruct).fieldmethodname;
        }
#line 2171 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 16:
#line 461 "javaa.y" /* yacc.c:1663  */
    {
          (yyval.classfieldmethodstruct).classname = GetThisClass();
          (yyval.classfieldmethodstruct).fieldmethodname = (yyvsp[0].string);
        }
#line 2180 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 17:
#line 469 "javaa.y" /* yacc.c:1663  */
    {
          if ((yyvsp[0].classfieldmethodstruct).classname == NULL) (yyval.classfieldmethodstruct).classname = (yyvsp[-2].string);
          else (yyval.classfieldmethodstruct).classname = ConsStrings((yyvsp[-2].string),ConsStrings("/",(yyvsp[0].classfieldmethodstruct).classname));
          (yyval.classfieldmethodstruct).fieldmethodname = (yyvsp[0].classfieldmethodstruct).fieldmethodname;
        }
#line 2190 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 18:
#line 475 "javaa.y" /* yacc.c:1663  */
    {
          (yyval.classfieldmethodstruct).classname = NULL;
          (yyval.classfieldmethodstruct).fieldmethodname = (yyvsp[0].string);
        }
#line 2199 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 19:
#line 483 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = 0x0400;}
#line 2205 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 20:
#line 484 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=0;}
#line 2211 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 21:
#line 489 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = 0x0010;}
#line 2217 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 22:
#line 490 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=0;}
#line 2223 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 23:
#line 495 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = 0x0001;}
#line 2229 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 24:
#line 496 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=0;}
#line 2235 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 25:
#line 501 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = 0x0200;}
#line 2241 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 26:
#line 502 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=0;}
#line 2247 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 27:
#line 507 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = 0x0008;}
#line 2253 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 28:
#line 508 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=0;}
#line 2259 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 29:
#line 513 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = 0x0100;}
#line 2265 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 30:
#line 514 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=0;}
#line 2271 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 31:
#line 519 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = 0x0020;}
#line 2277 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 32:
#line 520 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=0;}
#line 2283 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 33:
#line 525 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = 0x0080;}
#line 2289 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 34:
#line 526 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=0;}
#line 2295 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 35:
#line 531 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = 0x0040;}
#line 2301 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 36:
#line 532 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=0;}
#line 2307 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 37:
#line 537 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = 2;}
#line 2313 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 38:
#line 539 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = 6;}
#line 2319 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 39:
#line 541 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = 4;}
#line 2325 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 40:
#line 543 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = 1;}
#line 2331 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 41:
#line 544 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=0;}
#line 2337 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 42:
#line 549 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2343 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 43:
#line 550 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2349 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 44:
#line 555 "javaa.y" /* yacc.c:1663  */
    { AddToInterfaceList((yyvsp[0].string));}
#line 2355 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 45:
#line 557 "javaa.y" /* yacc.c:1663  */
    { AddToInterfaceList((yyvsp[0].string));}
#line 2361 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 47:
#line 562 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2367 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 48:
#line 566 "javaa.y" /* yacc.c:1663  */
    {NewField((yyvsp[-4].intval)|(yyvsp[-3].intval), (yyvsp[-1].string), (yyvsp[-2].string), (yyvsp[0].argtype));}
#line 2373 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 49:
#line 571 "javaa.y" /* yacc.c:1663  */
    {(yyval.argtype).type = INTCONSTANT;
              (yyval.argtype).intval = (yyvsp[0].intval);
             }
#line 2381 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 50:
#line 575 "javaa.y" /* yacc.c:1663  */
    {(yyval.argtype).type = FLOATCONSTANT;
              (yyval.argtype).floatval = (yyvsp[0].floatval);
             }
#line 2389 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 51:
#line 579 "javaa.y" /* yacc.c:1663  */
    {(yyval.argtype).type = LONGCONSTANT;
              (yyval.argtype).longval = (yyvsp[0].longval);
             }
#line 2397 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 52:
#line 583 "javaa.y" /* yacc.c:1663  */
    {(yyval.argtype).type = DOUBLECONSTANT;
              (yyval.argtype).doubleval = (yyvsp[0].doubleval);
             }
#line 2405 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 53:
#line 587 "javaa.y" /* yacc.c:1663  */
    {(yyval.argtype).type = 0;
             }
#line 2412 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 54:
#line 593 "javaa.y" /* yacc.c:1663  */
    { (yyval.intval) = (yyvsp[-3].intval) | (yyvsp[-2].intval) | (yyvsp[-1].intval) | (yyvsp[0].intval) ;}
#line 2418 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 56:
#line 598 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2424 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 57:
#line 602 "javaa.y" /* yacc.c:1663  */
    {NewNewMethod((yyvsp[-1].intval)|(yyvsp[0].intval));}
#line 2430 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 58:
#line 607 "javaa.y" /* yacc.c:1663  */
    {
        char* tmpstr;
        /*message("Calling NewMethod.");*/
        tmpstr = ConsStrings("(",ConsStrings((yyvsp[-5].string),ConsStrings(")",(yyvsp[-8].string))));
        /*message(tmpstr);*/
        NewMethod((yyvsp[-7].string), tmpstr, (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2441 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 59:
#line 619 "javaa.y" /* yacc.c:1663  */
    {EndMethod();}
#line 2447 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 60:
#line 624 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2453 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 61:
#line 625 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2459 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 62:
#line 630 "javaa.y" /* yacc.c:1663  */
    {AddToThrowsList((yyvsp[0].string));}
#line 2465 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 63:
#line 632 "javaa.y" /* yacc.c:1663  */
    {AddToThrowsList((yyvsp[0].string));}
#line 2471 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 64:
#line 637 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = (yyvsp[0].intval);}
#line 2477 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 65:
#line 638 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval) = -1;}
#line 2483 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 66:
#line 643 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = (yyvsp[0].string); }
#line 2489 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 67:
#line 645 "javaa.y" /* yacc.c:1663  */
    { char* tempstring;
              tempstring = (char *) malloc(sizeof(char) * (strlen("B")+1));
              strcpy(tempstring,"V");
              (yyval.string) = tempstring;
        }
#line 2499 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 68:
#line 654 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = (yyvsp[0].string);}
#line 2505 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 69:
#line 655 "javaa.y" /* yacc.c:1663  */
    {(yyval.string) = NULL;}
#line 2511 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 70:
#line 659 "javaa.y" /* yacc.c:1663  */
    {
          /*message("in arguments with comma.");*/
          (yyval.string) = ConsStrings((yyvsp[-2].string),(yyvsp[0].string));
        }
#line 2520 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 71:
#line 664 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = (yyvsp[0].string); /*message("in arguments");*/}
#line 2526 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 72:
#line 670 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = (yyvsp[0].string);}
#line 2532 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 73:
#line 671 "javaa.y" /* yacc.c:1663  */
    {(yyval.string) = NULL;}
#line 2538 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 74:
#line 675 "javaa.y" /* yacc.c:1663  */
    {
          /*message("in arguments with comma.");*/
          (yyval.string) = ConsStrings((yyvsp[-2].string),(yyvsp[0].string));
        }
#line 2547 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 75:
#line 680 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = (yyvsp[0].string); /*message("in arguments");*/}
#line 2553 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 76:
#line 683 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = (yyvsp[0].string);
          /*message("calling IncrementLocalVarSlot");*/
          IncrementLocalVarSlot((yyvsp[0].string)); /*message("in methodargument");*/}
#line 2561 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 77:
#line 687 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = (yyvsp[-1].string); NewLocalVar((yyvsp[0].string), (yyvsp[-1].string));/*message("in methodargument");*/}
#line 2567 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 78:
#line 692 "javaa.y" /* yacc.c:1663  */
    {
          /*message("In type.");*/
          (yyval.string) = ConsStrings((yyvsp[0].string),(yyvsp[-1].string));
        }
#line 2576 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 79:
#line 699 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = ConsStrings("B",""); }
#line 2582 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 80:
#line 701 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = ConsStrings("C",""); }
#line 2588 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 81:
#line 703 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = ConsStrings("D",""); }
#line 2594 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 82:
#line 705 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = ConsStrings("F",""); }
#line 2600 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 83:
#line 707 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = ConsStrings("I",""); }
#line 2606 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 84:
#line 709 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = ConsStrings("J",""); }
#line 2612 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 85:
#line 711 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = ConsStrings("S",""); }
#line 2618 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 86:
#line 713 "javaa.y" /* yacc.c:1663  */
    { (yyval.string) = ConsStrings("Z",""); }
#line 2624 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 87:
#line 715 "javaa.y" /* yacc.c:1663  */
    {
         (yyval.string) = ConsStrings("L", ConsStrings((yyvsp[0].string),";"));
         /*message($$);*/
         /*message("Got classname.");*/}
#line 2633 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 88:
#line 723 "javaa.y" /* yacc.c:1663  */
    {(yyval.string) = ConsStrings("[",(yyvsp[0].string));}
#line 2639 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 89:
#line 724 "javaa.y" /* yacc.c:1663  */
    {(yyval.string)=NULL;}
#line 2645 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 90:
#line 730 "javaa.y" /* yacc.c:1663  */
    { (yyval.intval) = (yyvsp[-4].intval) | (yyvsp[-3].intval) | (yyvsp[-2].intval) | (yyvsp[-1].intval) | (yyvsp[0].intval);}
#line 2651 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 91:
#line 734 "javaa.y" /* yacc.c:1663  */
    {NewLocalVar((yyvsp[0].string), (yyvsp[-1].string));}
#line 2657 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 92:
#line 739 "javaa.y" /* yacc.c:1663  */
    {(yyval.string) = (yyvsp[0].string);}
#line 2663 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 93:
#line 741 "javaa.y" /* yacc.c:1663  */
    {(yyval.string) = ConsStrings("[",ConsStrings((yyvsp[0].string),(yyvsp[-3].string)));}
#line 2669 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 94:
#line 746 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2675 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 95:
#line 750 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2681 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 96:
#line 752 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2687 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 97:
#line 756 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2693 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 98:
#line 758 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2699 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 99:
#line 760 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2705 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 100:
#line 762 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 2711 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 101:
#line 766 "javaa.y" /* yacc.c:1663  */
    {DefineLabel((yyvsp[0].string));}
#line 2717 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 102:
#line 770 "javaa.y" /* yacc.c:1663  */
    {GenNoArgCode((yyvsp[0].intval));
        }
#line 2724 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 103:
#line 773 "javaa.y" /* yacc.c:1663  */
    {GenOneArgCode((yyvsp[-1].intval), (yyvsp[0].argtype));
        }
#line 2731 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 104:
#line 776 "javaa.y" /* yacc.c:1663  */
    {GenFieldArgCode((yyvsp[-2].intval), (yyvsp[0].classfieldmethodstruct).classname, (yyvsp[0].classfieldmethodstruct).fieldmethodname, (yyvsp[-1].string));
        }
#line 2738 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 105:
#line 780 "javaa.y" /* yacc.c:1663  */
    {GenMethodArgCode((yyvsp[-5].intval), (yyvsp[-3].classfieldmethodstruct).classname, (yyvsp[-3].classfieldmethodstruct).fieldmethodname,
                     ConsStrings("(",ConsStrings((yyvsp[-1].string),
                   ConsStrings(")",(yyvsp[-4].string)))));
        }
#line 2747 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 106:
#line 785 "javaa.y" /* yacc.c:1663  */
    {GenClassArgCode((yyvsp[-1].intval), (yyvsp[0].string));
        }
#line 2754 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 107:
#line 788 "javaa.y" /* yacc.c:1663  */
    {GenClassArgCode((yyvsp[-1].Rk).terminal, (yyvsp[0].string));
        }
#line 2761 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 108:
#line 792 "javaa.y" /* yacc.c:1663  */
    {GenINVOKEINTERFACECode((yyvsp[-6].Rk).terminal, (yyvsp[-4].classfieldmethodstruct).classname,
                 (yyvsp[-4].classfieldmethodstruct).fieldmethodname,
                     ConsStrings("(",ConsStrings((yyvsp[-2].string),
                   ConsStrings(")",(yyvsp[-5].string)))), (yyvsp[0].intval));
        }
#line 2771 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 109:
#line 798 "javaa.y" /* yacc.c:1663  */
    {GenLabelArgCode((yyvsp[-1].intval), (yyvsp[0].string));
        }
#line 2778 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 110:
#line 801 "javaa.y" /* yacc.c:1663  */
    {GenLocalVarArgCode((yyvsp[-1].intval),(yyvsp[0].intval));
        }
#line 2785 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 111:
#line 804 "javaa.y" /* yacc.c:1663  */
    {GenIINCCode((yyvsp[-2].Rk).terminal,(yyvsp[-1].intval),(yyvsp[0].intval));
        }
#line 2792 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 112:
#line 807 "javaa.y" /* yacc.c:1663  */
    {GenLOOKUPSWITCHCode((yyvsp[-5].Rk).terminal,(yyvsp[-3].string),(yyvsp[-1].lookuplistptr));
        }
#line 2799 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 113:
#line 811 "javaa.y" /* yacc.c:1663  */
    {GenTABLESWITCHCode((yyvsp[-8].Rk).terminal,(yyvsp[-7].intval),(yyvsp[-5].intval),(yyvsp[-3].string),(yyvsp[-1].tablelistptr));
        }
#line 2806 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 114:
#line 814 "javaa.y" /* yacc.c:1663  */
    {GenMULTIANEWARRAYCode((yyvsp[-2].Rk).terminal,(yyvsp[-1].string),(yyvsp[0].intval));
        }
#line 2813 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 115:
#line 817 "javaa.y" /* yacc.c:1663  */
    {GenNEWARRAYCode((yyvsp[-1].Rk).terminal,(yyvsp[0].intval));
        }
#line 2820 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 116:
#line 822 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2826 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 117:
#line 824 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2832 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 118:
#line 826 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2838 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 119:
#line 828 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2844 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 120:
#line 830 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2850 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 121:
#line 832 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2856 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 122:
#line 834 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2862 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 123:
#line 836 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2868 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 124:
#line 838 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2874 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 125:
#line 840 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2880 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 126:
#line 842 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2886 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 127:
#line 844 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2892 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 128:
#line 846 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2898 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 129:
#line 848 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2904 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 130:
#line 850 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2910 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 131:
#line 852 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2916 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 132:
#line 854 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2922 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 133:
#line 856 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2928 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 134:
#line 858 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2934 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 135:
#line 860 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2940 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 136:
#line 862 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2946 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 137:
#line 864 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2952 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 138:
#line 866 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2958 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 139:
#line 868 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2964 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 140:
#line 870 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2970 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 141:
#line 872 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2976 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 142:
#line 874 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2982 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 143:
#line 876 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2988 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 144:
#line 878 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 2994 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 145:
#line 880 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3000 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 146:
#line 882 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3006 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 147:
#line 884 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3012 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 148:
#line 886 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3018 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 149:
#line 888 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3024 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 150:
#line 890 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3030 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 151:
#line 892 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3036 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 152:
#line 894 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3042 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 153:
#line 896 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3048 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 154:
#line 898 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3054 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 155:
#line 900 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3060 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 156:
#line 902 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3066 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 157:
#line 904 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3072 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 158:
#line 906 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3078 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 159:
#line 908 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3084 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 160:
#line 910 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3090 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 161:
#line 912 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3096 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 162:
#line 914 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3102 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 163:
#line 916 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3108 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 164:
#line 918 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3114 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 165:
#line 920 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3120 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 166:
#line 922 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3126 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 167:
#line 924 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3132 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 168:
#line 926 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3138 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 169:
#line 928 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3144 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 170:
#line 930 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3150 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 171:
#line 932 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3156 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 172:
#line 934 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3162 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 173:
#line 936 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3168 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 174:
#line 938 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3174 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 175:
#line 940 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3180 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 176:
#line 942 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3186 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 177:
#line 944 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3192 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 178:
#line 946 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3198 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 179:
#line 948 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3204 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 180:
#line 950 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3210 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 181:
#line 952 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3216 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 182:
#line 954 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3222 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 183:
#line 956 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3228 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 184:
#line 958 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3234 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 185:
#line 960 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3240 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 186:
#line 962 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3246 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 187:
#line 964 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3252 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 188:
#line 966 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3258 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 189:
#line 968 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3264 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 190:
#line 970 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3270 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 191:
#line 972 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3276 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 192:
#line 974 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3282 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 193:
#line 976 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3288 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 194:
#line 978 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3294 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 195:
#line 980 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3300 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 196:
#line 982 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3306 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 197:
#line 984 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3312 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 198:
#line 986 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3318 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 199:
#line 988 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3324 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 200:
#line 990 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3330 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 201:
#line 992 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3336 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 202:
#line 994 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3342 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 203:
#line 996 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3348 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 204:
#line 998 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3354 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 205:
#line 1000 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3360 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 206:
#line 1002 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3366 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 207:
#line 1004 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3372 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 208:
#line 1006 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3378 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 209:
#line 1008 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3384 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 210:
#line 1010 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3390 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 211:
#line 1012 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3396 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 212:
#line 1014 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3402 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 213:
#line 1016 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3408 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 214:
#line 1018 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3414 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 215:
#line 1020 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3420 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 216:
#line 1022 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3426 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 217:
#line 1024 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3432 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 218:
#line 1026 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3438 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 219:
#line 1028 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3444 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 220:
#line 1030 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3450 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 221:
#line 1032 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3456 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 222:
#line 1034 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3462 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 223:
#line 1036 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3468 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 224:
#line 1038 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3474 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 225:
#line 1040 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3480 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 226:
#line 1042 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3486 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 227:
#line 1044 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3492 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 228:
#line 1046 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3498 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 229:
#line 1048 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3504 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 230:
#line 1050 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3510 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 231:
#line 1052 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3516 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 232:
#line 1054 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3522 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 233:
#line 1056 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3528 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 234:
#line 1058 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3534 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 235:
#line 1060 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3540 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 236:
#line 1062 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3546 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 237:
#line 1064 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3552 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 238:
#line 1066 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3558 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 239:
#line 1068 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3564 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 240:
#line 1070 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3570 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 241:
#line 1072 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3576 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 242:
#line 1074 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3582 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 243:
#line 1076 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3588 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 244:
#line 1078 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3594 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 245:
#line 1080 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3600 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 246:
#line 1082 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3606 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 247:
#line 1084 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3612 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 248:
#line 1086 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3618 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 249:
#line 1088 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3624 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 250:
#line 1090 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3630 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 251:
#line 1092 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3636 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 252:
#line 1094 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3642 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 253:
#line 1096 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3648 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 254:
#line 1098 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3654 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 255:
#line 1100 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3660 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 256:
#line 1102 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3666 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 257:
#line 1104 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3672 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 258:
#line 1106 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3678 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 259:
#line 1108 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3684 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 260:
#line 1110 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3690 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 261:
#line 1112 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3696 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 262:
#line 1114 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3702 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 263:
#line 1116 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3708 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 264:
#line 1120 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3714 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 265:
#line 1122 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3720 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 266:
#line 1124 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3726 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 267:
#line 1126 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3732 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 268:
#line 1128 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3738 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 269:
#line 1134 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3744 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 270:
#line 1136 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3750 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 271:
#line 1138 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3756 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 272:
#line 1143 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3762 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 273:
#line 1145 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3768 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 274:
#line 1147 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3774 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 275:
#line 1149 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3780 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 276:
#line 1154 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3786 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 277:
#line 1156 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3792 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 278:
#line 1158 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3798 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 279:
#line 1162 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3804 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 280:
#line 1164 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3810 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 281:
#line 1166 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3816 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 282:
#line 1168 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3822 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 283:
#line 1170 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3828 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 284:
#line 1172 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3834 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 285:
#line 1174 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3840 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 286:
#line 1176 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3846 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 287:
#line 1178 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3852 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 288:
#line 1180 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3858 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 289:
#line 1182 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3864 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 290:
#line 1184 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3870 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 291:
#line 1186 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3876 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 292:
#line 1188 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3882 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 293:
#line 1190 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3888 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 294:
#line 1192 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3894 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 295:
#line 1194 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3900 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 296:
#line 1196 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3906 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 297:
#line 1198 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3912 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 298:
#line 1200 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3918 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 299:
#line 1205 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3924 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 300:
#line 1207 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3930 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 301:
#line 1209 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3936 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 302:
#line 1211 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3942 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 303:
#line 1213 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3948 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 304:
#line 1215 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3954 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 305:
#line 1217 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3960 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 306:
#line 1219 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3966 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 307:
#line 1221 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3972 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 308:
#line 1223 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3978 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 309:
#line 1225 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3984 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 310:
#line 1227 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3990 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 311:
#line 1229 "javaa.y" /* yacc.c:1663  */
    {(yyval.intval)=(yyvsp[0].Rk).terminal;}
#line 3996 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 312:
#line 1233 "javaa.y" /* yacc.c:1663  */
    { (yyval.intval) = (yyvsp[0].intval);}
#line 4002 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 313:
#line 1235 "javaa.y" /* yacc.c:1663  */
    { (yyval.intval) = GetLocalVar((yyvsp[0].string));}
#line 4008 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 314:
#line 1239 "javaa.y" /* yacc.c:1663  */
    { (yyval.lookuplistptr) = AddToLookupList((yyvsp[0].lookuplistptr),(yyvsp[-3].intval),(yyvsp[-1].string)); }
#line 4014 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 315:
#line 1240 "javaa.y" /* yacc.c:1663  */
    {(yyval.lookuplistptr) = NULL;}
#line 4020 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 316:
#line 1244 "javaa.y" /* yacc.c:1663  */
    { (yyval.tablelistptr) = AddToTableList((yyvsp[0].tablelistptr),(yyvsp[-1].string)); }
#line 4026 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 317:
#line 1245 "javaa.y" /* yacc.c:1663  */
    {(yyval.tablelistptr) = NULL;}
#line 4032 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 318:
#line 1250 "javaa.y" /* yacc.c:1663  */
    { (yyval.intval) = 4;}
#line 4038 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 319:
#line 1252 "javaa.y" /* yacc.c:1663  */
    { (yyval.intval) = 5;}
#line 4044 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 320:
#line 1254 "javaa.y" /* yacc.c:1663  */
    { (yyval.intval) = 6;}
#line 4050 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 321:
#line 1256 "javaa.y" /* yacc.c:1663  */
    { (yyval.intval) = 7;}
#line 4056 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 322:
#line 1258 "javaa.y" /* yacc.c:1663  */
    { (yyval.intval) = 8;}
#line 4062 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 323:
#line 1260 "javaa.y" /* yacc.c:1663  */
    { (yyval.intval) = 9;}
#line 4068 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 324:
#line 1262 "javaa.y" /* yacc.c:1663  */
    { (yyval.intval) = 10;}
#line 4074 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 325:
#line 1264 "javaa.y" /* yacc.c:1663  */
    { (yyval.intval) = 11;}
#line 4080 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 326:
#line 1268 "javaa.y" /* yacc.c:1663  */
    {(yyval.argtype).type = IDENTIFIER;
              (yyval.argtype).stringval = (yyvsp[0].string);
             }
#line 4088 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 327:
#line 1272 "javaa.y" /* yacc.c:1663  */
    {(yyval.argtype).type = INTCONSTANT;
              (yyval.argtype).intval = (yyvsp[0].intval);
             }
#line 4096 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 328:
#line 1276 "javaa.y" /* yacc.c:1663  */
    {(yyval.argtype).type = LONGCONSTANT;
              (yyval.argtype).longval = (yyvsp[0].longval);
             }
#line 4104 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 329:
#line 1280 "javaa.y" /* yacc.c:1663  */
    {(yyval.argtype).type = STRING_LITERAL;
              (yyval.argtype).stringval = (yyvsp[0].string);
             }
#line 4112 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 330:
#line 1284 "javaa.y" /* yacc.c:1663  */
    {(yyval.argtype).type = FLOATCONSTANT;
              (yyval.argtype).floatval = (yyvsp[0].floatval);
          /*message("got a float constant.");*/
             }
#line 4121 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 331:
#line 1289 "javaa.y" /* yacc.c:1663  */
    {(yyval.argtype).type = DOUBLECONSTANT;
              (yyval.argtype).doubleval = (yyvsp[0].doubleval);
          /*message("got a double constant.");*/
             }
#line 4130 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 332:
#line 1297 "javaa.y" /* yacc.c:1663  */
    { break; }
#line 4136 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 333:
#line 1298 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 4142 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 334:
#line 1302 "javaa.y" /* yacc.c:1663  */
    { AddToExceptionList((yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string)); }
#line 4148 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 335:
#line 1304 "javaa.y" /* yacc.c:1663  */
    {
          if ((yyvsp[0].intval) != 0) oops("Must have a class name or 0 here.");
              AddToExceptionList((yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),NULL);
        }
#line 4157 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 336:
#line 1308 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 4163 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 337:
#line 1313 "javaa.y" /* yacc.c:1663  */
    { break; }
#line 4169 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 338:
#line 1314 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 4175 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 339:
#line 1318 "javaa.y" /* yacc.c:1663  */
    { AddToLineNumberList((yyvsp[-1].string),(yyvsp[0].intval)); }
#line 4181 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 340:
#line 1319 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 4187 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 341:
#line 1324 "javaa.y" /* yacc.c:1663  */
    { break; }
#line 4193 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 342:
#line 1325 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 4199 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 343:
#line 1330 "javaa.y" /* yacc.c:1663  */
    { AddToUserLocalVarList((yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].intval)); }
#line 4205 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 344:
#line 1331 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 4211 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 345:
#line 1336 "javaa.y" /* yacc.c:1663  */
    { SetSourceFile((yyvsp[0].string)); }
#line 4217 "javaa.tab.c" /* yacc.c:1663  */
    break;

  case 346:
#line 1337 "javaa.y" /* yacc.c:1663  */
    {break;}
#line 4223 "javaa.tab.c" /* yacc.c:1663  */
    break;


#line 4227 "javaa.tab.c" /* yacc.c:1663  */
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
#line 1339 "javaa.y" /* yacc.c:1907  */

