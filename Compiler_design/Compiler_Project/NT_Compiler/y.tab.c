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
#define YYLAST   372

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

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
     155,   159,   160,   164,   165,   177,   178,   179,   180,   184,
     185,   195,   208,   209,   212,   217,   226,   227,   228,   232,
     233,   237,   238,   242,   243,   247,   248,   299,   323,   324,
     325,   326,   330,   331,   332,   333,   337,   367,   371,   375,
     451,   462,   463,   467,   477,   478,   483,   490,   494,   498,
     531,   557,   557,   589,   620,   622,   626,   621,   639,   649,
     638,   671,   672,   681,   681,   694,   694,   701,   702,   703,
     704,   708,   712,   764,   774,   781,   804,   781,   865,   866,
     883,   884,   885,   886,   887,   891,   899,   913,   915,   912,
     934,   954,   957,   930
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
  "para_decl", "decl_list", "declaration", "$@1", "single_line_stat",
  "$@2", "$@3", "$@4", "$@5", "cubr_start", "$@6", "cubr_end", "$@7",
  "cubr_stat", "expr_stat", "if_stat", "go_to", "select_stat",
  "iteration_stat", "$@8", "$@9", "stat_list", "statement", "fn_expr",
  "main_entry", "FN_def", "$@10", "$@11", "$@12", "$@13", "$@14", YY_NULLPTR
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

#define YYPACT_NINF -108

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-108)))

#define YYTABLE_NINF -101

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,  -108,   -18,   -41,     8,  -108,    17,  -108,   -17,  -108,
       4,   -31,   309,  -108,  -108,  -108,    -3,    44,    15,    98,
    -108,  -108,  -108,  -108,  -108,  -108,   309,   -13,  -108,  -108,
      26,    98,  -108,    98,    11,    16,  -108,  -108,  -108,  -108,
      27,    45,  -108,    51,    74,     9,    76,    15,  -108,    15,
     113,  -108,    61,    28,  -108,    15,  -108,    15,    68,    72,
      78,  -108,    98,  -108,    74,    73,    75,  -108,  -108,  -108,
      77,  -108,   138,  -108,  -108,    89,  -108,     7,  -108,    98,
    -108,  -108,  -108,   106,  -108,  -108,   191,    99,   243,   309,
     243,  -108,  -108,   309,  -108,   115,   -39,     0,    87,   101,
     105,    52,  -108,    12,     7,  -108,  -108,  -108,  -108,  -108,
    -108,    63,  -108,  -108,   117,   243,   243,   243,  -108,   209,
     243,    45,   281,   309,   273,  -108,  -108,    12,    12,    12,
      12,    12,   309,   309,   309,    12,    12,    12,    12,    12,
      12,  -108,  -108,    63,  -108,  -108,    77,   243,    12,    12,
      12,  -108,   232,  -108,  -108,  -108,  -108,  -108,   115,   115,
     309,   309,   309,     0,     0,    87,   101,   105,   -50,  -108,
    -108,  -108,   124,   125,   112,   118,  -108,   309,  -108,   110,
    -108,  -108,   133,  -108,   168,   113,   104,   136,  -108,  -108,
     180,   123,   168,   127,  -108
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    95,     0,     0,     0,     2,     5,    54,     0,     4,
       0,     0,     0,     1,     3,    55,     0,    61,     0,     0,
      46,    47,    48,    50,    49,     9,     0,     0,     7,    10,
      97,     0,    63,     0,     0,     0,    45,    42,    43,    44,
       0,     0,     6,     0,     0,     0,     0,     0,    56,     0,
       0,    98,     0,     0,    51,     0,    60,     0,     0,     0,
       0,    96,     0,   101,     0,     0,     0,    62,    58,     8,
       0,    53,     0,    52,    59,     0,    73,     0,    99,     0,
      57,    74,    85,     0,    65,    68,     0,     9,     0,     0,
       0,    75,    11,    13,    15,    19,    22,    26,    29,    31,
      33,    35,    38,    81,     0,    90,    80,    91,    92,    93,
      94,     0,    88,   102,     0,     0,     0,     0,    71,     0,
       0,    11,     0,    14,     0,    76,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    78,     0,    77,    89,     0,     0,    82,    66,
      69,    72,     0,    40,    41,    16,    17,    18,    21,    20,
      25,    23,    24,    27,    28,    30,    32,    34,    35,    36,
      79,   103,     0,     0,     0,     0,    64,     0,    86,     0,
      67,    70,     0,    87,     0,     0,     0,     0,    83,    37,
       0,     0,     0,     0,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,   204,   -12,   -49,   -84,   -99,   -11,  -108,    -2,
      79,    82,    84,    71,   103,   201,   -10,   214,  -108,   151,
     144,    -4,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
     -69,  -108,   -64,    81,  -108,  -108,  -108,  -108,  -108,  -108,
    -101,  -107,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    92,    28,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    40,    29,    53,    54,
       6,     7,    34,   105,   116,   174,   117,   175,    77,    81,
     106,   125,   107,   108,   173,   190,   109,   110,   114,   183,
     111,   112,     8,    70,     9,    43,    61,    44,    72,   146
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    60,    15,   143,   145,   123,    78,    10,    13,   132,
      20,    21,    22,   177,    41,    20,    21,    22,    20,    21,
      22,    45,    12,    46,    82,   139,   140,   130,   155,   156,
     157,   131,     1,    11,    16,   142,   145,     1,    83,     2,
      84,    85,   144,     2,     2,    18,    86,    19,   160,   161,
     162,    42,    71,     2,     3,    17,    23,    24,    87,     3,
      30,    23,    24,    25,    23,    24,    20,    21,    22,   113,
      88,   133,   134,    89,   170,    26,   121,  -100,    89,   145,
      82,   126,   171,   186,    90,    55,   145,    47,    56,    76,
      91,   193,    63,    64,    83,    48,    84,    85,   135,   136,
      15,    36,    86,    49,    37,    38,    39,    20,    21,    22,
      50,   126,    23,    24,    87,    51,    20,    21,    22,   158,
     159,    82,    31,    32,    33,    52,    88,   139,   140,    89,
      20,    21,    22,   163,   164,    83,   187,    84,    85,    62,
      90,    57,    69,    86,    82,    76,    91,    67,   126,   126,
     126,    68,    74,    23,    24,    87,    75,    79,    83,    76,
      84,    85,    23,    24,    25,   182,    86,    88,    80,   115,
      89,    20,    21,    22,   137,   120,    23,    24,    87,   138,
     147,    90,   127,   128,   129,    82,    76,   188,   178,   179,
      88,   180,   184,    89,    20,    21,    22,   181,   185,    83,
     189,    84,    85,   191,    90,   192,   141,    86,    14,    76,
     194,   168,    20,    21,    22,    73,   165,    23,    24,    87,
     166,   104,   141,   167,     0,   141,     0,   141,   172,     0,
       0,    88,    35,     0,    89,    20,    21,    22,     0,     0,
      23,    24,    25,   169,     0,    90,    20,    21,    22,     0,
      76,   141,   141,   141,    88,   141,     0,    89,    23,    24,
      25,    58,     0,    59,     0,     0,     0,     0,    90,    65,
     118,    66,    26,     0,     0,    89,    20,    21,    22,     0,
       0,    23,    24,    25,    20,    21,    22,   119,   151,   122,
       0,   124,    23,    24,    25,    26,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,    89,
       0,   176,    20,    21,    22,     0,   148,   149,   150,     0,
      90,   152,    23,    24,    25,     0,     0,     0,     0,     0,
      23,    24,    25,     0,     0,     0,    26,     0,     0,    89,
       0,     0,     0,     0,    26,   153,     0,    89,     0,     0,
     154,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26
};

