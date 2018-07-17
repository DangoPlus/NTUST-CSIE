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
#line 11 "parser-lalr.y" /* yacc.c:339  */

#include "parser-lalr-main.c"
#define YYERROR_VERBOSE
#define YYSTYPE struct node *
struct node;
extern int yylex();
extern void yyerror(char const *s);
extern struct node *mk_node(char const *name, int n, ...);
extern struct node *mk_atom(char *text);
extern struct node *mk_none();
extern struct node *ext_node(struct node *nd, int n, ...);
extern void push_back(char c);
extern char *yytext;

#line 81 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    SHL = 258,
    SHR = 259,
    LE = 260,
    EQEQ = 261,
    NE = 262,
    GE = 263,
    ANDAND = 264,
    OROR = 265,
    SHLEQ = 266,
    SHREQ = 267,
    MINUSEQ = 268,
    ANDEQ = 269,
    OREQ = 270,
    PLUSEQ = 271,
    STAREQ = 272,
    SLASHEQ = 273,
    CARETEQ = 274,
    PERCENTEQ = 275,
    DOTDOT = 276,
    DOTDOTDOT = 277,
    MOD_SEP = 278,
    RARROW = 279,
    LARROW = 280,
    FAT_ARROW = 281,
    LIT_BYTE = 282,
    LIT_CHAR = 283,
    LIT_INTEGER = 284,
    LIT_FLOAT = 285,
    LIT_STR = 286,
    LIT_STR_RAW = 287,
    LIT_BYTE_STR = 288,
    LIT_BYTE_STR_RAW = 289,
    IDENT = 290,
    UNDERSCORE = 291,
    LIFETIME = 292,
    SELF = 293,
    STATIC = 294,
    ABSTRACT = 295,
    ALIGNOF = 296,
    AS = 297,
    BECOME = 298,
    BREAK = 299,
    CATCH = 300,
    CRATE = 301,
    DO = 302,
    ELSE = 303,
    ENUM = 304,
    EXTERN = 305,
    FALSE = 306,
    FINAL = 307,
    FN = 308,
    FOR = 309,
    IF = 310,
    IMPL = 311,
    IN = 312,
    LET = 313,
    LOOP = 314,
    MACRO = 315,
    MATCH = 316,
    MOD = 317,
    MOVE = 318,
    MUT = 319,
    OFFSETOF = 320,
    OVERRIDE = 321,
    PRIV = 322,
    PUB = 323,
    PURE = 324,
    REF = 325,
    RETURN = 326,
    SIZEOF = 327,
    STRUCT = 328,
    SUPER = 329,
    UNION = 330,
    UNSIZED = 331,
    TRUE = 332,
    TRAIT = 333,
    TYPE = 334,
    UNSAFE = 335,
    VIRTUAL = 336,
    YIELD = 337,
    DEFAULT = 338,
    USE = 339,
    WHILE = 340,
    CONTINUE = 341,
    PROC = 342,
    BOX = 343,
    CONST = 344,
    WHERE = 345,
    TYPEOF = 346,
    INNER_DOC_COMMENT = 347,
    OUTER_DOC_COMMENT = 348,
    SHEBANG = 349,
    SHEBANG_LINE = 350,
    STATIC_LIFETIME = 351,
    LAMBDA = 352,
    SHIFTPLUS = 353,
    FORTYPE = 354,
    RANGE = 355
  };
#endif
/* Tokens.  */
#define SHL 258
#define SHR 259
#define LE 260
#define EQEQ 261
#define NE 262
#define GE 263
#define ANDAND 264
#define OROR 265
#define SHLEQ 266
#define SHREQ 267
#define MINUSEQ 268
#define ANDEQ 269
#define OREQ 270
#define PLUSEQ 271
#define STAREQ 272
#define SLASHEQ 273
#define CARETEQ 274
#define PERCENTEQ 275
#define DOTDOT 276
#define DOTDOTDOT 277
#define MOD_SEP 278
#define RARROW 279
#define LARROW 280
#define FAT_ARROW 281
#define LIT_BYTE 282
#define LIT_CHAR 283
#define LIT_INTEGER 284
#define LIT_FLOAT 285
#define LIT_STR 286
#define LIT_STR_RAW 287
#define LIT_BYTE_STR 288
#define LIT_BYTE_STR_RAW 289
#define IDENT 290
#define UNDERSCORE 291
#define LIFETIME 292
#define SELF 293
#define STATIC 294
#define ABSTRACT 295
#define ALIGNOF 296
#define AS 297
#define BECOME 298
#define BREAK 299
#define CATCH 300
#define CRATE 301
#define DO 302
#define ELSE 303
#define ENUM 304
#define EXTERN 305
#define FALSE 306
#define FINAL 307
#define FN 308
#define FOR 309
#define IF 310
#define IMPL 311
#define IN 312
#define LET 313
#define LOOP 314
#define MACRO 315
#define MATCH 316
#define MOD 317
#define MOVE 318
#define MUT 319
#define OFFSETOF 320
#define OVERRIDE 321
#define PRIV 322
#define PUB 323
#define PURE 324
#define REF 325
#define RETURN 326
#define SIZEOF 327
#define STRUCT 328
#define SUPER 329
#define UNION 330
#define UNSIZED 331
#define TRUE 332
#define TRAIT 333
#define TYPE 334
#define UNSAFE 335
#define VIRTUAL 336
#define YIELD 337
#define DEFAULT 338
#define USE 339
#define WHILE 340
#define CONTINUE 341
#define PROC 342
#define BOX 343
#define CONST 344
#define WHERE 345
#define TYPEOF 346
#define INNER_DOC_COMMENT 347
#define OUTER_DOC_COMMENT 348
#define SHEBANG 349
#define SHEBANG_LINE 350
#define STATIC_LIFETIME 351
#define LAMBDA 352
#define SHIFTPLUS 353
#define FORTYPE 354
#define RANGE 355

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 332 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  128
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  213
/* YYNRULES -- Number of rules.  */
#define YYNRULES  917
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1646

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   355

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   113,     2,   120,   127,   112,   107,     2,
     116,   121,   110,   108,   122,   109,   117,   111,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,   123,
     103,   102,   104,   101,   125,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   115,     2,   119,   106,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   114,   105,   124,   126,     2,     2,     2,
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
      95,    96,    97,    98,   100,   118
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   221,   221,   222,   226,   227,   231,   232,   236,   237,
     241,   242,   246,   247,   251,   252,   256,   257,   261,   262,
     263,   264,   268,   269,   270,   274,   275,   279,   280,   284,
     288,   293,   294,   299,   300,   301,   302,   303,   307,   308,
     312,   316,   317,   318,   322,   323,   324,   325,   329,   333,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   366,   367,   371,   372,   377,   381,   385,
     392,   393,   397,   398,   402,   403,   404,   408,   412,   413,
     414,   418,   423,   424,   428,   429,   430,   434,   438,   439,
     440,   441,   442,   447,   448,   451,   452,   453,   457,   458,
     462,   463,   467,   468,   472,   473,   477,   478,   479,   483,
     487,   491,   495,   496,   497,   498,   502,   503,   507,   508,
     509,   513,   514,   518,   522,   523,   524,   528,   535,   536,
     540,   541,   545,   546,   547,   548,   552,   556,   557,   561,
     565,   566,   570,   571,   572,   573,   576,   577,   581,   585,
     589,   596,   600,   604,   611,   615,   619,   641,   645,   649,
     653,   657,   661,   668,   669,   673,   674,   678,   679,   680,
     681,   685,   686,   690,   694,   698,   702,   709,   713,   717,
     724,   728,   732,   736,   740,   741,   745,   746,   747,   748,
     752,   753,   754,   755,   759,   760,   761,   765,   766,   770,
     774,   775,   779,   783,   784,   785,   786,   790,   791,   792,
     793,   797,   798,   799,   803,   804,   810,   811,   815,   816,
     817,   821,   822,   823,   824,   825,   826,   827,   831,   832,
     833,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   854,   855,   859,   860,   864,
     865,   869,   870,   874,   875,   878,   879,   887,   888,   889,
     890,   891,   892,   893,   908,   910,   912,   914,   916,   918,
     923,   924,   925,   926,   931,   932,   933,   934,   938,   942,
     943,   944,   945,   946,   947,   951,   952,   960,   961,   962,
     963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   985,   986,   990,   991,
     992,   996,   997,   998,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1012,  1013,  1017,  1018,  1019,  1020,  1021,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1039,
    1040,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,
    1053,  1054,  1055,  1059,  1060,  1068,  1069,  1070,  1071,  1072,
    1073,  1074,  1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,
    1086,  1087,  1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,
    1096,  1097,  1101,  1102,  1103,  1104,  1108,  1112,  1113,  1114,
    1115,  1119,  1123,  1124,  1125,  1129,  1130,  1134,  1135,  1136,
    1140,  1144,  1151,  1152,  1156,  1157,  1158,  1162,  1163,  1167,
    1168,  1172,  1173,  1177,  1178,  1182,  1183,  1187,  1188,  1192,
    1193,  1197,  1198,  1202,  1203,  1204,  1205,  1209,  1210,  1214,
    1218,  1219,  1223,  1225,  1229,  1230,  1234,  1235,  1239,  1241,
    1245,  1246,  1250,  1251,  1255,  1256,  1257,  1261,  1262,  1266,
    1267,  1271,  1272,  1276,  1277,  1285,  1289,  1293,  1294,  1295,
    1296,  1324,  1325,  1329,  1330,  1331,  1332,  1333,  1334,  1335,
    1336,  1337,  1338,  1342,  1343,  1344,  1348,  1349,  1353,  1354,
    1358,  1359,  1360,  1369,  1370,  1371,  1372,  1373,  1378,  1379,
    1383,  1384,  1386,  1387,  1388,  1389,  1390,  1391,  1392,  1393,
    1394,  1395,  1396,  1397,  1398,  1399,  1400,  1401,  1402,  1403,
    1404,  1405,  1406,  1407,  1408,  1409,  1410,  1411,  1412,  1413,
    1414,  1415,  1416,  1417,  1418,  1419,  1420,  1421,  1422,  1423,
    1424,  1425,  1426,  1427,  1428,  1429,  1430,  1431,  1432,  1433,
    1434,  1435,  1436,  1437,  1438,  1439,  1440,  1441,  1445,  1446,
    1448,  1449,  1450,  1451,  1452,  1453,  1454,  1455,  1456,  1457,
    1458,  1459,  1460,  1461,  1462,  1463,  1464,  1465,  1466,  1467,
    1468,  1469,  1470,  1471,  1472,  1473,  1474,  1475,  1476,  1477,
    1478,  1479,  1480,  1481,  1482,  1483,  1484,  1485,  1486,  1487,
    1488,  1489,  1490,  1491,  1492,  1493,  1494,  1495,  1496,  1497,
    1498,  1499,  1500,  1501,  1502,  1503,  1504,  1505,  1509,  1510,
    1512,  1513,  1514,  1515,  1516,  1517,  1518,  1519,  1520,  1521,
    1522,  1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,  1531,
    1532,  1533,  1534,  1535,  1536,  1537,  1538,  1539,  1540,  1541,
    1542,  1543,  1544,  1545,  1546,  1547,  1548,  1549,  1550,  1551,
    1552,  1553,  1554,  1555,  1556,  1557,  1558,  1559,  1560,  1561,
    1562,  1563,  1564,  1565,  1566,  1567,  1568,  1572,  1573,  1574,
    1575,  1576,  1577,  1578,  1582,  1583,  1584,  1585,  1586,  1587,
    1588,  1592,  1596,  1600,  1604,  1608,  1614,  1615,  1619,  1620,
    1624,  1626,  1628,  1630,  1635,  1637,  1639,  1644,  1646,  1648,
    1650,  1655,  1657,  1659,  1664,  1665,  1669,  1670,  1671,  1672,
    1676,  1677,  1678,  1682,  1683,  1687,  1688,  1689,  1693,  1697,
    1698,  1699,  1700,  1701,  1702,  1703,  1704,  1705,  1709,  1710,
    1714,  1715,  1716,  1717,  1718,  1719,  1720,  1721,  1725,  1726,
    1727,  1728,  1732,  1733,  1737,  1738,  1739,  1743,  1744,  1748,
    1749,  1753,  1754,  1758,  1759,  1763,  1764,  1768,  1769,  1770,
    1774,  1778,  1782,  1786,  1790,  1791,  1795,  1803,  1804,  1805,
    1806,  1807,  1808,  1809,  1813,  1814,  1815,  1816,  1820,  1821,
    1825,  1827,  1828,  1829,  1833,  1834,  1835,  1836,  1837,  1838,
    1839,  1840,  1841,  1842,  1843,  1844,  1845,  1846,  1847,  1848,
    1849,  1850,  1851,  1852,  1853,  1854,  1855,  1856,  1857,  1858,
    1859,  1860,  1861,  1862,  1863,  1864,  1865,  1866,  1867,  1868,
    1869,  1870,  1871,  1872,  1873,  1874,  1875,  1876,  1877,  1878,
    1879,  1880,  1881,  1882,  1883,  1884,  1885,  1886,  1887,  1888,
    1889,  1890,  1891,  1892,  1893,  1894,  1895,  1896,  1897,  1898,
    1899,  1900,  1901,  1902,  1903,  1904,  1905,  1906,  1907,  1908,
    1909,  1910,  1911,  1912,  1913,  1914,  1915,  1916,  1917,  1918,
    1919,  1920,  1921,  1922,  1923,  1924,  1925,  1926,  1927,  1928,
    1929,  1930,  1931,  1932,  1933,  1934,  1935,  1936,  1937,  1938,
    1939,  1940,  1941,  1942,  1943,  1944,  1945,  1946,  1950,  1951,
    1955,  1956,  1960,  1961,  1962,  1966,  1976,  1986
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SHL", "SHR", "LE", "EQEQ", "NE", "GE",
  "ANDAND", "OROR", "SHLEQ", "SHREQ", "MINUSEQ", "ANDEQ", "OREQ", "PLUSEQ",
  "STAREQ", "SLASHEQ", "CARETEQ", "PERCENTEQ", "DOTDOT", "DOTDOTDOT",
  "MOD_SEP", "RARROW", "LARROW", "FAT_ARROW", "LIT_BYTE", "LIT_CHAR",
  "LIT_INTEGER", "LIT_FLOAT", "LIT_STR", "LIT_STR_RAW", "LIT_BYTE_STR",
  "LIT_BYTE_STR_RAW", "IDENT", "UNDERSCORE", "LIFETIME", "SELF", "STATIC",
  "ABSTRACT", "ALIGNOF", "AS", "BECOME", "BREAK", "CATCH", "CRATE", "DO",
  "ELSE", "ENUM", "EXTERN", "FALSE", "FINAL", "FN", "FOR", "IF", "IMPL",
  "IN", "LET", "LOOP", "MACRO", "MATCH", "MOD", "MOVE", "MUT", "OFFSETOF",
  "OVERRIDE", "PRIV", "PUB", "PURE", "REF", "RETURN", "SIZEOF", "STRUCT",
  "SUPER", "UNION", "UNSIZED", "TRUE", "TRAIT", "TYPE", "UNSAFE",
  "VIRTUAL", "YIELD", "DEFAULT", "USE", "WHILE", "CONTINUE", "PROC", "BOX",
  "CONST", "WHERE", "TYPEOF", "INNER_DOC_COMMENT", "OUTER_DOC_COMMENT",
  "SHEBANG", "SHEBANG_LINE", "STATIC_LIFETIME", "LAMBDA", "SHIFTPLUS",
  "':'", "FORTYPE", "'?'", "'='", "'<'", "'>'", "'|'", "'^'", "'&'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "'{'", "'['", "'('", "'.'", "RANGE",
  "']'", "'#'", "')'", "','", "';'", "'}'", "'@'", "'~'", "'$'", "$accept",
  "crate", "maybe_shebang", "maybe_inner_attrs", "inner_attrs",
  "inner_attr", "maybe_outer_attrs", "outer_attrs", "outer_attr",
  "meta_item", "meta_seq", "maybe_mod_items", "mod_items", "attrs_and_vis",
  "mod_item", "item", "stmt_item", "item_static", "item_const",
  "item_macro", "view_item", "extern_fn_item", "use_item", "view_path",
  "block_item", "maybe_ty_ascription", "maybe_init_expr", "item_struct",
  "struct_decl_args", "struct_tuple_args", "struct_decl_fields",
  "struct_decl_field", "struct_tuple_fields", "struct_tuple_field",
  "item_enum", "enum_defs", "enum_def", "enum_args", "item_union",
  "item_mod", "item_foreign_mod", "maybe_abi", "maybe_foreign_items",
  "foreign_items", "foreign_item", "item_foreign_static",
  "item_foreign_fn", "fn_decl_allow_variadic", "fn_params_allow_variadic",
  "visibility", "idents_or_self", "ident_or_self", "item_type",
  "for_sized", "item_trait", "maybe_trait_items", "trait_items",
  "trait_item", "trait_const", "maybe_const_default", "trait_type",
  "maybe_unsafe", "maybe_default_maybe_unsafe", "trait_method",
  "type_method", "method", "impl_method", "item_impl", "maybe_impl_items",
  "impl_items", "impl_item", "maybe_default", "impl_const", "impl_type",
  "item_fn", "item_unsafe_fn", "fn_decl", "fn_decl_with_self",
  "fn_decl_with_self_allow_anon_params", "fn_params", "fn_anon_params",
  "fn_params_with_self", "fn_anon_params_with_self", "maybe_params",
  "params", "param", "inferrable_params", "inferrable_param",
  "maybe_comma_params", "maybe_comma_anon_params", "maybe_anon_params",
  "anon_params", "anon_param", "anon_params_allow_variadic_tail",
  "named_arg", "ret_ty", "generic_params", "maybe_where_clause",
  "where_clause", "where_predicates", "where_predicate",
  "maybe_for_lifetimes", "ty_params", "path_no_types_allowed",
  "path_generic_args_without_colons", "generic_args", "generic_values",
  "maybe_ty_sums_and_or_bindings", "maybe_bindings", "pat", "pats_or",
  "binding_mode", "lit_or_path", "pat_field", "pat_fields", "pat_struct",
  "pat_tup", "pat_tup_elts", "pat_vec", "pat_vec_elts", "ty", "ty_prim",
  "ty_bare_fn", "ty_fn_decl", "ty_closure", "for_in_type",
  "for_in_type_suffix", "maybe_mut", "maybe_mut_or_const",
  "ty_qualified_path_and_generic_values", "ty_qualified_path",
  "maybe_ty_sums", "ty_sums", "ty_sum", "ty_sum_elt", "ty_prim_sum",
  "ty_prim_sum_elt", "maybe_ty_param_bounds", "ty_param_bounds",
  "boundseq", "polybound", "bindings", "binding", "ty_param",
  "maybe_bounds", "bounds", "bound", "maybe_ltbounds", "ltbounds",
  "maybe_ty_default", "maybe_lifetimes", "lifetimes",
  "lifetime_and_bounds", "lifetime", "trait_ref", "inner_attrs_and_block",
  "block", "maybe_stmts", "stmts", "stmt", "maybe_exprs", "maybe_expr",
  "exprs", "path_expr", "path_generic_args_with_colons", "macro_expr",
  "nonblock_expr", "expr", "expr_nostruct",
  "nonblock_prefix_expr_nostruct", "nonblock_prefix_expr",
  "expr_qualified_path", "maybe_qpath_params", "maybe_as_trait_ref",
  "lambda_expr", "lambda_expr_no_first_bar", "lambda_expr_nostruct",
  "lambda_expr_nostruct_no_first_bar", "vec_expr", "struct_expr_fields",
  "maybe_field_inits", "field_inits", "field_init", "default_field_init",
  "block_expr", "full_block_expr", "block_expr_dot", "expr_match",
  "match_clauses", "match_clause", "nonblock_match_clause",
  "block_match_clause", "maybe_guard", "expr_if", "expr_if_let",
  "block_or_if", "expr_while", "expr_while_let", "expr_loop", "expr_for",
  "maybe_label", "let", "lit", "str", "maybe_ident", "ident",
  "unpaired_token", "token_trees", "token_tree", "delimited_token_trees",
  "parens_delimited_token_trees", "braces_delimited_token_trees",
  "brackets_delimited_token_trees", YY_NULLPTR
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,    58,
     354,    63,    61,    60,    62,   124,    94,    38,    43,    45,
      42,    47,    37,    33,   123,    91,    40,    46,   355,    93,
      35,    41,    44,    59,   125,    64,   126,    36
};
# endif

#define YYPACT_NINF -1336

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1336)))

