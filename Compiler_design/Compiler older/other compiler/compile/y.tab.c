
/* A Bison parser, made by GNU Bison 2.4.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntax.y"
 
 #include  "com.h"
int calltype=0;//函数调用方式__stdcall&__cdecl
int msgIndex = 0;//字符串索引
int label=0;//自动生成标号


/* Line 189 of yacc.c  */
#line 81 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 11 "syntax.y"
 
	int * value;
	struct symbol * symType;
	struct expression * exprType;
	char * op;
 


/* Line 214 of yacc.c  */
#line 180 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 192 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

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
/* YYNRULES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    18,    25,
      30,    38,    42,    49,    54,    62,    64,    66,    68,    76,
      84,    91,    98,   100,   102,   106,   108,   111,   115,   120,
     126,   131,   132,   135,   136,   139,   141,   143,   145,   147,
     149,   152,   154,   160,   168,   174,   177,   181,   185,   187,
     189,   194,   197,   201,   203,   205,   207,   209,   211,   213,
     215,   219,   221,   223,   225,   229,   231,   233,   235,   237,
     240,   242,   244,   248,   250,   252,   254,   256,   261,   262,
     264,   268,   270,   272
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    44,    -1,    44,    45,    -1,    45,    -1,
      46,    -1,    49,    -1,    48,    24,    34,    -1,    48,    24,
      35,    25,    36,    34,    -1,    48,    31,    24,    34,    -1,
      48,    31,    24,    35,    25,    36,    34,    -1,    48,    24,
      34,    -1,    48,    24,    35,    25,    36,    34,    -1,    48,
      31,    24,    34,    -1,    48,    31,    24,    35,    25,    36,
      34,    -1,    17,    -1,    18,    -1,    19,    -1,    48,    75,
      24,    37,    50,    38,    53,    -1,    48,    75,    24,    37,
      50,    38,    34,    -1,    48,    24,    37,    50,    38,    53,
      -1,    48,    24,    37,    50,    38,    34,    -1,    51,    -1,
      18,    -1,    51,    39,    52,    -1,    52,    -1,    48,    24,
      -1,    48,    31,    24,    -1,    48,    24,    35,    36,    -1,
      48,    31,    24,    35,    36,    -1,    40,    54,    55,    41,
      -1,    -1,    54,    47,    -1,    -1,    55,    56,    -1,    57,
      -1,    53,    -1,    58,    -1,    59,    -1,    60,    -1,    61,
      34,    -1,    34,    -1,     3,    37,    61,    38,    56,    -1,
       3,    37,    61,    38,    56,     4,    56,    -1,     5,    37,
      61,    38,    56,    -1,     6,    34,    -1,     6,    61,    34,
      -1,    62,    28,    61,    -1,    63,    -1,    24,    -1,    24,
      35,    61,    36,    -1,    31,    24,    -1,    65,    64,    65,
      -1,    65,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1,    13,    -1,    14,    -1,    65,    66,    67,    -1,    67,
      -1,    29,    -1,    30,    -1,    67,    68,    69,    -1,    69,
      -1,    31,    -1,    32,    -1,    33,    -1,    70,    69,    -1,
      71,    -1,    30,    -1,    37,    61,    38,    -1,    62,    -1,
      72,    -1,    25,    -1,    26,    -1,    24,    37,    73,    38,
      -1,    -1,    74,    -1,    74,    39,    61,    -1,    61,    -1,
       7,    -1,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    74,    80,    87,    94,   101,   132,   163,
     194,   226,   269,   312,   355,   399,   404,   409,   415,   439,
     463,   485,   503,   508,   515,   522,   529,   551,   571,   591,
     613,   621,   625,   633,   638,   645,   651,   656,   661,   666,
     672,   678,   685,   691,   698,   706,   712,   719,   750,   759,
     774,   791,   801,   809,   817,   823,   829,   835,   841,   847,
     854,   878,   894,   899,   905,   937,   953,   958,   963,   969,
     978,   986,   992,  1000,  1018,  1028,  1037,  1050,  1065,  1070,
    1077,  1086,  1096,  1101
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "calling_convention", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    61,    43,
      45,    42,    47,    37,    59,    91,    93,    40,    41,    44,
     123,   125
};
# endif

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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    54,    24,     9,    25,    26,
      27,    70,    49,    56,    71,    72,    73,    74,    75,    76,
      77,    78,   106,    79,   107,    80,   111,    81,    82,    83,
      84,   122,   123,    16
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -130
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,  -130,   124,  -130,  -130,     1,  -130,   113,  -130,
     109,   -23,  -130,  -130,  -129,  -130,  -130,  -130,  -130,   -61,
     -77,  -130,  -130,    25,  -130,    27,  -130,   -78,  -130,  -130,
    -130,  -130,  -130,  -130
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -24
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

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 64 "syntax.y"
    {
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[(1) - (1)].exprType)->code ) + 100 );
      sprintf( (yyval.exprType)->code, "%sEND main\n", (yyvsp[(1) - (1)].exprType)->code );
      fprintf( yyout, ".386\n.MODEL flat, stdcall\n.Stack 4096\n" );
      fprintf( yyout, "\n%s", funBuffer );
      fprintf( yyout, "\n.data\n%s", varBuffer );
      fprintf( yyout, "\n.code\n%s", (yyval.exprType)->code );
     }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 75 "syntax.y"
    {
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[(1) - (2)].exprType)->code ) + strlen( (yyvsp[(2) - (2)].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "%s%s", (yyvsp[(1) - (2)].exprType)->code, (yyvsp[(2) - (2)].exprType)->code );
     }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 81 "syntax.y"
    {
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[(1) - (1)].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "%s", (yyvsp[(1) - (1)].exprType)->code );
     }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 88 "syntax.y"
    {
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[(1) - (1)].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "");
      sprintf( varBuffer, "%s%s", varBuffer, (yyvsp[(1) - (1)].exprType)->code ); 
     }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 95 "syntax.y"
    {
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[(1) - (1)].exprType)->code ) + 10 );
      sprintf( (yyval.exprType)->code, "%s", (yyvsp[(1) - (1)].exprType)->code );
     }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 102 "syntax.y"
    {
      if( lookup( (yyvsp[(2) - (3)].symType)->name, currentTable ) == NULL )
      {
       (yyvsp[(2) - (3)].symType) = install((yyvsp[(2) - (3)].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[(2) - (3)].symType)->isLocal = 0;
      }
      else
      {
       char msg[100];
       sprintf( msg, "Variable %s redefinition: ", (yyvsp[(2) - (3)].symType)->name );
       yyerror( msg );
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(2) - (3)].symType)->name ) + 13 );
      switch( *(yyvsp[(1) - (3)].value) )
      {
       case 1:
        (yyvsp[(2) - (3)].symType)->ty = 1;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[(2) - (3)].symType)->ty = 2;
        sprintf( (yyval.exprType)->code, " %s DWORD 0\n", (yyvsp[(2) - (3)].symType)->name );
        break;
       case 3:
        (yyvsp[(2) - (3)].symType)->ty = 3;
        sprintf( (yyval.exprType)->code, " %s BYTE 0\n", (yyvsp[(2) - (3)].symType)->name );
        break;
      }
     }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 133 "syntax.y"
    {
      if( lookup( (yyvsp[(2) - (6)].symType)->name, currentTable ) == NULL )
      {
       (yyvsp[(2) - (6)].symType) = install((yyvsp[(2) - (6)].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[(2) - (6)].symType)->isLocal = 0;
      }
      else
      {
       char msg[100];
       sprintf( msg, "Variable %s redefinition: ", (yyvsp[(2) - (6)].symType)->name );
       yyerror( msg );
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(2) - (6)].symType)->name ) + strlen( (yyvsp[(4) - (6)].symType)->name ) + 13 );
      switch( *(yyvsp[(1) - (6)].value) )
      {
       case 1:
        (yyvsp[(2) - (6)].symType)->ty = 21;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[(2) - (6)].symType)->ty = 22;
        sprintf( (yyval.exprType)->code, " %s DWORD %s DUP(0)\n", (yyvsp[(2) - (6)].symType)->name, (yyvsp[(4) - (6)].symType)->name );
        break;
       case 3:
        (yyvsp[(2) - (6)].symType)->ty = 23;
        sprintf( (yyval.exprType)->code, " %s BYTE %s DUP(0)\n", (yyvsp[(2) - (6)].symType)->name, (yyvsp[(4) - (6)].symType)->name );
        break;
      }
     }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 164 "syntax.y"
    {
      if( lookup( (yyvsp[(3) - (4)].symType)->name, currentTable ) == NULL )
      {
       (yyvsp[(3) - (4)].symType) = install((yyvsp[(3) - (4)].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[(3) - (4)].symType)->isLocal = 0;
      }
      else
      {
       char msg[100];
       sprintf( msg, "Variable %s redefinition: ", (yyvsp[(3) - (4)].symType)->name );
       yyerror( msg );
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(3) - (4)].symType)->name ) + 13 );
      switch( *(yyvsp[(1) - (4)].value) )
      {
       case 1:
        (yyvsp[(3) - (4)].symType)->ty = 11;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[(3) - (4)].symType)->ty = 12;
        sprintf( (yyval.exprType)->code, " %s PTR DWORD 0\n", (yyvsp[(3) - (4)].symType)->name );
        break;
       case 3:
        (yyvsp[(3) - (4)].symType)->ty = 13;
        sprintf( (yyval.exprType)->code, " %s PTR BYTE 0\n", (yyvsp[(3) - (4)].symType)->name );
        break;
      }
     }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 195 "syntax.y"
    {
      if( lookup( (yyvsp[(3) - (7)].symType)->name, currentTable ) == NULL )
      {
       (yyvsp[(3) - (7)].symType) = install((yyvsp[(3) - (7)].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[(3) - (7)].symType)->isLocal = 0;
      }
      else
      {
       char msg[100];
       sprintf( msg, "Variable %s redefinition: ", (yyvsp[(3) - (7)].symType)->name );
       yyerror( msg );
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(3) - (7)].symType)->name ) + strlen( (yyvsp[(5) - (7)].symType)->name ) + 13 );
      switch( *(yyvsp[(1) - (7)].value) )
      {
       case 1:
        (yyvsp[(3) - (7)].symType)->ty = 31;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[(3) - (7)].symType)->ty = 32;
        sprintf( (yyval.exprType)->code, " %s PTR DWORD %s DUP(0)\n", (yyvsp[(3) - (7)].symType)->name, (yyvsp[(5) - (7)].symType)->name );
        break;
       case 3:
        (yyvsp[(3) - (7)].symType)->ty = 33;
        sprintf( (yyval.exprType)->code, " %s PTR BYTE %s DUP(0)\n", (yyvsp[(3) - (7)].symType)->name, (yyvsp[(5) - (7)].symType)->name );
        break;
      }
     }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 227 "syntax.y"
    {
      Symbol temp;
      if( (temp = lookup( (yyvsp[(2) - (3)].symType)->name, currentTable )) == NULL )
      {
       (yyvsp[(2) - (3)].symType) = install((yyvsp[(2) - (3)].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[(2) - (3)].symType)->isLocal = 1;
      }
      else
      {
       if( temp->scope == currentLevel )
       {
        char msg[100];
        sprintf( msg, "Variable %s redefinition: ", (yyvsp[(2) - (3)].symType)->name );
        yyerror( msg );
       }
       else
       {
        (yyvsp[(2) - (3)].symType) = install((yyvsp[(2) - (3)].symType)->name, &currentTable, currentLevel, ID);
        (yyvsp[(2) - (3)].symType)->isLocal = 1; 
       }
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(2) - (3)].symType)->name ) + 13 );
      switch( *(yyvsp[(1) - (3)].value) )
      {
       case 1:
        (yyvsp[(2) - (3)].symType)->ty = 1;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[(2) - (3)].symType)->ty = 2;
        sprintf( localValBuffer, "%s\tlocal %s:DWORD\n", localValBuffer, (yyvsp[(2) - (3)].symType)->name );
        break;
       case 3:
        (yyvsp[(2) - (3)].symType)->ty = 3;
        sprintf( localValBuffer, "%s\tlocal %s:BYTE\n", localValBuffer, (yyvsp[(2) - (3)].symType)->name );
        break;
      }
      sprintf( (yyval.exprType)->code, "" );
      paramcount++;
      realParam++;
     }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 270 "syntax.y"
    {
      Symbol temp;
      if( (temp = lookup( (yyvsp[(2) - (6)].symType)->name, currentTable )) == NULL )
      {
       (yyvsp[(2) - (6)].symType) = install((yyvsp[(2) - (6)].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[(2) - (6)].symType)->isLocal = 1;
      }
      else
      {
       if( temp->scope == currentLevel )
       {
        char msg[100];
        sprintf( msg, "Variable %s redefinition: ", (yyvsp[(2) - (6)].symType)->name );
        yyerror( msg );
       }
       else
       {
        (yyvsp[(2) - (6)].symType) = install((yyvsp[(2) - (6)].symType)->name, &currentTable, currentLevel, ID);
        (yyvsp[(2) - (6)].symType)->isLocal = 1; 
       }
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(2) - (6)].symType)->name ) + strlen( (yyvsp[(4) - (6)].symType)->name ) + 13 );
      switch( *(yyvsp[(1) - (6)].value) )
      {
       case 1:
        (yyvsp[(2) - (6)].symType)->ty = 21;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[(2) - (6)].symType)->ty = 22;
        sprintf( localValBuffer, "%s\tlocal %s[%s]:DWORD\n", localValBuffer, (yyvsp[(2) - (6)].symType)->name, (yyvsp[(4) - (6)].symType)->name );
        break;
       case 3:
        (yyvsp[(2) - (6)].symType)->ty = 23;
        sprintf( localValBuffer, "%s\tlocal %s[%s]:BYTE\n", localValBuffer, (yyvsp[(2) - (6)].symType)->name, (yyvsp[(4) - (6)].symType)->name );
        break;
      }
      sprintf( (yyval.exprType)->code, "" );
      paramcount++;
      realParam++;
     }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 313 "syntax.y"
    {
      Symbol temp;
      if( (temp = lookup( (yyvsp[(3) - (4)].symType)->name, currentTable )) == NULL )
      {
       (yyvsp[(3) - (4)].symType) = install((yyvsp[(3) - (4)].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[(3) - (4)].symType)->isLocal = 1;
      }
      else
      {
       if( temp->scope == currentLevel )
       {
        char msg[100];
        sprintf( msg, "Variable %s redefinition: ", (yyvsp[(3) - (4)].symType)->name );
        yyerror( msg );
       }
       else
       {
        (yyvsp[(3) - (4)].symType) = install((yyvsp[(3) - (4)].symType)->name, &currentTable, currentLevel, ID);
        (yyvsp[(3) - (4)].symType)->isLocal = 1; 
       }
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(3) - (4)].symType)->name ) + 13 );
      switch( *(yyvsp[(1) - (4)].value) )
      {
       case 1:
        (yyvsp[(3) - (4)].symType)->ty = 11;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[(3) - (4)].symType)->ty = 12;
        sprintf( localValBuffer, "\tlocal %s:PTR WORD\n", (yyvsp[(3) - (4)].symType)->name );
        break;
       case 3:
        (yyvsp[(3) - (4)].symType)->ty = 13;
        sprintf( localValBuffer, "\tlocal %s:PTR BYTE\n", (yyvsp[(3) - (4)].symType)->name );
        break;
      }
      sprintf( (yyval.exprType)->code, "" );
      paramcount++;
      realParam++;
     }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 356 "syntax.y"
    {
      Symbol temp;
      if( (temp = lookup( (yyvsp[(3) - (7)].symType)->name, currentTable )) == NULL )
      {
       (yyvsp[(3) - (7)].symType) = install((yyvsp[(3) - (7)].symType)->name, &currentTable, currentLevel, ID);
       (yyvsp[(3) - (7)].symType)->isLocal = 1;
      }
      else
      {
       if( temp->scope == currentLevel )
       {
        char msg[100];
        sprintf( msg, "Variable %s redefinition: ", (yyvsp[(3) - (7)].symType)->name );
        yyerror( msg );
       }
       else
       {
        (yyvsp[(3) - (7)].symType) = install((yyvsp[(3) - (7)].symType)->name, &currentTable, currentLevel, ID);
        (yyvsp[(3) - (7)].symType)->isLocal = 1; 
       }
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(3) - (7)].symType)->name ) + strlen( (yyvsp[(5) - (7)].symType)->name ) + 13 );
      switch( *(yyvsp[(1) - (7)].value) )
      {
       case 1:
        (yyvsp[(3) - (7)].symType)->ty = 31;
        yyerror( "Type Error: " );
        break;
       case 2:
        (yyvsp[(3) - (7)].symType)->ty = 32;
        sprintf( localValBuffer, "\tlocal %s[%s]:DWORD\n", (yyvsp[(3) - (7)].symType)->name, (yyvsp[(5) - (7)].symType)->name );
        break;
       case 3:
        (yyvsp[(3) - (7)].symType)->ty = 33;
        sprintf( localValBuffer, "\tlocal %s[%s]:BYTE\n", (yyvsp[(3) - (7)].symType)->name, (yyvsp[(5) - (7)].symType)->name );
        break;
      }
      sprintf( (yyval.exprType)->code, "" );
      paramcount++;
      realParam++;
     }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 400 "syntax.y"
    {
      (yyval.value) = (int*)malloc( sizeof( int ) );
      *(yyval.value) = 2;
     }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 405 "syntax.y"
    {
      (yyval.value) = (int*)malloc( sizeof( int ) );
      *(yyval.value) = 1;
     }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 410 "syntax.y"
    {
      (yyval.value) = (int*)malloc( sizeof( int ) );
      *(yyval.value) = 3;
     }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 416 "syntax.y"
    {
      
//      if( lookup( $3->name, currentTable ) == NULL )
//      {
//       $3 = install($3->name, &currentTable, currentLevel, ID);
//      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[(3) - (7)].symType)->name )*2 + strlen( (yyvsp[(5) - (7)].exprType)->code ) + strlen( (yyvsp[(7) - (7)].exprType)->code ) + strlen( localValBuffer ) + 12 );
      if( *(yyvsp[(2) - (7)].value)== 0 && params > 0 )
      {
//       $3->calltype = 0;
       sprintf( (yyval.exprType)->code, "%s PROC%s\n%s\tsub esp, %d\n%s\tret %d\n%s ENDP\n", (yyvsp[(3) - (7)].symType)->name, (yyvsp[(5) - (7)].exprType)->code,localValBuffer, (paramcount-realParam)*4, (yyvsp[(7) - (7)].exprType)->code,  4*params, (yyvsp[(3) - (7)].symType)->name );
      }
      else
      {
//       $3->calltype = 1;
       sprintf( (yyval.exprType)->code, "%s PROC%s\n%s\tsub esp, %d\n%s\tret\n%s ENDP\n", (yyvsp[(3) - (7)].symType)->name, (yyvsp[(5) - (7)].exprType)->code, localValBuffer, (paramcount-realParam)*4,(yyvsp[(7) - (7)].exprType)->code, (yyvsp[(3) - (7)].symType)->name ); 
      }
      params = 0;
      paramcount = 0;
      realParam = 0;
      sprintf( localValBuffer, "" );
     }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 440 "syntax.y"
    {
      if( lookup( (yyvsp[(3) - (7)].symType)->name, currentTable ) == NULL )
      {
       (yyvsp[(3) - (7)].symType) = install((yyvsp[(3) - (7)].symType)->name, &currentTable, currentLevel, ID);
      }
      else
      {
        char msg[100];
        sprintf( msg, "The Function %s redefinition: ", (yyvsp[(3) - (7)].symType)->name );
        yyerror( msg );       
      }
      if( *(yyvsp[(2) - (7)].value)== 0 && params > 0 )
      {
       (yyvsp[(3) - (7)].symType)->calltype = 0;
      }
      else
      {
       (yyvsp[(3) - (7)].symType)->calltype = 1; 
      }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = "";
      sprintf( funBuffer, "%s PROTO%s\n", (yyvsp[(3) - (7)].symType)->name, (yyvsp[(5) - (7)].exprType)->code );
     }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 464 "syntax.y"
    {
 //     if( lookup( $2->name, currentTable ) == NULL )
 //     {
 //      $2 = install($2->name, &currentTable, currentLevel, ID);
 //     }
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = ( char * ) malloc( strlen( (yyvsp[(2) - (6)].symType)->name ) * 2 + strlen( (yyvsp[(4) - (6)].exprType)->code ) + strlen( (yyvsp[(6) - (6)].exprType)->code ) + strlen( localValBuffer ) + 20 );
 //     $2->calltype = 0;
      if( params > 0 )
      {
       sprintf( (yyval.exprType)->code, "%s PROC%s\n%s\tsub esp, %d\n%s\tret %d\n%s ENDP\n", (yyvsp[(2) - (6)].symType)->name, (yyvsp[(4) - (6)].exprType)->code, localValBuffer, (paramcount-realParam)*4, (yyvsp[(6) - (6)].exprType)->code, 4*params, (yyvsp[(2) - (6)].symType)->name );
      }
      else
      {
       sprintf( (yyval.exprType)->code, "%s PROC%s\n%s\tsub esp, %d\n%s\tret\n%s ENDP\n", (yyvsp[(2) - (6)].symType)->name, (yyvsp[(4) - (6)].exprType)->code, localValBuffer, (paramcount-realParam)*4, (yyvsp[(6) - (6)].exprType)->code, (yyvsp[(2) - (6)].symType)->name );
      }
      params = 0;
      paramcount = 0;
      realParam = 0;
      sprintf( localValBuffer, "" );
     }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 486 "syntax.y"
    {
      if( lookup( (yyvsp[(2) - (6)].symType)->name, currentTable ) == NULL )
      {
       (yyvsp[(2) - (6)].symType) = install((yyvsp[(2) - (6)].symType)->name, &currentTable, currentLevel, ID);
      }
      else
      {
       char msg[100];
       sprintf( msg, "The Function %s redefinition: ", (yyvsp[(2) - (6)].symType)->name );
       yyerror( msg );
      }
      (yyvsp[(2) - (6)].symType)->calltype = 0;
      (yyval.exprType) = ( expr * ) malloc( sizeof( expr ) );
      (yyval.exprType)->code = "";
      sprintf( funBuffer, "%s%s PROTO%s\n", funBuffer, (yyvsp[(2) - (6)].symType)->name, (yyvsp[(4) - (6)].exprType)->code );
     }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 504 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[(1) - (1)].exprType)->code;
     }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 509 "syntax.y"
    {
      params = 0;
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = "";
     }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 516 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (3)].exprType)->code ) + strlen( (yyvsp[(3) - (3)].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "%s%s", (yyvsp[(1) - (3)].exprType)->code, (yyvsp[(3) - (3)].exprType)->code );
      params++;
     }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 523 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[(1) - (1)].exprType)->code;
      params = 1;
     }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 530 "syntax.y"
    {
      Symbol temp = install((yyvsp[(2) - (2)].symType)->name, &currentTable, currentLevel+1, ID);
      (yyval.exprType)->code = (char *) malloc( 100 );
      switch( *(yyvsp[(1) - (2)].value) )
      {
       case 1:
        temp->ty = 1;
        yyerror( "Parameters Type Error: " );
        break;
       case 2:
        temp->ty = 2;
        sprintf( (yyval.exprType)->code, ", %s:DWORD", (yyvsp[(2) - (2)].symType)->name );
        break;
       case 3:
        temp->ty = 3;
        sprintf( (yyval.exprType)->code, ", %s:BYTE", (yyvsp[(2) - (2)].symType)->name );
        break;
       default:
        break;
      }
     }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 552 "syntax.y"
    {
      Symbol temp = install((yyvsp[(3) - (3)].symType)->name, &currentTable, currentLevel+1, ID);
      (yyval.exprType)->code = (char *) malloc( 100 );
      switch( *(yyvsp[(1) - (3)].value) )
      {
       case 1:
        temp->ty=11;
        sprintf( (yyval.exprType)->code, ", %s:PTR DWORD", (yyvsp[(3) - (3)].symType)->name );
        break;
       case 2:
        temp->ty=12;
        sprintf( (yyval.exprType)->code, ", %s:PTR WORD", (yyvsp[(3) - (3)].symType)->name );
        break;
       case 3:
        temp->ty=13;
        sprintf( (yyval.exprType)->code, ", %s:PTR BYTE", (yyvsp[(3) - (3)].symType)->name );
        break;
      }
     }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 572 "syntax.y"
    {
      Symbol temp = install((yyvsp[(2) - (4)].symType)->name, &currentTable, currentLevel+1, ID);
      (yyval.exprType)->code = (char *) malloc( 100 );
      switch( *(yyvsp[(1) - (4)].value) )
      {
       case 1:
        temp->ty = 21;
        yyerror( "Parameters Type Error: " );
        break;
       case 2:
        temp->ty = 22;
        sprintf( (yyval.exprType)->code, ", %s:PTR WORD", (yyvsp[(2) - (4)].symType)->name );
        break;
       case 3:
        temp->ty = 23;
        sprintf( (yyval.exprType)->code, ", %s:PTR BYTE", (yyvsp[(2) - (4)].symType)->name );
        break;
      }
     }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 592 "syntax.y"
    {
      Symbol temp = install((yyvsp[(3) - (5)].symType)->name, &currentTable, currentLevel+1, ID);
      (yyval.exprType)->code = (char *) malloc( 100 );
      switch( *(yyvsp[(1) - (5)].value) )
      {
       case 1:
        temp->ty = 31;
        sprintf( (yyval.exprType)->code, ", %s:DWORD", (yyvsp[(3) - (5)].symType)->name );
        break;
       case 2:
        temp->ty = 32;
        sprintf( (yyval.exprType)->code, ", %s:DWORD", (yyvsp[(3) - (5)].symType)->name );
        break;
       case 3:
        temp->ty = 33;
        sprintf( (yyval.exprType)->code, ", %s:DWORD", (yyvsp[(3) - (5)].symType)->name );
        break;
      }
      
     }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 614 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(2) - (4)].exprType)->code ) + strlen( (yyvsp[(3) - (4)].exprType)->code ) + 12 );
      sprintf( (yyval.exprType)->code, "%s%s", (yyvsp[(2) - (4)].exprType)->code, (yyvsp[(3) - (4)].exprType)->code );
     }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 621 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = "";
     }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 626 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (2)].exprType)->code ) + strlen( (yyvsp[(2) - (2)].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "%s%s", (yyvsp[(1) - (2)].exprType)->code, (yyvsp[(2) - (2)].exprType)->code );
     }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 633 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 2 );
      (yyval.exprType)->code = "";
     }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 639 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (2)].exprType)->code ) + strlen( (yyvsp[(2) - (2)].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "%s%s", (yyvsp[(1) - (2)].exprType)->code, (yyvsp[(2) - (2)].exprType)->code );
     }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 646 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (1)].exprType)->code )+20 );
      sprintf( (yyval.exprType)->code, "%s\n", (yyvsp[(1) - (1)].exprType)->code );
     }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 652 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[(1) - (1)].exprType)->code;
     }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 657 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[(1) - (1)].exprType)->code;
     }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 662 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[(1) - (1)].exprType)->code;
     }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 667 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[(1) - (1)].exprType)->code;
     }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 673 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      //$$->code = (char *) malloc( strlen( $1->code )+20 );
      (yyval.exprType)->code= (yyvsp[(1) - (2)].exprType)->code;
     }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 679 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 2 );
      sprintf( (yyval.exprType)->code, "" );
     }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 686 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(3) - (5)].exprType)->code ) + strlen( (yyvsp[(5) - (5)].exprType)->code ) + strlen( (yyvsp[(3) - (5)].exprType)->temp ) + 30 );
      sprintf( (yyval.exprType)->code, "%s\t.IF %s\n%s\t.ENDIF\n", (yyvsp[(3) - (5)].exprType)->temp, (yyvsp[(3) - (5)].exprType)->code, (yyvsp[(5) - (5)].exprType)->code );
     }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 692 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(3) - (7)].exprType)->code ) + strlen( (yyvsp[(5) - (7)].exprType)->code ) + strlen( (yyvsp[(3) - (7)].exprType)->temp ) + strlen( (yyvsp[(7) - (7)].exprType)->code ) + 10 );
      sprintf( (yyval.exprType)->code, "%s\t.IF %s\n%s\t.ELSE\n%s\t.ENDIF\n", (yyvsp[(3) - (7)].exprType)->temp, (yyvsp[(3) - (7)].exprType)->code, (yyvsp[(5) - (7)].exprType)->code, (yyvsp[(7) - (7)].exprType)->code );
     }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 699 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(3) - (5)].exprType)->temp ) + strlen( (yyvsp[(3) - (5)].exprType)->code ) + strlen( (yyvsp[(5) - (5)].exprType)->code ) + strlen((yyvsp[(3) - (5)].exprType)->temp)  + 10 );
      sprintf( (yyval.exprType)->code, "_label%d:\n%s\t.IF !( %s ) \n\tjmp _label%d\n\t.ENDIF\n%s\tjmp _label%d\n_label%d:\n", label, (yyvsp[(3) - (5)].exprType)->temp, (yyvsp[(3) - (5)].exprType)->code,label+1, (yyvsp[(5) - (5)].exprType)->code, label, label + 1 );
      label += 2;
     }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 707 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 15 );
      sprintf( (yyval.exprType)->code, "\tmov eax, 0\n\tret\n" );
     }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 713 "syntax.y"
    {
      (yyval.exprType) = (expr*) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(2) - (3)].exprType)->name ) + strlen( (yyvsp[(2) - (3)].exprType)->code ) + 15 );
      sprintf( (yyval.exprType)->code, "%s\tmov eax, %s\n\tret\n", (yyvsp[(2) - (3)].exprType)->code, (yyvsp[(2) - (3)].exprType)->name );
     }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 720 "syntax.y"
    {
      
      if( (yyvsp[(1) - (3)].exprType)->value == 0 )
      {
       (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
       (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (3)].exprType)->code ) + strlen( (yyvsp[(3) - (3)].exprType)->code )+ strlen( (yyvsp[(3) - (3)].exprType)->name ) + 100 );
       sprintf( (yyval.exprType)->code, "%s\tmov eax, %s\n\tmov %s, eax\n", (yyvsp[(3) - (3)].exprType)->code, (yyvsp[(3) - (3)].exprType)->name, (yyvsp[(1) - (3)].exprType)->code );
       (yyval.exprType)->name = (char *)malloc( sizeof( (yyvsp[(1) - (3)].exprType)->name ) );
       sprintf( (yyval.exprType)->name, "%s", (yyvsp[(1) - (3)].exprType)->name );
       (yyval.exprType)->temp = (yyval.exprType)->code;
      }
      else
      {
       
       
       (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
	 (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (3)].exprType)->name ) + strlen( (yyvsp[(1) - (3)].exprType)->code ) + strlen( (yyvsp[(3) - (3)].exprType)->code )+ strlen( (yyvsp[(3) - (3)].exprType)->name ) + 100 );
	sprintf( (yyval.exprType)->code, "%s\tmov eax, %s\n%s\tmov %s, eax\n", (yyvsp[(3) - (3)].exprType)->code, (yyvsp[(3) - (3)].exprType)->name, (yyvsp[(1) - (3)].exprType)->code, (yyvsp[(1) - (3)].exprType)->name );
  //   sprintf( s, "%s\tmov eax, ", $3->code );
  // 	 sprintf( s, "%s%s\n", s, $3->name );
  //   sprintf( s, "%s%s\tmov ", s, $1->code );
  //   sprintf( s, "%s%s, eax\n", s, $1->name );
       //$$->code = (char *) malloc( strlen( $1->name ) + strlen( $1->code ) + strlen( $3->code )+ strlen( $3->name ) + 100 );
      // $$->code = s;
       (yyval.exprType)->name = (char *)malloc( sizeof( (yyvsp[(1) - (3)].exprType)->code ) );
       sprintf( (yyval.exprType)->name, "%s", (yyvsp[(1) - (3)].exprType)->code );
       (yyval.exprType)->temp = (yyval.exprType)->code; 
       
      }
     }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 751 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (1)].exprType)->code ) + 1 );
      (yyval.exprType)->name = (yyvsp[(1) - (1)].exprType)->name;
      sprintf( (yyval.exprType)->code, "%s", (yyvsp[(1) - (1)].exprType)->code );
      (yyval.exprType)->temp = (yyvsp[(1) - (1)].exprType)->temp;
     }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 760 "syntax.y"
    {
      if( lookup( (yyvsp[(1) - (1)].symType)->name, currentTable ) == NULL )
      {
       char msg[100];
       sprintf( msg, "Variable %s haven't been defined: ", (yyvsp[(1) - (1)].symType)->name );
       yyerror( msg );       
      }
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (1)].symType)->name ) + 1 );
      sprintf( (yyval.exprType)->code, "%s", (yyvsp[(1) - (1)].symType)->name );
      (yyval.exprType)->is_const = 1;
      (yyval.exprType)->name = (yyvsp[(1) - (1)].symType)->name;
      (yyval.exprType)->value = 0;
     }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 775 "syntax.y"
    {
      Symbol temp;
      if( (temp = lookup( (yyvsp[(1) - (4)].symType)->name, currentTable )) == NULL )
      {
       char msg[100];
       sprintf( msg, "Variable %s haven't been defined: ", (yyvsp[(1) - (4)].symType)->name );
       yyerror( msg );       
      }
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(3) - (4)].exprType)->code ) + strlen( (yyvsp[(3) - (4)].exprType)->name ) + 10 );
      sprintf( (yyval.exprType)->code, "%s\tmov edi, %s\n", (yyvsp[(3) - (4)].exprType)->code, (yyvsp[(3) - (4)].exprType)->name );
      (yyval.exprType)->name = (char *)malloc( sizeof( (yyvsp[(1) - (4)].symType)->name ) );
      sprintf( (yyval.exprType)->name, "DWORD ptr %s[edi]", (yyvsp[(1) - (4)].symType)->name );
      (yyval.exprType)->temp = (yyval.exprType)->code;
      (yyval.exprType)->value = 1;
     }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 792 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(2) - (2)].symType)->name ) + 10 );
      sprintf( (yyval.exprType)->code, "\tmov esi, %s\n", (yyvsp[(2) - (2)].symType)->name ); 
      (yyval.exprType)->name = (char *)malloc( sizeof( 6 ) );
      sprintf( (yyval.exprType)->name, "DWORD PTR [esi]" );
      (yyval.exprType)->value = 1;
     }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 802 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc(  strlen( (yyvsp[(3) - (3)].exprType)->name ) + strlen( (yyvsp[(2) - (3)].exprType)->code ) + 5 );
      sprintf( (yyval.exprType)->code, "edx %s %s", (yyvsp[(2) - (3)].exprType)->code, (yyvsp[(3) - (3)].exprType)->name );
      (yyval.exprType)->temp = (char *) malloc( strlen( (yyvsp[(1) - (3)].exprType)->code ) +strlen( (yyvsp[(1) - (3)].exprType)->code ) + strlen( (yyvsp[(3) - (3)].exprType)->code ) + 20 );
      sprintf( (yyval.exprType)->temp, "%s%s\tmov edx, %s\n", (yyvsp[(3) - (3)].exprType)->code, (yyvsp[(1) - (3)].exprType)->code, (yyvsp[(1) - (3)].exprType)->name );
     }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 810 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->value = (yyvsp[(1) - (1)].exprType)->value;
      (yyval.exprType)->code = (yyvsp[(1) - (1)].exprType)->code;
      (yyval.exprType)->name = (yyvsp[(1) - (1)].exprType)->name;
     }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 818 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 3 );
      sprintf( (yyval.exprType)->code, "<=" );
     }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 824 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 2 );
      sprintf( (yyval.exprType)->code, "<" );
     }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 830 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 2 );
      sprintf( (yyval.exprType)->code, ">" );
     }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 836 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 3 );
      sprintf( (yyval.exprType)->code, ">=" );
     }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 842 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 3 );
      sprintf( (yyval.exprType)->code, "==" );
     }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 848 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 3 );
      sprintf( (yyval.exprType)->code, "!=" );
     }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 855 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      switch( *(yyvsp[(2) - (3)].op) )
      {
       case '+':
        (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[(1) - (3)].exprType)->code) + strlen((yyvsp[(1) - (3)].exprType)->name) + strlen((yyvsp[(3) - (3)].exprType)->name) + strlen((yyvsp[(3) - (3)].exprType)->code) + 1024 );
        sprintf( (yyval.exprType)->code, "%s%s\tmov eax, %s\n\tadd eax, %s\n", (yyvsp[(1) - (3)].exprType)->code, (yyvsp[(3) - (3)].exprType)->code, (yyvsp[(1) - (3)].exprType)->name, (yyvsp[(3) - (3)].exprType)->name );
        (yyval.exprType)->name = (char *) malloc( 20 );
        sprintf( (yyval.exprType)->name, "[ebp-%d]", 4*(paramcount+1) );
        paramcount++;
        sprintf( (yyval.exprType)->code, "%s\tmov %s, eax\n", (yyval.exprType)->code, (yyval.exprType)->name );
        break;
       case '-':
        (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[(1) - (3)].exprType)->code) + strlen((yyvsp[(1) - (3)].exprType)->name) + strlen((yyvsp[(3) - (3)].exprType)->name) + 1024 );
        sprintf( (yyval.exprType)->code, "%s%s\tmov eax, %s\n\tsub eax, %s\n", (yyvsp[(3) - (3)].exprType)->code, (yyvsp[(1) - (3)].exprType)->code, (yyvsp[(1) - (3)].exprType)->name, (yyvsp[(3) - (3)].exprType)->name );
        (yyval.exprType)->name = (char *) malloc( 20 );
        sprintf( (yyval.exprType)->name, "[ebp-%d]", 4*(paramcount+1) );
        paramcount++;
        sprintf( (yyval.exprType)->code, "%s\tmov %s, eax\n", (yyval.exprType)->code, (yyval.exprType)->name );
        break;
      }
      (yyval.exprType)->value = 0;
     }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 879 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (1)].exprType)->code ) + 1 );
      if( (yyvsp[(1) - (1)].exprType)->is_const == 1 )
      {
       strcpy( (yyval.exprType)->code, "" );
      }
      else
      {
       strcpy( (yyval.exprType)->code, (yyvsp[(1) - (1)].exprType)->code );
      }
      (yyval.exprType)->name = (yyvsp[(1) - (1)].exprType)->name;
      (yyval.exprType)->value = 1;
     }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 895 "syntax.y"
    {
      (yyval.op) = (char *) malloc( sizeof( char ) );
      *(yyval.op) = '+';
     }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 900 "syntax.y"
    {
      (yyval.op) = (char *) malloc( sizeof( char ) );
      *(yyval.op) = '-';
     }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 906 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      switch( *(yyvsp[(2) - (3)].op) )
      {
       case '*':
        (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[(1) - (3)].exprType)->code) + strlen((yyvsp[(1) - (3)].exprType)->name) + strlen((yyvsp[(3) - (3)].exprType)->name) + 1024 );
        sprintf( (yyval.exprType)->code, "%s\tmov eax, %s\n\tmov ebx, %s\n\timul ebx\n", (yyvsp[(1) - (3)].exprType)->code, (yyvsp[(1) - (3)].exprType)->name, (yyvsp[(3) - (3)].exprType)->name );
        (yyval.exprType)->name = (char *) malloc( 20 );
        sprintf( (yyval.exprType)->name, "[ebp-%d]", 4*(paramcount+1) );
        paramcount++;
        sprintf( (yyval.exprType)->code, "%s\tmov %s, eax\n", (yyval.exprType)->code, (yyval.exprType)->name );
        break;
       case '/':
        (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[(1) - (3)].exprType)->code) + strlen((yyvsp[(1) - (3)].exprType)->name) + strlen((yyvsp[(3) - (3)].exprType)->name) + 1024 );
        sprintf( (yyval.exprType)->code, "%s\tmov eax, %s\n\tcdq\n\tmov ebx, %s\n\tidiv ebx\n", (yyvsp[(1) - (3)].exprType)->code, (yyvsp[(1) - (3)].exprType)->name, (yyvsp[(3) - (3)].exprType)->name );
        (yyval.exprType)->name = (char *) malloc( 20 );
        sprintf( (yyval.exprType)->name, "[ebp-%d]", 4*(paramcount+1) );
        paramcount++;
        sprintf( (yyval.exprType)->code, "%s\tmov %s, eax\n", (yyval.exprType)->code, (yyval.exprType)->name );
        break;
       case '%':
        (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[(1) - (3)].exprType)->code) + strlen((yyvsp[(1) - (3)].exprType)->name) + strlen((yyvsp[(3) - (3)].exprType)->name) + 1024 );
        sprintf( (yyval.exprType)->code, "%s\tmov eax, %s\n\tcdq\n\tmov ebx, %s\n\tidiv ebx\n", (yyvsp[(1) - (3)].exprType)->code, (yyvsp[(1) - (3)].exprType)->name, (yyvsp[(3) - (3)].exprType)->name );
        (yyval.exprType)->name = (char *) malloc( 20 );
        sprintf( (yyval.exprType)->name, "[ebp-%d]", 4*(paramcount+1) );
        paramcount++;
        sprintf( (yyval.exprType)->code, "%s\tmov %s, edx\n", (yyval.exprType)->code, (yyval.exprType)->name );
        break;
      } 
      (yyval.exprType)->is_const = 0;
     }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 938 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (1)].exprType)->code ) + 1 );
      if( (yyvsp[(1) - (1)].exprType)->is_const == 1 )
      {
       strcpy( (yyval.exprType)->code, "" );
      }
      else
      {
       strcpy( (yyval.exprType)->code, (yyvsp[(1) - (1)].exprType)->code );
      }
      (yyval.exprType)->name = (yyvsp[(1) - (1)].exprType)->name;
      (yyval.exprType)->is_const = (yyvsp[(1) - (1)].exprType)->is_const;
     }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 954 "syntax.y"
    {
      (yyval.op) = (char *) malloc( sizeof( char ) );
      *(yyval.op) = '*';
     }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 959 "syntax.y"
    {
      (yyval.op) = (char *) malloc( sizeof( char ) );
      *(yyval.op) = '/';
     }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 964 "syntax.y"
    {
      (yyval.op) = (char *) malloc( sizeof( char ) );
      *(yyval.op) = '%';
     }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 970 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(2) - (2)].exprType)->code ) + 10 );
      sprintf( (yyval.exprType)->code, "%s\tmov ebx, %s\n\tneg ebx\n", (yyvsp[(2) - (2)].exprType)->code, (yyvsp[(2) - (2)].exprType)->name );
      (yyval.exprType)->name = (char *) malloc( 6 );
      sprintf( (yyval.exprType)->name, "ebx" );
      (yyval.exprType)->is_const = 0;
     }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 979 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (yyvsp[(1) - (1)].exprType)->code;
      (yyval.exprType)->name = (yyvsp[(1) - (1)].exprType)->name;
      (yyval.exprType)->is_const = (yyvsp[(1) - (1)].exprType)->is_const;
     }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 987 "syntax.y"
    {
      (yyval.op) = (char *) malloc( sizeof( char ) );
      *(yyval.op) = NEG;//用数NEG表示负号;
     }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 993 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(2) - (3)].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code, "%s", (yyvsp[(2) - (3)].exprType)->code );
      (yyval.exprType)->name = (yyvsp[(2) - (3)].exprType)->name;
      (yyval.exprType)->is_const = 0;
     }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1001 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      if( (yyvsp[(1) - (1)].exprType)->value == 0 )
      {
       (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (1)].exprType)->code ) + 1 );
       sprintf( (yyval.exprType)->code, "%s", (yyvsp[(1) - (1)].exprType)->code );
       (yyval.exprType)->name = (yyvsp[(1) - (1)].exprType)->name;
       (yyval.exprType)->is_const = 1;
      }
      else if( (yyvsp[(1) - (1)].exprType)->value == 1 )
      {
       (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (1)].exprType)->name ) + 1 );
       sprintf( (yyval.exprType)->code, "%s", (yyvsp[(1) - (1)].exprType)->name );
       (yyval.exprType)->name = (yyvsp[(1) - (1)].exprType)->code;
       (yyval.exprType)->is_const = 1;
      }
     }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1019 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (1)].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->code,"%s", (yyvsp[(1) - (1)].exprType)->code );
      (yyval.exprType)->name = ( char * )malloc(4);
      sprintf( (yyval.exprType)->name, "eax" );
      (yyval.exprType)->code = (yyvsp[(1) - (1)].exprType)->code;
      (yyval.exprType)->is_const = 0;
     }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1029 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (1)].symType)->name ) + 1 );
      sprintf( (yyval.exprType)->code, "" );
      (yyval.exprType)->is_const = 1;
      (yyval.exprType)->value = atoi( (yyvsp[(1) - (1)].symType)->name );
      (yyval.exprType)->name = (yyvsp[(1) - (1)].symType)->name;
     }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1038 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (1)].symType)->name ) + 1 );
      sprintf( (yyval.exprType)->code, "" );
      (yyval.exprType)->is_const = 1;
      (yyval.exprType)->name = (char *) malloc( 20 );
      sprintf( (yyval.exprType)->name, "_msg%d", msgIndex );
      sprintf( varBuffer, "%s\t%s BYTE %s, 0\n", varBuffer, (yyval.exprType)->name, (yyvsp[(1) - (1)].symType)->name );
      sprintf( (yyval.exprType)->name, "offset _msg%d", msgIndex );
      msgIndex++;
     }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1051 "syntax.y"
    {
      if( lookup( (yyvsp[(1) - (4)].symType)->name, currentTable ) == NULL )
      {
        char msg[100];
        sprintf( msg, "The Function %s must be declared: ", (yyvsp[(1) - (4)].symType)->name );
        yyerror( msg );
      }
      
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (4)].symType)->name ) + strlen( (yyvsp[(3) - (4)].exprType)->code) + 50 );
      sprintf( (yyval.exprType)->code, "%s\tcall %s\n", (yyvsp[(3) - (4)].exprType)->code, (yyvsp[(1) - (4)].symType)->name );
     }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1065 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( 1 );
      sprintf( (yyval.exprType)->code, "" );
     }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1071 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[(1) - (1)].exprType)->code) + strlen( (yyvsp[(1) - (1)].exprType)->temp ) + 1 );
      sprintf( (yyval.exprType)->code, "%s%s", (yyvsp[(1) - (1)].exprType)->temp, (yyvsp[(1) - (1)].exprType)->code );
     }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1078 "syntax.y"
    {
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen((yyvsp[(1) - (3)].exprType)->code) + strlen((yyvsp[(3) - (3)].exprType)->code) + 10 );
      sprintf( (yyval.exprType)->code, "\tpush %s\n%s", (yyvsp[(3) - (3)].exprType)->name, (yyvsp[(1) - (3)].exprType)->code );
      (yyval.exprType)->temp = (char *) malloc(  strlen( (yyvsp[(1) - (3)].exprType)->temp ) + strlen( (yyvsp[(3) - (3)].exprType)->code ) + 1 );
      sprintf( (yyval.exprType)->temp, "%s%s", (yyvsp[(1) - (3)].exprType)->temp, (yyvsp[(3) - (3)].exprType)->code );
      callparam++;
     }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1087 "syntax.y"
    {
      callparam = 1;
      (yyval.exprType) = (expr *) malloc( sizeof( expr ) );
      (yyval.exprType)->code = (char *) malloc( strlen( (yyvsp[(1) - (1)].exprType)->name ) + 10 );
      sprintf( (yyval.exprType)->code, "\tpush %s\n", (yyvsp[(1) - (1)].exprType)->name );
      (yyval.exprType)->temp = (char *) malloc( strlen( (yyvsp[(1) - (1)].exprType)->code ) + 10 );
      sprintf( (yyval.exprType)->temp, "%s", (yyvsp[(1) - (1)].exprType)->code );
     }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1097 "syntax.y"
    {
      (yyval.value) = (expr *)malloc(sizeof(expr));
      *(yyval.value) = 1;
     }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1102 "syntax.y"
    {
      (yyval.value) = (expr *) malloc( sizeof( expr ) );
      *(yyval.value) = 0;
     }
    break;



/* Line 1455 of yacc.c  */
#line 2943 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1108 "syntax.y"

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

