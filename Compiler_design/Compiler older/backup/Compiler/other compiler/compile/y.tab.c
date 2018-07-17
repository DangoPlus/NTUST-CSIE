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
#line 1 "syntax.y" /* yacc.c:339  */
  #include  "com.h"
int calltype=0;//函数调用方式__stdcall&__cdecl
int msgIndex = 0;//字符串索引
int label=0;//自动生成标号

#line 72 "y.tab.c" /* yacc.c:339  */

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
    IF = 258,
    ELSE = 259,
    WHILE = 260,
    RETURN = 261,
    __CDECL = 262,
    __STDCALL = 263,
    LE = 264,
    LT = 265,
    GT = 266,
    GE = 267,
    EQ = 268,
    NE = 269,
    OR = 270,
    AND = 271,
    INT = 272,
    VOID = 273,
    CHAR = 274,
    FUNCTION = 275,
    ARRAY = 276,
    POINTER = 277,
    NEG = 278,
    ID = 279,
    NUM = 280,
    STRING = 281,
    CHARACTER = 282
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define WHILE 260
#define RETURN 261
#define __CDECL 262
#define __STDCALL 263
#define LE 264
#define LT 265
#define GT 266
#define GE 267
#define EQ 268
#define NE 269
#define OR 270
#define AND 271
#define INT 272
#define VOID 273
#define CHAR 274
#define FUNCTION 275
#define ARRAY 276
#define POINTER 277
#define NEG 278
#define ID 279
#define NUM 280
#define STRING 281
#define CHARACTER 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "syntax.y" /* yacc.c:355  */

	int * value;
	struct symbol * symType;
	struct expression * exprType;
	char * op;
 

#line 174 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 191 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   144

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    33,     2,     2,
      37,    38,    31,    29,    39,    30,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
       2,    28,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    73,    79,    86,    93,   100,   131,   162,
     193,   225,   268,   311,   354,   398,   403,   408,   414,   438,
     462,   484,   502,   507,   514,   521,   528,   550,   570,   590,
     612,   620,   624,   632,   637,   644,   650,   655,   660,   665,
     671,   677,   684,   690,   697,   705,   711,   718,   749,   758,
     773,   790,   800,   808,   816,   822,   828,   834,   840,   846,
     853,   877,   893,   898,   904,   936,   952,   957,   962,   968,
     977,   985,   991,   999,  1017,  1027,  1036,  1049,  1064,  1069,
    1076,  1085,  1095,  1100
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "WHILE", "RETURN",
  "__CDECL", "__STDCALL", "LE", "LT", "GT", "GE", "EQ", "NE", "OR", "AND",
  "INT", "VOID", "CHAR", "FUNCTION", "ARRAY", "POINTER", "NEG", "ID",
  "NUM", "STRING", "CHARACTER", "'='", "'+'", "'-'", "'*'", "'/'", "'%'",
  "';'", "'['", "']'", "'('", "')'", "','", "'{'", "'}'", "$accept",
  "program", "declaration_list", "declaration", "var_declaration",
  "loc_declaration", "type_specifer", "fun_declaration", "params",
  "param_list", "param", "compound_stmt", "local_declarations",
  "statement_list", "statement", "expression_stmt", "if_stmt",
  "while_stmt", "return_stmt", "expression", "var", "simple_expression",
  "relop", "additive_expression", "addop", "term", "mulop",
  "unary_expression", "unaryop", "factor", "call", "args", "arg_list",
  "calling_convention", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    61,    43,
      45,    42,    47,    37,    59,    91,    93,    40,    41,    44,
     123,   125
};
# endif

#define YYPACT_NINF -130

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-130)))

#define YYTABLE_NINF -24

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      77,  -130,  -130,  -130,    12,    77,  -130,  -130,    18,  -130,
    -130,  -130,  -130,  -130,    54,     0,    11,  -130,    16,    80,
      33,    10,    21,    34,    22,    66,    13,  -130,  -130,    67,
      80,    76,    78,    87,   -18,    77,    79,    81,  -130,    82,
      85,  -130,  -130,  -130,  -130,    83,     3,  -130,    86,    77,
    -130,  -130,  -130,  -130,  -130,    42,    14,    72,    88,    84,
      89,   -16,    68,  -130,  -130,  -130,    90,  -130,    45,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,    91,    95,  -130,    51,
      69,  -130,    45,  -130,  -130,  -130,    99,    74,    45,    45,
    -130,    93,    45,    45,  -130,    92,  -130,    45,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,    45,    45,  -130,  -130,
    -130,    45,  -130,  -130,    96,  -130,   103,    97,    98,  -130,
     101,  -130,   100,    94,  -130,  -130,    56,    69,  -130,   105,
     104,    53,    53,  -130,  -130,    45,  -130,   107,   112,  -130,
    -130,  -130,    53,  -130
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    15,    16,    17,     0,     2,     4,     5,     0,     6,
       1,     3,    82,    83,     0,     0,     0,     7,     0,     0,
       0,     0,     0,    16,     0,     0,    22,    25,     9,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     8,     0,
      27,    21,    31,    20,    24,     0,     0,    28,     0,    33,
      10,    19,    18,    29,    32,     0,     0,     0,     0,     0,
       0,     0,    49,    75,    76,    71,     0,    41,     0,    30,
      36,    34,    35,    37,    38,    39,     0,    73,    48,    53,
      61,    65,     0,    70,    74,    11,     0,     0,     0,     0,
      45,     0,     0,    78,    51,     0,    40,     0,    54,    55,
      56,    57,    58,    59,    62,    63,     0,     0,    66,    67,
      68,     0,    73,    69,     0,    13,     0,     0,     0,    46,
       0,    81,     0,    79,    72,    47,    52,    60,    64,     0,
       0,     0,     0,    50,    77,     0,    12,     0,    42,    44,
      80,    14,     0,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,  -130,   124,  -130,  -130,     1,  -130,   113,  -130,
     109,   -23,  -130,  -130,  -129,  -130,  -130,  -130,  -130,   -61,
     -77,  -130,  -130,    25,  -130,    27,  -130,   -78,  -130,  -130,
    -130,  -130,  -130,  -130
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    54,    24,     9,    25,    26,
      27,    70,    49,    56,    71,    72,    73,    74,    75,    76,
      77,    78,   106,    79,   107,    80,   111,    81,    82,    83,
      84,   122,   123,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,     8,   138,   139,   113,   112,     8,    95,    62,    63,
      64,    43,    10,   143,    65,    66,    41,    59,    90,    60,
      61,    68,    42,    52,    20,    12,    13,   117,   118,   112,
     112,   120,   121,   128,   112,    21,   125,    51,    62,    63,
      64,    22,    14,    42,    65,    66,    32,    30,    67,    15,
      55,    68,    35,    33,    42,    69,    59,    31,    60,    61,
      98,    99,   100,   101,   102,   103,    57,    28,    29,    62,
      63,    64,   -23,    58,   140,    65,    66,    62,    63,    64,
     104,   105,    68,    65,    66,   104,   105,    67,    17,    18,
      68,    19,    36,    42,     1,     2,     3,     1,    23,     3,
     108,   109,   110,    92,    34,    93,    85,    86,   115,   116,
      38,    40,    87,    39,    94,    45,   142,    50,    47,    46,
      48,    88,    53,    97,   114,    96,    89,   119,   130,    11,
     124,   126,   129,   135,   127,   131,   132,   133,   134,   136,
     137,   141,     0,    37,    44
};

