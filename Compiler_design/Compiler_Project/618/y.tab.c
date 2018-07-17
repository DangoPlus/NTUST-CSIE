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
#line 1 "yacc_hw3_init.y" /* yacc.c:339  */

// #include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "y.tab.h"
#include "hashtable.h"
// #include "hashtable_insert.h"
int  yylex  (void);
void  yyerror  (const char *str);


char jasm[10000];//定义我所需要的jasm
// int a1 = 0;
// int now_fun_index = 0;
int check_c = 0;
// c与后面的不一样，所以我需要单独为c
int add_const_is = 0;
int pirnt_type = 0;
// int is_assigning = 0;
char add_indentifier[100];
int is_over_OP = 0;
int is_const = 0;



#line 92 "y.tab.c" /* yacc.c:339  */

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
    VOID = 263,
    FLOAT = 264,
    INTEGER = 265,
    BREAK = 266,
    CONTINUE = 267,
    DEFAULT = 268,
    ELSE = 269,
    MATCH = 270,
    MUT = 271,
    CHAR = 272,
    ENUM = 273,
    RETURN = 274,
    SELF = 275,
    USE = 276,
    STATIC = 277,
    STRUCT = 278,
    SWITCH = 279,
    FOR = 280,
    FUNC = 281,
    DO = 282,
    IF = 283,
    IN = 284,
    PRINT = 285,
    PRINTLN = 286,
    EXTERN = 287,
    LET = 288,
    LOOP = 289,
    PUB = 290,
    READ = 291,
    LE_OP = 292,
    GE_OP = 293,
    EQ_OP = 294,
    NE_OP = 295,
    AND = 296,
    OR = 297,
    NOR = 298,
    EQUALS = 299,
    FU_OP = 300,
    WHILE = 301,
    WHERE = 302,
    ADD_ASSIGN = 303,
    SUB_ASSIGN = 304,
    MUL_ASSIGN = 305,
    DIV_ASSIGN = 306,
    IDENTIFIER = 307,
    FLOATTYPE = 308
  };
#endif
/* Tokens.  */
#define STR 258
#define TRUE 259
#define FALSE 260
#define BOOL 261
#define INT 262
#define VOID 263
#define FLOAT 264
#define INTEGER 265
#define BREAK 266
#define CONTINUE 267
#define DEFAULT 268
#define ELSE 269
#define MATCH 270
#define MUT 271
#define CHAR 272
#define ENUM 273
#define RETURN 274
#define SELF 275
#define USE 276
#define STATIC 277
#define STRUCT 278
#define SWITCH 279
#define FOR 280
#define FUNC 281
#define DO 282
#define IF 283
#define IN 284
#define PRINT 285
#define PRINTLN 286
#define EXTERN 287
#define LET 288
#define LOOP 289
#define PUB 290
#define READ 291
#define LE_OP 292
#define GE_OP 293
#define EQ_OP 294
#define NE_OP 295
#define AND 296
#define OR 297
#define NOR 298
#define EQUALS 299
#define FU_OP 300
#define WHILE 301
#define WHERE 302
#define ADD_ASSIGN 303
#define SUB_ASSIGN 304
#define MUL_ASSIGN 305
#define DIV_ASSIGN 306
#define IDENTIFIER 307
#define FLOATTYPE 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "yacc_hw3_init.y" /* yacc.c:355  */

  char val[200];
  float float_type;
  int int_type;
  char int_id[200];

#line 245 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 262 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   358

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    57,     2,     2,
      63,    64,    55,    58,    65,    54,     2,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    67,
      59,    62,    60,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,    69,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    50,    51,    52,    56,    57,    64,    65,
      66,    67,    71,    72,    77,    85,    86,    87,    93,    93,
      98,   103,   104,   105,   109,   110,   114,   115,   119,   120,
     124,   125,   134,   135,   136,   141,   142,   143,   144,   148,
     160,   163,   166,   184,   194,   195,   197,   196,   207,   307,
     312,   313,   317,   324,   325,   329,   332,   344,   352,   368,
     371,   393,   420,   425,   429,   424,   444,   449,   442,   467,
     468,   489,   502,   515,   516,   517,   518,   522,   527,   532,
     536,   554,   526,   566,   579,   607,   565,   616,   617,   621,
     622,   623,   624,   625,   626,   630,   645,   660,   644,   683,
     682,   741,   746,   754,   755,   756,   760,   761
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STR", "TRUE", "FALSE", "BOOL", "INT",
  "VOID", "FLOAT", "INTEGER", "BREAK", "CONTINUE", "DEFAULT", "ELSE",
  "MATCH", "MUT", "CHAR", "ENUM", "RETURN", "SELF", "USE", "STATIC",
  "STRUCT", "SWITCH", "FOR", "FUNC", "DO", "IF", "IN", "PRINT", "PRINTLN",
  "EXTERN", "LET", "LOOP", "PUB", "READ", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND", "OR", "NOR", "EQUALS", "FU_OP", "WHILE", "WHERE",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "IDENTIFIER",
  "FLOATTYPE", "'-'", "'*'", "'/'", "'%'", "'+'", "'<'", "'>'", "'^'",
  "'='", "'('", "')'", "','", "':'", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "unary_expression", "multiplicative_expression",
  "additive_expression", "relational_expression", "$@1",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "assignment_expression", "expression",
  "type_specifier", "value_declaration", "declarator_list", "$@2",
  "declarator", "parameter_list", "parameter_declaration",
  "declaration_list", "declaration", "simple_statment", "$@3", "$@4",
  "$@5", "$@6", "compound_start", "compound_end", "compound_statement",
  "expression_statement", "selection_statement", "$@7", "$@8", "$@9",
  "$@10", "iteration_statement", "$@11", "$@12", "$@13", "statement_list",
  "statement", "func_expression", "function_definition", "$@14", "$@15",
  "$@16", "external_declaration", "program", YY_NULLPTR
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
     305,   306,   307,   308,    45,    42,    47,    37,    43,    60,
      62,    94,    61,    40,    41,    44,    58,    59,   123,   125
};
# endif