#define YYTABLE_NINF -793

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-793)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21, -1336,   177,   111, -1336, -1336, -1336,   182,   193,   111,
   -1336,   254,    26, -1336, -1336,    92,  2942, -1336,  1211,  1211,
   -1336, -1336, -1336, -1336, -1336, -1336,   856, -1336,   326,  1089,
   -1336,  1211,   990,  1211,  1211,  1211, -1336,  1211,  1211,   765,
     361,   630,   766, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,   354,
     413, -1336, -1336, -1336,   352,   456, -1336, -1336, -1336,   380,
      47,   431,   456,   856,  1211,   419,   465, -1336, -1336, -1336,
   -1336,  1211,   231, -1336,   465,   305,   465,   465,   465,   773,
    1211, -1336,   839, -1336, -1336, -1336,   446,   502,    94, -1336,
    1211,   537,   540,  1211,   465,  1211,   264, -1336,  2008,  1211,
   -1336,   456,   565,  8929,   960,   546,    59,   601,    30, -1336,
     551,    33, -1336,    24,   546,   546,   643,   465, -1336, -1336,
   -1336,   603, -1336, -1336, -1336,   237, -1336, -1336, -1336,   635,
    1211,   465,  1211,  8929,   465,  1701,   569, -1336,  8634, -1336,
    8634, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336,   220,  8929,  8634,  8250,   608,  1211, -1336,   694,
     773,   465,   620,   125,  8929,   612,  8634,  8811,  8314,    49,
    8929,  1822,   174,   634, -1336, -1336, -1336, -1336,   105,   685,
   -1336, -1336,    84, -1336,    89, -1336,   397,   734,   682, -1336,
    1211, -1336,    30,   444,   690,   288, -1336,  7986,   546,   800,
      33,   713,   494,   546,   457,   728,   743,  1211,   551, -1336,
     318,  1211,   703, -1336, -1336,   757, -1336, -1336,   551,   465,
     770,   829,  1211, -1336,   395, -1336,   574,  8929,   281, -1336,
      25, -1336, -1336,   849, -1336, -1336, -1336,   792, -1336,   809,
   -1336,   258,   821,    52, -1336, -1336,   286, -1336,   824,   787,
     830, -1336,   142, -1336,   392,   833,    58,  8929, -1336,   890,
     576,   800,   253,  1211,   902,   842, -1336,    83,   608,   773,
     465,  8811, -1336,  7142,    58,  8378,   858,  1211,  8442,   252,
   -1336,   901, -1336,   134,  8929, -1336,   890, -1336, -1336,  8929,
     918, -1336,   303,  1211,  1211,  7142,  8634, -1336,   255, -1336,
   -1336, -1336,   309, -1336, -1336,   360,  1107,  1211,   897,   903,
     885, -1336,  8634,   358,   895,   889,   890,  1211,   972, -1336,
   -1336, -1336,  8634,  7986, -1336, -1336,   962,  7986,  8634,  8049,
    2008,  7455,   599,   906,   909, -1336,   929,  1211,  1011,   542,
   -1336,   914,   930,   450, -1336,   922, -1336,  8634,   625, -1336,
     925,   469, -1336, -1336,   469,  8634,   465,   546,   788, -1336,
   -1336, -1336, -1336, -1336,   368,   546,   551,  7142,   697,   950,
     289,  1211,  1028,   999,   936,  2536,   944,  8506,  4582,  4759,
    5033, -1336, -1336, -1336, -1336, -1336, -1336,  8634, -1336,   574,
    8634, -1336, -1336, -1336, -1336,  8634,  1211,  8929, -1336, -1336,
    7142,   574,   955, -1336, -1336,  8929,   952, -1336, -1336, -1336,
   -1336,  1211,  1028,   465,  5458,   800,   957,   945,   800,  1018,
   -1336,   311,  8634,   890,   800,  6602,   326,  1211,  6926,  7250,
      79,  6818,   959,  6818,  1211,  7142,  8634,  7518,   890,  7142,
    7142,  7142,  4886,  5665,  5370,   977, -1336,   490, -1336,  4180,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336,   102, -1336,   974,   984,   136, -1336,   992,   148,   608,
    8811,  8929, -1336,  8929, -1336, -1336,  1071,  7142, -1336,  3193,
     126,   569,  2414,   985,   986,  1001, -1336, -1336, -1336, -1336,
   -1336, -1336,    98, -1336,  1004,  1610, -1336,  1003, -1336, -1336,
     950,  8634, -1336,    83,   409,  1013,  1024,  1211,   422, -1336,
   -1336, -1336, -1336,  1211,   465, -1336,    58, -1336, -1336, -1336,
      58,  7986, -1336, -1336,  1006, -1336,  1008,    74,  1007, -1336,
   -1336,  1016,    97, -1336,  7986,  8634,  1000,  3625,  1211,  1891,
    2170,  7986,   553, -1336, -1336, -1336, -1336,   787, -1336,   185,
   -1336,  1211,   555, -1336,   579,   394,   551,   930, -1336,   835,
   -1336,   930,   546,  2653,  1211,  1037,   546,  1028,  8570,   546,
   -1336,   553,  1026,   295, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336, -1336, -1336, -1336, -1336,  1019,  1021,  1042,
   -1336,   787,  1021, -1336,  1046, -1336,  3337, -1336,  1126, -1336,
     576,   569, -1336, -1336,  1032, -1336,  1615,    83, -1336,   465,
     608,    58,  7142,  7142,  6262, -1336,   890,  7250,  6710,   326,
    1211,  7986,    93,  6818,  6818,  1211,  7142,  7581,   890,  7250,
    7250,  7250,  5665,  5370, -1336,  1044, -1336,  5961, -1336, -1336,
   -1336, -1336, -1336,  6032, -1336,  6421, -1336,  6421, -1336,  6306,
      58,   800,   149, -1336,  1051,  7142,  1005,   645,   645,  6602,
     326,   255,  1972,  6818,   498,  6818,   255,  7142,  5665,  5370,
   -1336,    41,  5557, -1336,  1038,  5154, -1336,   755, -1336,  3523,
   -1336, -1336,  1050, -1336,  1052, -1336, -1336,   706,  6076,  1054,
    1053,  1041, -1336,  1211,   742,  7142,  7142,  7142,  7142,  7142,
    7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,
    7142,  7142,  7142,  6602,  8929,  8929, -1336,  7142,  7142,  7142,
    7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  5773,  5370,
    1130, -1336,  7986,   959,  7034,  1148,   800, -1336, -1336, -1336,
    7142,  5890, -1336,  8634, -1336, -1336, -1336,   800,  8634,   255,
   -1336, -1336,   351,    83,  1073, -1336,  1107,   897,   787,   317,
   -1336,  1107,   576,   834,   381, -1336,  1078,  1062,  1085,  1090,
   -1336,  7986, -1336,  1058,  7644,  7986, -1336,  1084,  7707, -1336,
     787,  7986, -1336, -1336,   569, -1336,  1096,   841,  1211, -1336,
    1087,  1083,  1101, -1336,  1093, -1336,  4886,   553, -1336, -1336,
    1112,   423, -1336,   619, -1336, -1336,   546, -1336, -1336, -1336,
     930, -1336, -1336, -1336,  1108,  1110,   295,  1111,   689,  1102,
    1113,  8634, -1336,  1211,  1206, -1336,  1211, -1336, -1336,  8693,
    1109, -1336, -1336, -1336, -1336, -1336,   800,  1147,  2001,  6076,
    7250,  6147,  6377, -1336,  1151, -1336,  6421,  6421, -1336,  6306,
     800,   155,  7250,  1160,   772,   772,  1138,  1139,  7250,  7250,
    7250,  7250,  7250,  7250,  7250,  7250,  7250,  7250,  7250,  7250,
    7250,  7250,  7250,  7250,  7250,  7250,  9137,  8929,  8929, -1336,
    7250,  7250,  7250,  7250,  7250,  7250,  7250,  7250,  7250,  7250,
    7250,  5773,  5370,  1213,  1214,   710,  1155,  7142,  7770,   800,
    7986,  8634, -1336,   978,  6262, -1336,  1211,  1181, -1336,  6421,
    6421, -1336,  6306,  1146,  1145,  7986, -1336, -1336,  1972, -1336,
     794,  4015, -1336, -1336,  3523,   742,  7142,  7142,  7142,  7142,
    7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,
    7142,  7142,  7142,  7142,  6602,  8929,  8929, -1336,  7142,  7142,
    7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  7142,  5773,
    5370,  1494, -1336,  1568,  1667,  5262,  7142, -1336, -1336,   569,
    1174,  1156,  1258,   121, -1336,  1182,   900,   900,  1260,   749,
     749,  1260,  2001,  1212,  6421,  6421,  6421,  6421,  6421,  6421,
    6421,  6421,  6421,  6421,  6262, -1336, -1336,  6421,  1260,  1260,
     467,   658,   978,  1005,  1005,   645,   645,   645,  1164,  6076,
    1163, -1336,   456,  1228, -1336,  7986,  5961,  1211, -1336,  5909,
   -1336,  1168, -1336, -1336, -1336, -1336,  1186,    83, -1336, -1336,
   -1336,    83, -1336,   952,  7142,   469,  8634, -1336, -1336, -1336,
    8929,  2826,   546,   800,  1268,  1270,  1173,  7986,  1175, -1336,
    1176,  7986,  1178, -1336, -1336, -1336,  7986,  1211, -1336,  1205,
    1912, -1336,  7986, -1336,  1183,  8634, -1336, -1336, -1336,   930,
   -1336,   715,  1184,  1195,   553,  1027, -1336,  1187, -1336,   723,
   -1336, -1336, -1336,   553,  1211,  1289, -1336,  1032, -1336, -1336,
    1287,  2633,  7250,  7250,  7833,  7250,  1076, -1336, -1336,   988,
     988,  1322,  1128,  1128,  1322,  2633,  2263,  6492,  6492,  6492,
    6492,  6492,  6492,  6492,  6492,  6492,  6492,  6377, -1336, -1336,
    6492,  1322,  1322,   582,  1572,  1076,  1160,  1160,   772,   772,
     772,  1193,  1218, -1336,   456,   238, -1336,  7986,   774, -1336,
     602,  1219,  1310,  6076,   800,   158, -1336,  7142, -1336,   787,
   -1336, -1336,  1051, -1336,  1211, -1336,  1220,   900,   900,  1260,
     749,   749,  1260,  2001,  1212,  6421,  6421,  6421,  6421,  6421,
    6421,  6421,  6421,  6421,  6421,  6262, -1336, -1336,  6421,  1260,
    1260,   467,   658,   978,  1005,  1005,   645,   645,   645,  1223,
    1224, -1336,   456, -1336,   284, -1336,   291,  6076,  6076, -1336,
   -1336, -1336,  7142, -1336,  7142, -1336,  1474,  7142, -1336, -1336,
    7250,  1244, -1336, -1336, -1336,   800,   576,  1245,  6076,   659,
    1227,  1229, -1336,   799,  1230, -1336,  1211,  1211,  7986,  1232,
    7986,  7986,  1234,  7986, -1336, -1336,  7986, -1336, -1336, -1336,
   -1336,   787, -1336,  1375,  1226,   803, -1336, -1336, -1336, -1336,
   -1336, -1336, -1336,   553,   689,   260, -1336,   447, -1336, -1336,
     689,  1243,  1253, -1336,  1211,  5961,  6147,   800,   160, -1336,
    6147, -1336, -1336, -1336, -1336, -1336, -1336, -1336,    66, -1336,
   -1336,   726, -1336, -1336, -1336,  1211,  7142,  7770,   800,  6076,
    1256,   810, -1336, -1336, -1336,  5773,  5370,  5773,  5370,  6076,
    6076, -1336,  6076,  5961,  7250, -1336, -1336,   576,   813, -1336,
   -1336, -1336, -1336,  4297, -1336,  1289, -1336,  7986,  1237,  7986,
    1239, -1336,  1211, -1336,   636, -1336,   489, -1336, -1336,   689,
    1238,  1211,   636, -1336,   511,  1249,  1107,  1351,   269,  1330,
    7250,  7833,   800,  7250,  7986,  1353, -1336,  1357,  6076, -1336,
    7142,  7142,  1259,  1262,  1264,  1267,  1269, -1336,  5961, -1336,
   -1336,  1271, -1336,  1284,  7986,  7986,  1266,  1341,  1051,   773,
    1211,  1272, -1336,   465,  1342,   773,  1211, -1336, -1336,  1211,
    1289,  1293,   238,  6147, -1336,  7250,  6147, -1336,  7358,   166,
   -1336,  6076,  6076, -1336, -1336, -1336, -1336, -1336, -1336, -1336,
    1376, -1336,  1211,  1298,  1348,   465, -1336,  1300,  1211,  1350,
     465, -1336,  1303,  1381, -1336,  6147, -1336,  6191,  1050,  1052,
   -1336,  1211,   465,  7142,  1286,  1211,  1296,  8634,   465,  1211,
    1299,  1391,  1211, -1336,  1296,  6076, -1336,   465,  8870,   546,
     800,   399,  1299,   465,  8112,   546,   800,  1211,   166,   546,
    1296,  1211,  8752,  1297,  1302,  1384,   482, -1336, -1336,   546,
    1299,  1387,  7896,  1305,  1397,   930, -1336,   166, -1336,   484,
     546,  9047,  1398,   890, -1336,  8811,  1051, -1336, -1336,   930,
     546,  8175,  1402,   890, -1336,  1051, -1336, -1336, -1336, -1336,
     487,  1051,  8988,  1319, -1336,   930,  1051,  1404,  1321, -1336,
   -1336,  1319,   272,  8811,  1325, -1336,  1321,  1051,  7986,  1331,
    1336,  1319,  1329, -1336,  1340,  1321,  1344, -1336, -1336,  1352,
    8811, -1336,  1359,  7986, -1336, -1336
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     4,     0,    13,     1,    11,    17,     0,     0,    13,
       8,   127,    12,    14,     3,    13,   151,    27,     0,     0,
       9,     2,   126,    29,    15,    28,     0,   790,     0,     0,
     791,     0,   111,     0,     0,     0,   494,   793,     0,   150,
     792,     0,     0,    30,    31,    33,    34,    32,    37,    45,
      44,    36,    68,    69,    70,    66,    67,    35,    71,     0,
       0,    72,    64,    65,     0,   490,   493,   793,   792,     0,
      18,     0,   491,     0,     0,     0,   254,   784,   785,   786,
     787,     0,     0,   110,   254,     0,   254,   254,   254,   111,
       0,   152,     0,   269,   271,    59,     0,     0,    50,   267,
       0,     0,     0,     0,   254,   788,     0,    10,     0,    22,
      16,   492,     0,     0,     0,   255,     0,     0,    13,    48,
       0,    13,   105,   255,   255,   255,     0,   254,   270,   272,
      58,     0,   268,   132,    60,     0,   128,   131,    49,     0,
       0,   254,     0,     0,   254,     0,     0,   789,     0,   496,
     294,   497,   495,   777,   778,   779,   780,   782,   781,    19,
     783,    23,     0,     0,     0,     0,   443,     0,   389,     0,
     111,   254,     0,     0,     0,     0,     0,     0,     0,   409,
       0,     0,   372,     0,   365,   390,   366,   391,   274,   449,
     460,   241,     0,   265,     0,   457,   428,   264,     0,   256,
       0,    46,    13,     0,     0,    13,   114,   206,   255,   240,
      13,     0,    13,   255,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    61,    57,     0,   273,    63,     0,   254,
       0,   136,     0,   461,     0,   462,     0,     0,   372,   425,
     255,   423,   426,     0,   908,   908,   908,     0,    42,     0,
     421,     0,   296,     0,   419,   422,     0,   288,   289,   417,
     292,   437,   274,    20,     0,     0,   699,     0,   381,   406,
       0,   240,   373,     0,     0,     0,   392,   456,   443,   111,
     254,     0,   377,   775,   699,     0,   389,     0,     0,     0,
     224,     0,   227,   274,     0,   379,   406,   407,   408,     0,
       0,   371,     0,     0,   788,   775,   416,   275,     0,   459,
     252,   250,     0,   244,   242,     0,   430,     0,   453,     0,
     257,   259,     0,    13,     0,     0,   406,     0,     0,   117,
     108,   115,     0,     0,   297,   320,   318,     0,     0,     0,
       0,   362,     0,     0,   204,   207,     0,     0,   304,   321,
     322,   493,     0,     0,   190,     0,   106,     0,     0,    88,
       0,    13,    79,    77,    13,     0,   254,   255,     0,    54,
     129,    62,   130,    51,     0,   255,     0,   775,     0,   428,
     373,     0,   463,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    43,   285,   286,   287,   284,     0,   410,     0,
       0,   281,   282,   283,   280,   290,   293,     0,    21,    24,
     775,     0,     0,   382,   405,     0,   442,   444,   446,   447,
     400,   788,   374,   254,     0,   240,     0,   454,   240,     0,
     393,     0,     0,   406,   240,   610,   560,   574,   775,   775,
       0,   572,     0,   576,   570,   775,     0,     0,   406,   775,
     775,   775,   775,   775,   775,     0,   616,   559,   561,     0,
     617,   614,   689,   615,   729,   730,   731,   732,   733,   734,
     735,     0,   558,     0,   389,   274,   237,   389,   274,   443,
       0,     0,   380,     0,   378,   385,     0,   775,   369,     0,
     277,     0,     0,     0,   414,   448,   450,   253,   251,   266,
     245,   243,     0,   458,     0,     0,   427,   429,   431,   434,
     428,     0,   440,     0,   264,     0,     0,     0,     0,    94,
      47,   109,   116,     0,   254,   118,   699,   300,   319,   313,
     699,     0,   298,   323,   361,   363,     0,   351,   348,   301,
     349,     0,   338,   193,   205,     0,   310,     0,   788,   337,
       0,     0,     7,   185,   238,   239,   107,    91,    82,    13,
      78,     0,     0,    84,     0,     0,     0,     0,    56,     0,
      53,     0,   255,     0,     0,     0,   255,   464,     0,   255,
     424,     7,     0,   255,   794,   795,   796,   797,   798,   799,
     800,   801,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   812,   813,   814,   815,   816,   802,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,   834,   835,   836,   837,   839,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,   850,
     851,   852,   853,   854,   855,   856,   857,   858,   859,   860,
     861,   862,   863,   865,   864,   866,   870,   872,   867,   868,
     869,   871,   874,   876,   838,   873,   875,   877,   878,   879,
     880,   881,   882,   883,   884,   885,   886,   893,   896,   895,
     898,   899,   902,   906,   901,   903,   900,   904,   905,   907,
     897,   889,   891,   888,   887,   916,   890,   892,   894,   911,
     909,   910,   912,   913,   914,   917,   915,   296,   295,     0,
     420,   418,   291,   438,     0,   439,     0,   698,     0,   384,
       0,     0,   394,   195,   230,   396,     0,   455,   399,   254,
     443,   699,   775,   775,   609,   575,   406,   775,   669,   620,
     633,     0,     0,   631,   635,   629,   775,     0,   406,   775,
     775,   775,   775,   775,   675,   619,   621,     0,   676,   673,
     682,   674,   618,     0,   690,   573,   736,   577,   571,   613,
     699,   240,     0,   210,    74,   775,   684,   686,   685,   552,
     502,   516,   151,   514,   150,   518,   512,   775,   775,   775,
     482,     0,    12,   474,     0,   775,   471,   501,   503,   469,
     557,   556,   738,   478,   739,   500,   714,   483,   488,     0,
       0,   483,   774,   788,   719,   775,   775,   775,   775,   775,
     775,   775,   775,   775,   775,   775,   775,   775,   775,   775,
     775,   775,   775,   607,     0,     0,   563,   775,   775,   775,
     775,   775,   775,   775,   775,   775,   775,   775,   775,   775,
       0,   388,     0,     0,   775,     0,   240,   225,   226,   383,
     775,     0,   370,   416,   278,   375,    38,   240,   415,     0,
     248,   246,     0,   456,     0,   436,     0,   453,   452,     0,
     260,   430,     0,   102,    13,    92,     0,     0,     0,     0,
     299,     0,   303,   353,   352,     0,   302,   340,   339,   208,
     209,     0,   305,   321,     0,   336,     0,     0,     0,   331,
     333,     0,   324,   307,     0,   311,   775,     6,    83,    89,
       0,    13,    80,    13,   103,   133,   255,   187,    55,   186,
       0,    40,   134,   135,     0,     0,   255,     0,    13,     0,
       0,     0,   411,     0,     0,    39,     0,   445,   376,     0,
       0,   402,   404,   401,   403,   395,   240,     0,   688,   700,
     775,   707,   668,   634,     0,   683,   632,   636,   630,   672,
     240,     0,   775,   677,   679,   678,     0,     0,   775,   775,
     775,   775,   775,   775,   775,   775,   775,   775,   775,   775,
     775,   775,   775,   775,   775,   775,   666,     0,     0,   622,
     775,   775,   775,   775,   775,   775,   775,   775,   775,   775,
     775,   775,   775,     0,   763,    13,     0,   775,     0,   240,
       0,     0,   212,   687,   551,   517,     0,   153,   475,   515,
     519,   513,   555,     0,     0,     0,   479,   473,   151,   476,
     501,     0,   466,   472,   468,   719,   775,   775,   775,   775,
     775,   775,   775,   775,   775,   775,   775,   775,   775,   775,
     775,   775,   775,   775,   549,     0,     0,   505,   775,   775,
     775,   775,   775,   775,   775,   775,   775,   775,   775,   775,
     775,     0,   480,     0,     0,   775,   775,   569,   568,     0,
       0,     0,     0,   716,   723,   725,   600,   601,   595,   591,
     592,   596,   590,   589,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   608,   611,   612,   578,   593,   594,
     597,   598,   599,   602,   603,   604,   605,   606,     0,   486,
       0,   565,   564,     0,   772,     0,     0,     0,   398,     0,
     387,     0,   276,   451,   249,   247,     0,   456,   432,   441,
     263,     0,   262,   261,   775,    13,   416,    97,    93,    95,
       0,     0,   255,   240,     0,     0,   359,     0,   354,   364,
     346,     0,   341,   350,   312,   309,     0,     0,   326,   325,
     334,   306,     0,   308,     0,     0,    81,    85,   104,     0,
     188,    13,     0,     0,     7,   182,   177,     0,   173,    13,
     179,   180,   171,     7,     0,   699,   228,   230,   194,   397,
       0,   681,   775,   775,     0,   775,   680,   627,   628,   659,
     660,   654,   650,   651,   655,   649,   648,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   667,   670,   671,
     637,   652,   653,   656,   657,   658,   661,   662,   663,   664,
     665,     0,     0,   624,   623,     0,   748,     0,    13,   752,
       0,   755,     0,   701,   240,     0,   703,   775,   211,    73,
     510,   511,    74,   477,   788,   481,     0,   542,   543,   537,
     533,   534,   538,   532,   531,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   550,   553,   554,   520,   535,
     536,   539,   540,   541,   544,   545,   546,   547,   548,     0,
       0,   507,   506,   746,   740,   747,   741,   489,   715,   498,
     737,   499,   775,   562,   775,   718,   717,   775,   566,   567,
     775,     0,   770,   367,   386,   240,     0,     0,   101,     0,
       0,     0,   122,     0,     0,   121,     0,     0,   360,   355,
       0,   347,   342,     0,   330,   327,     0,   335,   332,   328,
     465,    87,   189,   151,     0,    13,   140,   142,   143,   144,
     156,   157,   172,     7,    13,   181,   178,   151,   167,   176,
      13,   412,     0,   229,     0,     0,   708,   240,     0,   710,
     709,   625,   626,   767,   768,   769,   764,   316,   762,   749,
     753,     0,   754,   751,   756,     0,   775,     0,   240,   702,
      76,     0,   504,   508,   509,   775,   775,   775,   775,   727,
     728,   724,   726,     0,   775,   279,   433,     0,    13,    98,
     100,   119,   123,     0,   120,   699,   314,   356,   357,   343,
     344,   329,     0,   150,   151,   145,     0,   137,   141,    13,
       0,     0,   151,   183,     0,     0,   430,     0,   699,   765,
     775,     0,   240,   775,     0,     0,   750,   697,   704,   706,
     775,   775,     0,     0,     0,     0,     0,   773,     0,   435,
      99,     0,   124,     0,   358,   345,     0,     0,    74,   111,
       0,     0,   168,   254,     0,   111,     0,   169,   413,     0,
     699,     0,     0,   711,   713,   775,   761,   317,   775,     0,
     691,   705,    75,   776,   742,   744,   743,   745,   771,   125,
       0,   149,     0,   148,     0,   254,   170,     0,     0,     0,
     254,   368,     0,     0,   766,   712,   759,   757,   760,   758,
     696,     0,   254,   775,     0,     0,     0,     0,   254,     0,
       0,     0,     0,   315,     0,   147,   146,   254,   223,   255,
     240,     0,     0,   254,   206,   255,   240,     0,   692,   255,
       0,   405,   406,     0,   221,     0,     0,   192,   184,   255,
       0,   320,   406,     0,     0,     0,   191,   693,   694,     0,
     255,   405,     0,   406,   203,   222,    74,   158,   161,     0,
     255,   405,     0,   406,   199,    74,   164,   695,   159,   162,
       0,    74,     0,   220,   165,     0,    74,     0,   216,   160,
     163,   220,    74,   217,     0,   166,   216,    74,   213,     0,
       0,   220,   218,   200,     0,   216,   214,   196,   201,     0,
     219,   197,     0,   215,   202,   198
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1336, -1336, -1336,  -551,   106,    12,  -427,  -404,    20,    63,
   -1336,    78, -1336,    13,  1448, -1336,     7, -1336,    42, -1104,
   -1336, -1336, -1336, -1336, -1336, -1207, -1336, -1336, -1336, -1336,
    -335,  -869, -1336,   926, -1336, -1336,   607, -1336, -1336, -1336,
   -1336,   -84,  1285, -1336,  1291, -1336,  1166, -1336, -1336, -1336,
      43,  -158, -1336, -1336, -1336, -1336, -1336,   132, -1336, -1336,
   -1336, -1000, -1336, -1336, -1336, -1336, -1336, -1336,  -992,   299,
   -1336, -1336, -1336, -1336,  1417, -1336,  -148, -1086, -1254, -1336,
   -1336, -1336, -1336,   -63, -1108,  -529,  -429,   486, -1068, -1335,
   -1336,  -280,  -412,   297, -1336,  -261,   -37,   -27, -1336, -1336,
     994, -1336,  1197, -1336,  -126,  -103, -1336, -1336,   795,  -101,
   -1336,  -514,   963,   333, -1336, -1336,   964,  -834, -1336,  -836,
    -105,   -61,   790,  -223,   791, -1336, -1336,  -290, -1336, -1336,
   -1336,  -786,   -69,  -131,  1121, -1336,  1142,  -301,  -839, -1336,
     654,   -71,  -362,  -303,  -222,   652,  -259, -1336, -1336,   663,
    -797,   -51,  -289,  2885,  -108,  -547,  1086,   627, -1336,   741,
    -420,  -949,  -387,   -16,     1,  2945,  -749,  3027,  1143, -1336,
    -439,  3253, -1336,  -277,  1105,   144,   811,    95,  -647,   513,
   -1336, -1336,   233, -1336,  3527, -1336,    53, -1336, -1336,   302,
     304, -1336, -1336, -1172, -1170,    62, -1336, -1336, -1336, -1336,
   -1336, -1336,  2157,   -18,  -273,  1441, -1336,   695, -1336,  -432,
    -144,  -106,  -142
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   916,   917,    10,    11,    12,    13,    69,
     162,    14,    15,   561,    17,    43,   793,    45,    46,    47,
      48,    49,    50,    97,    51,  1022,  1472,    52,   363,   213,
     562,   563,   358,   359,    53,   518,   519,  1157,    54,    55,
      56,    82,   204,   205,   206,   522,   329,  1162,  1163,    23,
     135,   136,    57,   379,    58,  1364,  1365,  1366,  1367,  1544,
    1368,    59,    60,  1369,  1370,  1371,  1196,    61,  1197,  1198,
    1199,  1377,  1200,  1201,    62,    63,   208,  1565,  1559,   209,
     425,  1566,  1560,   343,   344,   345,  1265,   773,  1629,  1624,
    1573,   289,   290,   950,   291,   354,   275,   198,   199,   320,
     321,   322,   192,    98,   182,   307,   256,   257,   398,   346,
    1398,   347,   348,   909,   910,   911,   541,   542,   536,   537,
     250,   184,   185,   276,   186,   187,   953,   415,   299,   251,
     252,   493,   494,   259,   254,   240,   241,   318,   506,   507,
     508,   708,   261,   193,   271,   416,   509,   309,   495,   512,
     426,   427,   195,   455,   419,   553,   456,   794,   795,   796,
     806,  1128,   811,   457,    65,   458,   799,   808,   757,   758,
     460,   461,  1510,   412,   462,  1266,   760,  1389,   809,  1091,
    1092,  1093,  1094,  1325,   463,   803,   804,   464,  1258,  1259,
    1260,  1261,  1465,   465,   466,  1396,   467,   468,   469,   470,
     471,  1037,   472,   160,   146,    66,   699,   388,   700,   701,
     702,   703,   704
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,   431,   247,   151,   249,   126,   483,   473,   183,   499,
     420,   417,   724,   800,    83,   899,    16,   253,   772,   238,
     927,    20,    16,    44,   929,   791,   503,    72,    16,   564,
     938,   491,    24,   266,   810,   908,   523,   243,   230,   115,
     248,   272,  1152,  1041,   713,   284,  1044,   120,   792,   123,
     124,   125,  1187,  1343,  1187,  1166,   428,   430,   265,   865,
     268,  1170,  1251,   194,   372,  1410,   807,   145,   857,   282,
     367,    83,   292,   295,   111,   300,  1146,  1141,   576,   260,
     375,   258,    71,  1394,   239,  1395,   274,    21,   310,   434,
     218,  1376,   -25,   313,   399,   893,   214,   215,   216,  1035,
     411,   200,   870,   737,   228,   976,   380,   231,   148,     9,
     382,   -26,   302,   297,   197,   197,     1,   139,   897,     6,
     189,  1463,     5,     6,     7,     5,     6,     7,   383,   148,
    1309,   203,   384,   385,    16,   278,   140,   148,   298,   148,
     212,  1033,  -720,   732,   382,   148,     8,   422,   721,   108,
       8,   148,    83,     8,  -113,   452,   852,   -26,   775,  1018,
     400,   853,   413,   109,   725,  1214,   400,   728,  1407,   148,
    1461,  1464,   161,   733,   220,   279,   292,     4,   280,   190,
     268,   352,   201,   295,   447,     6,   360,   854,   311,   482,
     382,   349,   376,   314,   484,   429,   894,   303,   747,   211,
     722,   526,   871,     5,     6,     7,   312,   530,   150,   877,
     372,   315,     8,   386,    20,   203,   -25,   515,   203,   898,
     872,   306,    20,    16,   202,   357,   557,   210,   572,   150,
     281,     8,   527,  -231,   565,  -235,   529,   150,   532,   150,
     535,   540,   863,  1326,   407,   150,   875,  -233,   555,   888,
     306,   150,   306,   889,  1019,   577,   583,   856,   306,  1445,
    1215,    83,   393,  1408,   306,  1462,   394,   148,   374,   150,
     395,  1020,   148,   382,   711,   904,   303,  1020,     6,   221,
    1020,  1523,  1020,  -792,    33,   382,  1630,   304,   355,   948,
     401,   709,   233,   438,   402,   273,  1639,    18,   403,    27,
    1569,   731,   715,   717,   303,     8,   918,   106,    19,    30,
     719,   411,   303,   497,   106,   770,  1590,   349,   971,   292,
     117,   349,    22,   349,   239,   349,   349,   409,   707,   566,
    1394,  1349,  1395,   977,   712,  -463,   517,  1352,   149,    67,
     567,   263,   264,  -464,    27,   118,   774,    68,   571,    73,
    1337,   235,   452,   800,    30,  1144,   800,   479,   711,   222,
     221,   223,   396,  1446,   500,   807,   421,   150,   791,  1034,
    1340,  1021,   150,  -792,   480,   292,   858,  1454,   859,   382,
     878,     6,  1450,  1190,    67,   197,    27,   864,  1455,  1613,
     404,   792,    68,  1177,   304,    27,    30,   189,  1618,  1415,
    1416,   807,   421,   400,  1621,    30,  1417,  1418,     8,  1626,
     221,   372,  -112,   498,   900,  1631,   730,  -153,   926,   121,
    1635,  1150,   755,   755,   488,   489,    67,    27,   122,  1130,
     890,   349,   103,   480,    68,    67,   797,    30,   503,  1151,
     368,    91,   369,    68,  1487,   279,   960,   936,   280,   540,
     915,     6,  1494,   164,   957,  1145,   190,  1491,   972,   165,
     166,   947,   879,   319,   501,   105,  1473,    67,  1475,   104,
     815,   816,  1175,   167,     6,    68,  1579,   800,     8,   106,
     -96,    27,   -96,   326,   133,    27,   168,   887,   169,   791,
     569,    30,   570,  1016,  1600,    30,   316,   327,   317,   107,
     170,     8,   400,   171,   172,  1158,   955,   400,   956,   834,
    1017,  -258,   792,   408,  1438,   349,     6,   925,   113,  1440,
    1636,    67,  1578,  -258,   328,    67,  1451,  1443,   349,    68,
     173,   903,  -258,    68,   349,   349,  1452,  1207,   174,  1489,
    1089,   175,  1490,     8,   884,   930,   885,  1186,    89,   934,
     110,    90,   937,   176,  -154,   177,   940,   178,  1634,  1187,
     179,  1495,     6,   554,  1496,   180,   181,  1642,   114,   499,
     134,   361,   357,   841,   842,   843,   844,   845,   846,   847,
     362,   713,   848,   849,   850,   978,   979,     6,  1257,     8,
     142,   -86,  1252,   -86,   382,  1138,   552,   381,   552,   381,
     382,   552,   332,   813,   814,  1597,  1142,  1608,   333,    27,
    1619,    27,   452,   233,     8,   -90,   -90,  1498,   954,    30,
     538,    30,    26,   417,   997,   138,   153,   154,   155,   156,
      77,    78,    79,    80,    27,   334,   197,    28,    27,   143,
     964,   133,  1362,  1374,    30,     5,   774,     7,    30,    67,
     157,    67,  1380,    92,   100,   548,   549,    68,   550,    68,
    1310,   815,   816,   335,   163,    27,   908,   207,    93,   336,
      27,    27,   235,    36,    67,    30,   158,   921,    67,   922,
      30,    30,    68,   244,   245,   246,    68,   337,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,  1209,   217,  1011,  1012,  1013,
     834,   923,   338,   924,    94,    67,   339,   270,   340,  1213,
      67,    67,     6,    68,   341,   342,  1443,   273,    68,    68,
     539,   755,   755,   277,  1402,   349,  1403,   219,   283,  1115,
    1116,   349,    27,   755,   755,   755,   305,   711,    27,     8,
      95,   133,    30,  1188,    96,   224,   558,   559,    30,   225,
     382,  1133,   815,   816,   817,   382,   382,   820,  1267,  1537,
     848,   849,   850,  -722,  1363,   842,   843,   844,   845,   846,
     847,  1090,    67,   848,   849,   850,  1040,    27,    67,   797,
      68,  1428,     6,  1429,   308,  1388,    68,    30,   319,  1028,
     535,   834,    27,  1169,   540,   133,   323,  1173,   574,  1039,
    1174,    27,    30,     6,    77,    78,    79,    80,     6,     8,
     711,    30,    24,  -174,   330,    89,     6,    67,    90,   100,
    1339,  -154,  1449,    27,   353,    68,   133,   371,  1085,  1086,
       8,  1257,    67,    30,  1256,     8,   349,   356,   755,  -139,
      68,    67,   364,     8,   292,   365,   101,  -175,  1402,    68,
    1466,  1132,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   503,    67,   848,   849,   850,     6,   813,  1045,
      27,    68,   377,   133,    27,   349,    27,   128,   349,   349,
      30,   373,   349,   378,    30,   349,    30,  1011,  1012,  1013,
    1269,    27,  1238,  1239,     8,   400,     6,   517,  1399,  1189,
     797,    30,  1345,   387,   899,   335,     6,  1274,  1045,  1193,
      67,   336,   568,   129,    67,   391,    67,   774,    68,   774,
    1432,  1433,    68,     8,    68,   245,   246,  -138,  1382,    20,
      36,    67,   392,     8,  1272,   410,  1154,  1480,  1363,    68,
     389,   390,   834,   397,   755,  1319,   405,  1321,  1155,   130,
    1156,  1195,   406,   131,   414,   423,   755,  -232,   424,   928,
    1296,  1297,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   755,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   815,   816,  1320,   755,   755,   755,   755,   755,   755,
     755,   755,   755,   755,   755,    27,  1474,   189,  1476,   511,
     481,  1411,   349,  1406,   349,    30,   513,   514,   843,   844,
     845,   846,   847,   521,  1254,   848,   849,   850,   520,   349,
     834,    77,    78,    79,    80,   327,   528,   543,   545,  1598,
     997,   544,  1388,   547,  1331,    67,    81,   485,  1606,   551,
     486,   487,  1609,    68,   552,  1273,   556,   834,   560,   316,
      26,   303,  1614,   578,  1361,  1341,   190,   579,   581,   718,
     720,   726,    27,  1620,   191,    28,   535,   727,  1625,   800,
     540,   729,    30,   452,  1425,  1354,   812,  1426,   855,   978,
     979,  1359,  1312,  -236,  1314,  1316,   843,   844,   845,   846,
     847,  -234,   860,   848,   849,   850,  1006,  1007,  1008,  1009,
    1010,    36,    67,  1011,  1012,  1013,   867,   873,   868,   869,
    1375,   876,   881,   774,   899,   845,   846,   847,   997,   349,
     848,   849,   850,   882,    27,   901,  1460,   892,   891,   895,
     381,   978,   979,   980,    30,  1344,   983,   896,   933,  1486,
     939,   941,    27,   943,   233,   349,   944,  1470,   407,   946,
    1021,   349,    30,    74,   949,   349,  1397,   813,  1483,  1131,
     349,   504,  1042,  1085,    67,    27,   349,  1083,  1479,  1084,
     997,  1137,    68,  1087,  1088,    30,  1147,  1160,  1161,    64,
    1167,  1501,    67,   857,  1006,  1007,  1008,  1009,  1010,  1164,
      68,  1011,  1012,  1013,  1165,  1176,   755,   755,   349,   755,
    1182,  1505,   997,   235,    36,    67,  1171,  1181,   505,  1180,
     382,  1185,  1195,    68,  1183,   815,   816,   817,   818,   819,
     820,   821,  1191,  1532,  1192,  1194,  1202,  1203,   857,  1204,
    1208,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,   349,  1253,  1011,  1012,  1013,    27,  1169,    27,   535,
    1173,  1210,   540,  1212,   834,  1441,    30,  1217,    30,  1262,
    1218,    91,  1255,   815,   816,  1270,  1271,  1319,  1575,  1321,
    1008,  1009,  1010,  1322,  1584,  1011,  1012,  1013,  1574,  1324,
    1323,  1327,  1592,  1328,  1329,  1330,    67,    36,    67,  1335,
    1336,  1346,  1602,  1347,    68,  1348,    68,  1350,  1351,  1577,
    1353,   382,   834,  1612,  1356,  1586,   774,  1360,  1372,  1373,
    1384,  1378,  1391,  1617,   755,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   978,   979,   848,   849,   850,
     382,   411,   349,  1405,   349,   349,  1169,   349,  1173,  1392,
     349,  1404,  1413,  1632,  1412,  1414,  1424,    64,  1430,  1427,
    1447,  1456,  1431,  1434,  1437,  1500,  1439,  1457,  1471,  1484,
     774,  1485,  1492,  1507,   997,   840,   841,   842,   843,   844,
     845,   846,   847,  1497,  1499,   848,   849,   850,  1502,  1508,
    1509,  1514,  1513,  1169,  1173,  1515,  1516,  1195,  1520,  1521,
    1517,   349,  1519,  1195,  1522,  1528,  1526,  1533,    26,  1541,
    1543,  1545,  1547,  1549,  1552,  1524,  1540,  1551,   755,  1556,
      27,  1529,  1558,    28,  1567,  1564,  1561,   349,  1594,  1453,
      30,   349,  1596,   349,  1595,  -405,  1604,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,  1605,  1611,  1011,  1012,  1013,
    1616,  1623,  1627,  1628,   755,   349,  1633,   755,   349,    36,
      67,  1640,  1637,   292,  1442,  1443,  1527,  1638,    68,    70,
      70,  1641,  1195,    25,  1444,  1588,  1643,   295,   349,   349,
      75,    83,    76,  1644,    84,    85,    86,    83,    87,    88,
    1645,   532,    99,   102,  1607,   919,   482,   325,  1546,   755,
     292,  1159,   797,  1550,   525,  -721,   331,  1448,  1379,   119,
     890,  1583,   942,  1090,  1383,  1554,  1268,   859,   880,    27,
     902,  1562,   502,  1358,   914,   112,   951,   952,   292,    30,
    1570,   710,   116,  1311,   754,   754,  1580,   580,   766,    27,
    1148,   127,  1576,   132,  1153,   292,  1043,   137,  1585,    30,
    1149,   141,  1589,  1184,   144,   764,   147,   152,   349,    67,
      70,  1469,  1599,   965,   188,   196,  1504,    68,  1276,  1421,
    1400,  1539,  1401,  1610,  1534,     0,   349,     0,    36,    67,
       0,     0,   137,  1615,     0,   978,   979,    68,     0,     0,
     226,   227,   763,   229,   188,   349,   188,     0,     0,   188,
       0,   262,     0,     0,     0,     0,     0,  1313,     0,     0,
       0,     0,     0,    27,   188,   188,   188,     0,   188,     0,
       0,     0,   349,    30,   997,   188,     0,   188,   293,   188,
       0,   188,   188,     0,     0,   166,     0,   349,     0,     0,
       0,     0,     0,   381,     0,     0,     0,     0,   381,     0,
       0,   324,    36,    67,     0,    27,     0,   233,   351,     0,
      27,    68,     0,     0,     0,    30,     0,     0,   366,     0,
      30,     0,   370,   137,   874,   170,   137,     0,   171,     0,
       0,     0,     0,   188,     0,     0,     0,   188,   188,  1005,
    1006,  1007,  1008,  1009,  1010,    67,     0,  1011,  1012,  1013,
      67,     0,     0,    68,     0,   173,  1315,     0,    68,     0,
       0,     0,    27,     0,     0,    70,   235,     0,   188,     0,
     165,   188,    30,     0,   188,     0,     0,     0,     0,     0,
     177,     0,   293,     0,   232,     0,   475,     0,   476,   478,
       0,     0,     0,     0,     0,   188,    27,   168,   233,   169,
     188,    36,    67,     0,   490,   147,    30,   188,     0,     0,
      68,   170,     0,   196,   171,   172,   196,   188,   510,     0,
       0,     0,     0,   188,     0,     0,     0,     0,   524,     0,
       0,     0,     0,   188,   351,     0,    67,     0,   351,   188,
     351,   234,   351,   351,    68,     0,     0,     0,   546,   174,
       0,     0,   175,     0,   188,     0,     0,   235,   188,     0,
       0,     0,     0,     0,     0,     0,   188,     0,   178,   137,
       0,   179,     0,     0,   236,     0,   180,   237,     0,   575,
       0,     0,   188,   754,   754,   164,   188,     0,   188,     0,
       0,   165,   166,     0,     0,   754,   754,   754,   262,     0,
     188,   188,     0,  1014,     0,   167,   262,   714,   188,     0,
       0,     0,   188,     0,     0,     0,   188,    27,   168,   233,
     169,     0,   147,     0,     0,   293,     0,    30,     0,     0,
     766,     0,   170,   188,     0,   171,   172,  1036,   735,     0,
     961,   962,     0,     0,     0,   768,     0,   188,   351,     0,
       0,     0,   973,   974,   975,     0,     0,    67,     0,     0,
       0,     0,   173,     0,     0,    68,     0,     0,     0,     0,
     174,     0,   905,   175,     0,     0,     0,     0,   235,     0,
     906,   293,   188,     0,   188,   176,    27,   177,     0,   178,
     188,     0,   179,  1357,     0,     0,    30,   180,   181,  1134,
     754,   906,     0,   301,     0,     0,   188,    27,     0,     0,
       0,     0,   188,     0,     0,   335,     0,    30,   883,     0,
       0,   336,     0,     0,   886,     0,    67,     0,     0,     0,
       0,     0,   351,     0,    68,     0,   335,     0,     0,   907,
       0,     0,   336,     0,     0,   351,   188,    67,     0,   147,
     912,   351,   351,     0,     0,    68,     0,  1136,     0,     0,
     907,     0,   920,     0,   815,   816,   817,   818,   819,   820,
     137,    29,     0,     0,     0,   932,     0,     0,     0,   188,
       0,    31,    32,     0,     0,    33,     0,     0,  -155,     0,
       0,     0,     0,     0,    34,   153,   154,   155,   156,    77,
      78,    79,    80,   834,     0,    35,   754,  1026,     0,     0,
       0,    38,    39,     0,     0,  1027,    41,     0,   754,   157,
       0,    42,     0,     0,   754,   754,   754,   754,   754,   754,
     754,   754,   754,   754,   754,   754,   754,   754,   754,   754,
     754,   754,   754,     0,     0,   158,   754,   754,   754,   754,
     754,   754,   754,   754,   754,   754,   754,     0,     0,     0,
       0,     0,     0,  1211,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,     0,  1216,   848,   849,   850,     0,
       0,  1219,  1220,  1221,  1222,  1223,  1224,  1225,  1226,  1227,
    1228,  1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,
       0,     0,     0,  1240,  1241,  1242,  1243,  1244,  1245,  1246,
    1247,  1248,  1249,  1250,     0,     0,     0,     0,     0,     0,
       0,   188,     0,     0,     0,     0,     0,   188,     0,     0,
       0,     0,     0,   332,     0,     0,     0,     0,     0,   333,
       0,   963,   351,     0,     0,     0,   968,     0,   351,     0,
       0,   538,     0,    26,     0,     0,     0,   153,   154,   155,
     156,    77,    78,    79,    80,    27,   334,     0,    28,     0,
       0,     0,     0,     0,     0,    30,     0,     0,     0,     0,
       0,   157,  1332,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   335,     0,     0,     0,     0,     0,
     336,     0,     0,     0,    36,    67,     0,   158,     0,     0,
       0,     0,     0,    68,   147,  1095,     0,     0,   337,     0,
       0,     0,     0,     0,     0,   159,   978,   979,   980,   981,
     982,   983,   984,   338,     0,   188,   188,   339,     0,   340,
       0,     0,     0,     0,     0,   341,   342,     0,     0,     0,
       0,   913,     0,   351,     0,     0,     0,     0,   754,   754,
       0,   754,     0,     0,   188,   997,     0,     0,     0,   188,
       0,     0,     0,   196,     0,     0,     0,   188,     0,     0,
       0,     0,   188,   188,     0,     0,     0,     0,     0,     0,
       0,     0,   351,     0,     0,   351,   351,     0,     0,   351,
       0,  1393,   351,     0,     0,     0,     0,     0,  1178,  1179,
       0,     0,     0,     0,     0,  1385,  1386,     0,  1390,     0,
       0,     0,     0,     0,   350,     0,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,     0,     0,  1011,  1012,
    1013,     0,   262,     0,   714,     0,     0,  1205,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   754,   815,   816,   817,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,   831,   832,   833,     0,     0,   188,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   834,     0,     0,   351,
       0,   351,   188,     0,     0,     0,     0,    87,     0,     0,
       0,  1459,     0,  1423,     0,     0,   351,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1095,     0,     0,     0,
     350,     0,     0,     0,   350,     0,   350,   533,   350,   350,
       0,     0,     0,     0,     0,     0,   188,   188,     0,  1477,
     754,     0,     0,   835,     0,   836,   837,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   847,     0,     0,   848,
     849,   850,     0,     0,     0,     0,     0,   866,     0,     0,
       0,     0,     0,     0,     0,   165,   754,     0,     0,   754,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,     0,  1518,     0,     0,  1478,     0,     0,
       0,    27,   168,   233,   169,     0,   351,     0,  1333,     0,
       0,    30,     0,     0,     0,     0,   170,     0,  1393,   171,
     172,   754,     0,     0,  1536,   762,   762,   188,     0,     0,
       0,   188,   351,  1503,   350,     0,  1506,     0,   351,   805,
       0,    67,   351,     0,     0,     0,   234,   351,  1355,    68,
       0,   912,     0,   351,   174,     0,   188,   175,     0,     0,
       0,     0,   235,     0,     0,     0,   978,   979,   980,   981,
     982,   983,     0,   178,     0,  1381,   179,     0,  1535,     0,
       0,   180,     0,     0,     0,   351,   815,   816,   817,   818,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,   831,   832,   833,   997,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,   834,     0,     0,   351,     0,
       0,   350,     0,     0,   350,     0,     0,   350,   350,     0,
       0,     0,     0,     0,     0,   147,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,     0,     0,  1011,  1012,
    1013,     0,   835,     0,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,     0,  1095,   848,   849,
     850,     0,     0,     0,     0,     0,   931,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1435,  1436,   351,
       0,   351,   351,     0,   351,     0,     0,   351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1458,     0,     0,     0,   332,
       0,     0,     0,     0,     0,   333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1467,     0,   351,    26,
       0,     0,     0,   153,   154,   155,   156,    77,    78,    79,
      80,    27,   334,     0,    28,     0,     0,     0,   188,     0,
       0,    30,     0,     0,   351,     0,     0,   157,   351,     0,
     351,     0,     0,   196,     0,  1488,     0,     0,     0,     0,
     335,     0,  1493,   102,   762,   762,   336,   188,   350,     0,
      36,    67,   351,   158,   350,   351,   762,   762,   762,    68,
       0,     0,     0,     0,   337,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   351,   351,     0,     0,   338,
       0,  1525,     0,   339,     0,   340,     0,  1530,     0,     0,
    1531,   341,   342,     0,     0,     0,     0,  1342,     0,   805,
       0,     0,   805,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1542,     0,    26,     0,     0,     0,  1548,
       0,     0,     0,     0,     0,     0,     0,    27,     0,     0,
      28,    29,  1553,     0,     0,     0,  1557,    30,   188,     0,
    1563,    31,    32,  1568,     0,    33,     0,     0,  -155,   293,
       0,     0,     0,     0,    34,   351,     0,     0,  1587,   350,
       0,   762,   476,   478,     0,    35,    36,    37,     0,     0,
       0,    38,    39,   351,     0,    40,    41,     0,     0,     0,
     242,    42,   188,   255,     0,   255,   293,     0,     0,     0,
       0,     0,   351,     0,     0,     0,     0,     0,   350,   255,
     269,   350,   350,   188,     0,   350,     0,     0,   350,     0,
       0,   255,     0,   296,   293,     0,   255,     0,     0,   351,
       0,     0,     0,   805,     0,     0,     0,     0,     0,     0,
       0,   293,     0,     0,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   762,
       0,     0,     0,     0,     0,   762,   762,   762,   762,   762,
     762,   762,   762,   762,   762,   762,   762,   762,   762,   762,
     762,   762,   762,   762,     0,   418,     0,   762,   762,   762,
     762,   762,   762,   762,   762,   762,   762,   762,     0,     0,
     269,     0,     0,   296,     0,   350,     0,   350,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,   350,   496,     0,     0,   164,     0,     0,     0,
       0,   418,   165,   166,     0,     0,     0,   516,     0,     0,
       0,     0,     0,     0,     0,     0,   167,   255,     0,     0,
       0,     0,     0,   255,     0,     0,     0,     0,    27,   168,
     233,   169,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,   255,   170,     0,     0,   171,   172,     0,     0,
     255,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
     242,     0,   255,   173,     0,     0,    68,     0,     0,     0,
       0,   174,   255,     0,   175,   255,     0,     0,     0,   235,
     255,     0,   350,     0,     0,     0,   176,     0,   177,     0,
     178,     0,     0,   179,     0,     0,     0,     0,   180,   181,
     459,     0,     0,     0,   862,     0,     0,   255,   350,     0,
       0,     0,     0,     0,   350,     0,     0,     0,   350,     0,
       0,   255,   492,   350,     0,     0,     0,     0,     0,   350,
     815,   816,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,   833,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   762,
     762,   350,   762,     0,   255,     0,     0,     0,     0,   834,
       0,     0,     0,   756,   756,     0,     0,     0,     0,     0,
     418,     0,     0,     0,     0,     0,   255,   798,     0,     0,
       0,     0,     0,     0,   573,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,     0,     0,     0,     0,   835,   716,   836,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
       0,     0,   848,   849,   850,     0,     0,     0,     0,     0,
     945,     0,   734,   255,     0,     0,     0,     0,   765,     0,
     767,     0,   769,     0,     0,     0,   776,   777,   778,     0,
       0,     0,     0,     0,     0,     0,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   350,     0,   350,   350,     0,
     350,     0,     0,   350,   861,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1046,  1047,  1048,  1049,
    1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,
    1060,  1061,  1062,  1063,  1064,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   350,  1065,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   762,     0,     0,     0,     0,     0,     0,     0,     0,
     350,     0,     0,     0,   350,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,   418,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   762,   350,     0,
     762,   350,  1066,     0,  1067,  1068,  1069,  1070,  1071,  1072,
    1073,  1074,  1075,  1076,  1077,  1078,     0,     0,  1079,  1080,
    1081,   350,   350,     0,     0,     0,  1082,     0,    26,     0,
       0,     0,   153,   154,   155,   156,    77,    78,    79,    80,
      27,     0,   762,    28,     0,   805,  1025,     0,     0,     0,
      30,  1031,     0,     0,     0,     0,   157,     0,     0,     0,
       0,     0,   756,   756,     0,     0,     0,     0,     0,     0,
       0,   759,   759,     0,   756,   756,   756,     0,     0,    36,
      67,     0,   158,     0,     0,   801,     0,     0,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   350,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   340,     0,     0,   798,     0,   350,
     798,     0,     0,     0,     0,     0,     0,     0,   255,     0,
       0,     0,     0,   255,  1143,     0,     0,     0,   350,   958,
     959,   418,     0,     0,     0,     0,   418,   418,     0,     0,
     966,   967,     0,   969,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   350,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   756,
     350,     0,  1023,     0,     0,     0,  1024,     0,     0,     0,
    1029,     0,  1030,     0,  1032,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1096,  1097,  1098,  1099,  1100,  1101,  1102,  1103,
    1104,  1105,  1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,
    1114,   798,     0,     0,  1117,  1118,  1119,  1120,  1121,  1122,
    1123,  1124,  1125,  1126,  1127,  1129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   756,   255,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   756,     0,     0,
       0,     0,     0,   756,   756,   756,   756,   756,   756,   756,
     756,   756,   756,   756,   756,   756,   756,   756,   756,   756,
     756,   756,     0,     0,     0,   756,   756,   756,   756,   756,
     756,   756,   756,   756,   756,   756,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   761,   761,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   802,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     759,   759,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   759,   759,   759,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,  1060,  1061,  1062,  1063,  1064,     0,  1129,     0,
       0,   255,     0,     0,  1263,   801,     0,     0,   801,     0,
       0,     0,     0,     0,     0,     0,     0,  1065,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,     0,  1277,  1278,  1279,  1280,  1281,  1282,  1283,
    1284,  1285,  1286,  1287,  1288,  1289,  1290,  1291,  1292,  1293,
    1294,  1295,     0,     0,     0,  1298,  1299,  1300,  1301,  1302,
    1303,  1304,  1305,  1306,  1307,  1308,  1129,   759,     0,     0,
       0,     0,  1317,  1318,  1066,     0,  1067,  1068,  1069,  1070,
    1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,     0,     0,
    1079,  1080,  1081,     0,     0,     0,     0,     0,  1275,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   756,   756,     0,
     756,     0,     0,     0,     0,     0,     0,     0,     0,   801,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1338,     0,   815,   816,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   759,     0,     0,     0,     0,     0,     0,
       0,   418,   834,     0,     0,   759,     0,     0,     0,     0,
       0,   759,   759,   759,   759,   759,   759,   759,   759,   759,
     759,   759,   759,   759,   759,   759,   759,   759,   759,   759,
       0,     0,     0,   759,   759,   759,   759,   759,   759,   759,
     759,   759,   759,   759,   761,   761,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   756,   761,   761,   761,   835,
       0,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,     0,  1409,   848,   849,   850,     0,     0,
     332,   851,     0,     0,     0,     0,   333,     0,     0,     0,
       0,     0,   418,     0,     0,     0,     0,     0,     0,  1481,
      26,     0,   802,     0,   153,   154,   155,   156,    77,    78,
      79,    80,    27,   334,     0,    28,     0,     0,     0,     0,
       0,   418,    30,     0,     0,     0,     0,     0,   157,  1419,
       0,  1420,     0,     0,  1422,     0,     0,     0,     0,     0,
       0,   335,     0,     0,     0,     0,     0,   336,     0,   756,
       0,    36,    67,     0,   158,     0,     0,     0,     0,     0,
      68,   761,     0,     0,     0,   337,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     338,     0,     0,     0,   339,   756,   340,     0,   756,     0,
       0,     0,   341,   342,     0,     0,     0,     0,  1482,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   255,  1468,     0,     0,     0,     0,     0,     0,
       0,     0,  1129,   802,  1129,     0,     0,     0,     0,     0,
     756,     0,     0,   798,     0,     0,     0,  1593,     0,     0,
       0,     0,     0,     0,     0,   759,   759,  1603,   759,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   761,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1511,  1512,   761,
       0,     0,     0,     0,     0,   761,   761,   761,   761,   761,
     761,   761,   761,   761,   761,   761,   761,   761,   761,   761,
     761,   761,   761,   761,     0,     0,     0,   761,   761,   761,
     761,   761,   761,   761,   761,   761,   761,   761,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1555,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   759,     0,   584,   585,   586,   587,   588,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,   627,   628,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,   646,   647,   648,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   759,   676,     0,
       0,   677,     0,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   244,   245,   246,   691,
       0,     0,   692,     0,   693,   694,   695,   696,   697,   698,
       0,     0,     0,   759,     0,     0,   759,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   761,
     761,     0,   761,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   759,     0,
       0,   801,   584,   585,   586,   587,   588,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   627,   628,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,   646,   647,   648,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,     0,   676,     0,   761,   677,     0,
     678,   679,   680,   681,   682,   683,   684,   685,   686,   687,
     688,   689,   690,   244,   245,   246,   691,     0,   705,   692,
       0,   693,   694,     0,   696,   697,   698,     0,     0,   432,
       0,     0,     0,     0,     0,   433,   434,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   779,     0,    26,
       0,     0,     0,   153,   154,   155,   156,    77,    78,    79,
      80,    27,     0,   233,   780,    29,     0,     0,     0,     0,
     781,    30,     0,     0,     0,    31,    32,   157,     0,    33,
       0,   438,  -155,     0,   -13,     0,     0,   439,    34,   440,
       0,   761,     0,     0,   782,     0,     0,   783,     0,    35,
      36,    37,     0,   158,  -151,    38,   784,     0,   785,    40,
      41,     0,   786,     0,   787,    42,     0,     0,     0,     6,
       0,     0,   235,     0,     0,     0,     0,   761,     0,   446,
     761,   447,     0,   448,     0,   449,   450,     0,     0,   451,
     -13,   788,   789,     0,     0,     0,     8,     0,     0,   790,
    -470,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   761,     0,     0,  1538,   584,   585,   586,   587,
     588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   627,
     628,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,   646,   647,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,     0,   676,
       0,     0,   677,     0,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   687,   688,   689,   690,   244,   245,   246,
     691,     0,     0,   692,   706,   693,   694,   432,   696,   697,
     698,     0,     0,   433,   434,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   779,     0,    26,     0,     0,
       0,   153,   154,   155,   156,    77,    78,    79,    80,    27,
       0,   233,   780,    29,     0,     0,     0,     0,   781,    30,
       0,     0,     0,    31,    32,   157,     0,    33,     0,   438,
    -155,     0,   -13,     0,     0,   439,    34,   440,     0,     0,
       0,     0,   782,     0,     0,   783,     0,    35,    36,    37,
       0,   158,  -151,    38,   784,     0,   785,    40,    41,     0,
     786,     0,   787,    42,     0,     0,     0,     6,     0,     0,
     235,     0,     0,     0,     0,     0,     0,   446,     0,   447,
       0,   448,     0,   449,   450,   432,     0,   451,   -13,   788,
     789,   433,   434,     0,     8,     0,     0,   790,  -467,     0,
       0,     0,     0,   435,     0,    26,     0,     0,     0,   153,
     154,   155,   156,    77,    78,    79,    80,    27,     0,   233,
     436,     0,     0,     0,     0,     0,   437,    30,     0,     0,
       0,     0,     0,   157,     0,     0,     0,   438,     0,     0,
       0,     0,     0,   439,     0,   440,     0,     0,     0,     0,
       0,     0,     0,   441,     0,     0,    36,    67,     0,   158,
       0,     0,   442,     0,   443,    68,     0,     0,   444,     0,
     445,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,     0,     0,     0,     0,   446,     0,   447,     0,   448,
       0,   449,   450,   432,     0,   451,   452,   453,   454,   433,
     434,  -484,     0,  -484,     0,     0,     0,     0,     0,     0,
       0,   435,     0,    26,     0,     0,     0,   153,   154,   155,
     156,    77,    78,    79,    80,    27,     0,   233,   436,     0,
       0,     0,     0,     0,   437,    30,     0,     0,     0,     0,
       0,   157,     0,     0,     0,   438,     0,     0,     0,     0,
       0,   439,     0,   440,     0,     0,     0,     0,     0,     0,
       0,   441,     0,     0,    36,    67,     0,   158,     0,     0,
     442,     0,   443,    68,     0,     0,   444,     0,   445,     0,
       0,   164,     0,     0,     0,     0,   235,   285,   166,     0,
       0,     0,     0,   446,     0,   447,     0,   448,     0,   449,
     450,   167,     0,   451,   452,   453,   454,     0,     0,     0,
       0,  -485,     0,    27,   286,     0,   169,     0,     0,     0,
       0,     0,     0,    30,     0,     0,     0,     0,   170,     0,
       0,   171,   172,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,     0,     0,     0,     0,   173,     0,
       0,    68,     0,     0,     0,     0,   174,     0,     0,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     432,   176,     0,   177,     0,   288,   433,   434,   179,     0,
       0,     0,     0,   180,   181,     0,     0,     0,   779,   723,
      26,     0,     0,     0,   153,   154,   155,   156,    77,    78,
      79,    80,    27,     0,     0,   780,    29,     0,     0,     0,
       0,   781,    30,     0,     0,     0,    31,    32,   157,     0,
      33,     0,     0,  -155,     0,     0,     0,     0,     0,    34,
     440,     0,     0,     0,     0,  1038,     0,     0,   783,     0,
      35,    36,    37,     0,   158,  -151,    38,    39,     0,   785,
      40,    41,     0,   786,     0,   787,    42,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     446,     0,   447,     0,   448,     0,   449,   450,   432,     0,
     451,     0,   788,   789,   433,   434,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,   435,     0,    26,     0,
       0,     0,   153,   154,   155,   156,    77,    78,    79,    80,
      27,     0,   233,   436,     0,     0,     0,     0,     0,   437,
      30,     0,     0,     0,     0,     0,   157,     0,     0,     0,
     438,     0,     0,     0,     0,     0,   439,     0,   440,     0,
       0,     0,     0,     0,     0,     0,   441,     0,     0,    36,
      67,     0,   158,     0,     0,   442,     0,   443,    68,     0,
       0,   444,     0,   445,     0,     0,     0,     0,     0,     0,
       0,   235,     0,     0,     0,     0,     0,     0,   446,     0,
     447,     0,   448,     0,   449,   450,   432,     0,   451,   452,
     453,   454,   433,   434,  -485,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   435,     0,    26,     0,     0,     0,
     153,   154,   155,   156,    77,    78,    79,    80,    27,     0,
     233,   436,     0,     0,     0,     0,     0,   437,    30,     0,
       0,     0,     0,     0,   157,     0,     0,     0,   438,     0,
       0,     0,     0,     0,   439,     0,   440,     0,     0,     0,
       0,     0,     0,     0,   441,     0,     0,    36,    67,     0,
     158,     0,     0,   442,     0,   443,    68,     0,     0,   444,
       0,   445,     0,     0,     0,     0,     0,     0,     0,   235,
       0,     0,     0,     0,     0,     0,   446,     0,   447,     0,
     448,     0,   449,   450,     0,     0,   451,   452,   453,   454,
       0,     0,  -487,   815,   816,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,   815,   816,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
     833,     0,   834,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   834,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   978,   979,   980,   981,   982,   983,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,     0,     0,     0,     0,     0,     0,   835,
       0,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   997,     0,   848,   849,   850,   835,  1140,
     836,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,     0,     0,   848,   849,   850,     0,  1334,     0,
       0,     0,     0,     0,     0,   978,   979,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,     0,     0,     0,     0,     0,     0,
     998,     0,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,   997,   452,  1011,  1012,  1013,   815,
     816,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   834,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   998,     0,   999,  1000,  1001,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,     0,  1015,  1011,  1012,  1013,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,   995,   996,     0,
       0,     0,     0,     0,     0,   835,     0,   836,   837,   838,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   997,
       0,   848,   849,   850,  1046,  1047,  1048,  1049,  1050,  1051,
    1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,
    1062,  1063,  1064,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1065,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   998,     0,   999,  1000,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
       0,     0,  1011,  1012,  1013,   815,   816,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,  -793,     0,     0,     0,     0,     0,     0,
    1066,     0,  1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,
    1075,  1076,  1077,  1078,   834,     0,  1079,  1080,  1081,   815,
     816,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   834,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   837,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,     0,     0,   848,   849,   850,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,   995,  -793,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   837,   838,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   997,
       0,   848,   849,   850,   815,   816,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   834,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1000,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
       0,     0,  1011,  1012,  1013,   978,   979,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   997,     0,   848,   849,   850,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1000,  1001,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,   432,     0,  1011,  1012,  1013,
       0,   433,   434,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -793,     0,    26,     0,     0,     0,   153,
     154,   155,   156,    77,    78,    79,    80,    27,     0,   233,
     436,     0,     0,     0,     0,     0,   437,    30,     0,     0,
       0,     0,     0,   157,     0,     0,  -775,   438,     0,     0,
       0,  -775,     0,   439,     0,   440,     0,     0,     0,     0,
       0,     0,     0,   441,     0,     0,    36,    67,     0,   158,
       0,     0,   442,     0,   443,    68,     0,  -775,   444,     0,
     445,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,     0,     0,     0,     0,   446,     0,   447,     0,   448,
       0,   449,   450,   432,     0,   451,   452,   453,   454,   736,
     737,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -793,     0,    26,     0,     0,     0,   153,   154,   155,
     156,    77,    78,    79,    80,    27,     0,   233,   739,     0,
       0,     0,     0,     0,   740,    30,     0,     0,     0,     0,
       0,   157,     0,     0,  -775,   438,     0,     0,     0,  -775,
       0,   439,     0,   742,     0,     0,     0,     0,     0,     0,
       0,   743,     0,     0,    36,    67,     0,   158,     0,     0,
     442,     0,   744,    68,     0,  -775,   745,     0,   746,     0,
       0,     0,     0,     0,     0,     0,   235,     0,     0,     0,
       0,     0,     0,   446,     0,   747,     0,   748,     0,   749,
     750,   432,     0,   751,   452,   752,   753,   433,   434,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,   153,   154,   155,   156,    77,
      78,    79,    80,    27,     0,   233,   436,     0,     0,     0,
       0,     0,   437,    30,     0,     0,     0,     0,     0,   157,
       0,     0,  -775,   438,     0,     0,     0,  -775,     0,   439,
       0,   440,     0,     0,     0,     0,     0,     0,     0,   441,
       0,     0,    36,    67,     0,   158,     0,     0,   442,     0,
     443,    68,     0,  -775,   444,     0,   445,     0,     0,     0,
       0,     0,     0,     0,   235,     0,     0,     0,     0,     0,
       0,   446,     0,   447,     0,   448,     0,   449,   450,   432,
       0,   451,   452,   453,   454,   736,   737,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   738,     0,    26,
       0,     0,     0,   153,   154,   155,   156,    77,    78,    79,
      80,    27,     0,   233,   739,     0,     0,     0,     0,     0,
     740,    30,     0,     0,     0,     0,     0,   157,     0,     0,
       0,   438,     0,     0,   741,     0,     0,   439,     0,   742,
       0,     0,     0,     0,     0,     0,     0,   743,     0,     0,
      36,    67,     0,   158,     0,     0,   442,     0,   744,    68,
       0,     0,   745,     0,   746,     0,     0,     0,     0,     0,
       0,     0,   235,     0,     0,     0,     0,     0,     0,   446,
       0,   747,     0,   748,     0,   749,   750,   432,     0,   751,
     452,   752,   753,   736,   737,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   738,     0,    26,     0,     0,
       0,   153,   154,   155,   156,    77,    78,    79,    80,    27,
       0,   233,   739,     0,     0,     0,     0,     0,   740,    30,
       0,     0,     0,     0,     0,   157,     0,     0,     0,   438,
       0,     0,  1135,     0,     0,   439,     0,   742,     0,     0,
       0,     0,     0,     0,     0,   743,     0,     0,    36,    67,
       0,   158,     0,     0,   442,     0,   744,    68,     0,     0,
     745,     0,   746,     0,     0,     0,     0,     0,     0,     0,
     235,     0,     0,     0,     0,     0,     0,   446,     0,   747,
       0,   748,     0,   749,   750,   432,     0,   751,   452,   752,
     753,   433,   434,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   435,     0,    26,     0,     0,     0,   153,
     154,   155,   156,    77,    78,    79,    80,    27,     0,   233,
     436,     0,     0,     0,     0,     0,   437,    30,     0,     0,
       0,     0,     0,   157,     0,     0,     0,   438,     0,     0,
       0,     0,     0,   439,     0,   440,     0,     0,     0,     0,
       0,     0,     0,   441,     0,     0,    36,    67,     0,   158,
       0,     0,   442,     0,   443,    68,     0,     0,   444,     0,
     445,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,     0,     0,     0,     0,   446,     0,   447,     0,   448,
       0,   449,   450,   432,     0,   451,   452,   453,   454,   736,
     737,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   738,     0,    26,     0,     0,     0,   153,   154,   155,
     156,    77,    78,    79,    80,    27,     0,   233,   739,     0,
       0,     0,     0,     0,   740,    30,     0,     0,     0,     0,
       0,   157,     0,     0,     0,   438,     0,     0,     0,     0,
       0,   439,     0,   742,     0,     0,     0,     0,     0,     0,
       0,   743,     0,     0,    36,    67,     0,   158,     0,     0,
     442,     0,   744,    68,     0,     0,   745,     0,   746,     0,
       0,     0,     0,     0,     0,     0,   235,     0,     0,     0,
       0,     0,     0,   446,     0,   747,     0,   748,     0,   749,
     750,   432,     0,   751,   452,   752,   753,   433,   434,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   779,
       0,    26,     0,     0,     0,   153,   154,   155,   156,    77,
      78,    79,    80,    27,     0,   233,   780,     0,     0,     0,
       0,     0,   781,    30,     0,     0,     0,     0,     0,   157,
       0,     0,     0,   438,     0,     0,     0,     0,     0,   439,
       0,   440,     0,     0,     0,     0,     0,     0,     0,   783,
       0,     0,    36,    67,     0,   158,     0,     0,   442,     0,
     785,    68,     0,     0,   786,     0,   787,     0,     0,     0,
       0,     0,     0,     0,   235,     0,     0,     0,   332,     0,
       0,   446,     0,   447,   333,   448,     0,   449,   450,     0,
       0,   451,   452,   788,   789,     0,   534,     0,    26,     0,
       0,     0,   153,   154,   155,   156,    77,    78,    79,    80,
      27,   334,     0,    28,     0,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,     0,   157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   335,
       0,   332,     0,     0,     0,   336,     0,   333,     0,    36,
      67,     0,   158,     0,     0,     0,     0,     0,    68,     0,
       0,    26,     0,   337,     0,   153,   154,   155,   156,    77,
      78,    79,    80,    27,   334,     0,    28,     0,   338,     0,
       0,     0,   339,    30,   340,     0,     0,     0,     0,   157,
     341,   342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   335,     0,   332,     0,     0,     0,   336,     0,
     333,     0,    36,    67,     0,   158,     0,     0,     0,     0,
       0,    68,     0,     0,    26,     0,   337,     0,   153,   154,
     155,   156,    77,    78,    79,    80,    27,   334,     0,    28,
       0,   338,     0,   771,     0,   339,    30,   340,     0,     0,
       0,     0,   157,   341,   342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   335,     0,   332,     0,     0,
       0,   336,     0,   333,     0,    36,    67,     0,   158,     0,
       0,     0,     0,     0,    68,  1168,     0,    26,     0,   337,
       0,   153,   154,   155,   156,    77,    78,    79,    80,    27,
     334,     0,    28,     0,   338,     0,   970,     0,   339,    30,
     340,     0,     0,     0,     0,   157,   341,   342,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   335,     0,
     332,     0,     0,     0,   336,     0,   333,     0,    36,    67,
       0,   158,     0,     0,     0,     0,     0,    68,  1172,     0,
      26,     0,   337,     0,   153,   154,   155,   156,    77,    78,
      79,    80,    27,   334,     0,    28,     0,   338,     0,     0,
       0,   339,    30,   340,     0,     0,     0,     0,   157,   341,
     342,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   335,     0,   332,     0,     0,     0,   336,     0,   333,
       0,    36,    67,     0,   158,     0,     0,     0,     0,     0,
      68,     0,     0,    26,     0,   337,     0,   153,   154,   155,
     156,    77,    78,    79,    80,    27,   334,     0,    28,     0,
     338,     0,     0,     0,   339,    30,   340,     0,     0,     0,
       0,   157,   341,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   335,     0,   332,     0,     0,     0,
     336,     0,   333,     0,    36,    67,     0,   158,     0,     0,
       0,     0,     0,    68,     0,     0,    26,     0,   337,     0,
     153,   154,   155,   156,    77,    78,    79,    80,    27,   334,
       0,    28,     0,   338,     0,  1264,     0,   339,    30,   340,
       0,     0,     0,     0,   157,   341,   342,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,     0,   332,
       0,     0,     0,   336,     0,   333,     0,    36,    67,     0,
     158,     0,     0,     0,     0,     0,    68,     0,     0,    26,
       0,   337,     0,   153,   154,   155,   156,    77,    78,    79,
      80,    27,   334,   233,     0,     0,   338,     0,  1387,     0,
     339,    30,   340,     0,     0,     0,     0,   157,   341,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1601,     0,     0,     0,     0,     0,   336,     0,     0,     0,
      36,    67,     0,   158,     0,     0,     0,     0,     0,    68,
       0,     0,     0,     0,   337,     0,     0,     0,     0,   332,
       0,     0,   235,     0,     0,   333,     0,     0,     0,   338,
       0,     0,     0,   339,     0,   340,     0,     0,     0,    26,
       0,   341,   342,   153,   154,   155,   156,    77,    78,    79,
      80,    27,   334,     0,    28,     0,     0,     0,     0,     0,
       0,    30,     0,     0,     0,     0,     0,   157,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     335,     0,   332,     0,     0,     0,   336,     0,   333,     0,
      36,    67,     0,   158,     0,     0,     0,     0,     0,    68,
       0,     0,    26,     0,   337,     0,   153,   154,   155,   156,
      77,    78,    79,    80,    27,   334,     0,    28,     0,   338,
       0,     0,     0,   339,    30,   340,     0,     0,     0,     0,
     157,   341,   342,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   531,     0,   332,     0,     0,     0,   336,
       0,   333,     0,    36,    67,     0,   158,     0,     0,     0,
       0,     0,    68,     0,     0,    26,     0,   337,     0,   153,
     154,   155,   156,    77,    78,    79,    80,    27,   334,     0,
    -406,     0,   338,     0,     0,     0,   339,    30,   340,     0,
       0,     0,     0,   157,   341,   342,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1581,     0,   332,     0,
       0,     0,   336,     0,   333,     0,    36,    67,     0,   158,
       0,     0,     0,     0,     0,    68,     0,     0,    26,     0,
     337,     0,   153,   154,   155,   156,    77,    78,    79,    80,
      27,   334,     0,     0,     0,   338,     0,     0,     0,  1582,
      30,   340,     0,     0,     0,     0,   157,   341,   342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   335,
       0,     0,     0,     0,     0,   336,     0,     0,     0,    36,
      67,     0,   158,   164,     0,     0,     0,     0,    68,   165,
     166,     0,     0,   337,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   167,     0,     0,     0,     0,   338,     0,
       0,     0,   339,     0,   340,    27,   168,   233,   169,     0,
     341,   342,     0,     0,     0,    30,     0,     0,     0,     0,
     170,     0,     0,   171,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,   164,     0,     0,
       0,     0,     0,   165,   166,    67,     0,     0,     0,     0,
     173,     0,     0,    68,     0,     0,     0,   167,   174,     0,
       0,   175,     0,     0,     0,     0,   235,     0,     0,    27,
     168,   233,   169,   176,     0,   177,     0,   178,     0,    30,
     179,     0,     0,     0,   170,   180,   181,   171,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,   164,     0,     0,     0,     0,     0,   165,   166,    67,
       0,     0,     0,     0,   173,     0,     0,    68,     0,     0,
       0,   167,   174,     0,     0,   175,     0,     0,     0,     0,
     235,     0,     0,    27,   474,   233,   169,   176,     0,   177,
       0,   178,     0,    30,   179,     0,     0,     0,   170,   180,
     181,   171,   172,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   267,     0,     0,   164,     0,     0,     0,     0,
       0,   165,   166,    67,     0,     0,     0,     0,   173,     0,
       0,    68,     0,     0,     0,   167,   174,     0,     0,   175,
       0,     0,     0,     0,   235,     0,     0,    27,   477,   233,
     169,   176,     0,   177,     0,   178,     0,    30,   179,     0,
       0,     0,   170,   180,   181,   171,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   294,     0,     0,   164,
       0,     0,     0,     0,     0,   165,   166,    67,     0,     0,
       0,     0,   173,     0,     0,    68,     0,   582,     0,   167,
     174,     0,     0,   175,     0,     0,     0,     0,   235,     0,
       0,    27,   168,   233,   169,   176,     0,   177,     0,   178,
       0,    30,   179,     0,     0,     0,   170,   180,   181,   171,
     172,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   164,     0,     0,     0,     0,     0,   165,
     166,    67,     0,     0,     0,     0,   173,     0,     0,    68,
       0,   935,     0,   167,   174,     0,     0,   175,     0,     0,
       0,     0,   235,     0,     0,    27,   168,   233,   169,   176,
       0,   177,     0,   178,     0,    30,   179,     0,     0,     0,
     170,   180,   181,   171,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,     0,     0,
       0,     0,     0,   165,   166,    67,     0,     0,     0,     0,
     173,     0,     0,    68,     0,     0,     0,   167,   174,     0,
       0,   175,     0,     0,     0,     0,   235,     0,     0,    27,
     168,   233,   169,   176,     0,   177,     0,   178,     0,    30,
     179,     0,     0,     0,   170,   180,   181,   171,   172,     0,
       0,     0,     0,     0,     0,     0,   164,     0,     0,     0,
       0,     0,   285,   166,     0,     0,     0,     0,     0,    67,
       0,     0,     0,     0,   173,  1206,   167,    68,     0,     0,
       0,     0,   174,     0,     0,   175,     0,     0,    27,   286,
     235,   169,     0,     0,     0,     0,     0,   176,    30,   177,
       0,   178,     0,   170,   179,     0,   171,   172,     0,   180,
     181,     0,     0,     0,     0,   164,     0,   287,     0,     0,
       0,   165,   166,     0,     0,     0,     0,     0,    67,     0,
       0,     0,     0,   173,     0,   167,    68,     0,     0,     0,
       0,   174,     0,     0,   175,     0,     0,    27,   477,   233,
       0,     0,     0,     0,     0,     0,   176,    30,   177,     0,
     288,     0,   170,   179,     0,   171,   172,     0,   180,   181,
       0,     0,     0,     0,   164,     0,  1591,     0,     0,     0,
     285,   166,     0,     0,     0,     0,     0,    67,     0,     0,
       0,     0,   173,     0,   167,    68,     0,     0,     0,     0,
     174,     0,     0,   175,     0,     0,    27,   286,   235,   169,
       0,     0,     0,     0,     0,   176,    30,   177,     0,   178,
       0,   170,   179,     0,   171,   172,     0,   180,   181,     0,
       0,     0,     0,   164,     0,   287,     0,     0,     0,   285,
     166,     0,     0,     0,     0,     0,    67,     0,     0,     0,
       0,   173,     0,   167,    68,     0,     0,     0,     0,   174,
       0,     0,   175,     0,     0,    27,   286,     0,  -406,     0,
       0,     0,     0,     0,   176,    30,   177,     0,   288,     0,
     170,   179,     0,   171,   172,     0,   180,   181,     0,     0,
       0,     0,   164,     0,  1571,     0,     0,     0,   165,   166,
       0,     0,     0,     0,     0,    67,     0,     0,     0,     0,
     173,     0,   167,    68,     0,     0,     0,     0,   174,     0,
       0,   175,     0,     0,    27,   168,     0,   169,     0,     0,
       0,     0,     0,   176,    30,   177,     0,  1572,     0,   170,
     179,     0,   171,   172,     0,   180,   181,     0,     0,     0,
       0,   164,     0,     0,     0,     0,     0,   165,   166,     0,
       0,     0,     0,     0,    67,     0,     0,     0,     0,   173,
       0,   167,    68,     0,     0,     0,     0,   174,     0,     0,
     175,     0,     0,    27,   168,     0,  1622,     0,     0,     0,
       0,     0,   176,    30,   177,     0,   178,     0,   170,   179,
       0,   171,   172,     0,   180,   181,     0,     0,     0,     0,
     164,     0,     0,     0,     0,     0,   165,   166,     0,     0,
       0,     0,     0,    67,     0,     0,     0,     0,   173,     0,
     167,    68,     0,     0,     0,     0,   174,     0,     0,   175,
       0,     0,    27,   168,     0,     0,     0,     0,     0,     0,
       0,   176,    30,   177,     0,   178,     0,   170,   179,     0,
     171,   172,     0,   180,   181,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,     0,     0,     0,     0,   173,     0,     0,
      68,     0,     0,     0,     0,   174,     0,     0,   175,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,     0,   177,     0,   178,     0,     0,   179,     0,     0,
      26,     0,   180,   181,   153,   154,   155,   156,    77,    78,
      79,    80,    27,     0,   233,   739,     0,     0,     0,     0,
       0,   740,    30,     0,     0,     0,     0,     0,   157,     0,
       0,  -775,   438,     0,     0,     0,  -775,     0,   439,     0,
     742,     0,     0,     0,     0,     0,     0,     0,   743,     0,
       0,    36,    67,     0,   158,     0,     0,   442,     0,   744,
      68,     0,  -775,   745,     0,   746,     0,     0,     0,     0,
       0,     0,     0,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     751
};

