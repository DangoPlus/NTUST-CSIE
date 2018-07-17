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
#line 1 "neo_yacc.y" /* yacc.c:339  */

#include "symbol.c"

#line 70 "y.tab.c" /* yacc.c:339  */

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
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STR = 258,
    TRUE = 259,
    FALSE = 260,
    BOOL = 261,
    INT = 262,
    FLOAT = 263,
    LE_OP = 264,
    GE_OP = 265,
    EQ_OP = 266,
    NE_OP = 267,
    AND = 268,
    OR = 269,
    NOR = 270,
    EQUALS = 271,
    WHILE = 272,
    WHERE = 273,
    AR_OP = 274,
    BREAK = 275,
    CONTINUE = 276,
    DEFAULT = 277,
    ELSE = 278,
    MATCH = 279,
    MUT = 280,
    CHAR = 281,
    ENUM = 282,
    FOR = 283,
    FN = 284,
    DO = 285,
    IF = 286,
    IN = 287,
    PRINT = 288,
    PRINTLN = 289,
    EXTERN = 290,
    LET = 291,
    LOOP = 292,
    PUB = 293,
    RETURN = 294,
    STATIC = 295,
    STRUCT = 296,
    SWITCH = 297,
    SELF = 298,
    USE = 299,
    ADD_ASSIGN = 300,
    SUB_ASSIGN = 301,
    MUL_ASSIGN = 302,
    DIV_ASSIGN = 303,
    FLOATPOINT = 304,
    INTEGER = 305,
    IDENTIFIER = 306,
    LT = 307,
    LE = 308,
    EQ = 309,
    GE = 310,
    GT = 311,
    NE = 312,
    PLUS = 313,
    MINUS = 314,
    MULTIPLY = 315,
    DIVIDE = 316,
    UMINUS = 317
  };
#endif
/* Tokens.  */
#define STR 258
#define TRUE 259
#define FALSE 260
#define BOOL 261
#define INT 262
#define FLOAT 263
#define LE_OP 264
#define GE_OP 265
#define EQ_OP 266
#define NE_OP 267
#define AND 268
#define OR 269
#define NOR 270
#define EQUALS 271
#define WHILE 272
#define WHERE 273
#define AR_OP 274
#define BREAK 275
#define CONTINUE 276
#define DEFAULT 277
#define ELSE 278
#define MATCH 279
#define MUT 280
#define CHAR 281
#define ENUM 282
#define FOR 283
#define FN 284
#define DO 285
#define IF 286
#define IN 287
#define PRINT 288
#define PRINTLN 289
#define EXTERN 290
#define LET 291
#define LOOP 292
#define PUB 293
#define RETURN 294
#define STATIC 295
#define STRUCT 296
#define SWITCH 297
#define SELF 298
#define USE 299
#define ADD_ASSIGN 300
#define SUB_ASSIGN 301
#define MUL_ASSIGN 302
#define DIV_ASSIGN 303
#define FLOATPOINT 304
#define INTEGER 305
#define IDENTIFIER 306
#define LT 307
#define LE 308
#define EQ 309
#define GE 310
#define GT 311
#define NE 312
#define PLUS 313
#define MINUS 314
#define MULTIPLY 315
#define DIVIDE 316
#define UMINUS 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "neo_yacc.y" /* yacc.c:355  */

	char	val[200];
	float	float_type;
	int	    int_type;
	char	int_id[200];