#define YYPACT_NINF -98

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-98)))

#define YYTABLE_NINF -50

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,   -98,    -3,   -48,    -7,   -98,   -11,   -98,   -98,    12,
      -5,   -37,   290,   -98,    18,   -98,   -98,    50,   305,    64,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,    58,   -98,   -33,
     305,    64,   -98,     8,   -98,   -98,   -98,   -98,    28,   290,
     -98,    35,    38,    63,   -10,   -98,    44,   -14,   -98,   305,
     101,   290,    64,    64,    46,    71,    66,   -98,   305,   -98,
      59,   -98,    33,    76,    71,   -98,   -98,   127,   -98,    70,
     -98,    80,   -98,   107,   -98,   220,    75,   104,   -98,   -98,
     -98,   114,   290,   286,   -98,   290,   -98,    88,    34,    65,
      26,   137,   124,   -38,   -98,   286,   122,    33,   127,   -98,
     -98,   -98,   -98,   -98,   -98,   127,   -98,    64,   -98,   132,
      -7,   158,   -98,    30,   -98,   259,   259,   139,   251,   290,
     141,   122,    33,   286,   286,   286,   286,   286,   290,   290,
     290,   166,   286,   286,   286,   286,   286,   286,   -98,   -98,
     -98,   127,   -98,   -98,   -98,    64,   -98,   -98,   259,   286,
     286,   259,   130,   -16,   -98,   -98,   -98,   -98,    88,    88,
     290,   290,   290,   290,    65,    65,    26,   137,   124,   -98,
     -98,   142,   228,   140,   146,   145,   -98,   -98,   290,   169,
     -98,   -98,   -98,   -98,    64,   147,    71,   148,   -98,   220,
     -98,   220,   220,   220,   149,   159,   189,   215,   -98,   -98,
     -98,   168,   220,   165,   -98
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    95,     0,     0,   104,    53,     0,   103,   106,     0,
       0,     0,     0,    54,     0,     1,   107,     0,     0,     0,
      39,    40,    41,    42,    48,    43,    49,    46,    44,     0,
       0,     0,    56,     0,    38,    35,    36,    37,     0,     0,
     105,     0,     0,    96,     0,    50,     0,     0,    55,     0,
      46,     0,     0,     0,     0,     0,     0,    58,     0,    57,
       0,    45,    47,    52,     0,    97,    71,     0,   102,     0,
      51,     0,    59,     0,   101,     0,     0,     0,    63,    66,
      83,    48,     0,     0,    72,     6,     8,    12,    15,    21,
      24,    26,    28,    30,    32,    77,     2,     3,     0,    89,
      76,    91,    92,    93,    94,     0,    87,     0,    60,     0,
      90,     0,    69,     0,    78,     0,     0,     0,     0,     7,
       0,     4,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,    53,
      74,     0,    73,    88,    52,     0,    98,    70,     0,    64,
      67,     0,     0,     0,    34,     9,    10,    11,    14,    13,
      20,    16,    17,     0,    22,    23,    25,    27,    29,    31,
      75,     0,     0,     0,     0,     0,    61,    62,    19,     0,
      79,    65,    68,    84,     0,     0,     0,     0,    80,     0,
      99,     0,    85,     0,     0,     0,     0,     0,    86,   100,
      81,     0,     0,     0,    82
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -72,    47,    48,   -98,    68,   -98,   103,   105,   108,
     -98,   -63,   -55,   -30,   -12,    -9,   -98,   -98,   -98,   190,
       2,     3,   -98,   -98,   -98,   -98,   -98,    61,   -89,     4,
      94,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -70,   -97,   -98,   -98,   -98,   -98,   -98,   240,   -98
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    85,    86,    87,    88,    89,   131,    90,    91,    92,
      93,    94,    95,    38,    96,    97,    41,    28,    44,    45,
     110,     5,    99,   115,   173,   116,   174,    67,   100,   101,
     102,   103,   148,   185,   191,   201,   104,   117,   186,   195,
     105,   106,     6,     7,    54,    75,   193,     8,     9
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    47,     4,    27,   136,   111,    33,    13,   143,   140,
     119,     4,    15,    10,   143,    12,   142,     2,    46,    42,
     120,   113,    63,    64,   137,    18,     2,    26,   141,    19,
      50,    43,   138,    20,    21,    22,     1,    60,     1,    26,
      23,    14,    62,     2,   143,     2,    71,    17,    58,    11,
     138,   177,   170,    59,    55,    56,   160,   161,   162,    68,
     149,   150,     3,   152,     3,   132,   133,    34,    74,    98,
      35,    36,    37,   121,   169,    48,   122,   144,    20,    21,
      22,    29,    24,    25,    82,    23,   138,   138,   126,   138,
      49,   178,   127,   172,   194,   143,    39,   147,   -46,   143,
      51,   139,   -18,   128,    52,   203,   198,   121,    53,   138,
     122,    57,    30,    13,    65,   171,    31,    32,    69,   192,
     153,    39,    40,   196,   129,   130,    72,    24,    25,    82,
      20,    21,    22,    20,    21,    22,   107,    23,    83,    66,
      23,    73,   112,   123,   124,   125,    76,   108,   121,   121,
     121,   122,   122,   122,   187,    77,    13,    78,    79,   109,
       2,    20,    21,    22,    39,    61,   121,   114,    23,   122,
     155,   156,   157,    80,   158,   159,   118,    76,   134,    81,
      25,    82,    24,    25,    82,   135,    77,   -49,    78,    79,
      83,     2,    20,    21,    22,    66,    84,   176,   145,    23,
     164,   165,   151,   163,    80,   154,   179,   181,    76,   183,
      81,    25,    82,   182,   184,   188,   190,    77,   197,    78,
      79,    83,     2,    20,    21,    22,    66,   146,    84,   200,
      23,    20,    21,    22,   204,    80,   202,   166,    23,    76,
     167,    81,    25,    82,   168,   175,    70,   189,    77,    16,
      78,    79,    83,     2,    20,    21,    22,    66,   199,     0,
       0,    23,    20,    21,    22,     0,    80,     0,     0,    23,
       0,     0,    81,    25,    82,     0,     0,     0,     0,     0,
      24,    25,    82,    83,     2,     0,     0,     0,    66,    20,
      21,    22,   180,    20,    21,    22,    23,     0,     0,     0,
      23,     0,     0,    24,    25,    82,     0,     0,    20,    21,
      22,    24,    25,    82,    83,    23,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
      82,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25
};