static const yytype_int16 yycheck[] =
{
      61,     0,   131,   132,    82,    82,     5,    68,    24,    25,
      26,    34,     0,   142,    30,    31,    34,     3,    34,     5,
       6,    37,    40,    46,    24,     7,     8,    88,    89,   106,
     107,    92,    93,   111,   111,    24,    97,    34,    24,    25,
      26,    25,    24,    40,    30,    31,    24,    37,    34,    31,
      49,    37,    39,    31,    40,    41,     3,    36,     5,     6,
       9,    10,    11,    12,    13,    14,    24,    34,    35,    24,
      25,    26,    38,    31,   135,    30,    31,    24,    25,    26,
      29,    30,    37,    30,    31,    29,    30,    34,    34,    35,
      37,    37,    25,    40,    17,    18,    19,    17,    18,    19,
      31,    32,    33,    35,    38,    37,    34,    35,    34,    35,
      34,    24,    24,    35,    24,    36,     4,    34,    36,    38,
      35,    37,    36,    28,    25,    34,    37,    34,    25,     5,
      38,   106,    36,    39,   107,    38,    38,    36,    38,    34,
      36,    34,    -1,    30,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    18,    19,    43,    44,    45,    46,    48,    49,
       0,    45,     7,     8,    24,    31,    75,    34,    35,    37,
      24,    24,    25,    18,    48,    50,    51,    52,    34,    35,
      37,    36,    24,    31,    38,    39,    25,    50,    34,    35,
      24,    34,    40,    53,    52,    36,    38,    36,    35,    54,
      34,    34,    53,    36,    47,    48,    55,    24,    31,     3,
       5,     6,    24,    25,    26,    30,    31,    34,    37,    41,
      53,    56,    57,    58,    59,    60,    61,    62,    63,    65,
      67,    69,    70,    71,    72,    34,    35,    24,    37,    37,
      34,    61,    35,    37,    24,    61,    34,    28,     9,    10,
      11,    12,    13,    14,    29,    30,    64,    66,    31,    32,
      33,    68,    62,    69,    25,    34,    35,    61,    61,    34,
      61,    61,    73,    74,    38,    61,    65,    67,    69,    36,
      25,    38,    38,    36,    38,    39,    34,    36,    56,    56,
      61,    34,     4,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    46,    46,
      46,    47,    47,    47,    47,    48,    48,    48,    49,    49,
      49,    49,    50,    50,    51,    51,    52,    52,    52,    52,
      53,    54,    54,    55,    55,    56,    56,    56,    56,    56,
      57,    57,    58,    58,    59,    60,    60,    61,    61,    62,
      62,    62,    63,    63,    64,    64,    64,    64,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    68,    69,
      69,    70,    71,    71,    71,    71,    71,    72,    73,    73,
      74,    74,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     4,
       7,     3,     6,     4,     7,     1,     1,     1,     7,     7,
       6,     6,     1,     1,     3,     1,     2,     3,     4,     5,
       4,     0,     2,     0,     2,     1,     1,     1,     1,     1,
       2,     1,     5,     7,     5,     2,     3,     3,     1,     1,
       4,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     2,
       1,     1,     3,     1,     1,     1,     1,     4,     0,     1,
       3,     1,     1,     1
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
#line 63 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[0].exprType)->code ) + 100 );
      sprintf( (yyval.exprType)->code, "%sEND main\n", (yyvsp[0].exprType)->code );
      fprintf( yyout, ".386\n.MODEL flat, stdcall\n.Stack 4096\n" );
      fprintf( yyout, "\n%s", funBuffer );
      fprintf( yyout, "\n.data\n%s", varBuffer );
      fprintf( yyout, "\n.code\n%s", (yyval.exprType)->code );
     }
#line 1382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 74 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[-1].exprType)->code ) + strlen( (yyvsp[0].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "%s%s", (yyvsp[-1].exprType)->code, (yyvsp[0].exprType)->code );
     }
#line 1392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 80 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[0].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "%s", (yyvsp[0].exprType)->code );
     }
#line 1402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 87 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[0].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "");
      sprintf( varBuffer, "%s%s", varBuffer, (yyvsp[0].exprType)->code );
     }
#line 1413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 94 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[0].exprType)->code ) + 10 );
      sprintf( (yyval.exprType)->code, "%s", (yyvsp[0].exprType)->code );
     }