static const yytype_int16 yycheck[] =
{
      16,   281,   146,   106,   146,    89,   296,   284,   113,   312,
     271,   270,   424,   452,    32,   544,     3,   148,   447,   145,
     567,     9,     9,    16,   571,   452,   315,    26,    15,   364,
     581,   304,    12,   164,   454,   549,   326,   145,   143,    76,
     146,   167,   881,   792,   406,   176,   795,    84,   452,    86,
      87,    88,   921,  1161,   923,   891,   278,   280,   163,   491,
     165,   895,  1011,   114,   222,  1272,   453,   104,   480,   174,
     218,    89,   177,   178,    73,   180,   873,   863,   379,   150,
     228,   150,    19,  1255,   145,  1255,   170,     9,     4,    10,
     127,  1195,     0,     4,    42,    21,   123,   124,   125,    58,
      42,    42,     4,    10,   141,   752,   232,   144,     3,     3,
     236,     0,   181,    64,    90,    90,    95,    23,    21,    93,
      37,    55,    92,    93,    94,    92,    93,    94,   236,     3,
    1079,   118,   237,   108,   121,    10,    42,     3,    89,     3,
     116,   788,    21,   433,   270,     3,   120,   273,   421,   102,
     120,     3,   170,   120,   124,   114,    54,   124,   448,    10,
     108,    59,   267,   116,   425,    10,   108,   428,    10,     3,
      10,   105,   109,   434,   131,    50,   281,     0,    53,    96,
     285,   208,   123,   288,   105,    93,   213,    85,   104,   294,
     316,   207,   229,   104,   299,   279,   122,    23,   105,   121,
     423,   332,   104,    92,    93,    94,   122,   338,   103,   510,
     368,   122,   120,   240,   202,   202,   124,   322,   205,   122,
     122,   116,   210,   210,   118,   212,   357,   121,   376,   103,
     105,   120,   333,    99,   365,    99,   337,   103,   339,   103,
     341,   342,   116,   122,   102,   103,   505,    99,   353,   526,
     116,   103,   116,   530,   105,   381,   387,   479,   116,  1363,
     105,   279,     4,   105,   116,   105,     8,     3,   225,   103,
      12,   122,     3,   399,   405,   548,    23,   122,    93,    42,
     122,  1488,   122,    23,    53,   411,  1621,   113,   210,   721,
       4,   399,    37,    55,     8,    23,  1631,   115,    12,    35,
    1554,   432,   407,   411,    23,   120,   121,    23,   115,    45,
     415,    42,    23,     4,    23,   446,  1570,   333,   747,   424,
      89,   337,    68,   339,   385,   341,   342,   264,   397,   366,
    1502,  1167,  1502,   753,   405,    54,   323,  1171,    74,    75,
     367,   121,   122,    54,    35,   114,   447,    83,   375,    23,
    1147,    96,   114,   792,    45,     4,   795,   105,   489,   122,
      42,   124,   104,  1363,     4,   752,   113,   103,   795,   789,
    1156,    99,   103,   113,   122,   480,   481,  1377,   483,   505,
     511,    93,  1374,   930,    75,    90,    35,   490,  1380,  1596,
     104,   795,    83,   907,   113,    35,    45,    37,  1605,   115,
     116,   788,   113,   108,  1611,    45,   115,   116,   120,  1616,
      42,   569,   124,   104,   545,  1622,   105,    56,   566,   114,
    1627,   104,   438,   439,   121,   122,    75,    35,   123,   849,
     531,   447,    78,   122,    83,    75,   452,    45,   727,   122,
     122,    80,   124,    83,  1444,    50,   736,   578,    53,   550,
     551,    93,  1452,     3,   731,   104,    96,  1449,   748,     9,
      10,   720,   513,    54,   104,   113,  1415,    75,  1417,    56,
       3,     4,   904,    23,    93,    83,  1562,   916,   120,    23,
     122,    35,   124,    39,    38,    35,    36,   524,    38,   916,
     122,    45,   124,   770,  1580,    45,    99,    53,   101,   119,
      50,   120,   108,    53,    54,   124,   729,   108,   730,    42,
     771,   102,   916,   121,  1350,   531,    93,   123,    99,  1353,
    1628,    75,   123,   114,    80,    75,    79,    80,   544,    83,
      80,   547,   123,    83,   550,   551,    89,   949,    88,    50,
     813,    91,    53,   120,   122,   572,   124,   124,    50,   576,
     119,    53,   579,   103,    56,   105,   583,   107,  1626,  1428,
     110,    50,    93,   113,    53,   115,   116,  1635,   103,   872,
     124,   114,   559,   106,   107,   108,   109,   110,   111,   112,
     123,   943,   115,   116,   117,     3,     4,    93,  1015,   120,
      53,   122,  1012,   124,   720,   856,   114,    23,   114,    23,
     726,   114,     3,   113,   114,   123,   867,   123,     9,    35,
     123,    35,   114,    37,   120,   121,   122,  1456,   726,    45,
      21,    45,    23,   882,    42,   123,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    90,    38,    35,    99,
     741,    38,  1189,  1194,    45,    92,   747,    94,    45,    75,
      51,    75,  1203,    23,    53,   113,   114,    83,   116,    83,
    1080,     3,     4,    64,    99,    35,  1180,   116,    38,    70,
      35,    35,    96,    74,    75,    45,    77,   122,    75,   124,
      45,    45,    83,   114,   115,   116,    83,    88,   106,   107,
     108,   109,   110,   111,   112,   956,    53,   115,   116,   117,
      42,   122,   103,   124,    74,    75,   107,    99,   109,   970,
      75,    75,    93,    83,   115,   116,    80,    23,    83,    83,
     121,   737,   738,   103,   122,   741,   124,   124,   116,   834,
     835,   747,    35,   749,   750,   751,   102,   868,    35,   120,
     110,    38,    45,   124,   114,   110,   121,   122,    45,   114,
     876,   852,     3,     4,     5,   881,   882,     8,  1019,  1508,
     115,   116,   117,    21,  1191,   107,   108,   109,   110,   111,
     112,    29,    75,   115,   116,   117,   792,    35,    75,   795,
      83,   122,    93,   124,    99,  1214,    83,    45,    54,   782,
     891,    42,    35,   894,   895,    38,   114,   898,   101,   792,
     901,    35,    45,    93,    31,    32,    33,    34,    93,   120,
     941,    45,   792,   124,   124,    50,    93,    75,    53,    53,
    1155,    56,  1373,    35,    24,    83,    38,   124,   122,   123,
     120,  1258,    75,    45,   124,   120,   852,   124,   854,   124,
      83,    75,   114,   120,   949,   102,    80,   124,   122,    83,
     124,   850,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,  1151,    75,   115,   116,   117,    93,   113,   114,
      35,    83,   102,    38,    35,   891,    35,    38,   894,   895,
      45,   124,   898,    54,    45,   901,    45,   115,   116,   117,
    1021,    35,   997,   998,   120,   108,    93,   884,   124,   926,
     916,    45,  1163,    54,  1433,    64,    93,   113,   114,   936,
      75,    70,   124,    74,    75,   123,    75,  1018,    83,  1020,
     121,   122,    83,   120,    83,   115,   116,   124,  1205,   917,
      74,    75,   123,   120,  1035,   102,   102,   124,  1365,    83,
     245,   246,    42,   122,   960,  1089,   122,  1089,   114,   110,
     116,   938,   122,   114,    64,    53,   972,    99,   116,   124,
    1065,  1066,   978,   979,   980,   981,   982,   983,   984,   985,
     986,   987,   988,   989,   990,   991,   992,   993,   994,   995,
     996,     3,     4,  1089,  1000,  1001,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,    35,  1416,    37,  1418,   102,
      99,  1274,  1018,  1264,  1020,    45,   103,   122,   108,   109,
     110,   111,   112,   124,  1013,   115,   116,   117,   123,  1035,
      42,    31,    32,    33,    34,    53,    64,   121,    99,  1576,
      42,   122,  1461,    22,  1135,    75,    46,   119,  1585,   125,
     122,   123,  1589,    83,   114,  1038,   124,    42,   123,    99,
      23,    23,  1599,    54,  1185,  1160,    96,   121,   114,   104,
     108,   104,    35,  1610,   104,    38,  1167,   122,  1615,  1508,
    1171,    53,    45,   114,  1335,  1176,    99,  1336,   104,     3,
       4,  1182,  1081,    99,  1083,  1084,   108,   109,   110,   111,
     112,    99,    21,   115,   116,   117,   108,   109,   110,   111,
     112,    74,    75,   115,   116,   117,   121,   103,   122,   108,
      83,   108,    99,  1214,  1643,   110,   111,   112,    42,  1135,
     115,   116,   117,    99,    35,   125,  1387,   119,   122,   122,
      23,     3,     4,     5,    45,  1162,     8,   121,   101,  1442,
     114,   122,    35,   122,    37,  1161,   104,  1408,   102,    23,
      99,  1167,    45,    64,   122,  1171,  1257,   113,  1435,    29,
    1176,    54,   124,   122,    75,    35,  1182,   117,  1427,   117,
      42,    23,    83,   119,   121,    45,   103,    99,   116,  1195,
     122,  1458,    75,  1595,   108,   109,   110,   111,   112,   104,
      83,   115,   116,   117,   104,    99,  1212,  1213,  1214,  1215,
      99,  1462,    42,    96,    74,    75,   122,   124,   101,   122,
    1336,    99,  1199,    83,   121,     3,     4,     5,     6,     7,
       8,     9,   114,  1500,   114,   114,   124,   114,  1640,    23,
     121,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,  1257,    29,   115,   116,   117,    35,  1348,    35,  1350,
    1351,   104,  1353,   102,    42,  1356,    45,   119,    45,   104,
     121,    80,    48,     3,     4,   119,   121,  1411,  1558,  1411,
     110,   111,   112,    99,  1564,   115,   116,   117,  1558,    21,
     124,    99,  1572,   119,   121,    57,    75,    74,    75,   121,
     104,    23,  1582,    23,    83,   122,    83,   122,   122,  1560,
     122,  1427,    42,  1593,    99,  1566,  1407,   124,   124,   114,
      23,   124,   119,  1603,  1330,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     3,     4,   115,   116,   117,
    1456,    42,  1348,    23,  1350,  1351,  1437,  1353,  1439,   121,
    1356,   122,   119,  1623,   124,   121,   102,  1363,   121,   104,
     124,   108,   123,   123,   122,  1458,   122,   104,   102,   122,
    1461,   122,   124,  1464,    42,   105,   106,   107,   108,   109,
     110,   111,   112,   124,    23,   115,   116,   117,    48,    26,
      23,   119,   123,  1484,  1485,   121,   119,  1374,   104,   123,
     121,  1407,   121,  1380,    53,    53,   124,   104,    23,    23,
     102,    53,   102,    53,    23,  1489,  1509,   104,  1424,   123,
      35,  1495,   116,    38,    23,   116,  1547,  1433,   121,  1377,
      45,  1437,    38,  1439,   122,    38,   121,   105,   106,   107,
     108,   109,   110,   111,   112,    38,    38,   115,   116,   117,
      38,   122,    38,   122,  1460,  1461,   121,  1463,  1464,    74,
      75,   122,   121,  1558,    79,    80,  1493,   121,    83,    18,
      19,   121,  1449,    15,    89,  1568,   122,  1572,  1484,  1485,
      29,  1489,    31,   121,    33,    34,    35,  1495,    37,    38,
     121,  1582,    41,    42,  1587,   559,  1591,   202,  1525,  1505,
    1595,   884,  1508,  1530,   328,    21,   205,  1365,  1199,    82,
    1601,  1564,   707,    29,  1207,  1542,  1020,  1612,   514,    35,
     547,  1548,   315,  1180,   550,    74,   726,   726,  1623,    45,
    1557,   400,    81,    29,   438,   439,  1563,   385,   442,    35,
     876,    90,  1559,    92,   882,  1640,   795,    96,  1565,    45,
     877,   100,  1569,   916,   103,   440,   105,   106,  1564,    75,
     109,  1407,  1579,   742,   113,   114,  1461,    83,  1045,  1326,
    1258,  1508,  1258,  1590,  1502,    -1,  1582,    -1,    74,    75,
      -1,    -1,   131,  1600,    -1,     3,     4,    83,    -1,    -1,
     139,   140,   439,   142,   143,  1601,   145,    -1,    -1,   148,
      -1,   150,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,   163,   164,   165,    -1,   167,    -1,
      -1,    -1,  1628,    45,    42,   174,    -1,   176,   177,   178,
      -1,   180,   181,    -1,    -1,    10,    -1,  1643,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    23,    -1,
      -1,   200,    74,    75,    -1,    35,    -1,    37,   207,    -1,
      35,    83,    -1,    -1,    -1,    45,    -1,    -1,   217,    -1,
      45,    -1,   221,   222,    54,    50,   225,    -1,    53,    -1,
      -1,    -1,    -1,   232,    -1,    -1,    -1,   236,   237,   107,
     108,   109,   110,   111,   112,    75,    -1,   115,   116,   117,
      75,    -1,    -1,    83,    -1,    80,    29,    -1,    83,    -1,
      -1,    -1,    35,    -1,    -1,   264,    96,    -1,   267,    -1,
       9,   270,    45,    -1,   273,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   281,    -1,    23,    -1,   285,    -1,   287,   288,
      -1,    -1,    -1,    -1,    -1,   294,    35,    36,    37,    38,
     299,    74,    75,    -1,   303,   304,    45,   306,    -1,    -1,
      83,    50,    -1,   312,    53,    54,   315,   316,   317,    -1,
      -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,   327,    -1,
      -1,    -1,    -1,   332,   333,    -1,    75,    -1,   337,   338,
     339,    80,   341,   342,    83,    -1,    -1,    -1,   347,    88,
      -1,    -1,    91,    -1,   353,    -1,    -1,    96,   357,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   365,    -1,   107,   368,
      -1,   110,    -1,    -1,   113,    -1,   115,   116,    -1,   378,
      -1,    -1,   381,   737,   738,     3,   385,    -1,   387,    -1,
      -1,     9,    10,    -1,    -1,   749,   750,   751,   397,    -1,
     399,   400,    -1,   757,    -1,    23,   405,   406,   407,    -1,
      -1,    -1,   411,    -1,    -1,    -1,   415,    35,    36,    37,
      38,    -1,   421,    -1,    -1,   424,    -1,    45,    -1,    -1,
     784,    -1,    50,   432,    -1,    53,    54,   791,   437,    -1,
     737,   738,    -1,    -1,    -1,   444,    -1,   446,   447,    -1,
      -1,    -1,   749,   750,   751,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      88,    -1,    21,    91,    -1,    -1,    -1,    -1,    96,    -1,
      29,   480,   481,    -1,   483,   103,    35,   105,    -1,   107,
     489,    -1,   110,    21,    -1,    -1,    45,   115,   116,   853,
     854,    29,    -1,   121,    -1,    -1,   505,    35,    -1,    -1,
      -1,    -1,   511,    -1,    -1,    64,    -1,    45,   517,    -1,
      -1,    70,    -1,    -1,   523,    -1,    75,    -1,    -1,    -1,
      -1,    -1,   531,    -1,    83,    -1,    64,    -1,    -1,    88,
      -1,    -1,    70,    -1,    -1,   544,   545,    75,    -1,   548,
     549,   550,   551,    -1,    -1,    83,    -1,   854,    -1,    -1,
      88,    -1,   561,    -1,     3,     4,     5,     6,     7,     8,
     569,    39,    -1,    -1,    -1,   574,    -1,    -1,    -1,   578,
      -1,    49,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,    27,    28,    29,    30,    31,
      32,    33,    34,    42,    -1,    73,   960,    75,    -1,    -1,
      -1,    79,    80,    -1,    -1,    83,    84,    -1,   972,    51,
      -1,    89,    -1,    -1,   978,   979,   980,   981,   982,   983,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,    -1,    -1,    77,  1000,  1001,  1002,  1003,
    1004,  1005,  1006,  1007,  1008,  1009,  1010,    -1,    -1,    -1,
      -1,    -1,    -1,   960,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,   972,   115,   116,   117,    -1,
      -1,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
      -1,    -1,    -1,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   720,    -1,    -1,    -1,    -1,    -1,   726,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,     9,
      -1,   740,   741,    -1,    -1,    -1,   745,    -1,   747,    -1,
      -1,    21,    -1,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    51,  1136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    74,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    83,   813,   814,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,   108,     3,     4,     5,     6,
       7,     8,     9,   103,    -1,   834,   835,   107,    -1,   109,
      -1,    -1,    -1,    -1,    -1,   115,   116,    -1,    -1,    -1,
      -1,   121,    -1,   852,    -1,    -1,    -1,    -1,  1212,  1213,
      -1,  1215,    -1,    -1,   863,    42,    -1,    -1,    -1,   868,
      -1,    -1,    -1,   872,    -1,    -1,    -1,   876,    -1,    -1,
      -1,    -1,   881,   882,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   891,    -1,    -1,   894,   895,    -1,    -1,   898,
      -1,  1255,   901,    -1,    -1,    -1,    -1,    -1,   907,   908,
      -1,    -1,    -1,    -1,    -1,  1212,  1213,    -1,  1215,    -1,
      -1,    -1,    -1,    -1,   207,    -1,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,   115,   116,
     117,    -1,   941,    -1,   943,    -1,    -1,   946,    -1,    -1,
     949,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1330,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,   997,   998,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,  1018,
      -1,  1020,  1021,    -1,    -1,    -1,    -1,  1026,    -1,    -1,
      -1,  1385,    -1,  1330,    -1,    -1,  1035,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1045,    -1,    -1,    -1,
     333,    -1,    -1,    -1,   337,    -1,   339,   340,   341,   342,
      -1,    -1,    -1,    -1,    -1,    -1,  1065,  1066,    -1,  1423,
    1424,    -1,    -1,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,   115,
     116,   117,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,  1460,    -1,    -1,  1463,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,  1478,    -1,    -1,  1424,    -1,    -1,
      -1,    35,    36,    37,    38,    -1,  1135,    -1,  1137,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    50,    -1,  1502,    53,
      54,  1505,    -1,    -1,  1508,   438,   439,  1156,    -1,    -1,
      -1,  1160,  1161,  1460,   447,    -1,  1463,    -1,  1167,   452,
      -1,    75,  1171,    -1,    -1,    -1,    80,  1176,  1177,    83,
      -1,  1180,    -1,  1182,    88,    -1,  1185,    91,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,   107,    -1,  1204,   110,    -1,  1505,    -1,
      -1,   115,    -1,    -1,    -1,  1214,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   531,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,  1257,    -1,
      -1,   544,    -1,    -1,   547,    -1,    -1,   550,   551,    -1,
      -1,    -1,    -1,    -1,    -1,  1274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,   115,   116,
     117,    -1,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,  1326,   115,   116,
     117,    -1,    -1,    -1,    -1,    -1,   123,  1336,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1346,  1347,  1348,
      -1,  1350,  1351,    -1,  1353,    -1,    -1,  1356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1384,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1405,    -1,  1407,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    -1,  1427,    -1,
      -1,    45,    -1,    -1,  1433,    -1,    -1,    51,  1437,    -1,
    1439,    -1,    -1,  1442,    -1,  1444,    -1,    -1,    -1,    -1,
      64,    -1,  1451,  1452,   737,   738,    70,  1456,   741,    -1,
      74,    75,  1461,    77,   747,  1464,   749,   750,   751,    83,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1484,  1485,    -1,    -1,   103,
      -1,  1490,    -1,   107,    -1,   109,    -1,  1496,    -1,    -1,
    1499,   115,   116,    -1,    -1,    -1,    -1,   121,    -1,   792,
      -1,    -1,   795,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1522,    -1,    23,    -1,    -1,    -1,  1528,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      38,    39,  1541,    -1,    -1,    -1,  1545,    45,  1547,    -1,
    1549,    49,    50,  1552,    -1,    53,    -1,    -1,    56,  1558,
      -1,    -1,    -1,    -1,    62,  1564,    -1,    -1,  1567,   852,
      -1,   854,  1571,  1572,    -1,    73,    74,    75,    -1,    -1,
      -1,    79,    80,  1582,    -1,    83,    84,    -1,    -1,    -1,
     145,    89,  1591,   148,    -1,   150,  1595,    -1,    -1,    -1,
      -1,    -1,  1601,    -1,    -1,    -1,    -1,    -1,   891,   164,
     165,   894,   895,  1612,    -1,   898,    -1,    -1,   901,    -1,
      -1,   176,    -1,   178,  1623,    -1,   181,    -1,    -1,  1628,
      -1,    -1,    -1,   916,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1640,    -1,    -1,  1643,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   960,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   972,
      -1,    -1,    -1,    -1,    -1,   978,   979,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,    -1,   270,    -1,  1000,  1001,  1002,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,    -1,    -1,
     285,    -1,    -1,   288,    -1,  1018,    -1,  1020,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   306,  1035,   308,    -1,    -1,     3,    -1,    -1,    -1,
      -1,   316,     9,    10,    -1,    -1,    -1,   322,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,   332,    -1,    -1,
      -1,    -1,    -1,   338,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,   357,    50,    -1,    -1,    53,    54,    -1,    -1,
     365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
     385,    -1,   387,    80,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    88,   397,    -1,    91,   400,    -1,    -1,    -1,    96,
     405,    -1,  1135,    -1,    -1,    -1,   103,    -1,   105,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,   115,   116,
     283,    -1,    -1,    -1,   121,    -1,    -1,   432,  1161,    -1,
      -1,    -1,    -1,    -1,  1167,    -1,    -1,    -1,  1171,    -1,
      -1,   446,   305,  1176,    -1,    -1,    -1,    -1,    -1,  1182,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1212,
    1213,  1214,  1215,    -1,   489,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,   438,   439,    -1,    -1,    -1,    -1,    -1,
     505,    -1,    -1,    -1,    -1,    -1,   511,   452,    -1,    -1,
      -1,    -1,    -1,    -1,   377,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1257,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     545,    -1,    -1,    -1,    -1,    -1,    99,   410,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,   115,   116,   117,    -1,    -1,    -1,    -1,    -1,
     123,    -1,   435,   578,    -1,    -1,    -1,    -1,   441,    -1,
     443,    -1,   445,    -1,    -1,    -1,   449,   450,   451,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1330,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1348,    -1,  1350,  1351,    -1,
    1353,    -1,    -1,  1356,   487,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1407,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1433,    -1,    -1,    -1,  1437,    -1,  1439,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   720,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1460,  1461,    -1,
    1463,  1464,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,   115,   116,
     117,  1484,  1485,    -1,    -1,    -1,   123,    -1,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,  1505,    38,    -1,  1508,   781,    -1,    -1,    -1,
      45,   786,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,   737,   738,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   438,   439,    -1,   749,   750,   751,    -1,    -1,    74,
      75,    -1,    77,    -1,    -1,   452,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1564,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,   792,    -1,  1582,
     795,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   863,    -1,
      -1,    -1,    -1,   868,   869,    -1,    -1,    -1,  1601,   732,
     733,   876,    -1,    -1,    -1,    -1,   881,   882,    -1,    -1,
     743,   744,    -1,   746,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1628,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   854,
    1643,    -1,   775,    -1,    -1,    -1,   779,    -1,    -1,    -1,
     783,    -1,   785,    -1,   787,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   941,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   815,   816,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
     833,   916,    -1,    -1,   837,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   848,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   860,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   960,  1021,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   972,    -1,    -1,
      -1,    -1,    -1,   978,   979,   980,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     995,   996,    -1,    -1,    -1,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   438,   439,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   452,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     737,   738,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   749,   750,   751,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,  1011,    -1,
      -1,  1156,    -1,    -1,  1017,   792,    -1,    -1,   795,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1185,    -1,    -1,  1046,  1047,  1048,  1049,  1050,  1051,  1052,
    1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,
    1063,  1064,    -1,    -1,    -1,  1068,  1069,  1070,  1071,  1072,
    1073,  1074,  1075,  1076,  1077,  1078,  1079,   854,    -1,    -1,
      -1,    -1,  1085,  1086,    99,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
     115,   116,   117,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1212,  1213,    -1,
    1215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   916,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1154,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   960,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1336,    42,    -1,    -1,   972,    -1,    -1,    -1,    -1,
      -1,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
      -1,    -1,    -1,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,   737,   738,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1330,   749,   750,   751,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,  1267,   115,   116,   117,    -1,    -1,
       3,   121,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,  1427,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,   795,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    -1,    -1,    -1,    -1,
      -1,  1456,    45,    -1,    -1,    -1,    -1,    -1,    51,  1322,
      -1,  1324,    -1,    -1,  1327,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,  1424,
      -1,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      83,   854,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,   107,  1460,   109,    -1,  1463,    -1,
      -1,    -1,   115,   116,    -1,    -1,    -1,    -1,   121,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1547,  1406,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1415,   916,  1417,    -1,    -1,    -1,    -1,    -1,
    1505,    -1,    -1,  1508,    -1,    -1,    -1,  1572,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1212,  1213,  1582,  1215,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   960,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1470,  1471,   972,
      -1,    -1,    -1,    -1,    -1,   978,   979,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,    -1,    -1,    -1,  1000,  1001,  1002,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1543,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1330,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,  1424,    96,    -1,
      -1,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
      -1,    -1,   120,    -1,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,  1460,    -1,    -1,  1463,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1212,
    1213,    -1,  1215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1505,    -1,
      -1,  1508,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    -1,    96,    -1,  1330,    99,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    -1,   119,   120,
      -1,   122,   123,    -1,   125,   126,   127,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    50,    51,    -1,    53,
      -1,    55,    56,    -1,    58,    -1,    -1,    61,    62,    63,
      -1,  1424,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,
      74,    75,    -1,    77,    78,    79,    80,    -1,    82,    83,
      84,    -1,    86,    -1,    88,    89,    -1,    -1,    -1,    93,
      -1,    -1,    96,    -1,    -1,    -1,    -1,  1460,    -1,   103,
    1463,   105,    -1,   107,    -1,   109,   110,    -1,    -1,   113,
     114,   115,   116,    -1,    -1,    -1,   120,    -1,    -1,   123,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1505,    -1,    -1,  1508,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    -1,    96,
      -1,    -1,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    -1,    -1,   120,   121,   122,   123,     3,   125,   126,
     127,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    50,    51,    -1,    53,    -1,    55,
      56,    -1,    58,    -1,    -1,    61,    62,    63,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    71,    -1,    73,    74,    75,
      -1,    77,    78,    79,    80,    -1,    82,    83,    84,    -1,
      86,    -1,    88,    89,    -1,    -1,    -1,    93,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,   110,     3,    -1,   113,   114,   115,
     116,     9,    10,    -1,   120,    -1,    -1,   123,   124,    -1,
      -1,    -1,    -1,    21,    -1,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    75,    -1,    77,
      -1,    -1,    80,    -1,    82,    83,    -1,    -1,    86,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,   105,    -1,   107,
      -1,   109,   110,     3,    -1,   113,   114,   115,   116,     9,
      10,   119,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    75,    -1,    77,    -1,    -1,
      80,    -1,    82,    83,    -1,    -1,    86,    -1,    88,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    96,     9,    10,    -1,
      -1,    -1,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
     110,    23,    -1,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,   121,    -1,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,   103,    -1,   105,    -1,   107,     9,    10,   110,    -1,
      -1,    -1,    -1,   115,   116,    -1,    -1,    -1,    21,   121,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    50,    51,    -1,
      53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    -1,
      73,    74,    75,    -1,    77,    78,    79,    80,    -1,    82,
      83,    84,    -1,    86,    -1,    88,    89,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,   105,    -1,   107,    -1,   109,   110,     3,    -1,
     113,    -1,   115,   116,     9,    10,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      75,    -1,    77,    -1,    -1,    80,    -1,    82,    83,    -1,
      -1,    86,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
     105,    -1,   107,    -1,   109,   110,     3,    -1,   113,   114,
     115,   116,     9,    10,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    75,    -1,
      77,    -1,    -1,    80,    -1,    82,    83,    -1,    -1,    86,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,   105,    -1,
     107,    -1,   109,   110,    -1,    -1,   113,   114,   115,   116,
      -1,    -1,   119,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    42,    -1,   115,   116,   117,    99,   119,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    -1,    -1,   115,   116,   117,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    42,   114,   115,   116,   117,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    -1,   114,   115,   116,   117,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    42,
      -1,   115,   116,   117,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,   115,   116,   117,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    42,    -1,   115,   116,   117,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    -1,    -1,   115,   116,   117,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    42,
      -1,   115,   116,   117,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,   115,   116,   117,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    42,    -1,   115,   116,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     3,    -1,   115,   116,   117,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    54,    55,    -1,    -1,
      -1,    59,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    75,    -1,    77,
      -1,    -1,    80,    -1,    82,    83,    -1,    85,    86,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,   105,    -1,   107,
      -1,   109,   110,     3,    -1,   113,   114,   115,   116,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    54,    55,    -1,    -1,    -1,    59,
      -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    75,    -1,    77,    -1,    -1,
      80,    -1,    82,    83,    -1,    85,    86,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
     110,     3,    -1,   113,   114,   115,   116,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    54,    55,    -1,    -1,    -1,    59,    -1,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    75,    -1,    77,    -1,    -1,    80,    -1,
      82,    83,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,   105,    -1,   107,    -1,   109,   110,     3,
      -1,   113,   114,   115,   116,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      74,    75,    -1,    77,    -1,    -1,    80,    -1,    82,    83,
      -1,    -1,    86,    -1,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,   105,    -1,   107,    -1,   109,   110,     3,    -1,   113,
     114,   115,   116,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    61,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    75,
      -1,    77,    -1,    -1,    80,    -1,    82,    83,    -1,    -1,
      86,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,   105,
      -1,   107,    -1,   109,   110,     3,    -1,   113,   114,   115,
     116,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    75,    -1,    77,
      -1,    -1,    80,    -1,    82,    83,    -1,    -1,    86,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,   105,    -1,   107,
      -1,   109,   110,     3,    -1,   113,   114,   115,   116,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    75,    -1,    77,    -1,    -1,
      80,    -1,    82,    83,    -1,    -1,    86,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,   105,    -1,   107,    -1,   109,
     110,     3,    -1,   113,   114,   115,   116,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    75,    -1,    77,    -1,    -1,    80,    -1,
      82,    83,    -1,    -1,    86,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,     3,    -1,
      -1,   103,    -1,   105,     9,   107,    -1,   109,   110,    -1,
      -1,   113,   114,   115,   116,    -1,    21,    -1,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,     3,    -1,    -1,    -1,    70,    -1,     9,    -1,    74,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    23,    -1,    88,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,   103,    -1,
      -1,    -1,   107,    45,   109,    -1,    -1,    -1,    -1,    51,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,     3,    -1,    -1,    -1,    70,    -1,
       9,    -1,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    23,    -1,    88,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      -1,   103,    -1,   105,    -1,   107,    45,   109,    -1,    -1,
      -1,    -1,    51,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,     3,    -1,    -1,
      -1,    70,    -1,     9,    -1,    74,    75,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    83,    21,    -1,    23,    -1,    88,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,   103,    -1,   105,    -1,   107,    45,
     109,    -1,    -1,    -1,    -1,    51,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
       3,    -1,    -1,    -1,    70,    -1,     9,    -1,    74,    75,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    21,    -1,
      23,    -1,    88,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    -1,   103,    -1,    -1,
      -1,   107,    45,   109,    -1,    -1,    -1,    -1,    51,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,     3,    -1,    -1,    -1,    70,    -1,     9,
      -1,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    23,    -1,    88,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
     103,    -1,    -1,    -1,   107,    45,   109,    -1,    -1,    -1,
      -1,    51,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,     3,    -1,    -1,    -1,
      70,    -1,     9,    -1,    74,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    23,    -1,    88,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    -1,   103,    -1,   105,    -1,   107,    45,   109,
      -1,    -1,    -1,    -1,    51,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,     3,
      -1,    -1,    -1,    70,    -1,     9,    -1,    74,    75,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    23,
      -1,    88,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,   103,    -1,   105,    -1,
     107,    45,   109,    -1,    -1,    -1,    -1,    51,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      74,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    96,    -1,    -1,     9,    -1,    -1,    -1,   103,
      -1,    -1,    -1,   107,    -1,   109,    -1,    -1,    -1,    23,
      -1,   115,   116,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,     3,    -1,    -1,    -1,    70,    -1,     9,    -1,
      74,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    23,    -1,    88,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,   103,
      -1,    -1,    -1,   107,    45,   109,    -1,    -1,    -1,    -1,
      51,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,     3,    -1,    -1,    -1,    70,
      -1,     9,    -1,    74,    75,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    23,    -1,    88,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,   103,    -1,    -1,    -1,   107,    45,   109,    -1,
      -1,    -1,    -1,    51,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,     3,    -1,
      -1,    -1,    70,    -1,     9,    -1,    74,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    23,    -1,
      88,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,
      45,   109,    -1,    -1,    -1,    -1,    51,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    74,
      75,    -1,    77,     3,    -1,    -1,    -1,    -1,    83,     9,
      10,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,   107,    -1,   109,    35,    36,    37,    38,    -1,
     115,   116,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,     9,    10,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    23,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    -1,    -1,    35,
      36,    37,    38,   103,    -1,   105,    -1,   107,    -1,    45,
     110,    -1,    -1,    -1,    50,   115,   116,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,    75,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      -1,    23,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    35,    36,    37,    38,   103,    -1,   105,
      -1,   107,    -1,    45,   110,    -1,    -1,    -1,    50,   115,
     116,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,     9,    10,    75,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    -1,    23,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    35,    36,    37,
      38,   103,    -1,   105,    -1,   107,    -1,    45,   110,    -1,
      -1,    -1,    50,   115,   116,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,     9,    10,    75,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    21,    -1,    23,
      88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    35,    36,    37,    38,   103,    -1,   105,    -1,   107,
      -1,    45,   110,    -1,    -1,    -1,    50,   115,   116,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,     9,
      10,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    21,    -1,    23,    88,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    35,    36,    37,    38,   103,
      -1,   105,    -1,   107,    -1,    45,   110,    -1,    -1,    -1,
      50,   115,   116,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,     9,    10,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    23,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    -1,    -1,    35,
      36,    37,    38,   103,    -1,   105,    -1,   107,    -1,    45,
     110,    -1,    -1,    -1,    50,   115,   116,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    80,    22,    23,    83,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    91,    -1,    -1,    35,    36,
      96,    38,    -1,    -1,    -1,    -1,    -1,   103,    45,   105,
      -1,   107,    -1,    50,   110,    -1,    53,    54,    -1,   115,
     116,    -1,    -1,    -1,    -1,     3,    -1,    64,    -1,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    80,    -1,    23,    83,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    -1,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    45,   105,    -1,
     107,    -1,    50,   110,    -1,    53,    54,    -1,   115,   116,
      -1,    -1,    -1,    -1,     3,    -1,    64,    -1,    -1,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    -1,    23,    83,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    91,    -1,    -1,    35,    36,    96,    38,
      -1,    -1,    -1,    -1,    -1,   103,    45,   105,    -1,   107,
      -1,    50,   110,    -1,    53,    54,    -1,   115,   116,    -1,
      -1,    -1,    -1,     3,    -1,    64,    -1,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    80,    -1,    23,    83,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    -1,    -1,    35,    36,    -1,    38,    -1,
      -1,    -1,    -1,    -1,   103,    45,   105,    -1,   107,    -1,
      50,   110,    -1,    53,    54,    -1,   115,   116,    -1,    -1,
      -1,    -1,     3,    -1,    64,    -1,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    23,    83,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    91,    -1,    -1,    35,    36,    -1,    38,    -1,    -1,
      -1,    -1,    -1,   103,    45,   105,    -1,   107,    -1,    50,
     110,    -1,    53,    54,    -1,   115,   116,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,
      -1,    23,    83,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      91,    -1,    -1,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    -1,   103,    45,   105,    -1,   107,    -1,    50,   110,
      -1,    53,    54,    -1,   115,   116,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
      23,    83,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    45,   105,    -1,   107,    -1,    50,   110,    -1,
      53,    54,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,   105,    -1,   107,    -1,    -1,   110,    -1,    -1,
      23,    -1,   115,   116,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,    55,    -1,    -1,    -1,    59,    -1,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    75,    -1,    77,    -1,    -1,    80,    -1,    82,
      83,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    95,   129,   130,     0,    92,    93,    94,   120,   132,
     133,   134,   135,   136,   139,   140,   141,   142,   115,   115,
     133,   139,    68,   177,   136,   142,    23,    35,    38,    39,
      45,    49,    50,    53,    62,    73,    74,    75,    79,    80,
      83,    84,    89,   143,   144,   145,   146,   147,   148,   149,
     150,   152,   155,   162,   166,   167,   168,   180,   182,   189,
     190,   195,   202,   203,   291,   292,   333,    75,    83,   137,
     333,   137,   292,    23,    64,   333,   333,    31,    32,    33,
      34,    46,   169,   331,   333,   333,   333,   333,   333,    50,
      53,    80,    23,    38,    74,   110,   114,   151,   231,   333,
      53,    80,   333,    78,    56,   113,    23,   119,   102,   116,
     119,   292,   333,    99,   103,   224,   333,    89,   114,   202,
     224,   114,   123,   224,   224,   224,   169,   333,    38,    74,
     110,   114,   333,    38,   124,   178,   179,   333,   123,    23,
      42,   333,    53,    99,   333,   224,   332,   333,     3,    74,
     103,   233,   333,    27,    28,    29,    30,    51,    77,   330,
     331,   137,   138,    99,     3,     9,    10,    23,    36,    38,
      50,    53,    54,    80,    88,    91,   103,   105,   107,   110,
     115,   116,   232,   248,   249,   250,   252,   253,   333,    37,
      96,   104,   230,   271,   279,   280,   333,    90,   225,   226,
      42,   123,   132,   141,   170,   171,   172,   116,   204,   207,
     132,   139,   116,   157,   225,   225,   225,    53,   224,   124,
     178,    42,   122,   124,   110,   114,   333,   333,   224,   333,
     248,   224,    23,    37,    80,    96,   113,   116,   232,   249,
     263,   264,   281,   282,   114,   115,   116,   338,   339,   340,
     248,   257,   258,   261,   262,   281,   234,   235,   260,   261,
     269,   270,   333,   121,   122,   248,   261,    64,   248,   281,
      99,   272,   232,    23,   169,   224,   251,   103,    10,    50,
      53,   105,   248,   116,   261,     9,    36,    64,   107,   219,
     220,   222,   248,   333,    64,   248,   281,    64,    89,   256,
     248,   121,   260,    23,   113,   102,   116,   233,    99,   275,
       4,   104,   122,     4,   104,   122,    99,   101,   265,    54,
     227,   228,   229,   114,   333,   170,    39,    53,    80,   174,
     124,   172,     3,     9,    36,    64,    70,    88,   103,   107,
     109,   115,   116,   211,   212,   213,   237,   239,   240,   291,
     330,   333,   225,    24,   223,   139,   124,   141,   160,   161,
     225,   114,   123,   156,   114,   102,   333,   204,   122,   124,
     333,   124,   179,   124,   178,   204,   224,   102,    54,   181,
     232,    23,   232,   282,   248,   108,   225,    54,   335,   335,
     335,   123,   123,     4,     8,    12,   104,   122,   236,    42,
     108,     4,     8,    12,   104,   122,   122,   102,   121,   137,
     102,    42,   301,   248,    64,   255,   273,   274,   281,   282,
     223,   113,   232,    53,   116,   208,   278,   279,   272,   169,
     251,   219,     3,     9,    10,    21,    38,    44,    55,    61,
      63,    71,    80,    82,    86,    88,   103,   105,   107,   109,
     110,   113,   114,   115,   116,   281,   284,   291,   293,   295,
     298,   299,   302,   312,   315,   321,   322,   324,   325,   326,
     327,   328,   330,   301,    36,   333,   333,    36,   333,   105,
     122,    99,   248,   255,   248,   119,   122,   123,   121,   122,
     333,   332,   295,   259,   260,   276,   281,     4,   104,   271,
       4,   104,   230,   280,    54,   101,   266,   267,   268,   274,
     333,   102,   277,   103,   122,   248,   281,   141,   163,   164,
     123,   124,   173,   255,   333,   174,   261,   237,    64,   237,
     261,    64,   237,   330,    21,   237,   246,   247,    21,   121,
     237,   244,   245,   121,   122,    99,   333,    22,   113,   114,
     116,   125,   114,   283,   113,   248,   124,   261,   121,   122,
     123,   141,   158,   159,   158,   261,   224,   225,   124,   122,
     124,   225,   204,   295,   101,   333,   265,   232,    54,   121,
     264,   114,    21,   261,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    96,    99,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   117,   120,   122,   123,   124,   125,   126,   127,   334,
     336,   337,   338,   339,   340,   119,   121,   260,   269,   282,
     262,   261,   269,   270,   333,   248,   295,   282,   104,   248,
     108,   332,   251,   121,   220,   223,   104,   122,   223,    53,
     105,   261,   255,   223,   295,   333,     9,    10,    21,    38,
      44,    58,    63,    71,    82,    86,    88,   105,   107,   109,
     110,   113,   115,   116,   284,   291,   293,   296,   297,   299,
     304,   312,   330,   296,   302,   295,   284,   295,   333,   295,
     261,   105,   214,   215,   237,   255,   295,   295,   295,    21,
      38,    44,    68,    71,    80,    82,    86,    88,   115,   116,
     123,   134,   135,   144,   285,   286,   287,   291,   293,   294,
     298,   299,   312,   313,   314,   330,   288,   290,   295,   306,
     288,   290,    99,   113,   114,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    42,    99,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   115,   116,
     117,   121,    54,    59,    85,   104,   272,   220,   248,   248,
      21,   295,   121,   116,   233,   337,   123,   121,   122,   108,
       4,   104,   122,   103,    54,   274,   108,   265,   261,   279,
     228,    99,    99,   333,   122,   124,   333,   224,   301,   301,
     237,   122,   119,    21,   122,   122,   121,    21,   122,   213,
     261,   125,   240,   291,   332,    21,    29,    88,   239,   241,
     242,   243,   333,   121,   244,   237,   131,   132,   121,   161,
     333,   122,   124,   122,   124,   123,   204,   283,   124,   283,
     225,   123,   333,   101,   225,    21,   261,   225,   131,   114,
     225,   122,   236,   122,   104,   123,    23,   274,   337,   122,
     221,   250,   252,   254,   282,   251,   272,   301,   295,   295,
     255,   296,   296,   333,   237,   304,   295,   295,   333,   295,
     105,   214,   255,   296,   296,   296,   306,   288,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    42,    99,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   115,   116,   117,   284,   114,   301,   223,    10,   105,
     122,    99,   153,   295,   295,   281,    75,    83,   144,   295,
     295,   281,   295,   306,   288,    58,   284,   329,    68,   144,
     291,   294,   124,   287,   294,   114,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    42,    99,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   115,
     116,   117,   123,   117,   117,   122,   123,   119,   121,   332,
      29,   307,   308,   309,   310,   333,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   248,   248,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   289,   295,
     288,    29,   292,   237,   284,    58,   296,    23,   223,   295,
     119,   259,   223,   281,     4,   104,   278,   103,   268,   277,
     104,   122,   266,   273,   102,   114,   116,   165,   124,   164,
      99,   116,   175,   176,   104,   104,   247,   122,    21,   237,
     245,   122,    21,   237,   237,   337,    99,   239,   333,   333,
     122,   124,    99,   121,   285,    99,   124,   159,   124,   225,
     283,   114,   114,   225,   114,   141,   194,   196,   197,   198,
     200,   201,   124,   114,    23,   333,    22,   220,   121,   223,
     104,   296,   102,   223,    10,   105,   296,   119,   121,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   248,   248,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   289,   288,    29,   292,    48,   124,   134,   316,   317,
     318,   319,   104,   295,   105,   214,   303,   223,   215,   261,
     119,   121,   237,   144,   113,   123,   307,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   248,   248,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   289,
     288,    29,   292,    29,   292,    29,   292,   295,   295,   338,
     339,   340,    99,   124,    21,   311,   122,    99,   119,   121,
      57,   237,   284,   333,   119,   121,   104,   278,   295,   158,
     259,   248,   121,   212,   225,   223,    23,    23,   122,   247,
     122,   122,   245,   122,   237,   333,    99,    21,   241,   237,
     124,   261,   283,   134,   183,   184,   185,   186,   188,   191,
     192,   193,   124,   114,   131,    83,   147,   199,   124,   197,
     131,   333,   301,   221,    23,   296,   296,   105,   214,   305,
     296,   119,   121,   284,   321,   322,   323,   237,   238,   124,
     317,   318,   122,   124,   122,    23,   223,    10,   105,   295,
     153,   332,   124,   119,   121,   115,   116,   115,   116,   295,
     295,   310,   295,   296,   102,   223,   274,   104,   122,   124,
     121,   123,   121,   122,   123,   333,   333,   122,   247,   122,
     245,   237,    79,    80,    89,   147,   189,   124,   185,   131,
     196,    79,    89,   146,   189,   196,   108,   104,   333,   284,
     223,    10,   105,    55,   105,   320,   124,   333,   295,   303,
     223,   102,   154,   289,   288,   289,   288,   284,   296,   274,
     124,    22,   121,   301,   122,   122,   271,   189,   333,    50,
      53,   196,   124,   333,   189,    50,    53,   124,   266,    23,
     233,   301,    48,   296,   305,   223,   296,   237,    26,    23,
     300,   295,   295,   123,   119,   121,   119,   121,   284,   121,
     104,   123,    53,   153,   169,   333,   124,   224,    53,   169,
     333,   333,   301,   104,   323,   296,   284,   294,   312,   314,
     233,    23,   333,   102,   187,    53,   224,   102,   333,    53,
     224,   104,    23,   333,   224,   295,   123,   333,   116,   206,
     210,   261,   224,   333,   116,   205,   209,    23,   333,   206,
     224,    64,   107,   218,   219,   255,   225,   223,   123,   205,
     224,    64,   107,   211,   255,   225,   223,   333,   233,   225,
     206,    64,   255,   281,   121,   122,    38,   123,   283,   225,
     205,    64,   255,   281,   121,    38,   283,   233,   123,   283,
     225,    38,   255,   153,   283,   225,    38,   255,   153,   123,
     283,   153,    38,   122,   217,   283,   153,    38,   122,   216,
     217,   153,   219,   121,   216,   153,   212,   121,   121,   217,
     122,   121,   216,   122,   121,   121
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   128,   129,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   134,   134,   135,   135,   136,   136,   137,   137,
     137,   137,   138,   138,   138,   139,   139,   140,   140,   141,
     142,   143,   143,   144,   144,   144,   144,   144,   145,   145,
     146,   147,   147,   147,   148,   148,   148,   148,   149,   150,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   153,   153,   154,   154,   155,   155,   155,
     156,   156,   157,   157,   158,   158,   158,   159,   160,   160,
     160,   161,   162,   162,   163,   163,   163,   164,   165,   165,
     165,   165,   165,   166,   166,   167,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   172,   172,   172,   173,
     174,   175,   176,   176,   176,   176,   177,   177,   178,   178,
     178,   179,   179,   180,   181,   181,   181,   182,   183,   183,
     184,   184,   185,   185,   185,   185,   186,   187,   187,   188,
     189,   189,   190,   190,   190,   190,   191,   191,   192,   192,
     192,   193,   193,   193,   194,   194,   194,   195,   195,   195,
     195,   195,   195,   196,   196,   197,   197,   198,   198,   198,
     198,   199,   199,   200,   201,   202,   202,   203,   203,   203,
     204,   205,   206,   207,   208,   208,   209,   209,   209,   209,
     210,   210,   210,   210,   211,   211,   211,   212,   212,   213,
     214,   214,   215,   216,   216,   216,   216,   217,   217,   217,
     217,   218,   218,   218,   219,   219,   220,   220,   221,   221,
     221,   222,   222,   222,   222,   222,   222,   222,   223,   223,
     223,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   225,   225,   226,   226,   227,
     227,   228,   228,   229,   229,   230,   230,   231,   231,   231,
     231,   231,   231,   231,   232,   232,   232,   232,   232,   232,
     233,   233,   233,   233,   233,   233,   233,   233,   234,   235,
     235,   235,   235,   235,   235,   236,   236,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   238,   238,   239,   239,
     239,   240,   240,   240,   241,   241,   241,   241,   241,   241,
     241,   242,   242,   243,   243,   243,   243,   243,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   245,
     245,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   247,   247,   248,   248,   248,   248,   248,
     248,   248,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   250,   250,   250,   250,   251,   252,   252,   252,
     252,   253,   254,   254,   254,   255,   255,   256,   256,   256,
     257,   257,   258,   258,   259,   259,   259,   260,   260,   261,
     261,   262,   262,   263,   263,   264,   264,   265,   265,   266,
     266,   267,   267,   268,   268,   268,   268,   269,   269,   270,
     271,   271,   272,   272,   273,   273,   274,   274,   275,   275,
     276,   276,   277,   277,   278,   278,   278,   279,   279,   280,
     280,   281,   281,   282,   282,   283,   284,   285,   285,   285,
     285,   286,   286,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   288,   288,   288,   289,   289,   290,   290,
     291,   291,   291,   292,   292,   292,   292,   292,   293,   293,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   297,   297,   297,
     297,   297,   297,   297,   298,   298,   298,   298,   298,   298,
     298,   299,   299,   299,   299,   299,   300,   300,   301,   301,
     302,   302,   302,   302,   303,   303,   303,   304,   304,   304,
     304,   305,   305,   305,   306,   306,   307,   307,   307,   307,
     308,   308,   308,   309,   309,   310,   310,   310,   311,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   313,   313,
     314,   314,   314,   314,   314,   314,   314,   314,   315,   315,
     315,   315,   316,   316,   317,   317,   317,   318,   318,   319,
     319,   320,   320,   321,   321,   322,   322,   323,   323,   323,
     324,   325,   326,   327,   328,   328,   329,   330,   330,   330,
     330,   330,   330,   330,   331,   331,   331,   331,   332,   332,
     333,   333,   333,   333,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   335,   335,
     336,   336,   337,   337,   337,   338,   339,   340
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     0,     1,     0,     1,     2,
       4,     1,     1,     0,     1,     2,     4,     1,     1,     3,
       4,     5,     0,     1,     3,     1,     0,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     7,     8,
       7,     5,     4,     5,     1,     1,     4,     6,     3,     3,
       1,     4,     3,     5,     4,     6,     5,     3,     2,     1,
       2,     3,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     2,     0,     5,     6,     5,
       3,     4,     3,     4,     1,     3,     0,     4,     1,     3,
       0,     2,     7,     8,     1,     3,     0,     3,     3,     4,
       3,     2,     0,     7,     8,     3,     5,     6,     5,     6,
       1,     0,     1,     0,     1,     2,     3,     2,     3,     5,
       6,     2,     2,     3,     4,     5,     1,     0,     1,     3,
       3,     1,     1,     7,     3,     3,     0,    10,     1,     0,
       1,     2,     1,     1,     1,     2,     6,     2,     0,     4,
       1,     0,     2,     1,     1,     0,     1,     1,     8,     9,
      10,     8,     9,    10,     9,    10,    11,     9,    11,    11,
      12,     8,     9,     1,     0,     1,     2,     1,     2,     1,
       1,     1,     0,     3,     8,     6,     7,     7,     8,     9,
       2,     2,     2,     3,     4,     2,     6,     7,     8,     3,
       6,     7,     8,     3,     1,     2,     0,     1,     3,     3,
       1,     3,     2,     1,     2,     3,     0,     1,     2,     3,
       0,     1,     2,     0,     1,     3,     3,     1,     2,     3,
       0,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       0,     2,     3,     4,     3,     4,     5,     6,     5,     6,
       3,     4,     3,     4,     0,     0,     1,     2,     3,     1,
       3,     4,     4,     4,     0,     1,     3,     1,     2,     1,
       2,     1,     2,     3,     1,     2,     5,     3,     4,     7,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       2,     3,     1,     2,     0,     2,     0,     1,     2,     3,
       2,     2,     3,     3,     1,     3,     4,     3,     4,     4,
       2,     3,     4,     2,     6,    10,     1,     3,     1,     2,
       1,     1,     1,     2,     1,     2,     2,     3,     3,     4,
       3,     1,     3,     1,     2,     3,     1,     0,     1,     2,
       2,     3,     4,     5,     5,     6,     3,     4,     1,     1,
       3,     1,     2,     2,     3,     4,     5,     5,     6,     3,
       4,     1,     0,     1,     3,     1,     1,     6,    10,     3,
       4,     2,     1,     2,     3,     4,     5,     2,     3,     2,
       3,     2,     3,     4,     4,     3,     6,     5,     4,     1,
       1,     1,     2,     3,     4,     5,     3,     6,     5,     4,
       3,     5,     1,     1,     1,     1,     0,     1,     1,     0,
       2,     4,     6,     8,     1,     2,     0,     1,     3,     1,
       3,     1,     1,     1,     3,     1,     1,     2,     0,     1,
       0,     1,     3,     5,     1,     6,     2,     1,     3,     3,
       3,     5,     2,     0,     1,     3,     1,     1,     2,     0,
       1,     3,     2,     0,     1,     2,     0,     1,     3,     2,
       1,     1,     1,     1,     2,     4,     3,     1,     2,     1,
       0,     1,     2,     2,     1,     2,     2,     3,     1,     2,
       2,     3,     1,     1,     2,     0,     1,     0,     1,     3,
       1,     2,     3,     1,     1,     3,     3,     3,     4,     4,
       1,     1,     1,     1,     4,     2,     3,     3,     4,     4,
       3,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     2,     1,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     4,     2,     3,     3,     4,     4,     3,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     2,
       1,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     4,     4,     3,     3,     1,
       2,     1,     2,     1,     2,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     2,     1,
       3,     3,     2,     1,     1,     1,     1,     2,     2,     2,
       3,     3,     1,     2,     2,     2,     2,     3,     3,     1,
       2,     7,    10,    11,    11,    12,     2,     0,     2,     0,
       3,     4,     5,     4,     3,     4,     3,     2,     4,     4,
       4,     3,     4,     3,     1,     3,     1,     2,     2,     0,
       1,     2,     0,     1,     3,     1,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     1,     1,
       3,     3,     6,     6,     6,     6,     3,     3,     4,     5,
       6,     5,     1,     2,     2,     1,     2,     5,     5,     5,
       5,     2,     0,     3,     5,     6,     8,     1,     1,     1,
       4,     7,     3,     6,     2,     0,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     3,     3,     3
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
#line 221 "parser-lalr.y" /* yacc.c:1646  */
    { mk_node("crate", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 4147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 222 "parser-lalr.y" /* yacc.c:1646  */
    { mk_node("crate", 1, (yyvsp[0])); }
#line 4153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 232 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 236 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("InnerAttrs", 1, (yyvsp[0])); }
#line 4165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 237 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-1]), 1, (yyvsp[0])); }
#line 4171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 241 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("InnerAttr", 1, (yyvsp[-1])); }
#line 4177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 242 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("InnerAttr", 1, mk_node("doc-comment", 1, mk_atom(yytext))); }
#line 4183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 247 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 251 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("OuterAttrs", 1, (yyvsp[0])); }
#line 4195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 252 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-1]), 1, (yyvsp[0])); }
#line 4201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 256 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 4207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 257 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("doc-comment", 1, mk_atom(yytext)); }
#line 4213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 261 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("MetaWord", 1, (yyvsp[0])); }
#line 4219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 262 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("MetaNameValue", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 4225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 263 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("MetaList", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 4231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 264 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("MetaList", 2, (yyvsp[-4]), (yyvsp[-2])); }
#line 4237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 268 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 269 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("MetaItems", 1, (yyvsp[0])); }
#line 4249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 270 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 4255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 275 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 279 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Items", 1, (yyvsp[0])); }
#line 4267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 280 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-1]), 1, (yyvsp[0])); }
#line 4273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 284 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("AttrsAndVis", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 4279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 288 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Item", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 4285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 307 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemStatic", 3, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1])); }
#line 4291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 308 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemStatic", 3, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1])); }
#line 4297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 312 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemConst", 3, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1])); }
#line 4303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 316 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemMacro", 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1])); }
#line 4309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 317 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemMacro", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 4315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 318 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemMacro", 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1])); }
#line 4321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 324 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewItemExternCrate", 1, (yyvsp[-1])); }
#line 4327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 325 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewItemExternCrate", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 4333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 329 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewItemExternFn", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 4339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 333 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewItemUse", 1, (yyvsp[-1])); }
#line 4345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 337 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPathSimple", 1, (yyvsp[0])); }
#line 4351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 338 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPathList", 2, (yyvsp[-3]), mk_atom("ViewPathListEmpty")); }
#line 4357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 339 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPathList", 1, mk_atom("ViewPathListEmpty")); }
#line 4363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 340 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPathList", 2, (yyvsp[-4]), (yyvsp[-1])); }
#line 4369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 341 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPathList", 1, (yyvsp[-1])); }
#line 4375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 342 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPathList", 2, (yyvsp[-5]), (yyvsp[-2])); }
#line 4381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 343 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPathList", 1, (yyvsp[-2])); }
#line 4387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 344 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPathGlob", 1, (yyvsp[-2])); }
#line 4393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 345 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("ViewPathGlob"); }
#line 4399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 346 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("ViewPathGlob"); }
#line 4405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 347 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("ViewPathListEmpty"); }
#line 4411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 348 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPathList", 1, (yyvsp[-1])); }
#line 4417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 349 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPathList", 1, (yyvsp[-2])); }
#line 4423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 350 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPathSimple", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 4429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 357 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemForeignMod", 1, (yyvsp[0])); }
#line 4435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 366 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 367 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 371 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 372 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 378 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemStruct", 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
}
#line 4467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 382 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemStruct", 4, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
}
#line 4475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 386 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemStruct", 3, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
}
#line 4483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 392 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 4489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 393 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 4495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 397 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 4501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 398 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 4507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 402 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("StructFields", 1, (yyvsp[0])); }
#line 4513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 403 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 4519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 404 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 408 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("StructField", 3, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 4531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 412 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("StructFields", 1, (yyvsp[0])); }
#line 4537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 413 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 4543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 414 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 418 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("StructField", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 4555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 423 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemEnum", 0); }
#line 4561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 424 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemEnum", 0); }
#line 4567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 428 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("EnumDefs", 1, (yyvsp[0])); }
#line 4573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 429 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 4579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 430 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 434 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("EnumDef", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 4591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 438 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("EnumArgs", 1, (yyvsp[-1])); }
#line 4597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 439 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("EnumArgs", 1, (yyvsp[-2])); }
#line 4603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 440 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("EnumArgs", 1, (yyvsp[-1])); }
#line 4609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 441 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("EnumArgs", 1, (yyvsp[0])); }
#line 4615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 442 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 447 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemUnion", 0); }
#line 4627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 448 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemUnion", 0); }
#line 4633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 451 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemMod", 1, (yyvsp[-1])); }
#line 4639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 452 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemMod", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 4645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 453 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemMod", 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1])); }
#line 4651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 457 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemForeignMod", 1, (yyvsp[-1])); }
#line 4657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 458 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemForeignMod", 2, (yyvsp[-2]), (yyvsp[-1])); }
#line 4663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 463 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 468 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 472 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ForeignItems", 1, (yyvsp[0])); }
#line 4681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 473 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-1]), 1, (yyvsp[0])); }
#line 4687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 477 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ForeignItem", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 4693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 478 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ForeignItem", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 4699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 479 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ForeignItem", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 4705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 483 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("StaticItem", 3, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1])); }
#line 4711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 487 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ForeignFn", 4, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1])); }
#line 4717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 491 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("FnDecl", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 4723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 495 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 496 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 4735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 497 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 4741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 498 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]); }
#line 4747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 502 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("Public"); }
#line 4753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 503 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("Inherited"); }
#line 4759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 507 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("IdentsOrSelf", 1, (yyvsp[0])); }
#line 4765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 508 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("IdentsOrSelf", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 4771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 509 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 4777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 514 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 4783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 518 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ItemTy", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1])); }
#line 4789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 522 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ForSized", 1, (yyvsp[0])); }
#line 4795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 523 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ForSized", 1, (yyvsp[-1])); }
#line 4801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 524 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 529 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemTrait", 7, (yyvsp[-9]), (yyvsp[-7]), (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]));
}
#line 4815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 536 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 540 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TraitItems", 1, (yyvsp[0])); }
#line 4827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 541 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-1]), 1, (yyvsp[0])); }
#line 4833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 548 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TraitMacroItem", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 4839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 552 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ConstTraitItem", 4, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1])); }
#line 4845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 556 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ConstDefault", 1, (yyvsp[0])); }
#line 4851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 557 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 561 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TypeTraitItem", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 4863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 565 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("Unsafe"); }
#line 4869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 566 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 570 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("DefaultUnsafe"); }
#line 4881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 571 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("Default"); }
#line 4887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 572 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("Unsafe"); }
#line 4893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 573 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 4899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 576 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Required", 1, (yyvsp[0])); }
#line 4905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 577 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Provided", 1, (yyvsp[0])); }
#line 4911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 582 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("TypeMethod", 6, (yyvsp[-7]), (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
}
#line 4919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 586 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("TypeMethod", 6, (yyvsp[-8]), (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
}
#line 4927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 590 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("TypeMethod", 7, (yyvsp[-9]), (yyvsp[-8]), (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
}
#line 4935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 597 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("Method", 7, (yyvsp[-7]), (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
}
#line 4943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 601 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("Method", 7, (yyvsp[-8]), (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
}
#line 4951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 605 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("Method", 8, (yyvsp[-9]), (yyvsp[-8]), (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
}
#line 4959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 612 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("Method", 8, (yyvsp[-8]), (yyvsp[-7]), (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
}
#line 4967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 616 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("Method", 8, (yyvsp[-9]), (yyvsp[-8]), (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
}
#line 4975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 620 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("Method", 9, (yyvsp[-10]), (yyvsp[-9]), (yyvsp[-8]), (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
}
#line 4983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 642 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemImpl", 6, (yyvsp[-8]), (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
}
#line 4991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 646 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemImpl", 6, (yyvsp[-10]), (yyvsp[-8]), 5, (yyvsp[-5]), (yyvsp[-2]), (yyvsp[-1]));
}
#line 4999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 650 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemImpl", 6, (yyvsp[-8]), (yyvsp[-7]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
}
#line 5007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 654 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemImplNeg", 7, (yyvsp[-11]), (yyvsp[-9]), (yyvsp[-7]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
}
#line 5015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 658 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemImplDefault", 3, (yyvsp[-7]), (yyvsp[-5]), (yyvsp[-4]));
}
#line 5023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 662 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemImplDefaultNeg", 3, (yyvsp[-8]), (yyvsp[-6]), (yyvsp[-5]));
}
#line 5031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 669 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 673 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ImplItems", 1, (yyvsp[0])); }
#line 5043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 674 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-1]), 1, (yyvsp[0])); }
#line 5049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 679 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ImplMacroItem", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 5055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 685 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("Default"); }
#line 5061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 686 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 690 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ImplConst", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 5073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 694 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ImplType", 5, (yyvsp[-7]), (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1])); }
#line 5079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 699 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemFn", 5, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
}
#line 5087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 703 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemFn", 5, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
}
#line 5095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 710 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemUnsafeFn", 5, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
}
#line 5103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 714 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemUnsafeFn", 5, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
}
#line 5111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 718 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ItemUnsafeFn", 6, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
}
#line 5119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 724 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("FnDecl", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 5125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 728 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("FnDecl", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 5131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 732 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("FnDecl", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 5137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 736 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 5143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 740 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[-1])); }
#line 5149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 741 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 745 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("SelfValue", 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1])); }
#line 5161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 746 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("SelfRegion", 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1])); }
#line 5167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 747 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("SelfRegion", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1])); }
#line 5173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 748 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("SelfStatic", 1, (yyvsp[-1])); }
#line 5179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 752 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("SelfValue", 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1])); }
#line 5185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 753 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("SelfRegion", 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1])); }
#line 5191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 754 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("SelfRegion", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1])); }
#line 5197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 755 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("SelfStatic", 1, (yyvsp[-1])); }
#line 5203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 761 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 765 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Args", 1, (yyvsp[0])); }
#line 5215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 766 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 5221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 770 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Arg", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 5227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 774 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("InferrableParams", 1, (yyvsp[0])); }
#line 5233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 775 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 5239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 779 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("InferrableParam", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 5245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 783 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 784 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 785 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 5263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 786 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 790 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 791 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 792 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 5287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 793 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 799 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 803 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Args", 1, (yyvsp[0])); }
#line 5305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 804 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 5311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 810 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Arg", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 5317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 815 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 816 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Args", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 5329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 817 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 822 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("PatWild"); }
#line 5341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 823 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 824 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("PatWild"); }
#line 5353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 825 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 826 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("PatWild"); }
#line 5365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 827 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 831 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 832 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ret-ty", 1, (yyvsp[0])); }
#line 5383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 833 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 837 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Generics", 2, mk_none(), mk_none()); }
#line 5395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 838 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Generics", 2, (yyvsp[-1]), mk_none()); }
#line 5401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 839 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Generics", 2, (yyvsp[-2]), mk_none()); }
#line 5407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 840 "parser-lalr.y" /* yacc.c:1646  */
    { push_back('>'); (yyval) = mk_node("Generics", 2, (yyvsp[-1]), mk_none()); }