static const yytype_int16 yycheck[] =
{
      12,    31,     0,    12,    42,    75,    18,     4,   105,    98,
      82,     9,     0,    16,   111,    63,   105,    33,    30,    52,
      83,    76,    52,    53,    62,    62,    33,    39,    98,    66,
      39,    64,    95,     3,     4,     5,    26,    49,    26,    51,
      10,    52,    51,    33,   141,    33,    58,    52,    62,    52,
     113,    67,   141,    67,    64,    65,   128,   129,   130,    55,
     115,   116,    52,   118,    52,    39,    40,     3,    64,    67,
       6,     7,     8,    85,   137,    67,    85,   107,     3,     4,
       5,    63,    52,    53,    54,    10,   149,   150,    54,   152,
      62,   163,    58,   148,   191,   192,    63,    67,    65,   196,
      65,    98,    37,    38,    66,   202,   195,   119,    45,   172,
     119,    67,    62,   110,    68,   145,    66,    67,    52,   189,
     118,    63,    64,   193,    59,    60,    67,    52,    53,    54,
       3,     4,     5,     3,     4,     5,    66,    10,    63,    68,
      10,    65,    67,    55,    56,    57,    19,    67,   160,   161,
     162,   160,   161,   162,   184,    28,   153,    30,    31,    52,
      33,     3,     4,     5,    63,    64,   178,    63,    10,   178,
     123,   124,   125,    46,   126,   127,    62,    19,    41,    52,
      53,    54,    52,    53,    54,    61,    28,    65,    30,    31,
      63,    33,     3,     4,     5,    68,    69,    67,    66,    10,
     132,   133,    63,    37,    46,    64,    64,    67,    19,    64,
      52,    53,    54,    67,    45,    68,    68,    28,    69,    30,
      31,    63,    33,     3,     4,     5,    68,    69,    69,    14,
      10,     3,     4,     5,    69,    46,    68,   134,    10,    19,
     135,    52,    53,    54,   136,   151,    56,   186,    28,     9,
      30,    31,    63,    33,     3,     4,     5,    68,    69,    -1,
      -1,    10,     3,     4,     5,    -1,    46,    -1,    -1,    10,
      -1,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    63,    33,    -1,    -1,    -1,    68,     3,
       4,     5,    64,     3,     4,     5,    10,    -1,    -1,    -1,
      10,    -1,    -1,    52,    53,    54,    -1,    -1,     3,     4,
       5,    52,    53,    54,    63,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    33,    52,    90,    91,   112,   113,   117,   118,
      16,    52,    63,    91,    52,     0,   117,    52,    62,    66,
       3,     4,     5,    10,    52,    53,    84,    85,    87,    63,
      62,    66,    67,    84,     3,     6,     7,     8,    83,    63,
      64,    86,    52,    64,    88,    89,    84,    83,    67,    62,
      85,    65,    66,    45,   114,    64,    65,    67,    62,    67,
      84,    64,    85,    83,    83,    68,    68,    97,    99,    52,
      89,    84,    67,    65,    99,   115,    19,    28,    30,    31,
      46,    52,    54,    63,    69,    71,    72,    73,    74,    75,
      77,    78,    79,    80,    81,    82,    84,    85,    90,    92,
      98,    99,   100,   101,   106,   110,   111,    66,    67,    52,
      90,   110,    67,    82,    63,    93,    95,   107,    62,    71,
      81,    84,    85,    55,    56,    57,    54,    58,    38,    59,
      60,    76,    39,    40,    41,    61,    42,    62,    81,    91,
      98,   110,    98,   111,    83,    66,    69,    67,   102,    82,
      82,    63,    82,    90,    64,    72,    72,    72,    73,    73,
      71,    71,    71,    37,    75,    75,    77,    78,    79,    81,
      98,    83,    82,    94,    96,   100,    67,    67,    71,    64,
      64,    67,    67,    64,    45,   103,   108,    83,    68,    97,
      68,   104,   110,   116,   111,   109,   110,    69,    98,    69,
      14,   105,    68,   111,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    71,    71,    71,    72,    72,    73,    73,
      73,    73,    74,    74,    74,    75,    75,    75,    76,    75,
      75,    77,    77,    77,    78,    78,    79,    79,    80,    80,
      81,    81,    82,    82,    82,    83,    83,    83,    83,    84,
      84,    84,    84,    84,    85,    85,    86,    85,    87,    87,
      88,    88,    89,    90,    90,    91,    91,    91,    91,    91,
      91,    92,    92,    93,    94,    92,    95,    96,    92,    92,
      92,    97,    98,    99,    99,    99,    99,   100,   102,   103,
     104,   105,   101,   107,   108,   109,   106,   110,   110,   111,
     111,   111,   111,   111,   111,   112,   114,   115,   113,   116,
     113,   113,   113,   117,   117,   117,   118,   118
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     2,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     0,     4,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     0,     4,     1,     1,
       1,     3,     3,     1,     2,     5,     4,     6,     6,     7,
       8,     4,     4,     0,     0,     5,     0,     0,     5,     2,
       3,     1,     1,     3,     3,     4,     2,     1,     0,     0,
       0,     0,    15,     0,     0,     0,    10,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     0,     0,     9,     0,
      17,     7,     6,     1,     1,     4,     1,     2
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
        case 7:
#line 58 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    strcat(jasm,"\t\tineg\n");
  }