#line 241 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 258 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   334

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    77,     2,     2,    69,    73,     2,
      63,    64,    67,    70,    65,    66,     2,    68,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    78,    79,
      71,    76,    72,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,    75,    83,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    37,    41,    42,    43,    47,    48,    52,
      53,    57,    58,    67,    68,    72,    73,    74,    75,    79,
      80,    81,    85,    86,    87,    88,    89,    93,    94,    95,
      99,   100,   104,   105,   109,   110,   114,   115,   119,   120,
     121,   122,   126,   127,   128,   129,   133,   137,   141,   145,
     152,   163,   164,   168,   176,   177,   185,   189,   193,   197,
     201,   205,   209,   216,   217,   218,   219,   220,   224,   224,
     236,   236,   243,   244,   245,   246,   250,   254,   255,   259,
     267,   268,   272,   273,   274,   275,   276,   280,   287,   292
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STR", "TRUE", "FALSE", "BOOL", "INT",
  "FLOAT", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND", "OR", "NOR",
  "EQUALS", "WHILE", "WHERE", "AR_OP", "BREAK", "CONTINUE", "DEFAULT",
  "ELSE", "MATCH", "MUT", "CHAR", "ENUM", "FOR", "FN", "DO", "IF", "IN",
  "PRINT", "PRINTLN", "EXTERN", "LET", "LOOP", "PUB", "RETURN", "STATIC",
  "STRUCT", "SWITCH", "SELF", "USE", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "FLOATPOINT", "INTEGER", "IDENTIFIER", "LT",
  "LE", "EQ", "GE", "GT", "NE", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
  "UMINUS", "'('", "')'", "','", "'-'", "'*'", "'/'", "'%'", "'+'", "'<'",
  "'>'", "'&'", "'^'", "'|'", "'='", "'\"'", "':'", "';'", "'['", "']'",
  "'{'", "'}'", "$accept", "program", "outer_decl", "fn_va_list", "fn_val",
  "primary_expr", "unary_expr", "multi_expr", "add_expr",
  "relational_expr", "eq_expr", "and_expr", "excl_or_expr", "incl_or_expr",
  "assign_expr", "expr", "type_specifier", "type_value_decl", "para_list",
  "para_decl", "decl_list", "declaration", "single_line_stat",
  "cubr_start", "$@1", "cubr_end", "$@2", "cubr_stat", "expr_stat",
  "select_stat", "iteration_stat", "stat_list", "statement", "fn_expr",
  "FN_def", YY_NULLPTR
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
     315,   316,   317,    40,    41,    44,    45,    42,    47,    37,
      43,    60,    62,    38,    94,   124,    61,    34,    58,    59,
      91,    93,   123,   125
};
# endif