#line 5413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 841 "parser-lalr.y" /* yacc.c:1646  */
    { push_back('>'); (yyval) = mk_node("Generics", 2, (yyvsp[-2]), mk_none()); }
#line 5419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 842 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Generics", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 5425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 843 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Generics", 2, (yyvsp[-4]), (yyvsp[-2])); }
#line 5431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 844 "parser-lalr.y" /* yacc.c:1646  */
    { push_back('>'); (yyval) = mk_node("Generics", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 5437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 845 "parser-lalr.y" /* yacc.c:1646  */
    { push_back('>'); (yyval) = mk_node("Generics", 2, (yyvsp[-4]), (yyvsp[-2])); }
#line 5443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 846 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Generics", 2, mk_none(), (yyvsp[-1])); }
#line 5449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 847 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Generics", 2, mk_none(), (yyvsp[-2])); }
#line 5455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 848 "parser-lalr.y" /* yacc.c:1646  */
    { push_back('>'); (yyval) = mk_node("Generics", 2, mk_none(), (yyvsp[-1])); }
#line 5461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 849 "parser-lalr.y" /* yacc.c:1646  */
    { push_back('>'); (yyval) = mk_node("Generics", 2, mk_none(), (yyvsp[-2])); }
#line 5467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 850 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 854 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 859 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("WhereClause", 1, (yyvsp[0])); }
#line 5485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 860 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("WhereClause", 1, (yyvsp[-1])); }
#line 5491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 864 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("WherePredicates", 1, (yyvsp[0])); }
#line 5497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 865 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 5503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 869 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("WherePredicate", 3, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 5509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 870 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("WherePredicate", 3, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 5515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 874 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 875 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 878 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyParams", 1, (yyvsp[0])); }
#line 5533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 879 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 5539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 887 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPath", 1, (yyvsp[0])); }
#line 5545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 888 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPath", 1, (yyvsp[0])); }
#line 5551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 889 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPath", 1, mk_atom("Self")); }
#line 5557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 890 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPath", 1, mk_atom("Self")); }
#line 5563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 891 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPath", 1, mk_atom("Super")); }
#line 5569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 892 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ViewPath", 1, mk_atom("Super")); }
#line 5575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 893 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 5581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 909 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("components", 1, (yyvsp[0])); }
#line 5587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 911 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("components", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 5593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 913 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("components", 2, (yyvsp[-4]), (yyvsp[-2])); }
#line 5599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 915 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 5605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 917 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-3]), 2, (yyvsp[-1]), (yyvsp[0])); }
#line 5611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 919 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-6]), 2, (yyvsp[-4]), (yyvsp[-2])); }
#line 5617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 923 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 5623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 924 "parser-lalr.y" /* yacc.c:1646  */
    { push_back('>'); (yyval) = (yyvsp[-1]); }
#line 5629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 925 "parser-lalr.y" /* yacc.c:1646  */
    { push_back('='); (yyval) = (yyvsp[-1]); }
#line 5635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 926 "parser-lalr.y" /* yacc.c:1646  */
    { push_back('>'); push_back('='); (yyval) = (yyvsp[-1]); }
#line 5641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 931 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 5647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 932 "parser-lalr.y" /* yacc.c:1646  */
    { push_back('>'); (yyval) = (yyvsp[-1]); }
#line 5653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 933 "parser-lalr.y" /* yacc.c:1646  */
    { push_back('='); (yyval) = (yyvsp[-1]); }
#line 5659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 934 "parser-lalr.y" /* yacc.c:1646  */
    { push_back('>'); push_back('='); (yyval) = (yyvsp[-1]); }
#line 5665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 938 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("GenericValues", 1, (yyvsp[0])); }
#line 5671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 944 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TySumsAndBindings", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 5677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 947 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 951 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 952 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 5695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 960 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("PatWild"); }
#line 5701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 961 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatRegion", 1, (yyvsp[0])); }
#line 5707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 962 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatRegion", 1, (yyvsp[0])); }
#line 5713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 963 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatRegion", 1, mk_node("PatRegion", 1, (yyvsp[0]))); }
#line 5719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 964 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("PatUnit"); }
#line 5725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 965 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatTup", 1, (yyvsp[-1])); }
#line 5731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 966 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVec", 1, (yyvsp[-1])); }
#line 5737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 968 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatRange", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 5743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 969 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatStruct", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 5749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 970 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatEnum", 2, (yyvsp[-2]), mk_none()); }
#line 5755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 971 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatEnum", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 5761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 972 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatMac", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 5767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 973 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatIdent", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 5773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 974 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatIdent", 3, mk_node("BindByValue", 1, mk_atom("MutImmutable")), (yyvsp[-2]), (yyvsp[0])); }
#line 5779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 975 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatIdent", 3, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 5785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 976 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatUniq", 1, (yyvsp[0])); }
#line 5791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 977 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatQualifiedPath", 3, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[0])); }
#line 5797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 979 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("PatQualifiedPath", 3, mk_node("PatQualifiedPath", 3, (yyvsp[-8]), (yyvsp[-7]), (yyvsp[-4])), (yyvsp[-3]), (yyvsp[0]));
}
#line 5805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 985 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Pats", 1, (yyvsp[0])); }
#line 5811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 986 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 5817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 990 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("BindByRef", 1, mk_atom("MutImmutable")); }
#line 5823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 991 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("BindByRef", 1, mk_atom("MutMutable")); }
#line 5829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 992 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("BindByValue", 1, mk_atom("MutMutable")); }
#line 5835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 996 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatLit", 1, (yyvsp[0])); }
#line 5841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 997 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatLit", 1, (yyvsp[0])); }
#line 5847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 998 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatLit", 1, (yyvsp[0])); }
#line 5853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1002 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatField", 1, (yyvsp[0])); }
#line 5859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1003 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatField", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 5865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1004 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatField", 2, mk_atom("box"), (yyvsp[0])); }
#line 5871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1005 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatField", 3, mk_atom("box"), (yyvsp[-1]), (yyvsp[0])); }
#line 5877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1006 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatField", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 5883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1007 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatField", 3, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 5889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1008 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatField", 2, mk_atom(yytext), (yyvsp[0])); }
#line 5895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1012 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatFields", 1, (yyvsp[0])); }
#line 5901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1013 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 5907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1017 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatStruct", 2, (yyvsp[0]), mk_atom("false")); }
#line 5913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1018 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatStruct", 2, (yyvsp[-1]), mk_atom("false")); }
#line 5919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1019 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatStruct", 2, (yyvsp[-2]), mk_atom("true")); }
#line 5925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1020 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatStruct", 1, mk_atom("true")); }
#line 5931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1021 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatStruct", 1, mk_none()); }
#line 5937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1025 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatTup", 2, (yyvsp[0]), mk_none()); }
#line 5943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1026 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatTup", 2, (yyvsp[-1]), mk_none()); }
#line 5949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1027 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatTup", 2, (yyvsp[-1]), mk_none()); }
#line 5955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1028 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatTup", 2, (yyvsp[-2]), mk_none()); }
#line 5961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1029 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatTup", 2, (yyvsp[-3]), (yyvsp[0])); }
#line 5967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1030 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatTup", 2, (yyvsp[-4]), (yyvsp[-1])); }
#line 5973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1031 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatTup", 2, (yyvsp[-4]), (yyvsp[0])); }
#line 5979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1032 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatTup", 2, (yyvsp[-5]), (yyvsp[-1])); }
#line 5985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1033 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatTup", 2, mk_none(), (yyvsp[0])); }
#line 5991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1034 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatTup", 2, mk_none(), (yyvsp[-1])); }
#line 5997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1035 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatTup", 2, mk_none(), mk_none()); }
#line 6003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1039 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatTupElts", 1, (yyvsp[0])); }
#line 6009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1040 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 6015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1044 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVec", 2, (yyvsp[0]), mk_none()); }
#line 6021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1045 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVec", 2, (yyvsp[-1]), mk_none()); }
#line 6027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1046 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVec", 2, (yyvsp[-1]), mk_none()); }
#line 6033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1047 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVec", 2, (yyvsp[-2]), mk_none()); }
#line 6039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1048 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVec", 2, (yyvsp[-3]), (yyvsp[0])); }
#line 6045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1049 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVec", 2, (yyvsp[-4]), (yyvsp[-1])); }
#line 6051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1050 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVec", 2, (yyvsp[-4]), (yyvsp[0])); }
#line 6057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1051 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVec", 2, (yyvsp[-5]), (yyvsp[-1])); }
#line 6063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1052 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVec", 2, mk_none(), (yyvsp[0])); }
#line 6069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1053 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVec", 2, mk_none(), (yyvsp[-1])); }
#line 6075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1054 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVec", 2, mk_none(), mk_none()); }
#line 6081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1055 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVec", 2, mk_none(), mk_none()); }
#line 6087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1059 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PatVecElts", 1, (yyvsp[0])); }
#line 6093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1060 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 6099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1070 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyQualifiedPath", 3, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[0])); }
#line 6105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1071 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyQualifiedPath", 3, mk_node("TyQualifiedPath", 3, (yyvsp[-8]), (yyvsp[-7]), (yyvsp[-4])), (yyvsp[-3]), (yyvsp[0])); }
#line 6111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1072 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyTup", 1, (yyvsp[-1])); }
#line 6117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1073 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyTup", 1, (yyvsp[-2])); }
#line 6123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1074 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("TyNil"); }
#line 6129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 1078 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyPath", 2, mk_node("global", 1, mk_atom("false")), (yyvsp[0])); }
#line 6135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1079 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyPath", 2, mk_node("global", 1, mk_atom("true")), (yyvsp[0])); }
#line 6141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1080 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyPath", 2, mk_node("self", 1, mk_atom("true")), (yyvsp[0])); }
#line 6147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1081 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyMacro", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 6153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1082 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyMacro", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 6159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1083 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyBox", 1, (yyvsp[0])); }
#line 6165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1084 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyPtr", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 6171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 1085 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyRptr", 2, mk_atom("MutImmutable"), (yyvsp[0])); }
#line 6177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1086 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyRptr", 2, mk_atom("MutMutable"), (yyvsp[0])); }
#line 6183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1087 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyRptr", 1, mk_node("TyRptr", 2, mk_atom("MutImmutable"), (yyvsp[0]))); }
#line 6189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1088 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyRptr", 1, mk_node("TyRptr", 2, mk_atom("MutMutable"), (yyvsp[0]))); }
#line 6195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1089 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyRptr", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 6201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1090 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyRptr", 1, mk_node("TyRptr", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]))); }
#line 6207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1091 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyVec", 1, (yyvsp[-1])); }
#line 6213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1092 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyFixedLengthVec", 2, (yyvsp[-4]), (yyvsp[-1])); }
#line 6219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1093 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyFixedLengthVec", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 6225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1094 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyTypeof", 1, (yyvsp[-1])); }
#line 6231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1095 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("TyInfer"); }
#line 6237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1101 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1102 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 1103 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 1104 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 1108 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyFnDecl", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 6267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 1112 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyClosure", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 6273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1113 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyClosure", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 6279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1114 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyClosure", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 6285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1115 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyClosure", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 6291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1119 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ForInType", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1129 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("MutMutable"); }
#line 6303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1130 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("MutImmutable"); }
#line 6309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1134 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("MutMutable"); }
#line 6315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1135 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("MutImmutable"); }
#line 6321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1136 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("MutImmutable"); }
#line 6327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1141 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("GenericValues", 3, mk_none(), mk_node("TySums", 1, mk_node("TySum", 1, (yyvsp[-1]))), (yyvsp[0]));
}
#line 6335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1145 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("GenericValues", 3, mk_none(), mk_node("TySums", 2, (yyvsp[-3]), (yyvsp[-1])), (yyvsp[0]));
}
#line 6343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1151 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyQualifiedPath", 3, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[0])); }
#line 6349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1152 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyQualifiedPath", 3, (yyvsp[-7]), (yyvsp[-5]), (yyvsp[-2])); }
#line 6355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1158 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 6361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1162 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TySums", 1, (yyvsp[0])); }
#line 6367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1163 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 6373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 1167 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TySum", 1, (yyvsp[0])); }
#line 6379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1168 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 6385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1177 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TySum", 1, (yyvsp[0])); }
#line 6391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1178 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 6397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1187 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1188 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 6409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1193 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 6415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1198 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 6421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1202 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PolyBound", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1204 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("PolyBound", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1205 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1209 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Bindings", 1, (yyvsp[0])); }
#line 6445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1210 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 6451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1214 "parser-lalr.y" /* yacc.c:1646  */
    { mk_node("Binding", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1218 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyParam", 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 6463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1219 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyParam", 4, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 6469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1224 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1225 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 6481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1229 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("bounds", 1, (yyvsp[0])); }
#line 6487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1230 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 6493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1240 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1241 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 6505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1245 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ltbounds", 1, (yyvsp[0])); }
#line 6511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1246 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 6517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1250 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TyDefault", 1, (yyvsp[0])); }
#line 6523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1251 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 6529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1257 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 6535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1261 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Lifetimes", 1, (yyvsp[0])); }
#line 6541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1262 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 6547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1266 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("lifetime", 2, mk_atom(yytext), (yyvsp[0])); }
#line 6553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1267 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("static_lifetime"); }
#line 6559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1271 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("lifetime", 1, mk_atom(yytext)); }
#line 6565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1272 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("static_lifetime"); }
#line 6571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1277 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1285 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBlock", 2, (yyvsp[-2]), (yyvsp[-1])); }
#line 6583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1289 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBlock", 1, (yyvsp[-1])); }
#line 6589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1294 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-1]), 1, (yyvsp[0])); }
#line 6595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1296 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 6601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 1324 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("stmts", 1, (yyvsp[0])); }
#line 6607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 1325 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-1]), 1, (yyvsp[0])); }
#line 6613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 1329 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 1331 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 1332 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 1333 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 1335 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1337 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 6649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1338 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 6655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 1344 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 6661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1349 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 6667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1353 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("exprs", 1, (yyvsp[0])); }
#line 6673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1354 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 6679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1359 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1360 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("SelfPath", 1, (yyvsp[0])); }
#line 6691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1369 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("components", 1, (yyvsp[0])); }
#line 6697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1370 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom("Super"); }
#line 6703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1371 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 6709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1372 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, mk_atom("Super")); }
#line 6715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1373 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 6721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1378 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("MacroExpr", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 6727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 1379 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("MacroExpr", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 6733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1383 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprLit", 1, (yyvsp[0])); }
#line 6739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1385 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprPath", 1, (yyvsp[0])); }
#line 6745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1386 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprPath", 1, mk_node("ident", 1, mk_atom("self"))); }
#line 6751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 1387 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprMac", 1, (yyvsp[0])); }
#line 6757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1388 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprStruct", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 6763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1389 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprTry", 1, (yyvsp[-1])); }
#line 6769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1390 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprField", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1391 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprTupleIndex", 1, (yyvsp[-2])); }
#line 6781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1392 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprIndex", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 6787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1393 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprCall", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 6793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1394 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprVec", 1, (yyvsp[-1])); }
#line 6799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1395 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprParen", 1, (yyvsp[-1])); }
#line 6805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1396 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAgain", 0); }
#line 6811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 1397 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAgain", 1, (yyvsp[0])); }
#line 6817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1398 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRet", 0); }
#line 6823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1399 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRet", 1, (yyvsp[0])); }
#line 6829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1400 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBreak", 0); }
#line 6835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1401 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBreak", 1, (yyvsp[0])); }
#line 6841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1402 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprYield", 0); }
#line 6847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1403 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprYield", 1, (yyvsp[0])); }
#line 6853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1404 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssign", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1405 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignShl", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1406 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignShr", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1407 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignSub", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1408 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignBitAnd", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1409 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignBitOr", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1410 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignAdd", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1411 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignMul", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1412 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignDiv", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 1413 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignBitXor", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1414 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignRem", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 6919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1415 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiOr"), (yyvsp[-2]), (yyvsp[0])); }
#line 6925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 1416 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiAnd"), (yyvsp[-2]), (yyvsp[0])); }
#line 6931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1417 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiEq"), (yyvsp[-2]), (yyvsp[0])); }
#line 6937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1418 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiNe"), (yyvsp[-2]), (yyvsp[0])); }
#line 6943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 1419 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiLt"), (yyvsp[-2]), (yyvsp[0])); }
#line 6949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1420 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiGt"), (yyvsp[-2]), (yyvsp[0])); }
#line 6955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1421 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiLe"), (yyvsp[-2]), (yyvsp[0])); }
#line 6961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1422 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiGe"), (yyvsp[-2]), (yyvsp[0])); }
#line 6967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1423 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiBitOr"), (yyvsp[-2]), (yyvsp[0])); }
#line 6973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 1424 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiBitXor"), (yyvsp[-2]), (yyvsp[0])); }
#line 6979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 1425 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiBitAnd"), (yyvsp[-2]), (yyvsp[0])); }
#line 6985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 1426 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiShl"), (yyvsp[-2]), (yyvsp[0])); }
#line 6991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 1427 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiShr"), (yyvsp[-2]), (yyvsp[0])); }
#line 6997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 1428 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiAdd"), (yyvsp[-2]), (yyvsp[0])); }
#line 7003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 1429 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiSub"), (yyvsp[-2]), (yyvsp[0])); }
#line 7009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 1430 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiMul"), (yyvsp[-2]), (yyvsp[0])); }
#line 7015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 1431 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiDiv"), (yyvsp[-2]), (yyvsp[0])); }
#line 7021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1432 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiRem"), (yyvsp[-2]), (yyvsp[0])); }
#line 7027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 1433 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRange", 2, (yyvsp[-1]), mk_none()); }
#line 7033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 1434 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRange", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 1435 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRange", 2, mk_none(), (yyvsp[0])); }
#line 7045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 1436 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRange", 2, mk_none(), mk_none()); }
#line 7051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 1437 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprCast", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 1438 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprTypeAscr", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 1439 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBox", 1, (yyvsp[0])); }
#line 7069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 1445 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprLit", 1, (yyvsp[0])); }
#line 7075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 1447 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprPath", 1, (yyvsp[0])); }
#line 7081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 1448 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprPath", 1, mk_node("ident", 1, mk_atom("self"))); }
#line 7087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 1449 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprMac", 1, (yyvsp[0])); }
#line 7093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 1450 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprStruct", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 7099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 1451 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprTry", 1, (yyvsp[-1])); }
#line 7105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 1452 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprField", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 1453 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprTupleIndex", 1, (yyvsp[-2])); }
#line 7117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 1454 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprIndex", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 7123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 1455 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprCall", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 7129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 1456 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprParen", 1, (yyvsp[-1])); }
#line 7135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 1457 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprVec", 1, (yyvsp[-1])); }
#line 7141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 1458 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAgain", 0); }
#line 7147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 1459 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAgain", 1, (yyvsp[0])); }
#line 7153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 1460 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRet", 0); }
#line 7159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 1461 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRet", 1, (yyvsp[0])); }
#line 7165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 1462 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBreak", 0); }
#line 7171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 1463 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBreak", 1, (yyvsp[0])); }
#line 7177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 1464 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprYield", 0); }
#line 7183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 1465 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprYield", 1, (yyvsp[0])); }
#line 7189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 1466 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssign", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 1467 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignShl", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 1468 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignShr", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 1469 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignSub", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 1470 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignBitAnd", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 1471 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignBitOr", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 1472 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignAdd", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 1473 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignMul", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 1474 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignDiv", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 1475 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignBitXor", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 1476 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignRem", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 1477 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiOr"), (yyvsp[-2]), (yyvsp[0])); }
#line 7261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 1478 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiAnd"), (yyvsp[-2]), (yyvsp[0])); }
#line 7267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 1479 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiEq"), (yyvsp[-2]), (yyvsp[0])); }
#line 7273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 1480 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiNe"), (yyvsp[-2]), (yyvsp[0])); }
#line 7279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 1481 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiLt"), (yyvsp[-2]), (yyvsp[0])); }
#line 7285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 1482 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiGt"), (yyvsp[-2]), (yyvsp[0])); }
#line 7291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 1483 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiLe"), (yyvsp[-2]), (yyvsp[0])); }
#line 7297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 1484 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiGe"), (yyvsp[-2]), (yyvsp[0])); }
#line 7303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 1485 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiBitOr"), (yyvsp[-2]), (yyvsp[0])); }
#line 7309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 1486 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiBitXor"), (yyvsp[-2]), (yyvsp[0])); }
#line 7315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 1487 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiBitAnd"), (yyvsp[-2]), (yyvsp[0])); }
#line 7321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 1488 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiShl"), (yyvsp[-2]), (yyvsp[0])); }
#line 7327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 1489 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiShr"), (yyvsp[-2]), (yyvsp[0])); }
#line 7333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 1490 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiAdd"), (yyvsp[-2]), (yyvsp[0])); }
#line 7339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 1491 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiSub"), (yyvsp[-2]), (yyvsp[0])); }
#line 7345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 1492 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiMul"), (yyvsp[-2]), (yyvsp[0])); }
#line 7351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 1493 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiDiv"), (yyvsp[-2]), (yyvsp[0])); }
#line 7357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 1494 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiRem"), (yyvsp[-2]), (yyvsp[0])); }
#line 7363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 1495 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRange", 2, (yyvsp[-1]), mk_none()); }
#line 7369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 1496 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRange", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 1497 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRange", 2, mk_none(), (yyvsp[0])); }
#line 7381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 1498 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRange", 2, mk_none(), mk_none()); }
#line 7387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 1499 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprCast", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 1500 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprTypeAscr", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 1501 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBox", 1, (yyvsp[0])); }
#line 7405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 1509 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprLit", 1, (yyvsp[0])); }
#line 7411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 1511 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprPath", 1, (yyvsp[0])); }
#line 7417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 1512 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprPath", 1, mk_node("ident", 1, mk_atom("self"))); }
#line 7423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 1513 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprMac", 1, (yyvsp[0])); }
#line 7429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 1514 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprTry", 1, (yyvsp[-1])); }
#line 7435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 1515 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprField", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 1516 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprTupleIndex", 1, (yyvsp[-2])); }
#line 7447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 1517 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprIndex", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 7453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 1518 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprCall", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 7459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 1519 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprVec", 1, (yyvsp[-1])); }
#line 7465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 1520 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprParen", 1, (yyvsp[-1])); }
#line 7471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 1521 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAgain", 0); }
#line 7477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 1522 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAgain", 1, (yyvsp[0])); }
#line 7483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 1523 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRet", 0); }
#line 7489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 1524 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRet", 1, (yyvsp[0])); }
#line 7495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 1525 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBreak", 0); }
#line 7501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 1526 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBreak", 1, (yyvsp[0])); }
#line 7507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 1527 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprYield", 0); }
#line 7513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 1528 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprYield", 1, (yyvsp[0])); }
#line 7519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 1529 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssign", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 1530 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignShl", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 1531 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignShr", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 1532 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignSub", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 1533 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignBitAnd", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 1534 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignBitOr", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 1535 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignAdd", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 1536 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignMul", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 1537 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignDiv", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 1538 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignBitXor", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 1539 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAssignRem", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 1540 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiOr"), (yyvsp[-2]), (yyvsp[0])); }
#line 7591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 1541 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiAnd"), (yyvsp[-2]), (yyvsp[0])); }
#line 7597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 1542 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiEq"), (yyvsp[-2]), (yyvsp[0])); }
#line 7603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 1543 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiNe"), (yyvsp[-2]), (yyvsp[0])); }
#line 7609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 1544 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiLt"), (yyvsp[-2]), (yyvsp[0])); }
#line 7615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 1545 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiGt"), (yyvsp[-2]), (yyvsp[0])); }
#line 7621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 1546 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiLe"), (yyvsp[-2]), (yyvsp[0])); }
#line 7627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 1547 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiGe"), (yyvsp[-2]), (yyvsp[0])); }
#line 7633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 1548 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiBitOr"), (yyvsp[-2]), (yyvsp[0])); }
#line 7639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 1549 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiBitXor"), (yyvsp[-2]), (yyvsp[0])); }
#line 7645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 1550 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiBitAnd"), (yyvsp[-2]), (yyvsp[0])); }
#line 7651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 1551 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiShl"), (yyvsp[-2]), (yyvsp[0])); }
#line 7657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 1552 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiShr"), (yyvsp[-2]), (yyvsp[0])); }
#line 7663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 1553 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiAdd"), (yyvsp[-2]), (yyvsp[0])); }
#line 7669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 1554 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiSub"), (yyvsp[-2]), (yyvsp[0])); }
#line 7675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 1555 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiMul"), (yyvsp[-2]), (yyvsp[0])); }
#line 7681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 1556 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiDiv"), (yyvsp[-2]), (yyvsp[0])); }
#line 7687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 1557 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBinary", 3, mk_atom("BiRem"), (yyvsp[-2]), (yyvsp[0])); }
#line 7693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 1558 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRange", 2, (yyvsp[-1]), mk_none()); }
#line 7699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 1559 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRange", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 1560 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRange", 2, mk_none(), (yyvsp[0])); }
#line 7711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 1561 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprRange", 2, mk_none(), mk_none()); }
#line 7717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 1562 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprCast", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 1563 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprTypeAscr", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 1564 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprBox", 1, (yyvsp[0])); }
#line 7735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 1572 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprUnary", 2, mk_atom("UnNeg"), (yyvsp[0])); }
#line 7741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 1573 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprUnary", 2, mk_atom("UnNot"), (yyvsp[0])); }
#line 7747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 1574 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprUnary", 2, mk_atom("UnDeref"), (yyvsp[0])); }
#line 7753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 1575 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAddrOf", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 7759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 681:
#line 1576 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAddrOf", 1, mk_node("ExprAddrOf", 2, (yyvsp[-1]), (yyvsp[0]))); }
#line 7765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 1578 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 684:
#line 1582 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprUnary", 2, mk_atom("UnNeg"), (yyvsp[0])); }
#line 7777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 1583 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprUnary", 2, mk_atom("UnNot"), (yyvsp[0])); }
#line 7783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 686:
#line 1584 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprUnary", 2, mk_atom("UnDeref"), (yyvsp[0])); }
#line 7789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 1585 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAddrOf", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 7795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 1586 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprAddrOf", 1, mk_node("ExprAddrOf", 2, (yyvsp[-1]), (yyvsp[0]))); }
#line 7801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 690:
#line 1588 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 1593 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ExprQualifiedPath", 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-1]), (yyvsp[0]));
}
#line 7815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 1597 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ExprQualifiedPath", 3, mk_node("ExprQualifiedPath", 3, (yyvsp[-8]), (yyvsp[-7]), (yyvsp[-4])), (yyvsp[-3]), (yyvsp[0]));
}
#line 7823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 1601 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ExprQualifiedPath", 3, mk_node("ExprQualifiedPath", 4, (yyvsp[-9]), (yyvsp[-8]), (yyvsp[-5]), (yyvsp[-4])), (yyvsp[-3]), (yyvsp[0]));
}
#line 7831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 1605 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ExprQualifiedPath", 4, mk_node("ExprQualifiedPath", 3, (yyvsp[-9]), (yyvsp[-8]), (yyvsp[-5])), (yyvsp[-4]), (yyvsp[-1]), (yyvsp[0]));
}
#line 7839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 1609 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("ExprQualifiedPath", 4, mk_node("ExprQualifiedPath", 4, (yyvsp[-10]), (yyvsp[-9]), (yyvsp[-6]), (yyvsp[-5])), (yyvsp[-4]), (yyvsp[-1]), (yyvsp[0]));
}
#line 7847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 1614 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 1615 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 7859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 698:
#line 1619 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 1620 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 7871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 700:
#line 1625 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 3, mk_none(), (yyvsp[-1]), (yyvsp[0])); }
#line 7877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 701:
#line 1627 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 3, mk_none(), (yyvsp[-1]), (yyvsp[0])); }
#line 7883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 1629 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 7889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 703:
#line 1631 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 3, (yyvsp[-2]), mk_none(), (yyvsp[0])); }
#line 7895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 704:
#line 1636 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 3, mk_none(), (yyvsp[-1]), (yyvsp[0])); }
#line 7901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 705:
#line 1638 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 7907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 706:
#line 1640 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 3, (yyvsp[-2]), mk_none(), (yyvsp[0])); }
#line 7913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 707:
#line 1645 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 2, mk_none(), (yyvsp[0])); }
#line 7919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 708:
#line 1647 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 3, mk_none(), (yyvsp[-1]), (yyvsp[0])); }
#line 7925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 709:
#line 1649 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 710:
#line 1651 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 3, (yyvsp[-2]), mk_none(), (yyvsp[0])); }
#line 7937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 711:
#line 1656 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 3, mk_none(), (yyvsp[-1]), (yyvsp[0])); }
#line 7943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 712:
#line 1658 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 7949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 713:
#line 1660 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprFnBlock", 3, (yyvsp[-2]), mk_none(), (yyvsp[0])); }
#line 7955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 715:
#line 1665 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("VecRepeat", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 7961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 718:
#line 1671 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-1]), 1, (yyvsp[0])); }
#line 7967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 719:
#line 1672 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 7973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 722:
#line 1678 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 7979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 723:
#line 1682 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("FieldInits", 1, (yyvsp[0])); }
#line 7985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 724:
#line 1683 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-2]), 1, (yyvsp[0])); }
#line 7991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 725:
#line 1687 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("FieldInit", 1, (yyvsp[0])); }
#line 7997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 726:
#line 1688 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("FieldInit", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 8003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 727:
#line 1689 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("FieldInit", 2, mk_atom(yytext), (yyvsp[0])); }
#line 8009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 728:
#line 1693 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("DefaultFieldInit", 1, (yyvsp[0])); }
#line 8015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 736:
#line 1704 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("UnsafeBlock", 1, (yyvsp[0])); }
#line 8021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 737:
#line 1705 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Macro", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 8027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 740:
#line 1714 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprField", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 8033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 741:
#line 1715 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprField", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 8039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 742:
#line 1716 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprIndex", 3, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1])); }
#line 8045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 743:
#line 1717 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprIndex", 3, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1])); }
#line 8051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 744:
#line 1718 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprCall", 3, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1])); }
#line 8057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 745:
#line 1719 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprCall", 3, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1])); }
#line 8063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 746:
#line 1720 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprTupleIndex", 1, (yyvsp[-2])); }
#line 8069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 747:
#line 1721 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprTupleIndex", 1, (yyvsp[-2])); }
#line 8075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 748:
#line 1725 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprMatch", 1, (yyvsp[-2])); }
#line 8081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 749:
#line 1726 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprMatch", 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 8087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 750:
#line 1727 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprMatch", 2, (yyvsp[-4]), ext_node((yyvsp[-2]), 1, (yyvsp[-1]))); }
#line 8093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 751:
#line 1728 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprMatch", 2, (yyvsp[-3]), mk_node("Arms", 1, (yyvsp[-1]))); }
#line 8099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 752:
#line 1732 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("Arms", 1, (yyvsp[0])); }
#line 8105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 753:
#line 1733 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-1]), 1, (yyvsp[0])); }
#line 8111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 757:
#line 1743 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ArmNonblock", 4, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 8117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 758:
#line 1744 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ArmNonblock", 4, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 8123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 759:
#line 1748 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ArmBlock", 4, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 8129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 760:
#line 1749 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ArmBlock", 4, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 8135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 761:
#line 1753 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 762:
#line 1754 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 8147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 763:
#line 1758 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprIf", 2, (yyvsp[-1]), (yyvsp[0])); }
#line 8153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 764:
#line 1759 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprIf", 3, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 8159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 765:
#line 1763 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprIfLet", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 8165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 766:
#line 1764 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprIfLet", 4, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 8171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 770:
#line 1774 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprWhile", 3, (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 8177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 771:
#line 1778 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprWhileLet", 4, (yyvsp[-6]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 8183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 772:
#line 1782 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprLoop", 2, (yyvsp[-2]), (yyvsp[0])); }
#line 8189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 773:
#line 1786 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ExprForLoop", 4, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 8195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 775:
#line 1791 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 8201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 776:
#line 1795 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("DeclLocal", 3, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1])); }
#line 8207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 777:
#line 1803 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("LitByte", 1, mk_atom(yytext)); }
#line 8213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 778:
#line 1804 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("LitChar", 1, mk_atom(yytext)); }
#line 8219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 779:
#line 1805 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("LitInteger", 1, mk_atom(yytext)); }
#line 8225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 780:
#line 1806 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("LitFloat", 1, mk_atom(yytext)); }
#line 8231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 781:
#line 1807 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("LitBool", 1, mk_atom(yytext)); }
#line 8237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 782:
#line 1808 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("LitBool", 1, mk_atom(yytext)); }
#line 8243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 784:
#line 1813 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("LitStr", 1, mk_atom(yytext), mk_atom("CookedStr")); }
#line 8249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 785:
#line 1814 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("LitStr", 1, mk_atom(yytext), mk_atom("RawStr")); }
#line 8255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 786:
#line 1815 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("LitByteStr", 1, mk_atom(yytext), mk_atom("ByteStr")); }
#line 8261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 787:
#line 1816 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("LitByteStr", 1, mk_atom(yytext), mk_atom("RawByteStr")); }
#line 8267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 788:
#line 1820 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_none(); }
#line 8273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 790:
#line 1825 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ident", 1, mk_atom(yytext)); }
#line 8279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 791:
#line 1827 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ident", 1, mk_atom(yytext)); }
#line 8285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 792:
#line 1828 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ident", 1, mk_atom(yytext)); }
#line 8291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 793:
#line 1829 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("ident", 1, mk_atom(yytext)); }
#line 8297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 794:
#line 1833 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 795:
#line 1834 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 796:
#line 1835 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 797:
#line 1836 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 798:
#line 1837 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 799:
#line 1838 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 800:
#line 1839 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 801:
#line 1840 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 802:
#line 1841 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 803:
#line 1842 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 804:
#line 1843 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 805:
#line 1844 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 806:
#line 1845 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 807:
#line 1846 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 808:
#line 1847 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 809:
#line 1848 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 810:
#line 1849 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 811:
#line 1850 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 812:
#line 1851 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 813:
#line 1852 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 814:
#line 1853 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 815:
#line 1854 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 816:
#line 1855 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 817:
#line 1856 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 818:
#line 1857 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 819:
#line 1858 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 820:
#line 1859 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 821:
#line 1860 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 822:
#line 1861 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 823:
#line 1862 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 824:
#line 1863 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 825:
#line 1864 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 826:
#line 1865 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 827:
#line 1866 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 828:
#line 1867 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 829:
#line 1868 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 830:
#line 1869 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 831:
#line 1870 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 832:
#line 1871 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 833:
#line 1872 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 834:
#line 1873 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 835:
#line 1874 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 836:
#line 1875 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 837:
#line 1876 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 838:
#line 1877 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 839:
#line 1878 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 840:
#line 1879 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 841:
#line 1880 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 842:
#line 1881 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 843:
#line 1882 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 844:
#line 1883 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 845:
#line 1884 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 846:
#line 1885 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 847:
#line 1886 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 848:
#line 1887 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 849:
#line 1888 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 850:
#line 1889 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 851:
#line 1890 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 852:
#line 1891 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 853:
#line 1892 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 854:
#line 1893 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 855:
#line 1894 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 856:
#line 1895 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 857:
#line 1896 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 858:
#line 1897 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 859:
#line 1898 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 860:
#line 1899 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 861:
#line 1900 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 862:
#line 1901 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 863:
#line 1902 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 864:
#line 1903 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 865:
#line 1904 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 866:
#line 1905 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 867:
#line 1906 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 868:
#line 1907 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 869:
#line 1908 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 870:
#line 1909 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 871:
#line 1910 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 872:
#line 1911 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 873:
#line 1912 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 874:
#line 1913 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 875:
#line 1914 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 876:
#line 1915 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 877:
#line 1916 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 878:
#line 1917 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 879:
#line 1918 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 880:
#line 1919 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 881:
#line 1920 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 882:
#line 1921 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 883:
#line 1922 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 884:
#line 1923 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 885:
#line 1924 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 886:
#line 1925 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 887:
#line 1926 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 888:
#line 1927 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 889:
#line 1928 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 890:
#line 1929 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 891:
#line 1930 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 892:
#line 1931 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 893:
#line 1932 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 894:
#line 1933 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 895:
#line 1934 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 896:
#line 1935 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 897:
#line 1936 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 898:
#line 1937 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 899:
#line 1938 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 900:
#line 1939 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 901:
#line 1940 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 902:
#line 1941 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 903:
#line 1942 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 904:
#line 1943 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 905:
#line 1944 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 906:
#line 1945 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 907:
#line 1946 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_atom(yytext); }
#line 8981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 908:
#line 1950 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TokenTrees", 0); }
#line 8987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 909:
#line 1951 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = ext_node((yyvsp[-1]), 1, (yyvsp[0])); }
#line 8993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 911:
#line 1956 "parser-lalr.y" /* yacc.c:1646  */
    { (yyval) = mk_node("TTTok", 1, (yyvsp[0])); }
#line 8999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 915:
#line 1967 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("TTDelim", 3,
               mk_node("TTTok", 1, mk_atom("(")),
               (yyvsp[-1]),
               mk_node("TTTok", 1, mk_atom(")")));
}
#line 9010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 916:
#line 1977 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("TTDelim", 3,
               mk_node("TTTok", 1, mk_atom("{")),
               (yyvsp[-1]),
               mk_node("TTTok", 1, mk_atom("}")));
}
#line 9021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 917:
#line 1987 "parser-lalr.y" /* yacc.c:1646  */
    {
  (yyval) = mk_node("TTDelim", 3,
               mk_node("TTTok", 1, mk_atom("[")),
               (yyvsp[-1]),
               mk_node("TTTok", 1, mk_atom("]")));
}
#line 9032 "y.tab.c" /* yacc.c:1646  */
    break;


#line 9036 "y.tab.c" /* yacc.c:1646  */
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