#line 1528 "y.tab.c" /* yacc.c:1663  */
    break;

  case 13:
#line 73 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    // 因为我这边renturn的是一个 + 所有我需要结束后返回一个iadd
    strcat(jasm,"\t\tiadd\n");
  }
#line 1537 "y.tab.c" /* yacc.c:1663  */
    break;

  case 14:
#line 78 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    strcat(jasm,"\t\tisub\n");
  }
#line 1545 "y.tab.c" /* yacc.c:1663  */
    break;

  case 17:
#line 88 "yacc_hw3_init.y" /* yacc.c:1663  */
    {  
    // strcat(jasm, "\t\tgetstatic int example.");
    is_over_OP = 1;
    strcat(jasm,"\t\tisub\n");
  }
#line 1555 "y.tab.c" /* yacc.c:1663  */
    break;

  case 18:
#line 93 "yacc_hw3_init.y" /* yacc.c:1663  */
    {is_const = 1;}
#line 1561 "y.tab.c" /* yacc.c:1663  */
    break;

  case 19:
#line 94 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    is_over_OP = 2;
    strcat(jasm,"\t\tisub\n");
  }
#line 1570 "y.tab.c" /* yacc.c:1663  */
    break;

  case 39:
#line 148 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    
        strcpy((yyval.val), (yyvsp[0].val));
        //处理字符串内容
        strcat(jasm, "\t\tldc ");
        strcat(jasm, "\"");
        strcat(jasm, (yyvsp[0].val));
        strcat(jasm, "\"");
        strcat(jasm, "\n");
      pirnt_type = 2;
    
  }