#define YYPACT_NINF -77

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-77)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,   -77,   -18,   -46,   139,   -77,   -15,   -77,    -2,   -77,
      29,    71,   252,   -77,   -77,   -77,    44,    50,    20,    39,
     -77,   -77,   -77,   -77,   -77,   -77,   252,   -11,   -77,   -77,
     -48,    20,    39,   -77,    39,    23,   -77,   -77,   -77,   -77,
      36,    62,   -77,    55,    58,   -52,   -77,    74,    95,    93,
     -77,    20,   276,    39,   -77,     1,   -77,   143,   115,   -77,
      20,   -77,    20,    91,   117,   -77,   -77,   134,   135,   174,
     174,    69,   127,   174,   252,   174,   -77,   -77,   252,   -77,
     124,   -55,    53,    16,   131,   136,    41,   -77,   223,     1,
     -77,   -77,   -77,   -77,   -77,   -77,     5,   -77,    39,   -77,
     126,   128,   -77,   -77,   174,   174,   101,   106,   -77,   110,
     174,    62,   203,   252,   183,   -77,   -77,   223,   223,   223,
     223,   223,   252,   252,   252,   252,   223,   223,   223,   223,
     223,   223,   -77,   -77,     5,   -77,   -77,    58,   -77,   132,
     149,   212,   -77,   -77,   -77,   133,   -77,   -77,   -77,   -77,
     -77,   124,   124,   252,   252,   252,   252,    53,    53,    16,
     131,   136,   -77,   -77,   -77,   -77,    26,    26,   -77,   -77,
     191,    26,   -77
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    87,     0,     0,     0,     2,     5,    54,     0,     4,
       0,     0,     0,     1,     3,    55,     0,     0,     0,     0,
      46,    47,    48,    50,    49,     9,     0,     0,     7,    10,
       0,     0,     0,    62,     0,     0,    45,    42,    43,    44,
       0,     0,     6,     0,     0,     0,    51,     0,     0,     0,
      56,     0,     0,     0,    68,     0,    88,     0,     0,    61,
       0,    60,     0,     0,     0,    53,    69,     0,     0,     0,
       0,     0,     9,     0,     0,     0,    70,    11,    13,    15,
      19,    22,    27,    30,    32,    34,    36,    38,    76,     0,
      82,    75,    83,    84,    85,    86,     0,    80,     0,    52,
       0,     0,    58,     8,     0,     0,     0,     0,    66,     0,
       0,    11,     0,    14,     0,    71,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    73,     0,    72,    81,     0,    59,     0,
       0,     0,    64,    65,    67,     0,    40,    41,    16,    17,
      18,    21,    20,    25,    26,    23,    24,    28,    29,    31,
      33,    35,    37,    74,    89,    57,     0,     0,    63,    79,
      77,     0,    78
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   214,   -12,   167,   -26,    83,     2,   -77,    68,
      92,   100,   105,   -77,   176,   224,    47,   103,   -77,   163,
     175,    -4,   -77,   -77,   -77,    -3,   -77,   -43,   118,   -77,
     -77,   142,   -76,   -77,   -77
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,    77,    28,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    40,    29,    45,    46,
       6,     7,    90,    55,    66,    91,   115,    92,    93,    94,
      95,    96,    97,     8,     9
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      27,    56,    15,    43,    20,    21,    22,    10,    20,    21,
      22,   120,    57,    58,    41,   121,    44,    12,    67,     1,
     136,     2,    67,    20,    21,    22,     2,   126,   127,    20,
      21,    22,    68,    11,    69,    70,    68,     2,    69,    70,
      71,     3,    36,    67,    71,    37,    38,    39,   113,    16,
      23,    24,    72,    42,    23,    24,    72,    68,   136,    69,
      70,   111,   122,   123,    73,    71,   116,    74,    73,    23,
      24,    74,    20,    21,    22,    23,    24,    72,    75,    48,
      17,    49,    75,    54,    76,    15,   133,    54,    76,    73,
     169,   170,    74,   135,   164,   172,   153,   154,   155,   156,
      65,   116,    50,    75,    20,    21,    22,    30,    54,    20,
      21,    22,    51,    20,    21,    22,   130,   131,    23,    24,
      25,    35,   151,   152,   124,   125,    31,    52,    32,    33,
      34,   163,    73,    53,    47,    74,    20,    21,    22,    13,
      54,   116,   116,   116,   116,   137,    75,    18,   108,    19,
      23,    24,    25,    59,    63,    23,    24,    25,    62,    23,
      24,    25,    98,   100,    26,   101,    43,    74,     1,    26,
     102,    60,    74,    26,    61,     2,    74,    20,    21,    22,
     142,   103,    23,    24,    25,   143,    20,    21,    22,   144,
       3,   117,   118,   119,   157,   158,    26,   104,   105,    74,
     148,   149,   150,   110,   128,   138,    20,    21,    22,   139,
     129,   165,   168,   166,   171,    20,    21,    22,    14,    64,
     159,    99,   140,    23,    24,    25,    20,    21,    22,   160,
      89,   134,    23,    24,    25,   161,     0,    73,     0,     0,
      74,     0,     0,     0,     0,     0,    26,     0,     0,    74,
       0,    75,    23,    24,    25,    20,    21,    22,     0,     0,
     147,    23,    24,    25,   132,     0,    26,   146,     0,    74,
       0,     0,    23,    24,    25,    26,   167,     0,    74,    20,
      21,    22,   132,   132,     0,   132,    26,     0,   132,    74,
     132,     0,     0,   106,   107,   109,     0,   112,     0,   114,
       0,    23,    24,    25,     0,     0,     0,   162,     0,     0,
       0,     0,     0,     0,     0,    26,     0,   132,     0,     0,
       0,   132,     0,     0,     0,    23,    24,    25,     0,   141,
       0,     0,     0,     0,   145
};