#line 1423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 101 "syntax.y" /* yacc.c:1646  */
    {
      if( lookup( (yyvsp[-1].symType)->name, currentTable ) == NULL )
      {
       (yyvsp[-1].symType) = install((yyvsp[-1].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[-1].symType)->isLocal = 0;
      }
      else
      {
       char msg[100];
       sprintf( msg, "Variable %s redefinition: ", (yyvsp[-1].symType)->name );
       yyerror( msg );
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-1].symType)->name ) + 13 );
      switch( *(yyvsp[-2].value) )
      {
       case 1:
        (yyvsp[-1].symType)->ty = 1;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[-1].symType)->ty = 2;
        sprintf( (yyval.exprType)->code, " %s DWORD 0\n", (yyvsp[-1].symType)->name );
        break;
       case 3:
        (yyvsp[-1].symType)->ty = 3;
        sprintf( (yyval.exprType)->code, " %s BYTE 0\n", (yyvsp[-1].symType)->name );
        break;
      }
     }
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 132 "syntax.y" /* yacc.c:1646  */
    {
      if( lookup( (yyvsp[-4].symType)->name, currentTable ) == NULL )
      {
       (yyvsp[-4].symType) = install((yyvsp[-4].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[-4].symType)->isLocal = 0;
      }
      else
      {
       char msg[100];
       sprintf( msg, "Variable %s redefinition: ", (yyvsp[-4].symType)->name );
       yyerror( msg );
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-4].symType)->name ) + strlen( (yyvsp[-2].symType)->name ) + 13 );
      switch( *(yyvsp[-5].value) )
      {
       case 1:
        (yyvsp[-4].symType)->ty = 21;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[-4].symType)->ty = 22;
        sprintf( (yyval.exprType)->code, " %s DWORD %s DUP(0)\n", (yyvsp[-4].symType)->name, (yyvsp[-2].symType)->name );
        break;
       case 3:
        (yyvsp[-4].symType)->ty = 23;
        sprintf( (yyval.exprType)->code, " %s BYTE %s DUP(0)\n", (yyvsp[-4].symType)->name, (yyvsp[-2].symType)->name );
        break;
      }
     }
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 163 "syntax.y" /* yacc.c:1646  */
    {
      if( lookup( (yyvsp[-1].symType)->name, currentTable ) == NULL )
      {
       (yyvsp[-1].symType) = install((yyvsp[-1].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[-1].symType)->isLocal = 0;
      }
      else
      {
       char msg[100];
       sprintf( msg, "Variable %s redefinition: ", (yyvsp[-1].symType)->name );
       yyerror( msg );
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-1].symType)->name ) + 13 );
      switch( *(yyvsp[-3].value) )
      {
       case 1:
        (yyvsp[-1].symType)->ty = 11;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[-1].symType)->ty = 12;
        sprintf( (yyval.exprType)->code, " %s PTR DWORD 0\n", (yyvsp[-1].symType)->name );
        break;
       case 3:
        (yyvsp[-1].symType)->ty = 13;
        sprintf( (yyval.exprType)->code, " %s PTR BYTE 0\n", (yyvsp[-1].symType)->name );
        break;
      }
     }
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 194 "syntax.y" /* yacc.c:1646  */
    {
      if( lookup( (yyvsp[-4].symType)->name, currentTable ) == NULL )
      {
       (yyvsp[-4].symType) = install((yyvsp[-4].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[-4].symType)->isLocal = 0;
      }
      else
      {
       char msg[100];
       sprintf( msg, "Variable %s redefinition: ", (yyvsp[-4].symType)->name );
       yyerror( msg );
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-4].symType)->name ) + strlen( (yyvsp[-2].symType)->name ) + 13 );
      switch( *(yyvsp[-6].value) )
      {
       case 1:
        (yyvsp[-4].symType)->ty = 31;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[-4].symType)->ty = 32;
        sprintf( (yyval.exprType)->code, " %s PTR DWORD %s DUP(0)\n", (yyvsp[-4].symType)->name, (yyvsp[-2].symType)->name );
        break;
       case 3:
        (yyvsp[-4].symType)->ty = 33;
        sprintf( (yyval.exprType)->code, " %s PTR BYTE %s DUP(0)\n", (yyvsp[-4].symType)->name, (yyvsp[-2].symType)->name );
        break;
      }
     }
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 226 "syntax.y" /* yacc.c:1646  */
    {
      Symbol temp;
      if( (temp = lookup( (yyvsp[-1].symType)->name, currentTable )) == NULL )
      {
       (yyvsp[-1].symType) = install((yyvsp[-1].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[-1].symType)->isLocal = 1;
      }
      else
      {
       if( temp->scope == currentLevel )
       {
        char msg[100];
        sprintf( msg, "Variable %s redefinition: ", (yyvsp[-1].symType)->name );
        yyerror( msg );
       }
       else
       {
        (yyvsp[-1].symType) = install((yyvsp[-1].symType)->name, &currentTable, currentLevel, ID);
        (yyvsp[-1].symType)->isLocal = 1;
       }
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-1].symType)->name ) + 13 );
      switch( *(yyvsp[-2].value) )
      {
       case 1:
        (yyvsp[-1].symType)->ty = 1;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[-1].symType)->ty = 2;
        sprintf( localValBuffer, "%s\tlocal %s:DWORD\n", localValBuffer, (yyvsp[-1].symType)->name );
        break;
       case 3:
        (yyvsp[-1].symType)->ty = 3;
        sprintf( localValBuffer, "%s\tlocal %s:BYTE\n", localValBuffer, (yyvsp[-1].symType)->name );
        break;
      }
      sprintf( (yyval.exprType)->code, "" );
      paramcount++;
      realParam++;
     }
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 269 "syntax.y" /* yacc.c:1646  */
    {
      Symbol temp;
      if( (temp = lookup( (yyvsp[-4].symType)->name, currentTable )) == NULL )
      {
       (yyvsp[-4].symType) = install((yyvsp[-4].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[-4].symType)->isLocal = 1;
      }
      else
      {
       if( temp->scope == currentLevel )
       {
        char msg[100];
        sprintf( msg, "Variable %s redefinition: ", (yyvsp[-4].symType)->name );
        yyerror( msg );
       }
       else
       {
        (yyvsp[-4].symType) = install((yyvsp[-4].symType)->name, &currentTable, currentLevel, ID);
        (yyvsp[-4].symType)->isLocal = 1;
       }
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-4].symType)->name ) + strlen( (yyvsp[-2].symType)->name ) + 13 );
      switch( *(yyvsp[-5].value) )
      {
       case 1:
        (yyvsp[-4].symType)->ty = 21;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[-4].symType)->ty = 22;
        sprintf( localValBuffer, "%s\tlocal %s[%s]:DWORD\n", localValBuffer, (yyvsp[-4].symType)->name, (yyvsp[-2].symType)->name );
        break;
       case 3:
        (yyvsp[-4].symType)->ty = 23;
        sprintf( localValBuffer, "%s\tlocal %s[%s]:BYTE\n", localValBuffer, (yyvsp[-4].symType)->name, (yyvsp[-2].symType)->name );
        break;
      }
      sprintf( (yyval.exprType)->code, "" );
      paramcount++;
      realParam++;
     }
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 312 "syntax.y" /* yacc.c:1646  */
    {
      Symbol temp;
      if( (temp = lookup( (yyvsp[-1].symType)->name, currentTable )) == NULL )
      {
       (yyvsp[-1].symType) = install((yyvsp[-1].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[-1].symType)->isLocal = 1;
      }
      else
      {
       if( temp->scope == currentLevel )
       {
        char msg[100];
        sprintf( msg, "Variable %s redefinition: ", (yyvsp[-1].symType)->name );
        yyerror( msg );
       }
       else
       {
        (yyvsp[-1].symType) = install((yyvsp[-1].symType)->name, &currentTable, currentLevel, ID);
        (yyvsp[-1].symType)->isLocal = 1;
       }
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-1].symType)->name ) + 13 );
      switch( *(yyvsp[-3].value) )
      {
       case 1:
        (yyvsp[-1].symType)->ty = 11;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[-1].symType)->ty = 12;
        sprintf( localValBuffer, "\tlocal %s:PTR WORD\n", (yyvsp[-1].symType)->name );
        break;
       case 3:
        (yyvsp[-1].symType)->ty = 13;
        sprintf( localValBuffer, "\tlocal %s:PTR BYTE\n", (yyvsp[-1].symType)->name );
        break;
      }
      sprintf( (yyval.exprType)->code, "" );
      paramcount++;
      realParam++;
     }
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 355 "syntax.y" /* yacc.c:1646  */
    {
      Symbol temp;
      if( (temp = lookup( (yyvsp[-4].symType)->name, currentTable )) == NULL )
      {
       (yyvsp[-4].symType) = install((yyvsp[-4].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[-4].symType)->isLocal = 1;
      }
      else
      {
       if( temp->scope == currentLevel )
       {
        char msg[100];
        sprintf( msg, "Variable %s redefinition: ", (yyvsp[-4].symType)->name );
        yyerror( msg );
       }
       else
       {
        (yyvsp[-4].symType) = install((yyvsp[-4].symType)->name, &currentTable, currentLevel, ID);
        (yyvsp[-4].symType)->isLocal = 1;
       }
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-4].symType)->name ) + strlen( (yyvsp[-2].symType)->name ) + 13 );
      switch( *(yyvsp[-6].value) )
      {
       case 1:
        (yyvsp[-4].symType)->ty = 31;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[-4].symType)->ty = 32;
        sprintf( localValBuffer, "\tlocal %s[%s]:DWORD\n", (yyvsp[-4].symType)->name, (yyvsp[-2].symType)->name );
        break;
       case 3:
        (yyvsp[-4].symType)->ty = 33;
        sprintf( localValBuffer, "\tlocal %s[%s]:BYTE\n", (yyvsp[-4].symType)->name, (yyvsp[-2].symType)->name );
        break;
      }
      sprintf( (yyval.exprType)->code, "" );
      paramcount++;
      realParam++;
     }
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 399 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.value) = (int*)malloc( sizeof( int ) );
      *(yyval.value) = 2;
     }
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 404 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.value) = (int*)malloc( sizeof( int ) );
      *(yyval.value) = 1;
     }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 409 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.value) = (int*)malloc( sizeof( int ) );
      *(yyval.value) = 3;
     }
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 415 "syntax.y" /* yacc.c:1646  */
    {

//      if( lookup( $3->name, currentTable ) == NULL )
//      {
//       $3 = install($3->name, &currentTable, currentLevel, ID);
//      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[-4].symType)->name )*2 + strlen( (yyvsp[-2].exprType)->code ) + strlen( (yyvsp[0].exprType)->code ) + strlen( localValBuffer ) + 12 );
      if( *(yyvsp[-5].value)== 0 && params > 0 )
      {
//       $3->calltype = 0;
       sprintf( (yyval.exprType)->code, "%s PROC%s\n%s\tsub esp, %d\n%s\tret %d\n%s ENDP\n", (yyvsp[-4].symType)->name, (yyvsp[-2].exprType)->code,localValBuffer, (paramcount-realParam)*4, (yyvsp[0].exprType)->code,  4*params, (yyvsp[-4].symType)->name );
      }
      else
      {
//       $3->calltype = 1;
       sprintf( (yyval.exprType)->code, "%s PROC%s\n%s\tsub esp, %d\n%s\tret\n%s ENDP\n", (yyvsp[-4].symType)->name, (yyvsp[-2].exprType)->code, localValBuffer, (paramcount-realParam)*4,(yyvsp[0].exprType)->code, (yyvsp[-4].symType)->name );
      }
      params = 0;
      paramcount = 0;
      realParam = 0;
      sprintf( localValBuffer, "" );
     }
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 439 "syntax.y" /* yacc.c:1646  */
    {
      if( lookup( (yyvsp[-4].symType)->name, currentTable ) == NULL )
      {
       (yyvsp[-4].symType) = install((yyvsp[-4].symType)->name, &currentTable, currentLevel, ID);
      }
      else
      {
        char msg[100];
        sprintf( msg, "The Function %s redefinition: ", (yyvsp[-4].symType)->name );
        yyerror( msg );
      }
      if( *(yyvsp[-5].value)== 0 && params > 0 )
      {
       (yyvsp[-4].symType)->calltype = 0;
      }
      else
      {
       (yyvsp[-4].symType)->calltype = 1;
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = "";
      sprintf( funBuffer, "%s PROTO%s\n", (yyvsp[-4].symType)->name, (yyvsp[-2].exprType)->code );
     }
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 463 "syntax.y" /* yacc.c:1646  */
    {
 //     if( lookup( $2->name, currentTable ) == NULL )
 //     {
 //      $2 = install($2->name, &currentTable, currentLevel, ID);
 //     }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[-4].symType)->name ) * 2 + strlen( (yyvsp[-2].exprType)->code ) + strlen( (yyvsp[0].exprType)->code ) + strlen( localValBuffer ) + 20 );
 //     $2->calltype = 0;
      if( params > 0 )
      {
       sprintf( (yyval.exprType)->code, "%s PROC%s\n%s\tsub esp, %d\n%s\tret %d\n%s ENDP\n", (yyvsp[-4].symType)->name, (yyvsp[-2].exprType)->code, localValBuffer, (paramcount-realParam)*4, (yyvsp[0].exprType)->code, 4*params, (yyvsp[-4].symType)->name );
      }
      else
      {
       sprintf( (yyval.exprType)->code, "%s PROC%s\n%s\tsub esp, %d\n%s\tret\n%s ENDP\n", (yyvsp[-4].symType)->name, (yyvsp[-2].exprType)->code, localValBuffer, (paramcount-realParam)*4, (yyvsp[0].exprType)->code, (yyvsp[-4].symType)->name );
      }
      params = 0;
      paramcount = 0;
      realParam = 0;
      sprintf( localValBuffer, "" );
     }
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 485 "syntax.y" /* yacc.c:1646  */
    {
      if( lookup( (yyvsp[-4].symType)->name, currentTable ) == NULL )
      {
       (yyvsp[-4].symType) = install((yyvsp[-4].symType)->name, &currentTable, currentLevel, ID);
      }
      else
      {
       char msg[100];
       sprintf( msg, "The Function %s redefinition: ", (yyvsp[-4].symType)->name );
       yyerror( msg );
      }
      (yyvsp[-4].symType)->calltype = 0;
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = "";
      sprintf( funBuffer, "%s%s PROTO%s\n", funBuffer, (yyvsp[-4].symType)->name, (yyvsp[-2].exprType)->code );
     }
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 503 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[0].exprType)->code;
     }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 508 "syntax.y" /* yacc.c:1646  */
    {
      params = 0;
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = "";
     }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 515 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-2].exprType)->code ) + strlen( (yyvsp[0].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "%s%s", (yyvsp[-2].exprType)->code, (yyvsp[0].exprType)->code );
      params++;
     }
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 522 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[0].exprType)->code;
      params = 1;
     }
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 529 "syntax.y" /* yacc.c:1646  */
    {
      Symbol temp = install((yyvsp[0].symType)->name, &currentTable, currentLevel+1, ID);
      (yyval.exprType)->code = (char *) malloc( 100 );
      switch( *(yyvsp[-1].value) )
      {
       case 1:
        temp->ty = 1;
        yyerror( "Parameters Type Error: " );
        break;
       case 2:
        temp->ty = 2;
        sprintf( (yyval.exprType)->code, ", %s:DWORD", (yyvsp[0].symType)->name );
        break;
       case 3:
        temp->ty = 3;
        sprintf( (yyval.exprType)->code, ", %s:BYTE", (yyvsp[0].symType)->name );
        break;
       default:
        break;
      }
     }
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 551 "syntax.y" /* yacc.c:1646  */
    {
      Symbol temp = install((yyvsp[0].symType)->name, &currentTable, currentLevel+1, ID);
      (yyval.exprType)->code = (char *) malloc( 100 );
      switch( *(yyvsp[-2].value) )
      {
       case 1:
        temp->ty=11;
        sprintf( (yyval.exprType)->code, ", %s:PTR DWORD", (yyvsp[0].symType)->name );
        break;
       case 2:
        temp->ty=12;
        sprintf( (yyval.exprType)->code, ", %s:PTR WORD", (yyvsp[0].symType)->name );
        break;
       case 3:
        temp->ty=13;
        sprintf( (yyval.exprType)->code, ", %s:PTR BYTE", (yyvsp[0].symType)->name );
        break;
      }
     }
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 571 "syntax.y" /* yacc.c:1646  */
    {
      Symbol temp = install((yyvsp[-2].symType)->name, &currentTable, currentLevel+1, ID);
      (yyval.exprType)->code = (char *) malloc( 100 );
      switch( *(yyvsp[-3].value) )
      {
       case 1:
        temp->ty = 21;
        yyerror( "Parameters Type Error: " );
        break;
       case 2:
        temp->ty = 22;
        sprintf( (yyval.exprType)->code, ", %s:PTR WORD", (yyvsp[-2].symType)->name );
        break;
       case 3:
        temp->ty = 23;
        sprintf( (yyval.exprType)->code, ", %s:PTR BYTE", (yyvsp[-2].symType)->name );
        break;
      }
     }
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 591 "syntax.y" /* yacc.c:1646  */
    {
      Symbol temp = install((yyvsp[-2].symType)->name, &currentTable, currentLevel+1, ID);
      (yyval.exprType)->code = (char *) malloc( 100 );
      switch( *(yyvsp[-4].value) )
      {
       case 1:
        temp->ty = 31;
        sprintf( (yyval.exprType)->code, ", %s:DWORD", (yyvsp[-2].symType)->name );
        break;
       case 2:
        temp->ty = 32;
        sprintf( (yyval.exprType)->code, ", %s:DWORD", (yyvsp[-2].symType)->name );
        break;
       case 3:
        temp->ty = 33;
        sprintf( (yyval.exprType)->code, ", %s:DWORD", (yyvsp[-2].symType)->name );
        break;
      }

     }
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 613 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-2].exprType)->code ) + strlen( (yyvsp[-1].exprType)->code ) + 12 );
      sprintf( (yyval.exprType)->code, "%s%s", (yyvsp[-2].exprType)->code, (yyvsp[-1].exprType)->code );
     }
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 620 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = "";
     }
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 625 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-1].exprType)->code ) + strlen( (yyvsp[0].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "%s%s", (yyvsp[-1].exprType)->code, (yyvsp[0].exprType)->code );
     }
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 632 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 2 );
      (yyval.exprType)->code = "";
     }
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 638 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-1].exprType)->code ) + strlen( (yyvsp[0].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "%s%s", (yyvsp[-1].exprType)->code, (yyvsp[0].exprType)->code );
     }
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 645 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[0].exprType)->code )+20 );
      sprintf( (yyval.exprType)->code, "%s\n", (yyvsp[0].exprType)->code );
     }
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 651 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[0].exprType)->code;
     }
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 656 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[0].exprType)->code;
     }
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 661 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[0].exprType)->code;
     }
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 666 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[0].exprType)->code;
     }
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 672 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      //$$->code = (char *) malloc( strlen( $1->code )+20 );
      (yyval.exprType)->code= (yyvsp[-1].exprType)->code;
     }
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 678 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 2 );
      sprintf( (yyval.exprType)->code, "" );
     }
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 685 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-2].exprType)->code ) + strlen( (yyvsp[0].exprType)->code ) + strlen( (yyvsp[-2].exprType)->temp ) + 30 );
      sprintf( (yyval.exprType)->code, "%s\t.IF %s\n%s\t.ENDIF\n", (yyvsp[-2].exprType)->temp, (yyvsp[-2].exprType)->code, (yyvsp[0].exprType)->code );
     }
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 691 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-4].exprType)->code ) + strlen( (yyvsp[-2].exprType)->code ) + strlen( (yyvsp[-4].exprType)->temp ) + strlen( (yyvsp[0].exprType)->code ) + 10 );
      sprintf( (yyval.exprType)->code, "%s\t.IF %s\n%s\t.ELSE\n%s\t.ENDIF\n", (yyvsp[-4].exprType)->temp, (yyvsp[-4].exprType)->code, (yyvsp[-2].exprType)->code, (yyvsp[0].exprType)->code );
     }
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 698 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-2].exprType)->temp ) + strlen( (yyvsp[-2].exprType)->code ) + strlen( (yyvsp[0].exprType)->code ) + strlen((yyvsp[-2].exprType)->temp)  + 10 );
      sprintf( (yyval.exprType)->code, "_label%d:\n%s\t.IF !( %s ) \n\tjmp _label%d\n\t.ENDIF\n%s\tjmp _label%d\n_label%d:\n", label, (yyvsp[-2].exprType)->temp, (yyvsp[-2].exprType)->code,label+1, (yyvsp[0].exprType)->code, label, label + 1 );
      label += 2;
     }
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 706 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 15 );
      sprintf( (yyval.exprType)->code, "\tmov eax, 0\n\tret\n" );
     }
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 712 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-1].exprType)->name ) + strlen( (yyvsp[-1].exprType)->code ) + 15 );
      sprintf( (yyval.exprType)->code, "%s\tmov eax, %s\n\tret\n", (yyvsp[-1].exprType)->code, (yyvsp[-1].exprType)->name );
     }
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 719 "syntax.y" /* yacc.c:1646  */
    {

      if( (yyvsp[-2].exprType)->value == 0 )
      {
       (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
       (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-2].exprType)->code ) + strlen( (yyvsp[0].exprType)->code )+ strlen( (yyvsp[0].exprType)->name ) + 100 );
       sprintf( (yyval.exprType)->code, "%s\tmov eax, %s\n\tmov %s, eax\n", (yyvsp[0].exprType)->code, (yyvsp[0].exprType)->name, (yyvsp[-2].exprType)->code );
       (yyval.exprType)->name = (char *)malloc( sizeof( (yyvsp[-2].exprType)->name ) );
       sprintf( (yyval.exprType)->name, "%s", (yyvsp[-2].exprType)->name );
       (yyval.exprType)->temp = (yyval.exprType)->code;
      }
      else
      {


       (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
	 (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-2].exprType)->name ) + strlen( (yyvsp[-2].exprType)->code ) + strlen( (yyvsp[0].exprType)->code )+ strlen( (yyvsp[0].exprType)->name ) + 100 );
	sprintf( (yyval.exprType)->code, "%s\tmov eax, %s\n%s\tmov %s, eax\n", (yyvsp[0].exprType)->code, (yyvsp[0].exprType)->name, (yyvsp[-2].exprType)->code, (yyvsp[-2].exprType)->name );
  //   sprintf( s, "%s\tmov eax, ", $3->code );
  // 	 sprintf( s, "%s%s\n", s, $3->name );
  //   sprintf( s, "%s%s\tmov ", s, $1->code );
  //   sprintf( s, "%s%s, eax\n", s, $1->name );
       //$$->code = (char *) malloc( strlen( $1->name ) + strlen( $1->code ) + strlen( $3->code )+ strlen( $3->name ) + 100 );
      // $$->code = s;
       (yyval.exprType)->name = (char *)malloc( sizeof( (yyvsp[-2].exprType)->code ) );
       sprintf( (yyval.exprType)->name, "%s", (yyvsp[-2].exprType)->code );
       (yyval.exprType)->temp = (yyval.exprType)->code;

      }
     }
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 750 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[0].exprType)->code ) + 1 );
      (yyval.exprType)->name = (yyvsp[0].exprType)->name;
      sprintf( (yyval.exprType)->code, "%s", (yyvsp[0].exprType)->code );
      (yyval.exprType)->temp = (yyvsp[0].exprType)->temp;
     }
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 759 "syntax.y" /* yacc.c:1646  */
    {
      if( lookup( (yyvsp[0].symType)->name, currentTable ) == NULL )
      {
       char msg[100];
       sprintf( msg, "Variable %s haven't been defined: ", (yyvsp[0].symType)->name );
       yyerror( msg );
      }
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[0].symType)->name ) + 1 );
      sprintf( (yyval.exprType)->code, "%s", (yyvsp[0].symType)->name );
      (yyval.exprType)->is_const = 1;
      (yyval.exprType)->name = (yyvsp[0].symType)->name;
      (yyval.exprType)->value = 0;
     }
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 774 "syntax.y" /* yacc.c:1646  */
    {
      Symbol temp;
      if( (temp = lookup( (yyvsp[-3].symType)->name, currentTable )) == NULL )
      {
       char msg[100];
       sprintf( msg, "Variable %s haven't been defined: ", (yyvsp[-3].symType)->name );
       yyerror( msg );
      }
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-1].exprType)->code ) + strlen( (yyvsp[-1].exprType)->name ) + 10 );
      sprintf( (yyval.exprType)->code, "%s\tmov edi, %s\n", (yyvsp[-1].exprType)->code, (yyvsp[-1].exprType)->name );
      (yyval.exprType)->name = (char *)malloc( sizeof( (yyvsp[-3].symType)->name ) );
      sprintf( (yyval.exprType)->name, "DWORD ptr %s[edi]", (yyvsp[-3].symType)->name );
      (yyval.exprType)->temp = (yyval.exprType)->code;
      (yyval.exprType)->value = 1;
     }
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 791 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[0].symType)->name ) + 10 );
      sprintf( (yyval.exprType)->code, "\tmov esi, %s\n", (yyvsp[0].symType)->name );
      (yyval.exprType)->name = (char *)malloc( sizeof( 6 ) );
      sprintf( (yyval.exprType)->name, "DWORD PTR [esi]" );
      (yyval.exprType)->value = 1;
     }
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 801 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc(  strlen( (yyvsp[0].exprType)->name ) + strlen( (yyvsp[-1].exprType)->code ) + 5 );
      sprintf( (yyval.exprType)->code, "edx %s %s", (yyvsp[-1].exprType)->code, (yyvsp[0].exprType)->name );
      (yyval.exprType)->temp = (char *) malloc( strlen( (yyvsp[-2].exprType)->code ) +strlen( (yyvsp[-2].exprType)->code ) + strlen( (yyvsp[0].exprType)->code ) + 20 );
      sprintf( (yyval.exprType)->temp, "%s%s\tmov edx, %s\n", (yyvsp[0].exprType)->code, (yyvsp[-2].exprType)->code, (yyvsp[-2].exprType)->name );
     }
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 809 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->value = (yyvsp[0].exprType)->value;
      (yyval.exprType)->code = (yyvsp[0].exprType)->code;
      (yyval.exprType)->name = (yyvsp[0].exprType)->name;
     }
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 817 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 3 );
      sprintf( (yyval.exprType)->code, "<=" );
     }
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 823 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 2 );
      sprintf( (yyval.exprType)->code, "<" );
     }
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 829 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 2 );
      sprintf( (yyval.exprType)->code, ">" );
     }
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 835 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 3 );
      sprintf( (yyval.exprType)->code, ">=" );
     }
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 841 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 3 );
      sprintf( (yyval.exprType)->code, "==" );
     }
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 847 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 3 );
      sprintf( (yyval.exprType)->code, "!=" );
     }
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 854 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      switch( *(yyvsp[-1].op) )
      {
       case '+':
        (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[-2].exprType)->code) + strlen((yyvsp[-2].exprType)->name) + strlen((yyvsp[0].exprType)->name) + strlen((yyvsp[0].exprType)->code) + 1024 );
        sprintf( (yyval.exprType)->code, "%s%s\tmov eax, %s\n\tadd eax, %s\n", (yyvsp[-2].exprType)->code, (yyvsp[0].exprType)->code, (yyvsp[-2].exprType)->name, (yyvsp[0].exprType)->name );
        (yyval.exprType)->name = (char *) malloc( 20 );
        sprintf( (yyval.exprType)->name, "[ebp-%d]", 4*(paramcount+1) );
        paramcount++;
        sprintf( (yyval.exprType)->code, "%s\tmov %s, eax\n", (yyval.exprType)->code, (yyval.exprType)->name );
        break;
       case '-':
        (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[-2].exprType)->code) + strlen((yyvsp[-2].exprType)->name) + strlen((yyvsp[0].exprType)->name) + 1024 );
        sprintf( (yyval.exprType)->code, "%s%s\tmov eax, %s\n\tsub eax, %s\n", (yyvsp[0].exprType)->code, (yyvsp[-2].exprType)->code, (yyvsp[-2].exprType)->name, (yyvsp[0].exprType)->name );
        (yyval.exprType)->name = (char *) malloc( 20 );
        sprintf( (yyval.exprType)->name, "[ebp-%d]", 4*(paramcount+1) );
        paramcount++;
        sprintf( (yyval.exprType)->code, "%s\tmov %s, eax\n", (yyval.exprType)->code, (yyval.exprType)->name );
        break;
      }
      (yyval.exprType)->value = 0;
     }
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 878 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[0].exprType)->code ) + 1 );
      if( (yyvsp[0].exprType)->is_const == 1 )
      {
       strcpy( (yyval.exprType)->code, "" );
      }
      else
      {
       strcpy( (yyval.exprType)->code, (yyvsp[0].exprType)->code );
      }
      (yyval.exprType)->name = (yyvsp[0].exprType)->name;
      (yyval.exprType)->value = 1;
     }
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 894 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.op) = (char *) malloc( sizeof( char ) );
      *(yyval.op) = '+';
     }
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 899 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.op) = (char *) malloc( sizeof( char ) );
      *(yyval.op) = '-';
     }
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 905 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      switch( *(yyvsp[-1].op) )
      {
       case '*':
        (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[-2].exprType)->code) + strlen((yyvsp[-2].exprType)->name) + strlen((yyvsp[0].exprType)->name) + 1024 );
        sprintf( (yyval.exprType)->code, "%s\tmov eax, %s\n\tmov ebx, %s\n\timul ebx\n", (yyvsp[-2].exprType)->code, (yyvsp[-2].exprType)->name, (yyvsp[0].exprType)->name );
        (yyval.exprType)->name = (char *) malloc( 20 );
        sprintf( (yyval.exprType)->name, "[ebp-%d]", 4*(paramcount+1) );
        paramcount++;
        sprintf( (yyval.exprType)->code, "%s\tmov %s, eax\n", (yyval.exprType)->code, (yyval.exprType)->name );
        break;
       case '/':
        (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[-2].exprType)->code) + strlen((yyvsp[-2].exprType)->name) + strlen((yyvsp[0].exprType)->name) + 1024 );
        sprintf( (yyval.exprType)->code, "%s\tmov eax, %s\n\tcdq\n\tmov ebx, %s\n\tidiv ebx\n", (yyvsp[-2].exprType)->code, (yyvsp[-2].exprType)->name, (yyvsp[0].exprType)->name );
        (yyval.exprType)->name = (char *) malloc( 20 );
        sprintf( (yyval.exprType)->name, "[ebp-%d]", 4*(paramcount+1) );
        paramcount++;
        sprintf( (yyval.exprType)->code, "%s\tmov %s, eax\n", (yyval.exprType)->code, (yyval.exprType)->name );
        break;
       case '%':
        (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[-2].exprType)->code) + strlen((yyvsp[-2].exprType)->name) + strlen((yyvsp[0].exprType)->name) + 1024 );
        sprintf( (yyval.exprType)->code, "%s\tmov eax, %s\n\tcdq\n\tmov ebx, %s\n\tidiv ebx\n", (yyvsp[-2].exprType)->code, (yyvsp[-2].exprType)->name, (yyvsp[0].exprType)->name );
        (yyval.exprType)->name = (char *) malloc( 20 );
        sprintf( (yyval.exprType)->name, "[ebp-%d]", 4*(paramcount+1) );
        paramcount++;
        sprintf( (yyval.exprType)->code, "%s\tmov %s, edx\n", (yyval.exprType)->code, (yyval.exprType)->name );
        break;
      }
      (yyval.exprType)->is_const = 0;
     }
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 937 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[0].exprType)->code ) + 1 );
      if( (yyvsp[0].exprType)->is_const == 1 )
      {
       strcpy( (yyval.exprType)->code, "" );
      }
      else
      {
       strcpy( (yyval.exprType)->code, (yyvsp[0].exprType)->code );
      }
      (yyval.exprType)->name = (yyvsp[0].exprType)->name;
      (yyval.exprType)->is_const = (yyvsp[0].exprType)->is_const;
     }