#line 1587 "y.tab.c" /* yacc.c:1663  */
    break;

  case 40:
#line 160 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    strcpy((yyval.val), (yyvsp[0].val));
  }
#line 1595 "y.tab.c" /* yacc.c:1663  */
    break;

  case 41:
#line 163 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    strcpy((yyval.val), (yyvsp[0].val));
  }
#line 1603 "y.tab.c" /* yacc.c:1663  */
    break;

  case 42:
#line 167 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    

        printf("%s %d\n", "这里用来判断 1 ：", (yyvsp[0].int_type) );
        char tempStr[50];
        sprintf( tempStr, "%d", (yyvsp[0].int_type) );
        strcpy((yyval.val), tempStr);

        printf("%s %d\n","add_const_is : ",add_const_is );
        if (add_const_is != 0)
          {
            strcat(jasm,"\t\tsipush ");
            strcat(jasm,(yyval.val));
            strcat(jasm,"\n");  /* code */
          }
          pirnt_type = 1;
  }
#line 1625 "y.tab.c" /* yacc.c:1663  */
    break;

  case 43:
#line 185 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    char tempStr[50];
    sprintf( tempStr, "%g", (yyvsp[0].float_type) );
    strcpy((yyval.val), tempStr);
  }
#line 1635 "y.tab.c" /* yacc.c:1663  */
    break;

  case 46:
#line 197 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    add_const_is = 1;
  }
#line 1643 "y.tab.c" /* yacc.c:1663  */
    break;

  case 47:
#line 200 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    printf("%s\n","waoooooooooo!" );
    add_const_is = 0;
  }
#line 1652 "y.tab.c" /* yacc.c:1663  */
    break;

  case 48:
#line 208 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    if (is_const != 0)
    {
      strcat(jasm,"\t\tsipush ");
            strcat(jasm,"10");
            strcat(jasm,"\n");  /* code */
    }else{

        pirnt_type = 1;

        if (check_c == 0)
        {
          /* code */
        
          // 已经声明的变量需要再hashtable重新查找若存在则输出新的内容
          int is_found_ident = 0;
          // 
          int itemDepth_local = itemDepth;
          temp_fun_index = now_fun_index;
          printf("%s %s %d\n","we r here : ",(yyvsp[0].int_id),temp_fun_index );
          // printf("%d\n", temp_fun_index);
          // 这边已经可以进入

           
          if( temp_fun_index != 0){
              // strcat(jasm, "\t\tiload 0");
            
            while(itemDepth_local > -1){
              // printf("aaa %d\n", itemDepth_local );
              int index_depth = lookup((yyvsp[0].int_id), itemDepth_local) - 1;
              // printf("%s %d %d\n", $1,itemDepth_local,index_depth);
              // printf("%d\n", itemDepth_local);
              // printf("%d\n", index_depth);
              // printf("aaa %d\n", index_depth);
              //这边的问题 iload根本没有读取，上面的判断根本没有进入
              //strcat(jasm, "\t\tiload 0");
              if(index_depth >= 0){

                // printf("vv %d\n",a1 );
                // printf("%s\n",index_depth );
                strcat(jasm, "\t\tiload ");
                char index_depth_char[10];
                sprintf(index_depth_char, "%d" , index_depth);
                strcat(jasm, index_depth_char);
                strcat(jasm, "\n");
                is_found_ident = 1;
                break;
              }
            itemDepth_local--;
            // 跳出当前的函数就-1
            }
            temp_fun_index = 0;
          }
          // temp_fun_index = 0

      //     getstatic int example.a
      //     sipush 10
      //     invokestatic int example.add(int, int)
      //     putstatic int example.c
      // /* 16:   c = add(a, 10); */
          int check_add = strcmp((yyvsp[0].int_id),"add");
          printf("%s %s %d\n","$1 check_add ", (yyvsp[0].int_id), check_add);
          if (is_found_ident == 0 &&  check_add != 0 )
            {
              // 
              printf("%s %d\n"," lookup : ", lookup((yyvsp[0].int_id), 0));
              if (lookup((yyvsp[0].int_id), 0) >= 0)
              {
                printf("%s %s\n", "为了example我输出了getstatic int example ", (yyvsp[0].int_id));
                strcat(jasm, "\t\tgetstatic int example.");
                // getstatic int example.a
                strcat(jasm, (yyvsp[0].int_id));
                printf(" %s %s\n",  "\t\tgetstatic int ." ,(yyvsp[0].int_id));
              }
              else if(strcmp(lookup_const((yyvsp[0].int_id)), "") != 0)
              {
                printf("%s\n","12345lookUP_const" );
                strcat(jasm, "\t\tsipush ");
                strcat(jasm, lookup_const((yyvsp[0].int_id)));
                strcpy((yyvsp[0].int_id), lookup_const((yyvsp[0].int_id)));
              }
              else{
                strcat(jasm, "\t\tsipush ");
                strcat(jasm, (yyvsp[0].int_id));
              }
              
              strcat(jasm, "\n");
            } 
            else if(is_found_ident == 0 && check_add == 0)//这边专门为add设置，其他不走，只能走else在这边直接写死
            {
              strcpy(add_indentifier, (yyvsp[0].int_id));
               
            }
        }
      // 这里为C进行特别设置
    // }
    // check_c--;//当读了c之后，将c-1，只是为了暂时跳过c
  }
  }