static const yytype_int16 yycheck[] =
{
      12,    44,     6,    51,     3,     4,     5,    25,     3,     4,
       5,    66,    64,    65,    26,    70,    64,    63,    17,    29,
      96,    36,    17,     3,     4,     5,    36,    11,    12,     3,
       4,     5,    31,    51,    33,    34,    31,    36,    33,    34,
      39,    51,     3,    17,    39,     6,     7,     8,    74,    51,
      49,    50,    51,    64,    49,    50,    51,    31,   134,    33,
      34,    73,     9,    10,    63,    39,    78,    66,    63,    49,
      50,    66,     3,     4,     5,    49,    50,    51,    77,    32,
      51,    34,    77,    82,    83,    89,    89,    82,    83,    63,
     166,   167,    66,    96,   137,   171,   122,   123,   124,   125,
      53,   113,    79,    77,     3,     4,     5,    63,    82,     3,
       4,     5,    76,     3,     4,     5,    75,    76,    49,    50,
      51,    18,   120,   121,    71,    72,    76,    65,    78,    79,
      80,   134,    63,    78,    31,    66,     3,     4,     5,     0,
      82,   153,   154,   155,   156,    98,    77,    76,    79,    78,
      49,    50,    51,    79,    51,    49,    50,    51,    65,    49,
      50,    51,    19,    60,    63,    62,    51,    66,    29,    63,
      79,    76,    66,    63,    79,    36,    66,     3,     4,     5,
      79,    64,    49,    50,    51,    79,     3,     4,     5,    79,
      51,    67,    68,    69,   126,   127,    63,    63,    63,    66,
     117,   118,   119,    76,    73,    79,     3,     4,     5,    81,
      74,    79,    79,    64,    23,     3,     4,     5,     4,    52,
     128,    58,   104,    49,    50,    51,     3,     4,     5,   129,
      55,    89,    49,    50,    51,   130,    -1,    63,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,
      -1,    77,    49,    50,    51,     3,     4,     5,    -1,    -1,
      77,    49,    50,    51,    88,    -1,    63,    64,    -1,    66,
      -1,    -1,    49,    50,    51,    63,    64,    -1,    66,     3,
       4,     5,   106,   107,    -1,   109,    63,    -1,   112,    66,
     114,    -1,    -1,    69,    70,    71,    -1,    73,    -1,    75,
      -1,    49,    50,    51,    -1,    -1,    -1,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,   141,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    49,    50,    51,    -1,   105,
      -1,    -1,    -1,    -1,   110
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    36,    51,    85,    86,   104,   105,   117,   118,
      25,    51,    63,     0,    86,   105,    51,    51,    76,    78,
       3,     4,     5,    49,    50,    51,    63,    87,    88,   101,
      63,    76,    78,    79,    80,   101,     3,     6,     7,     8,
     100,    87,    64,    51,    64,   102,   103,   101,   100,   100,
      79,    76,    65,    78,    82,   107,   111,    64,    65,    79,
      76,    79,    65,   101,    88,   100,   108,    17,    31,    33,
      34,    39,    51,    63,    66,    77,    83,    87,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   104,
     106,   109,   111,   112,   113,   114,   115,   116,    19,   103,
     101,   101,    79,    64,    63,    63,    99,    99,    79,    99,
      76,    87,    99,    89,    99,   110,    87,    67,    68,    69,
      66,    70,     9,    10,    71,    72,    11,    12,    73,    74,
      75,    76,    98,   109,   115,   109,   116,   100,    79,    81,
     112,    99,    79,    79,    79,    99,    64,    77,    90,    90,
      90,    91,    91,    89,    89,    89,    89,    93,    93,    94,
      95,    96,    98,   109,   111,    79,    64,    64,    79,   116,
     116,    23,   116
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    86,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    91,    92,
      92,    92,    93,    93,    93,    93,    93,    94,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
      99,    99,   100,   100,   100,   100,   101,   101,   101,   101,
     101,   102,   102,   103,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   106,   106,   106,   106,   106,   108,   107,
     110,   109,   111,   111,   111,   111,   112,   113,   113,   114,
     115,   115,   116,   116,   116,   116,   116,   117,   118,   118
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     4,     1,     5,     1,
       1,     1,     2,     1,     2,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     2,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     2,     5,     9,     7,     8,
       6,     6,     4,     4,     3,     3,     2,     3,     0,     2,
       0,     2,     3,     3,     4,     2,     1,     5,     7,     5,
       1,     2,     1,     1,     1,     1,     1,     1,     5,     8
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
#line 36 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to program\n");}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 37 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to program\n");}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 41 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to outer_decl\n");}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to outer_decl\n");}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 43 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to outer_decl\n");}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 47 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to fn_va_list\n");}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 48 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to fn_va_list\n");}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 52 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to fn_val\n");}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 53 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to fn_val\n");}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 57 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to primary_expr\n");}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to primary_expr\n");}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 67 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to unary_expr\n");}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 68 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to unary_expr\n");}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 72 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to multi_expr\n");}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 73 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to multi_expr\n");}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 74 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to multi_expr\n");}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 75 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to multi_expr\n");}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 79 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to add_expr\n");}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 80 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to add_expr\n");}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 81 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to add_expr\n");}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 85 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to relational_expr\n");}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 86 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to relational_expr\n");}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 87 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to relational_expr\n");}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 88 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to relational_expr\n");}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 89 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to relational_expr\n");}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 93 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to eq_expr\n");}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 94 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to eq_expr\n");}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 95 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to eq_expr\n");}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 99 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to and_expr\n");}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 100 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to and_expr\n");}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 104 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to excl_expr\n");}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 105 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to excl_expr\n");}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 109 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to incl_or_expr\n");}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 110 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to incl_or_expr\n");}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 114 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to assign_expr\n");}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 115 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to assign_expr\n");}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 119 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to expr\n");}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 120 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to expr\n");}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 121 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to expr\n");}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 122 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to expr\n");}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 126 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to type_specifier BOOL\n");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 127 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to type_specifier INT\n");}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 128 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to type_specifier FLOAT\n");}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 129 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to type_specifier STR\n");}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 133 "neo_yacc.y" /* yacc.c:1646  */
    {
	strcpy( (yyval.val), (yyvsp[0].val) );
	{Trace("Reducing to type_value_decl\n");}
}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 137 "neo_yacc.y" /* yacc.c:1646  */
    {
	strcpy( (yyval.val), (yyvsp[0].val) );
	{Trace("Reducing to type_value_decl\n");}
}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 141 "neo_yacc.y" /* yacc.c:1646  */
    {
	strcpy( (yyval.val), (yyvsp[0].val) );
	{Trace("Reducing to type_value_decl\n");}
}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 146 "neo_yacc.y" /* yacc.c:1646  */
    {
	char str_temp[50];
	sprintf( str_temp, "%d", (yyvsp[0].int_type) );
	strcpy( (yyval.val), str_temp );
	{Trace("Reducing to type_value_decl\n");}
}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 153 "neo_yacc.y" /* yacc.c:1646  */
    {
	char str_temp[50];
	sprintf( str_temp, "%f", (yyvsp[0].float_type) );
	strcpy( (yyval.val), str_temp );
	{Trace("Reducing to type_value_decl\n");}
}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 163 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to para_list\n");}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 164 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to para_list\n");}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 169 "neo_yacc.y" /* yacc.c:1646  */
    {
	insert( (yyvsp[-2].int_id), (yyvsp[0].val), "" );
	{Trace("Reducing to para_decl\n");}
}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 176 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to decl_list\n");}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 177 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to decl_list\n");}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 185 "neo_yacc.y" /* yacc.c:1646  */
    {
	insert( (yyvsp[-3].int_id), "const", (yyvsp[-1].val) );
	{Trace("Reducing to declaration\n");}
}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 189 "neo_yacc.y" /* yacc.c:1646  */
    {
	insert( (yyvsp[-6].int_id),"array",(yyvsp[-2].val));
	{Trace("Reducing to declaration\n");}
}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 193 "neo_yacc.y" /* yacc.c:1646  */
    {
	insert( (yyvsp[-5].int_id), (yyvsp[-3].val), (yyvsp[-1].val) );
	{Trace("Reducing to declaration\n");}
}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 197 "neo_yacc.y" /* yacc.c:1646  */
    {
	insert( (yyvsp[-5].int_id), (yyvsp[-3].val), (yyvsp[-1].val) );
	{Trace("Reducing to declaration\n");}
}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 201 "neo_yacc.y" /* yacc.c:1646  */
    {
    insert( (yyvsp[-3].int_id), (yyvsp[-1].val), "");
	{Trace("Reducing to declaration\n");}
}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 205 "neo_yacc.y" /* yacc.c:1646  */
    {
    insert( (yyvsp[-3].int_id), "", (yyvsp[-1].val));
	{Trace("Reducing to declaration\n");}
}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 209 "neo_yacc.y" /* yacc.c:1646  */
    {
	insert( (yyvsp[-1].int_id), "int", "" );
	{Trace("Reducing to declaration\n");}
}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 216 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to single_line_stat\n");}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 217 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to single_line_stat\n");}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 218 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to single_line_stat\n");}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 219 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to single_line_stat\n");}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 220 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to single_line_stat\n");}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 224 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to cubr_start\n");}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 225 "neo_yacc.y" /* yacc.c:1646  */
    {
	if ( judge == 1 )
	{
		ObScope++;
	}else  {
		judge++;
	}
}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 236 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to cubr_end\n");}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 237 "neo_yacc.y" /* yacc.c:1646  */
    {
	ObScope--;
}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 243 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to cubr_stat\n");}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 244 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to cubr_stat\n");}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 245 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to cubr_stat\n");}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 246 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to cubr_stat\n");}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 250 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to expr_stat\n");}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 254 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to select_stat\n");}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 255 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to select_stat\n");}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 259 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to iteration_stat\n");}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 267 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to stat_list\n");}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 268 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to stat_list\n");}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 272 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to statement\n");}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 273 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to statement\n");}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 274 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to statement\n");}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 275 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to statement\n");}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 276 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to statement\n");}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 280 "neo_yacc.y" /* yacc.c:1646  */
    {
	judge = 0;
	ObScope++; // enter scope
	{Trace("Reducing to fn_expr\n");}
}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 288 "neo_yacc.y" /* yacc.c:1646  */
    {
	insert( (yyvsp[-3].int_id), "func", "" );
	{Trace("Reducing to FN_def\n");}
}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 293 "neo_yacc.y" /* yacc.c:1646  */
    {
	insert( (yyvsp[-6].int_id), "func", (yyvsp[-1].val) );
	{Trace("Reducing to FN_def\n");}
}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2088 "y.tab.c" /* yacc.c:1646  */
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
#line 304 "neo_yacc.y" /* yacc.c:1906  */

//error detect
void yyerror( const char *str )
{
	printf("error:%s\n",str);
}

int yywrap()
{
	return(1);
}

int main()
{
	//init
	judge	= 0;
	ObScope	= 0;
	table	= create();
	yyparse();
	printf( "Symbol Table\n" );
	printf( "Id          Type      Value     Scope\n" );
	dump();
	return(0);
}