#line 2489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 953 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.op) = (char *) malloc( sizeof( char ) );
      *(yyval.op) = '*';
     }
#line 2498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 958 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.op) = (char *) malloc( sizeof( char ) );
      *(yyval.op) = '/';
     }
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 963 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.op) = (char *) malloc( sizeof( char ) );
      *(yyval.op) = '%';
     }
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 969 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[0].exprType)->code ) + 10 );
      sprintf( (yyval.exprType)->code, "%s\tmov ebx, %s\n\tneg ebx\n", (yyvsp[0].exprType)->code, (yyvsp[0].exprType)->name );
      (yyval.exprType)->name = (char *) malloc( 6 );
      sprintf( (yyval.exprType)->name, "ebx" );
      (yyval.exprType)->is_const = 0;
     }
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 978 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[0].exprType)->code;
      (yyval.exprType)->name = (yyvsp[0].exprType)->name;
      (yyval.exprType)->is_const = (yyvsp[0].exprType)->is_const;
     }
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 986 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.op) = (char *) malloc( sizeof( char ) );
      *(yyval.op) = NEG;//用数NEG表示负号;
     }
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 992 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-1].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "%s", (yyvsp[-1].exprType)->code );
      (yyval.exprType)->name = (yyvsp[-1].exprType)->name;
      (yyval.exprType)->is_const = 0;
     }
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1000 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      if( (yyvsp[0].exprType)->value == 0 )
      {
       (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[0].exprType)->code ) + 1 );
       sprintf( (yyval.exprType)->code, "%s", (yyvsp[0].exprType)->code );
       (yyval.exprType)->name = (yyvsp[0].exprType)->name;
       (yyval.exprType)->is_const = 1;
      }
      else if( (yyvsp[0].exprType)->value == 1 )
      {
       (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[0].exprType)->name ) + 1 );
       sprintf( (yyval.exprType)->code, "%s", (yyvsp[0].exprType)->name );
       (yyval.exprType)->name = (yyvsp[0].exprType)->code;
       (yyval.exprType)->is_const = 1;
      }
     }
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1018 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[0].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code,"%s", (yyvsp[0].exprType)->code );
      (yyval.exprType)->name = ( char * )malloc(4);
      sprintf( (yyval.exprType)->name, "eax" );
      (yyval.exprType)->code = (yyvsp[0].exprType)->code;
      (yyval.exprType)->is_const = 0;
     }