#line 1756 "y.tab.c" /* yacc.c:1663  */
    break;

  case 52:
#line 318 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    insert((yyvsp[-2].int_id), (yyvsp[0].val) , "");
  }
#line 1764 "y.tab.c" /* yacc.c:1663  */
    break;

  case 55:
#line 329 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    insert((yyvsp[-3].int_id) , "const" , (yyvsp[-1].val) );
  }
#line 1772 "y.tab.c" /* yacc.c:1663  */
    break;

  case 56:
#line 332 "yacc_hw3_init.y" /* yacc.c:1663  */
    {

//       field static int c
// /* 6: let mut c; */

    insert( (yyvsp[-1].int_id), "int", "" );
    // global variable
    strcat(jasm, "\tfield static ");
    strcat(jasm, "int ");
    strcat(jasm, (yyvsp[-1].int_id));
    strcat(jasm, "\n");
  }
#line 1789 "y.tab.c" /* yacc.c:1663  */
    break;

  case 57:
#line 344 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    insert((yyvsp[-3].int_id) , (yyvsp[-1].val) , "" );
    strcat(jasm, "\tfield static ");
    strcat(jasm, (yyvsp[-1].val));
    strcat(jasm, " ");
    strcat(jasm, (yyvsp[-3].int_id));
    strcat(jasm, "\n");
  }
#line 1802 "y.tab.c" /* yacc.c:1663  */
    break;

  case 58:
#line 352 "yacc_hw3_init.y" /* yacc.c:1663  */
    {

//     field static int a = 5
// /* 7: let mut a = 5; */

    insert((yyvsp[-3].int_id) , "" , (yyvsp[-1].val) );
    // global variable
    strcat(jasm, "\tfield static ");
    strcat(jasm, "int ");
    strcat(jasm, (yyvsp[-3].int_id));
    strcat(jasm, " = ");

    strcat(jasm, (yyvsp[-1].val));
    strcat(jasm, "\n");
    printf("%s\n", jasm);
  }
#line 1823 "y.tab.c" /* yacc.c:1663  */
    break;

  case 59:
#line 368 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    insert((yyvsp[-5].int_id) , (yyvsp[-3].val) , (yyvsp[-1].val) );
  }
#line 1831 "y.tab.c" /* yacc.c:1663  */
    break;

  case 60:
#line 372 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    insert((yyvsp[-5].int_id) , (yyvsp[-3].val) , (yyvsp[-1].val) );


    // insert($3, $5, "");
    printf("strcmpsssssssss1111111111%s\n", (yyvsp[-5].int_id));
    if (lookup((yyvsp[-5].int_id), 0) >= 0)
    {

      strcat(jasm, "\tfield static ");
      strcat(jasm, (yyvsp[-3].val));
      strcat(jasm, " ");
      strcat(jasm, (yyvsp[-5].int_id));
      strcat(jasm, " = ");
      strcat(jasm, (yyvsp[-1].val));
      strcat(jasm, "\n");
    }
  }
#line 1854 "y.tab.c" /* yacc.c:1663  */
    break;

  case 61:
#line 394 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    printf("%s %d\n", "check_c : qiguai1: ", check_c);
    check_c = 0;

    // 这边预设一个char用来存入 = 之前的被赋值对象
    // char assigned[] = "\t\tputstatic int example.";
    // printf("%s\n", "IDENTIFIER '=' expression ';'");
     printf("%s \n", "assignment_expression!!!");

     //这里果然是经过了C确认是经过了C 
     if (strcmp((yyvsp[-3].int_id), "c") == 0)
     {
       /* code */
      strcat(jasm, "\t\tinvokestatic int example.");
     strcat(jasm, add_indentifier);
     strcat(jasm, "(int, int)\n");
     }
     

     strcat(jasm, "\t\tputstatic int example.");
     strcat(jasm, (yyvsp[-3].int_id));
     strcat(jasm, "\n");
     printf("%s %s\n", "我输出了putstatic int example  这是在expression中获得的 : ", (yyvsp[-3].int_id));


  }
#line 1885 "y.tab.c" /* yacc.c:1663  */
    break;

  case 62:
#line 421 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    // printf("%s\n", "这里是declaration+list!!!!");
  }