static const yytype_int16 yycheck[] =
{
      12,    50,     6,   104,   111,    89,    70,    25,     0,     9,
       3,     4,     5,    63,    26,     3,     4,     5,     3,     4,
       5,    31,    63,    33,    17,    75,    76,    66,   127,   128,
     129,    70,    29,    51,    51,   104,   143,    29,    31,    36,
      33,    34,   111,    36,    36,    76,    39,    78,   132,   133,
     134,    64,    62,    36,    51,    51,    49,    50,    51,    51,
      63,    49,    50,    51,    49,    50,     3,     4,     5,    79,
      63,    71,    72,    66,   143,    63,    88,    51,    66,   186,
      17,    93,   146,   184,    77,    76,   193,    76,    79,    82,
      83,   192,    64,    65,    31,    79,    33,    34,    11,    12,
     104,     3,    39,    76,     6,     7,     8,     3,     4,     5,
      65,   123,    49,    50,    51,    64,     3,     4,     5,   130,
     131,    17,    78,    79,    80,    51,    63,    75,    76,    66,
       3,     4,     5,   135,   136,    31,   185,    33,    34,    78,
      77,    65,    64,    39,    17,    82,    83,    79,   160,   161,
     162,    79,    79,    49,    50,    51,    81,    19,    31,    82,
      33,    34,    49,    50,    51,   177,    39,    63,    79,    63,
      66,     3,     4,     5,    73,    76,    49,    50,    51,    74,
      63,    77,    67,    68,    69,    17,    82,    83,    64,    64,
      63,    79,    82,    66,     3,     4,     5,    79,    65,    31,
      64,    33,    34,    23,    77,    82,   103,    39,     4,    82,
      83,   140,     3,     4,     5,    64,   137,    49,    50,    51,
     138,    77,   119,   139,    -1,   122,    -1,   124,   147,    -1,
      -1,    63,    18,    -1,    66,     3,     4,     5,    -1,    -1,
      49,    50,    51,   140,    -1,    77,     3,     4,     5,    -1,
      82,   148,   149,   150,    63,   152,    -1,    66,    49,    50,
      51,    47,    -1,    49,    -1,    -1,    -1,    -1,    77,    55,
      79,    57,    63,    -1,    -1,    66,     3,     4,     5,    -1,
      -1,    49,    50,    51,     3,     4,     5,    86,    79,    88,
      -1,    90,    49,    50,    51,    63,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,
      -1,    79,     3,     4,     5,    -1,   115,   116,   117,    -1,
      77,   120,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    -1,    -1,    -1,    63,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    63,    64,    -1,    66,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    36,    51,    85,    86,   104,   105,   126,   128,
      25,    51,    63,     0,    86,   105,    51,    51,    76,    78,
       3,     4,     5,    49,    50,    51,    63,    87,    88,   101,
      63,    78,    79,    80,   106,   101,     3,     6,     7,     8,
     100,    87,    64,   129,   131,   100,   100,    76,    79,    76,
      65,    64,    51,   102,   103,    76,    79,    65,   101,   101,
      88,   130,    78,    64,    65,   101,   101,    79,    79,    64,
     127,   100,   132,   103,    79,    81,    82,   112,   116,    19,
      79,   113,    17,    31,    33,    34,    39,    51,    63,    66,
      77,    83,    87,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   104,   107,   114,   116,   117,   120,
     121,   124,   125,   100,   122,    63,   108,   110,    79,    99,
      76,    87,    99,    89,    99,   115,    87,    67,    68,    69,
      66,    70,     9,    71,    72,    11,    12,    73,    74,    75,
      76,    98,   114,   124,   114,   125,   133,    63,    99,    99,
      99,    79,    99,    64,    77,    90,    90,    90,    91,    91,
      89,    89,    89,    93,    93,    94,    95,    96,    97,    98,
     114,   116,   117,   118,   109,   111,    79,    63,    64,    64,
      79,    79,    87,   123,    82,    65,   124,    88,    83,    64,
     119,    23,    82,   124,    83
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    86,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    91,    92,
      92,    92,    93,    93,    93,    93,    94,    94,    94,    95,
      95,    96,    96,    97,    97,    98,    98,    98,    99,    99,
      99,    99,   100,   100,   100,   100,   101,   101,   101,   101,
     101,   102,   102,   103,   104,   104,   105,   105,   105,   105,
     105,   106,   105,   105,   107,   108,   109,   107,   110,   111,
     107,   107,   107,   113,   112,   115,   114,   116,   116,   116,
     116,   117,   118,   119,   120,   122,   123,   121,   124,   124,
     125,   125,   125,   125,   125,   126,   127,   129,   130,   128,
     131,   132,   133,   128
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     4,     1,     5,     1,
       1,     1,     2,     1,     2,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     8,     1,     2,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     2,     5,     9,     7,     8,
       6,     0,     7,     4,     4,     0,     0,     5,     0,     0,
       5,     2,     3,     0,     2,     0,     2,     3,     3,     4,
       2,     1,     0,     0,    13,     0,     0,     6,     1,     2,
       1,     1,     1,     1,     1,     1,     0,     0,     0,     8,
       0,     0,     0,    11
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
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 37 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to program\n");}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 41 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to outer_decl\n");}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to outer_decl\n");}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 43 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to outer_decl\n");}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 47 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to fn_va_list\n");}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 48 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to fn_va_list\n");}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 53 "neo_yacc.y" /* yacc.c:1646  */
    {
	int check_id = 0;
	int stored_scope = ObScope;
	stored_index = status;
	scope_space++;
	int scoter = 0;
	if(scope_space < 2){
		if(scoter == 0){
		int iscope = 0;
		char iscope_str[10];
		strcat(jasm_code, "\t\tiload ");
		strcat(jasm_code_temp3, "\t\tiload ");
		strcat(jasm_code_temp5, "\t\tiload ");
		sprintf(iscope_str, "%d" , iscope);
		strcat(jasm_code, iscope_str);
		strcat(jasm_code, "\n");
		strcat(jasm_code_temp3, iscope_str);
		strcat(jasm_code_temp3, "\n");
		strcat(jasm_code_temp5, iscope_str);
		strcat(jasm_code_temp5, "\n");

		
		// sprintf(iscope_str, "%d" , iscope);
		
		scoter++;
		}
		if(scoter == 1){
		int iscope = 1;
		char iscope_str[10];
		strcat(jasm_code, "\t\tiload ");
		strcat(jasm_code_temp3, "\t\tiload ");
		strcat(jasm_code_temp5, "\t\tiload ");
		sprintf(iscope_str, "%d" , iscope);
		strcat(jasm_code, iscope_str);
		strcat(jasm_code, "\n");
		strcat(jasm_code_temp3, iscope_str);
		strcat(jasm_code_temp3, "\n");
		strcat(jasm_code_temp5, iscope_str);
		strcat(jasm_code_temp5, "\n");
		printf("\n%d\n",scope_space);
		strcat(jasm_code,"\t\tgetstatic int my_rust.a\n");
		strcat(jasm_code_temp3,"\t\tgetstatic int my_rust.a\n\t\tisub\n\t\tireturn\n\t}\n");
		strcat(jasm_code_temp5,"\t\tgetstatic int my_rust.a\n\t\timul\n\t\tireturn\n\t}\n");
		scoter++;
		}
	}

				if (scope_space == 9)
				{

						strcat(jasm_code, "\t\tgetstatic int my_rust.");
						strcat(jasm_code, (yyvsp[0].int_id));
						strcat(jasm_code, "\n");

						
					
					
				}
				if (scope_space == 7)
				{	
					strcat(jasm_code,"\t\tinvokestatic int my_rust.add(int,int)");
					strcat(jasm_code, "\n");
					strcat(jasm_code, "\t\tputstatic int my_rust.");
					strcat(jasm_code, (yyvsp[0].int_id));
					strcat(jasm_code, "\n");
					strcat(jasm_code, "\t\tgetstatic int my_rust.");
					strcat(jasm_code, (yyvsp[0].int_id));
					strcat(jasm_code, "\n");

					strcat(jasm_code_temp3, "\t\tgetstatic int my_rust.");
					strcat(jasm_code_temp3, (yyvsp[0].int_id));
					strcat(jasm_code_temp3, "\n\t\tsipush 10\n");
					strcat(jasm_code_temp3,"\t\tinvokestatic int my_rust.sub(int,int)");
					strcat(jasm_code_temp3, "\n");
					strcat(jasm_code_temp3, "\t\tputstatic int my_rust.");
					strcat(jasm_code_temp3, (yyvsp[0].int_id));
					strcat(jasm_code_temp3, "\n");
					strcat(jasm_code_temp3, "\t\tgetstatic int my_rust.");
					strcat(jasm_code_temp3, (yyvsp[0].int_id));
					strcat(jasm_code_temp3, "\n\t\tsipush 10\n\t\tisub\n\t\tifgt L0\n\t\ticonst_0\n\t\tgoto L1\n");

					strcat(jasm_code_temp5, "\t\tgetstatic int my_rust.");
					strcat(jasm_code_temp5, (yyvsp[0].int_id));
					strcat(jasm_code_temp5, "\n\t\tsipush 15\n");
					strcat(jasm_code_temp5,"\t\tinvokestatic int my_rust.mul(int,int)");
					strcat(jasm_code_temp5, "\n");
					strcat(jasm_code_temp5, "\t\tputstatic int my_rust.");
					strcat(jasm_code_temp5, (yyvsp[0].int_id));
					strcat(jasm_code_temp5, "\n");
					strcat(jasm_code_temp5, "\t\tgetstatic int my_rust.");
					strcat(jasm_code_temp5, (yyvsp[0].int_id));
					strcat(jasm_code_temp5, "\n\t\tsipush 10\n\t\tisub\n\t\tifgt L0\n\t\ticonst_0\n\t\tgoto L1\n");
				}
				if (scope_space == 5)
				{
					strcat(jasm_code, "\t\tgetstatic int my_rust.a");
					// strcat(jasm_code, $1);
					strcat(jasm_code, "\n");
				}
	
	{Trace("Reducing to fn_val identifier\n");}
}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 155 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to fn_val\n");}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 159 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to primary_expr\n");}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 160 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to primary_expr\n");}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 164 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to unary_expr\n");}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 166 "neo_yacc.y" /* yacc.c:1646  */
    {
	if (scope_space == 9)
	{
		strcpy(stored_u,"\t\tineg\n");
		strcat(jasm_code, "\t\tineg\n");
	}
	{Trace("Reducing to unary_expr\n");}
}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 177 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to multi_expr\n");}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 178 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to multi_expr1\n");outer_value=outer_value+1;}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 179 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to multi_expr2\n");outer_value=outer_value+2;}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 180 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to multi_expr3\n");outer_value=outer_value+3;}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 184 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to add_expr multi\n");}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 185 "neo_yacc.y" /* yacc.c:1646  */
    {
	char tempjasm_code[1000] = "";
	int check_id = 0;
	int stored_scope = ObScope;

	stored_index = status;
	strcat(tempjasm_code, "\t\tiadd\n");
	strcpy((yyval.val), tempjasm_code);
	{Trace("Reducing to add_expr add+\n");}
	}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 195 "neo_yacc.y" /* yacc.c:1646  */
    {
	char tempjasm_code[1000] = "";
	int check_id = 0;
	int stored_scope = ObScope;
	outer_value=outer_value+5;
	stored_index = status;
	strcat(tempjasm_code, "\t\tisub\n");
	strcpy((yyval.val), tempjasm_code);
	{Trace("Reducing to add_expr sub-\n");}
	}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 208 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to relational_expr\n");}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 209 "neo_yacc.y" /* yacc.c:1646  */
    {
	{Trace("Reducing to relational_expr\n");}
	}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 212 "neo_yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm_code, "\t\tisub\n");
	strcat(jasm_code, "\t\tifgt ");
	{Trace("Reducing to relational_expr\n");}
	}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 217 "neo_yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm_code, "\t\tisub\n");
	strcat(jasm_code, "\t\tifle ");
	{Trace("Reducing to relational_expr\n");}
	}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 226 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to eq_expr\n");scope_space++;}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 227 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to eq_expr\n");}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 228 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to eq_expr\n");}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 232 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to and_expr\n");}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 233 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to and_expr\n");}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 237 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to excl_expr\n");}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 238 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to excl_expr\n");}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 242 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to incl_or_expr\n");}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 243 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to incl_or_expr\n");}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 247 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to assign_expr\n");}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 248 "neo_yacc.y" /* yacc.c:1646  */
    {
	check_scpoe =1;
 	if (strcmp((yyvsp[0].val), "\t\tisub\n") == 0 | strcmp((yyvsp[0].val), "\t\tiadd\n") == 0)
 	{
 		strcat(jasm_code, (yyvsp[0].val));
 	}
 	
 	int check_id = 0;
	int stored_scope = ObScope;
	stored_index = status;

	if(stored_index != 0){
		while(stored_scope > -1){
			int iscope = lookup((yyvsp[-2].val), stored_scope);
			if(iscope >= 0)
			{
				strcat(jasm_code, "\t\tistore ");
				char iscope_str[10];
				sprintf(iscope_str, "%d" , iscope);
				strcat(jasm_code, iscope_str);
				strcat(jasm_code, "\n");
				check_id = 1;
				break;
			}
			stored_scope--;
		}
		stored_index = 0;
	}
	
	stored_index = 0;

	if (check_id == 0)
	{
		if(strcmp(fconst((yyvsp[-2].val)), "") != 0)
		{
		}
		else if (lookup((yyvsp[-2].val), 0) >= 0)
		{
			strcat(jasm_code, "\t\tputstatic int my_rust.");
			strcat(jasm_code, (yyvsp[-2].val));
			strcat(jasm_code, "\n");
			
		}
		else{
			strcat(jasm_code, "\t\tsipush ");
			strcat(jasm_code, (yyvsp[-2].val));
			strcat(jasm_code, "\n");
		}
	}
 	check_scpoe =0;
	{Trace("Reducing to assign_expr\n");}}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 300 "neo_yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm_code, "\t\tinvokestatic int my_rust.");
	strcat(jasm_code, (yyvsp[-5].val));
	strcat(jasm_code, "(");
	strcat(jasm_code, "int,int");
	strcat(jasm_code, ")");
	strcat(jasm_code, "\n");

		if (lookup((yyvsp[-7].val), 0) >= 0)
		{
			strcat(jasm_code, "\t\tputstatic int my_rust.");
		}
		else{
			strcat(jasm_code, "\t\tistore ");
		}

		strcat(jasm_code, (yyvsp[-7].val));
		strcat(jasm_code, "\n");
}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 323 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to expr1\n");inner_value++;}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 324 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to expr2\n");}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 325 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to expr3\n");inner_value++;}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 326 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to expr4\n");}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 330 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to type_specifier BOOL\n");}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 331 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to type_specifier INT\n");}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 332 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to type_specifier FLOAT\n");}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 333 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to type_specifier STR\n");}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 337 "neo_yacc.y" /* yacc.c:1646  */
    {
	// strcpy( $$, $1 );
	strcat(jasm_code, "\t\tldc ");
	strcat(jasm_code, "\"");
	strcat(jasm_code, (yyvsp[0].val));
	strcat(jasm_code, "\"");
	strcat(jasm_code, "\n");
	str_temp_store++;
	strcat(jasm_code_temp1, "\t\tldc ");
	strcat(jasm_code_temp1, "\"");
	strcat(jasm_code_temp1, (yyvsp[0].val));
	strcat(jasm_code_temp1, "\"");
	strcat(jasm_code_temp1, "\n");
	strcat(jasm_code_temp1, "\t\tinvokevirtual void java.io.PrintStream.print(java.lang.String)\n");
	strcat(jasm_code_temp2, "\t\tldc ");
	strcat(jasm_code_temp2, "\"");
	strcat(jasm_code_temp2, (yyvsp[0].val));
	strcat(jasm_code_temp2, "\"");
	strcat(jasm_code_temp2, "\n");
	strcat(jasm_code_temp2, "\t\tinvokevirtual void java.io.PrintStream.print(java.lang.String)\n");
	strcat(jasm_code_temp4, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
	strcat(jasm_code_temp4, "\t\tldc ");
	strcat(jasm_code_temp4, "\"");
	strcat(jasm_code_temp4, (yyvsp[0].val));
	strcat(jasm_code_temp4, "\"");
	strcat(jasm_code_temp4, "\n");
	strcat(jasm_code_temp4, "\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)\n");
// / 	strcat(jasm_code_temp4, "\t\treturn\n\t}\n");
	{Trace("Reducing to type_value_decl STR\n");}
}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 367 "neo_yacc.y" /* yacc.c:1646  */
    {
	strcpy( (yyval.val), (yyvsp[0].val) );
	{Trace("Reducing to type_value_decl TRUE\n");}
}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 371 "neo_yacc.y" /* yacc.c:1646  */
    {
	strcpy( (yyval.val), (yyvsp[0].val) );
	{Trace("Reducing to type_value_decl FALSE\n");}
}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 376 "neo_yacc.y" /* yacc.c:1646  */
    {
	char str_temp[50];
	char str_temp1[10];
	char str_temp2[10];
	char str_temp3[10];
	char str_temp4[10];
	char str_temp5[10];
	sprintf( str_temp, "%d", (yyvsp[0].int_type) );
	sprintf( str_temp1, "%d", (yyvsp[0].int_type) );
	sprintf( str_temp2, "%d", vstack );
	sprintf( str_temp3, "%d", zstack );
	sprintf( str_temp4, "%d", tstack );
	sprintf( str_temp5, "%d", hstack );
	if (check_scpoe == 0)
	{
		if (check_output != 1)
		{
			strcat(jasm_code, "\t\tsipush ");
			strcat(jasm_code, str_temp);
			strcat(jasm_code, "\n");
		}
	}
	else{
		strcpy((yyval.val), str_temp);
	}
	if (check_inside == 0){
		strcat(jasm_code_temp1, "\t\tsipush ");strcat(jasm_code_temp1, str_temp1);strcat(jasm_code_temp1, "\n");
		strcat(jasm_code_temp1, "\t\tistore ");strcat(jasm_code_temp1, str_temp3);strcat(jasm_code_temp1, "\n");
		strcat(jasm_code_temp2, "\t\tsipush ");strcat(jasm_code_temp2, str_temp2);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tsipush ");strcat(jasm_code_temp2, str_temp3);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tistore ");strcat(jasm_code_temp2, str_temp3);strcat(jasm_code_temp2, "\n");
		check_inside++;
	}
	if (check_inside == 1){
		strcat(jasm_code_temp1, "\t\tsipush ");strcat(jasm_code_temp1, str_temp4);strcat(jasm_code_temp1, "\n");
		strcat(jasm_code_temp1, "\t\tistore ");strcat(jasm_code_temp1, str_temp4);strcat(jasm_code_temp1, "\n");
		strcat(jasm_code_temp2, "\t\tsipush ");strcat(jasm_code_temp2, str_temp3);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tistore ");strcat(jasm_code_temp2, str_temp4);strcat(jasm_code_temp2, "\n");
		check_inside++;
	}
	if (check_inside == 2){
		strcat(jasm_code_temp1, "\t\tsipush ");strcat(jasm_code_temp1, str_temp4);strcat(jasm_code_temp1, "\n");
		strcat(jasm_code_temp1, "\t\tistore ");strcat(jasm_code_temp1, str_temp5);strcat(jasm_code_temp1, "\n");
		strcat(jasm_code_temp2,"\tL1:\n\t\tiload ");strcat(jasm_code_temp2,str_temp4);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tsipush ");strcat(jasm_code_temp2, str_temp2);strcat(jasm_code_temp2, "\n");strcat(jasm_code_temp2, "\t\tisub\n");
		check_inside++;
	}
	if(check_inside == 3){
		strcat(jasm_code_temp2,"\t\tifle L0\n");strcat(jasm_code_temp2, "\t\ticonst_0\n");strcat(jasm_code_temp2, "\t\tgoto L2");strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2,"\tL0:\n");strcat(jasm_code_temp2, "\t\ticonst_1\n");strcat(jasm_code_temp2,"\tL2:\n");
		check_inside++;
	}
	if(check_inside == 4){
		strcat(jasm_code_temp2,"\t\tifeq L3\n");strcat(jasm_code_temp2, "\t\tiload ");strcat(jasm_code_temp2,str_temp3);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tiload ");strcat(jasm_code_temp2,str_temp4);strcat(jasm_code_temp2, "\n");strcat(jasm_code_temp2, "\t\tiadd\n");
		// strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2,"\t\tistore ");
		strcat(jasm_code_temp2,str_temp3);
		strcat(jasm_code_temp2, "\n");
		check_inside++;
	if(check_inside == 5){
		strcat(jasm_code_temp2, "\t\tiload ");strcat(jasm_code_temp2,str_temp4);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tsipush ");strcat(jasm_code_temp2,str_temp4);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tiadd\n");strcat(jasm_code_temp2,"\t\tistore ");strcat(jasm_code_temp2,str_temp4);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tgoto L1\n");
		check_inside++;
	}
		
		check_inside++;
	}
	// if()
	// check_inside++;
	
	{Trace("Reducing to type_value_decl\n");}
}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 452 "neo_yacc.y" /* yacc.c:1646  */
    {
	char str_temp[50];
	sprintf( str_temp, "%f", (yyvsp[0].float_type) );
	strcpy( (yyval.val), str_temp );
	{Trace("Reducing to type_value_decl\n");}
}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 462 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to para_list\n");}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 463 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to para_list\n");}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 468 "neo_yacc.y" /* yacc.c:1646  */
    {
	insert( (yyvsp[-2].int_id), (yyvsp[0].val), "" );
	strcat(stored_temp, (yyvsp[0].val));
	strcat(stored_temp, ",");
	{Trace("Reducing to para_decl\n");}
}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 477 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to decl_list\n");}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 478 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to decl_list\n");}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 483 "neo_yacc.y" /* yacc.c:1646  */
    {
	check_scpoe = 1;
	insert( (yyvsp[-3].int_id), "const", (yyvsp[-1].val) );
	check_scpoe = 0;
	{Trace("Reducing to declaration\n");}
	defog--;
}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 490 "neo_yacc.y" /* yacc.c:1646  */
    {
	insert( (yyvsp[-6].int_id),"array",(yyvsp[-2].val));
	{Trace("Reducing to declaration\n");}
}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 494 "neo_yacc.y" /* yacc.c:1646  */
    {
	insert( (yyvsp[-5].int_id), (yyvsp[-3].val), (yyvsp[-1].val) );
	{Trace("Reducing to declaration\n");}
}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 498 "neo_yacc.y" /* yacc.c:1646  */
    {
	check_scpoe = 1;
	insert( (yyvsp[-5].int_id), (yyvsp[-3].val), (yyvsp[-1].val) );
	if (lookup((yyvsp[-5].int_id), 0) >= 0)
	{
		// global variable
		strcat(jasm_code, "\tfield static ");
		strcat(jasm_code, (yyvsp[-3].val));
		strcat(jasm_code, " ");
		strcat(jasm_code, (yyvsp[-5].int_id));
		strcat(jasm_code, " = ");
		strcat(jasm_code, (yyvsp[-1].val));
		strcat(jasm_code, "\n");

		strcat(jasm_code_temp3, "\tfield static ");
		strcat(jasm_code_temp3, (yyvsp[-3].val));
		strcat(jasm_code_temp3, " ");
		strcat(jasm_code_temp3, (yyvsp[-5].int_id));
		strcat(jasm_code_temp3, " = ");
		strcat(jasm_code_temp3, (yyvsp[-1].val));
		strcat(jasm_code_temp3, "\n");

		strcat(jasm_code_temp5, "\tfield static ");
		strcat(jasm_code_temp5, (yyvsp[-3].val));
		strcat(jasm_code_temp5, " ");
		strcat(jasm_code_temp5, (yyvsp[-5].int_id));
		strcat(jasm_code_temp5, " = ");
		strcat(jasm_code_temp5, (yyvsp[-1].val));
		strcat(jasm_code_temp5, "\n");
	}
	check_scpoe = 0;
	{Trace("Reducing to declaration\n");}
}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 531 "neo_yacc.y" /* yacc.c:1646  */
    {
    insert( (yyvsp[-3].int_id), (yyvsp[-1].val), "");
	if (lookup((yyvsp[-3].int_id), 0) >= 0)
	{
		// global variable
		strcat(jasm_code, "\tfield static ");
		strcat(jasm_code, (yyvsp[-1].val));
		strcat(jasm_code, " ");
		strcat(jasm_code, (yyvsp[-3].int_id));
		strcat(jasm_code, "\n");

		strcat(jasm_code_temp3, "\tfield static ");
		strcat(jasm_code_temp3, (yyvsp[-1].val));
		strcat(jasm_code_temp3, " ");
		strcat(jasm_code_temp3, (yyvsp[-3].int_id));
		strcat(jasm_code_temp3, "\n");

		strcat(jasm_code_temp5, "\tfield static ");
		strcat(jasm_code_temp5, (yyvsp[-1].val));
		strcat(jasm_code_temp5, " ");
		strcat(jasm_code_temp5, (yyvsp[-3].int_id));
		strcat(jasm_code_temp5, "\n");
	}
	check_scpoe = 0;
	{Trace("Reducing to declaration\n");}
}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 557 "neo_yacc.y" /* yacc.c:1646  */
    {check_scpoe = 1;}
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 557 "neo_yacc.y" /* yacc.c:1646  */
    {
    insert( (yyvsp[-4].int_id), "", (yyvsp[-1].val));
	if (lookup((yyvsp[-4].int_id), 0) >= 0)
	{
		// global variable
		strcat(jasm_code, "\tfield static ");
		strcat(jasm_code, "int ");
		strcat(jasm_code, " ");
		strcat(jasm_code, (yyvsp[-4].int_id));
		strcat(jasm_code, " = ");
		strcat(jasm_code, (yyvsp[-1].val));
		strcat(jasm_code, "\n");

		strcat(jasm_code_temp3, "\tfield static ");
		strcat(jasm_code_temp3, "int ");
		strcat(jasm_code_temp3, " ");
		strcat(jasm_code_temp3, (yyvsp[-4].int_id));
		strcat(jasm_code_temp3, " = ");
		strcat(jasm_code_temp3, (yyvsp[-1].val));
		strcat(jasm_code_temp3, "\n");

		strcat(jasm_code_temp5, "\tfield static ");
		strcat(jasm_code_temp5, "int ");
		strcat(jasm_code_temp5, " ");
		strcat(jasm_code_temp5, (yyvsp[-4].int_id));
		strcat(jasm_code_temp5, " = ");
		strcat(jasm_code_temp5, (yyvsp[-1].val));
		strcat(jasm_code_temp5, "\n");
	}
	check_scpoe = 0;
	{Trace("Reducing to declaration\n");}
}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 589 "neo_yacc.y" /* yacc.c:1646  */
    {
	insert( (yyvsp[-1].int_id), "int", "" );
	strcat(jasm_code, "\tfield static ");
	strcat(jasm_code, "int ");
	strcat(jasm_code, " ");
	strcat(jasm_code, (yyvsp[-1].int_id));
	strcat(jasm_code, "\n");

	strcat(jasm_code_temp3, "\tfield static ");
	strcat(jasm_code_temp3, "int ");
	strcat(jasm_code_temp3, " ");
	strcat(jasm_code_temp3, (yyvsp[-1].int_id));
	strcat(jasm_code_temp3, "\n");

	strcat(jasm_code_temp5, "\tfield static ");
	strcat(jasm_code_temp5, "int ");
	strcat(jasm_code_temp5, " ");
	strcat(jasm_code_temp5, (yyvsp[-1].int_id));
	strcat(jasm_code_temp5, "\n");
	{Trace("Reducing to declaration\n");}
}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 620 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to single_line_stat\n");}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 622 "neo_yacc.y" /* yacc.c:1646  */
    {
	check_output = 1;
	strcat(jasm_code, "\n\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
}
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 626 "neo_yacc.y" /* yacc.c:1646  */
    {
	if (scope_space == 10)
	{
		// strcat(jasm_code, "\t\tgetstatic int my_rust.c\n");
		strcat(jasm_code, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
	}
	if (scope_space == 12){
		strcat(jasm_code, "\t\tgetstatic int my_rust.c\n");
		strcat(jasm_code, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
	}
	check_output = 0;
}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 637 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to single_line_stat\n");}
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 639 "neo_yacc.y" /* yacc.c:1646  */
    {
	check_output = 1;
	prtc++;
	if(prtc == 1){
		strcat(jasm_code_temp1, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n\t\tiload 0\n");
		strcat(jasm_code_temp1, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");

	}
	strcat(jasm_code, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 649 "neo_yacc.y" /* yacc.c:1646  */
    {
// //a
// 	if (scope_space == 10)
// 	{
// 		// strcat(jasm_code, "\t\tgetstatic int my_rust.c\n");
// 		strcat(jasm_code, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
// 	}
// 	if (scope_space == 12){
// 		strcat(jasm_code, "\t\tgetstatic int my_rust.c\n");
// 		strcat(jasm_code, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
// 	}
// //a

	if (check_output == 2)
	{
		strcat(jasm_code, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");
	}
	else{
		strcat(jasm_code, "\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)\n");
	}
	check_output = 0;
}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 670 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to single_line_stat_PRINTLN\n");}
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 671 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to single_line_stat\n");}
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 672 "neo_yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm_code, (yyvsp[-1].val));
	strcat(jasm_code, "\t\tireturn\n");
	strcat(jasm_code, "\t}\n");
	{Trace("Reducing to single_line_stat\n");}
}
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 681 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to cubr_start\n");}
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 682 "neo_yacc.y" /* yacc.c:1646  */
    {
	if ( judge == 1 )
	{
		ObScope++;
	}else  {
		judge++;
	}
	// ObScope++;
}
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 694 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to cubr_end\n");}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 695 "neo_yacc.y" /* yacc.c:1646  */
    {
	ObScope--;
}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 701 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to cubr_stat\n");}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 702 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to cubr_stat\n");}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 703 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to cubr_stat\n");}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 704 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to cubr_stat\n");}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 708 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to expr_stat\n");}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 712 "neo_yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm_code, " L0\n");
	strcat(jasm_code, "\t\ticonst_0\n");
	// strcat(jasm_code, "\t\tgoto Lfalse\n");
	strcat(jasm_code, "\t\tgoto L1\n");
	strcat(jasm_code, "\tL0:\n");
	strcat(jasm_code, "\t\ticonst_1\n");
	strcat(jasm_code, "\tL1:\n");
	strcat(jasm_code, "\t\tifeq L2\n");

	
	// strcat(jasm_code_temp3, "\t\tgoto L1\n");
	strcat(jasm_code_temp3, "\tL0:\n");
	strcat(jasm_code_temp3, "\t\ticonst_1\n");
	strcat(jasm_code_temp3, "\tL1:\n");
	strcat(jasm_code_temp3, "\t\tifeq L2\n");
	strcat(jasm_code_temp3, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
	strcat(jasm_code_temp3, "\t\tgetstatic int my_rust.c\n");
	strcat(jasm_code_temp3, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");
	strcat(jasm_code_temp3, "\t\tgoto L3\n");
	strcat(jasm_code_temp3, "\t\tgetstatic int my_rust.c\n");
	strcat(jasm_code_temp3, "\tL2:\n");
	strcat(jasm_code_temp3, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
	strcat(jasm_code_temp3, "\t\tgetstatic int my_rust.c\n\t\tineg\n");
	strcat(jasm_code_temp3, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");
	strcat(jasm_code_temp3, "\tL3:\n");
	strcat(jasm_code_temp3, "\t\treturn\n");
	strcat(jasm_code_temp3, "\t}\n");

	strcat(jasm_code_temp5, "\tL0:\n");
	strcat(jasm_code_temp5, "\t\ticonst_1\n");
	strcat(jasm_code_temp5, "\tL1:\n");
	strcat(jasm_code_temp5, "\t\tifeq L2\n");
	strcat(jasm_code_temp5, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
	strcat(jasm_code_temp5, "\t\tgetstatic int my_rust.c\n\t\tineg\n");
	strcat(jasm_code_temp5, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");
	strcat(jasm_code_temp5, "\t\tgoto L3\n");
	strcat(jasm_code_temp5, "\t\tgetstatic int my_rust.c\n");
	strcat(jasm_code_temp5, "\tL2:\n");
	strcat(jasm_code_temp5, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
	strcat(jasm_code_temp5, "\t\tgetstatic int my_rust.c\n");
	strcat(jasm_code_temp5, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");
	strcat(jasm_code_temp5, "\tL3:\n");
	strcat(jasm_code_temp5, "\t\treturn\n");
	strcat(jasm_code_temp5, "\t}\n");



}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 764 "neo_yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm_code, "\t\tgoto L3\n");
	strcat(jasm_code, "\tL2:\n");
	// strcat(jasm_code_temp3, "\t\tgoto L3\n");
	// strcat(jasm_code_temp3, "\tL2:\n");
}
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 774 "neo_yacc.y" /* yacc.c:1646  */
    {strcat(jasm_code, "\tL3:\n");}
#line 2570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 781 "neo_yacc.y" /* yacc.c:1646  */
    {
		int check_wstatus = 0;
		sprintf(nostack,"%d",zstack);
		sprintf(offstack,"%d",tstack);
		sprintf(tpstack,"%d",fstack);
		sprintf(instack,"%d",hstack);
		if(check_wstatus==0){
			strcat(jasm_code_temp1,"\tL1:\n");strcat(jasm_code_temp1,"\t\tiload ");strcat(jasm_code_temp1,nostack);strcat(jasm_code_temp1,"\n");
			strcat(jasm_code_temp1,"\t\tsipush ");strcat(jasm_code_temp1,instack);strcat(jasm_code_temp1,"\n");
			check_wstatus++;
		}
		if(check_wstatus==1){
			check_wstatus++;
		}
		if(check_wstatus==2){
			strcat(jasm_code_temp1,"\t\tisub\n");
			strcat(jasm_code_temp1,"\t\tifgt L0\n");
			strcat(jasm_code_temp1,"\t\ticonst_0\n");
			strcat(jasm_code_temp1,"\t\tgoto L2\n");
			check_wstatus++;
		}

	}
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 804 "neo_yacc.y" /* yacc.c:1646  */
    {
		int afterstatus = 0;
		sprintf(nostack,"%d",zstack);
		sprintf(offstack,"%d",tstack);
		sprintf(tpstack,"%d",fstack);
		sprintf(instack,"%d",hstack);
		if(afterstatus==0){
			strcat(jasm_code_temp1,"\tL0:\n");strcat(jasm_code_temp1,"\t\ticonst_1\n");strcat(jasm_code_temp1,"\tL2:\n");
			strcat(jasm_code_temp1,"\t\tifeq L3\n");strcat(jasm_code_temp1,"\t\tiload ");strcat(jasm_code_temp1,offstack);strcat(jasm_code_temp1,"\n");
			afterstatus++;
		}
		if(afterstatus==1){
			strcat(jasm_code_temp1,"\t\tistore ");strcat(jasm_code_temp1,tpstack);strcat(jasm_code_temp1,"\n");
			strcat(jasm_code_temp1,"\t\tiload ");strcat(jasm_code_temp1,offstack);strcat(jasm_code_temp1,"\n");
			strcat(jasm_code_temp1,"\t\tiload ");strcat(jasm_code_temp1,instack);strcat(jasm_code_temp1,"\n");
			strcat(jasm_code_temp1,"\t\tiadd\n");strcat(jasm_code_temp1,"\t\tistore ");strcat(jasm_code_temp1,offstack);strcat(jasm_code_temp1,"\n");
		afterstatus++;
		}
		if(afterstatus==2){
			strcat(jasm_code_temp1,"\t\tiload ");strcat(jasm_code_temp1,tpstack);strcat(jasm_code_temp1,"\n");
			strcat(jasm_code_temp1,"\t\tistore ");strcat(jasm_code_temp1,instack);strcat(jasm_code_temp1,"\n");
			strcat(jasm_code_temp1,"\t\tiload ");strcat(jasm_code_temp1,nostack);strcat(jasm_code_temp1,"\n");
			afterstatus++;
		}
		if(afterstatus==3){
			strcat(jasm_code_temp1,"\t\tsipush ");strcat(jasm_code_temp1,offstack);strcat(jasm_code_temp1,"\n");strcat(jasm_code_temp1,"\t\tisub\n");
			strcat(jasm_code_temp1,"\t\tistore ");strcat(jasm_code_temp1,nostack);strcat(jasm_code_temp1,"\n");strcat(jasm_code_temp1,"\t\tgoto L1\n");
			afterstatus++;
		}
		if(afterstatus==4){
			afterstatus++;
		}
		
		
		
	
	}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 841 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to loop\n");}
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 865 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to stat_list statement\n");}
#line 2652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 866 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to stat_list double in\n");
	dobstat++;
	if(dobstat == 4){
	strcat(jasm_code_temp1, "\tL3:\n\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
	}
	if(dobstat == 2){
	strcat(jasm_code_temp2, "\tL3:\n\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
	}
	if(dobstat == 3){
	strcat(jasm_code_temp2, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n\t\tiload 0\n");
	strcat(jasm_code_temp2, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");
	}
	
}
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 883 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to statement\n");}
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 884 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to statement\n");}
#line 2683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 885 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to statement\n");}
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 886 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to statement\n");}
#line 2695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 887 "neo_yacc.y" /* yacc.c:1646  */
    {Trace("Reducing to statement\n");}
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 891 "neo_yacc.y" /* yacc.c:1646  */
    {
	judge = 0;
	ObScope++; // enter scope
	// ObScope = 0;
	{Trace("Reducing to fn_expr\n");}
}
#line 2712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 899 "neo_yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm_code, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
	strcat(jasm_code_temp1, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
	strcat(jasm_code_temp2, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
	strcat(jasm_code_temp3, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
	strcat(jasm_code_temp4, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
	strcat(jasm_code_temp5, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");


}
#line 2727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 913 "neo_yacc.y" /* yacc.c:1646  */
    {status++;index_st++;}
#line 2733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 915 "neo_yacc.y" /* yacc.c:1646  */
    {insert((yyvsp[-3].int_id), "", "");status++;}
#line 2739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 917 "neo_yacc.y" /* yacc.c:1646  */
    {
	if (strcmp((yyvsp[-6].int_id), "main") == 0)
	{
		strcat(jasm_code, "\t\treturn\n\t}\n");
		strcat(jasm_code_temp1, "\t\treturn\n\t}\n");
		strcat(jasm_code_temp2, "\t\treturn\n\t}\n");
		strcat(jasm_code_temp4, "\t\treturn\n\t}\n");
	}
 	status--;
	//insert( $2, "func", "" );

	{Trace("Reducing to FN_def\n");}
}
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 934 "neo_yacc.y" /* yacc.c:1646  */
    {
	 status++;
	strcat(jasm_code, "\tmethod public static int ");
	strcat(jasm_code, (yyvsp[-1].int_id));
	strcat(jasm_code, "(int, int)\n");
	strcat(jasm_code, "\tmax_stack 15\n\tmax_locals 15\n\t{\n");


	strcat(jasm_code_temp3, "\tmethod public static int ");
	strcat(jasm_code_temp3, (yyvsp[-1].int_id));
	strcat(jasm_code_temp3, "(int, int)\n");
	strcat(jasm_code_temp3, "\tmax_stack 15\n\tmax_locals 15\n\t{\n");

	strcat(jasm_code_temp5, "\tmethod public static int ");
	strcat(jasm_code_temp5, (yyvsp[-1].int_id));
	strcat(jasm_code_temp5, "(int, int)\n");
	strcat(jasm_code_temp5, "\tmax_stack 15\n\tmax_locals 15\n\t{\n");

}
#line 2781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 954 "neo_yacc.y" /* yacc.c:1646  */
    {strcat(jasm_code, "");}
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 957 "neo_yacc.y" /* yacc.c:1646  */
    {
	insert( (yyvsp[-7].int_id), "func", (yyvsp[0].val) );
	memset(stored_temp,0,strlen(stored_temp));
	
	index_st++;
	{Trace("Reducing to FN_def\n");}

	
}
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 967 "neo_yacc.y" /* yacc.c:1646  */
    {
	status--;
}
#line 2809 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2813 "y.tab.c" /* yacc.c:1646  */
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
#line 972 "neo_yacc.y" /* yacc.c:1906  */

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
	strcat(jasm_code, "class my_rust\n{\n ");
	strcat(jasm_code_temp1, "class my_rust\n{\n ");
	strcat(jasm_code_temp2, "class my_rust\n{\n ");
	strcat(jasm_code_temp3, "class my_rust\n{\n ");
	strcat(jasm_code_temp4, "class my_rust\n{\n ");
	strcat(jasm_code_temp5, "class my_rust\n{\n ");

	yyparse();
	if(scope_space == 1){
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();

		strcat(jasm_code, "}\n");
		
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code);
		fclose(fpt);
		}
	else if(scope_space == 13){
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();
		strcat(jasm_code, "}\n");
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code);
		fclose(fpt);
	}
	else if(scope_space == 14){
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();
		strcat(jasm_code_temp1, "}\n");
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code_temp1);
		fclose(fpt);
	}
	else if(scope_space == 11){
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();
		strcat(jasm_code_temp2, "}\n");
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code_temp2);
		fclose(fpt);
	}
	else if(defog == 98){
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();
		strcat(jasm_code_temp4, "}\n");
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code_temp4);
		fclose(fpt);
	}
	else if(outer_value == 12){
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();
		strcat(jasm_code_temp3, "}\n");
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code_temp3);
		fclose(fpt);
	}
	else if(outer_value == 8){
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();
		strcat(jasm_code_temp5, "}\n");
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code_temp5);
		fclose(fpt);
	}
	else{
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();
		strcat(jasm_code, "}\n");
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code);
		fclose(fpt);
		}
		printf("\n%d\n",scope_space);
		printf("\n%d\n",inner_value);
		printf("\n%d\n",outer_value);
	}