#line 2597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1028 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[0].symType)->name ) + 1 );
      sprintf( (yyval.exprType)->code, "" );
      (yyval.exprType)->is_const = 1;
      (yyval.exprType)->value = atoi( (yyvsp[0].symType)->name );
      (yyval.exprType)->name = (yyvsp[0].symType)->name;
     }
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1037 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[0].symType)->name ) + 1 );
      sprintf( (yyval.exprType)->code, "" );
      (yyval.exprType)->is_const = 1;
      (yyval.exprType)->name = (char *) malloc( 20 );
      sprintf( (yyval.exprType)->name, "_msg%d", msgIndex );
      sprintf( varBuffer, "%s\t%s BYTE %s, 0\n", varBuffer, (yyval.exprType)->name, (yyvsp[0].symType)->name );
      sprintf( (yyval.exprType)->name, "offset _msg%d", msgIndex );
      msgIndex++;
     }
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1050 "syntax.y" /* yacc.c:1646  */
    {
      if( lookup( (yyvsp[-3].symType)->name, currentTable ) == NULL )
      {
        char msg[100];
        sprintf( msg, "The Function %s must be declared: ", (yyvsp[-3].symType)->name );
        yyerror( msg );
      }

      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[-3].symType)->name ) + strlen( (yyvsp[-1].exprType)->code) + 50 );
      sprintf( (yyval.exprType)->code, "%s\tcall %s\n", (yyvsp[-1].exprType)->code, (yyvsp[-3].symType)->name );
     }
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1064 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 1 );
      sprintf( (yyval.exprType)->code, "" );
     }
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1070 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[0].exprType)->code) + strlen( (yyvsp[0].exprType)->temp ) + 1 );
      sprintf( (yyval.exprType)->code, "%s%s", (yyvsp[0].exprType)->temp, (yyvsp[0].exprType)->code );
     }