#line 1893 "y.tab.c" /* yacc.c:1663  */
    break;

  case 63:
#line 425 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    strcat(jasm, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
  }
#line 1901 "y.tab.c" /* yacc.c:1663  */
    break;

  case 64:
#line 429 "yacc_hw3_init.y" /* yacc.c:1663  */
    {

     if (pirnt_type == 1)
      {
        strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
      }
      else  if (pirnt_type == 2)
      {
        strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(java.lang.String)\n");
      }

    
   }
#line 1919 "y.tab.c" /* yacc.c:1663  */
    break;

  case 66:
#line 444 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    strcat(jasm, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
  }
#line 1927 "y.tab.c" /* yacc.c:1663  */
    break;

  case 67:
#line 449 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    printf("pirnt_type %d\n", pirnt_type);
    // if (strcmp($3 , "n") == 0)
    //   {
      //   strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
      // }
      // else{
     if (pirnt_type == 1)
      {
        strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");
      }
      else  if (pirnt_type == 2)
      {
        strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)\n");
      }
    // }
   }
#line 1949 "y.tab.c" /* yacc.c:1663  */
    break;

  case 70:
#line 469 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    // strcat(jasm, "\t\tireturn\n");
    // printf("return!!!" );
    // strcat(jasm, "\tiload 1\n");
    // strcat(jasm,"\tiadd\n");
    strcat(jasm,"\t\tireturn\n"); 
  }
#line 1961 "y.tab.c" /* yacc.c:1663  */
    break;

  case 71:
#line 490 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    // if (check == 1)
    // {
      itemDepth++;
    // }
    // else{
    //   check++;
    // }
  }
#line 1975 "y.tab.c" /* yacc.c:1663  */
    break;

  case 72:
#line 503 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    itemDepth--;
    //这里当遇到main才会出现return情况
    // if (strcmp($3, "main") == 0)
    // {
    //   strcat(jasm, "\t\treturn\n\t}\n");
    // }
    //en这个地方因为main无法判断故无法执行
  }
#line 1989 "y.tab.c" /* yacc.c:1663  */
    break;

  case 78:
#line 527 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    printf("%s %d\n", "lid : ", add_const_is);
    add_const_is = 1 ;
  }
#line 1998 "y.tab.c" /* yacc.c:1663  */
    break;

  case 79:
#line 532 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    add_const_is = 0 ;
  }
#line 2006 "y.tab.c" /* yacc.c:1663  */
    break;

  case 80:
#line 536 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
//     ifgt L0
//     iconst_0 
//     goto L1
//     L0:
// iconst_1
// L1:
// ifeq L2
    strcat(jasm,"\t\tifgt L0\n");
    strcat(jasm,"\t\ticonst_0\n");
    strcat(jasm,"\t\tgoto L1\n");
    strcat(jasm,"\tL0:\n");
    strcat(jasm,"\t\ticonst_1\n");
    strcat(jasm,"\tL1:\n");
    strcat(jasm,"\t\tifeq L2\n");

   }
#line 2028 "y.tab.c" /* yacc.c:1663  */
    break;

  case 81:
#line 554 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
      strcat(jasm, "\t\tgoto L3\n");
      strcat(jasm, "\tL2:\n");
    }
#line 2037 "y.tab.c" /* yacc.c:1663  */
    break;

  case 82:
#line 559 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
      strcat(jasm, "\tL3:\n");
    }
#line 2045 "y.tab.c" /* yacc.c:1663  */
    break;

  case 83:
#line 566 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    add_const_is = 1 ;
    
    // strcat(jasm, "\tLtest: \n");
    strcat(jasm, "\tLbegin:\n");
     // strcat(jasm, "\t\tgetstatic int example.n\n");
     // strcat(jasm, "\t\tsipush 2\n");

     // strcat(jasm, "\t\tisub\n");
     
     
  }
#line 2062 "y.tab.c" /* yacc.c:1663  */
    break;

  case 84:
#line 579 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    is_const = 0;
    strcat(jasm, "\t\tifle Ltrue\n");

      if (is_over_OP == 1)
      {
        strcat(jasm, "\t\ticonst_1\n");
      }
      else if (is_over_OP == 2){
        strcat(jasm, "\t\ticonst_0\n");
      }
     
     strcat(jasm, "\t\tgoto Lfalse\n");

     strcat(jasm, "\tLtrue:\n");

      if (is_over_OP == 1)
      {
        strcat(jasm, "\t\ticonst_0\n");
      }
      else if (is_over_OP == 2){
        strcat(jasm, "\t\ticonst_1\n");
      }
    strcat(jasm, "\tLfalse:\n");
     strcat(jasm, "\t\tifeq Lexit\n");
   }
#line 2093 "y.tab.c" /* yacc.c:1663  */
    break;

  case 85:
#line 607 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
strcat(jasm, "\t\tgoto Lbegin\n");
     strcat(jasm, "\tLexit:\n");
    }