#line 2663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1077 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[-2].exprType)->code) + strlen((yyvsp[0].exprType)->code) + 10 );
      sprintf( (yyval.exprType)->code, "\tpush %s\n%s", (yyvsp[0].exprType)->name, (yyvsp[-2].exprType)->code );
      (yyval.exprType)->temp = (char *) malloc(  strlen( (yyvsp[-2].exprType)->temp ) + strlen( (yyvsp[0].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->temp, "%s%s", (yyvsp[-2].exprType)->temp, (yyvsp[0].exprType)->code );
      callparam++;
     }
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1086 "syntax.y" /* yacc.c:1646  */
    {
      callparam = 1;
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[0].exprType)->name ) + 10 );
      sprintf( (yyval.exprType)->code, "\tpush %s\n", (yyvsp[0].exprType)->name );
      (yyval.exprType)->temp = (char *) malloc( strlen( (yyvsp[0].exprType)->code ) + 10 );
      sprintf( (yyval.exprType)->temp, "%s", (yyvsp[0].exprType)->code );
     }
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1096 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.value) = (expr *)malloc(sizeof(expr));
      *(yyval.value) = 1;
     }
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1101 "syntax.y" /* yacc.c:1646  */
    {
      (yyval.value) = (expr *) malloc( sizeof( expr ) );
      *(yyval.value) = 0;
     }
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2711 "y.tab.c" /* yacc.c:1646  */
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
#line 1107 "syntax.y" /* yacc.c:1906  */

/*#include "Lex.yy.c"*/
int yyparse();
void yyerror();

extern FILE *yyin,*yyout;
extern int lineno;
extern char *yytext;

int main( int argc, char **argv )
{
 FILE *fp ;

 currentTable = table( NULL, 0 );
 currentLevel = 0;
 ++argv;
 --argc;
 if(argc > 0)
  yyin = fopen(argv[0],"r");
 else
  yyin = stdin;
 ++argv;
 --argc;
 if(argc > 0)
  yyout  = fopen(argv[0],"w");
 else
  yyout  = stdout;
// fp = fopen( "a.txt", "r" );
// yyin = fp;
// fp  = fopen( "c.asm", "w" );
// yyout = fp;
 return(yyparse());
}

void yyerror( char *temp )
{
 printf( "\nline %d: %s %s %d\n", lineno, temp, yytext,  currentLevel );
 exit(1);
}