#line 2102 "y.tab.c" /* yacc.c:1663  */
    break;

  case 95:
#line 630 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    // check = 0;
    itemDepth = 0;
    //这边定义我们需要的itemDepth
  }
#line 2112 "y.tab.c" /* yacc.c:1663  */
    break;

  case 96:
#line 645 "yacc_hw3_init.y" /* yacc.c:1663  */
    {   
    now_fun_index++;//原yacc文件在这边也加了一次
    printf("%d\n",  function_index);
    if (strcmp((yyvsp[-2].int_id),"main") == 0)
      {
        strcat(jasm, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
      }
    else
      {
        printf("函数构成发生错误");
      }
  }
#line 2129 "y.tab.c" /* yacc.c:1663  */
    break;

  case 97:
#line 660 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    printf("%s\n", "<statement_list>sdfs</statement_list>");
  }
#line 2137 "y.tab.c" /* yacc.c:1663  */
    break;

  case 98:
#line 667 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    now_fun_index++;
    function_index++;
    insert((yyvsp[-7].int_id), "", "");//这个地方我不太确定main是不是要提前插入到symboltable中待定
    if (strcmp((yyvsp[-7].int_id), "main") == 0)
    {
      strcat(jasm, "\t\treturn\n\t}\n");
    }
 
  }
#line 2152 "y.tab.c" /* yacc.c:1663  */
    break;

  case 99:
#line 683 "yacc_hw3_init.y" /* yacc.c:1663  */
    {   
    strcat(jasm, "\tmethod public static "); 
    function_index++;
    now_fun_index++;
    // function_index代表该id属于rust文件中的第几个function中，需要symboltable表注入之前将该值记录下来 
    insert((yyvsp[-12].int_id), (yyvsp[-1].val), "");
    //生成之后对symbol_table又有影响
    insert((yyvsp[-10].int_id), (yyvsp[-8].val), "");
    insert((yyvsp[-6].int_id), (yyvsp[-4].val), "");

    // 
    strcat(jasm, (yyvsp[-1].val));
    strcat(jasm, " ");  
    strcat(jasm, (yyvsp[-12].int_id)); 
    strcat(jasm, "(");
    //这里放两个参数a:int ,b :int
    strcat(jasm," ");
    strcat(jasm,(yyvsp[-8].val));
    strcat(jasm,",");
    strcat(jasm," ");
    strcat(jasm,(yyvsp[-4].val));
    strcat(jasm,")\n");
    strcat(jasm,"\tmax_stack 15\n");
    strcat(jasm,"\tmax_locals 15\n");
    strcat(jasm,"\t{\n");
    printf("%s\n", "add function已经结束！！！！！");
    // a1++;
    // now_fun_index++;
    
  }
#line 2187 "y.tab.c" /* yacc.c:1663  */
    break;

  case 100:
#line 717 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    strcat(jasm,"\t}\n");
  }
#line 2195 "y.tab.c" /* yacc.c:1663  */
    break;

  case 101:
#line 742 "yacc_hw3_init.y" /* yacc.c:1663  */
    {
    insert((yyvsp[-5].int_id), (yyvsp[-1].val), "");

  }
#line 2204 "y.tab.c" /* yacc.c:1663  */
    break;

  case 102:
#line 747 "yacc_hw3_init.y" /* yacc.c:1663  */
    {

    insert((yyvsp[-4].int_id), "", "");
  }
#line 2213 "y.tab.c" /* yacc.c:1663  */
    break;


#line 2217 "y.tab.c" /* yacc.c:1663  */
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
#line 763 "yacc_hw3_init.y" /* yacc.c:1907  */


void yyerror(const char *str){
    // printf("error:%s\n",str);
}

int yywrap(){
    return 1;
}

int main()
{
  itemDepth = 0;
  hash_table = init();
  //在yyparse前面开始读数据
  strcat(jasm, "class example\n{\n ");
  yyparse();
  printf( " -------- symbol table --------\n" );
  printf( "id     type     value   depth   fun_index\n" );
  printAll();

  strcat(jasm, "}\n");//此所有应写入数据全部注入jasm中
  printf("\n\n%s\n", "------ Write Java Assembly Code Into example.jasm ------");

  FILE *fpt;
  char file_name[100];
  fpt = fopen("example.jasm", "w"); 

  fprintf(fpt, jasm);
  fclose(fpt);

  char command[100] = "";
  printf("\n\n%s\n", "------ Convert example.jasm To example.class By javaa program------");
  strcat(command, "./javaa example.jasm");
  printf("%s%s\n\n", "Execute  command : ", command);
  system(command);

  memset(command, '\0', sizeof(command)-1);

  printf("\n\n%s\n", "------ Result After Run example.class ------");
  strcat(command, "java example");
  printf("%s%s\n\n", "Execute command : ", command);
  system(command);

  return(0);


}

