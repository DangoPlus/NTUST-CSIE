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
#line 1 "yacl.y" /* yacc.c:339  */

//A10515001 李大祥 compiler project2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1024
#define MAX_LINE_LENG 1024

	int  yylex  (void);
	void  yyerror  (const char *str);
	char jasm[10000];
	int isShouldAdd = 0;
	int keyId = 1;
	int itemDepth = 0;
	int now_fun_index = 0;
	int function_index = 0;

	char temp_parameter[1000];
	char unary_symbol[100];
	int temp_fun_index = 0;
	int is_print = 0;
	int is_assigning = 0;

	struct DataItem {
		char idName[100];
		char type[100];
		char value[100];
		int key;
		int depth;
		int fun_index;
	};

	struct DataItem * *hashArray;

	//Creates a symbol table.
	struct DataItem * * create() {
		static struct DataItem* newHashArray[SIZE] ;
		return newHashArray;
	};

	//Returns index of the entry for int key
	int lookup(char *idName , int depth) {
		int hashIndex = 1;
		int isFind = 0;
		int first_index = 0;

		while (hashArray[hashIndex] != NULL) {
			if ( hashArray[hashIndex]->depth == depth && hashArray[hashIndex]->fun_index == temp_fun_index)
			{
				first_index = hashIndex;
				break;
			}
			else
			{
				++hashIndex;
			}
		}

		while (hashArray[hashIndex] != NULL) {
			if (strcmp(hashArray[hashIndex]->idName, idName) == 0 && hashArray[hashIndex]->depth == depth && hashArray[hashIndex]->fun_index == temp_fun_index 
				&& strcmp(hashArray[hashIndex]->type, "const") != 0)
			{
				isFind = 1;
				break;
			}
			else
			{
				++hashIndex;
			}
		}
		if (isFind == 1) {
			return hashIndex - first_index;
		}
		else {
			return -1;
		}
	}

	int lookup_nodepth(char *idName) {
		int hashIndex = 1;
		int isFind = 0;

		while (hashArray[hashIndex] != NULL) {
			if (strcmp(hashArray[hashIndex]->idName, idName) == 0 )
			{
				isFind = 1;
				break;
			}
			else
			{
				++hashIndex;
			}
		}
		if (isFind == 1) {
			return hashIndex;
		}
		else {
			return -1;
		}
	}

	char* lookup_const(char *idName) {
		int hashIndex = 1;
		int isFind = 0;
		int depth = 0;

		while (hashArray[hashIndex] != NULL) {
			if (strcmp(hashArray[hashIndex]->idName, idName) == 0 && hashArray[hashIndex]->depth == depth && hashArray[hashIndex]->fun_index == temp_fun_index 
				&& strcmp(hashArray[hashIndex]->type, "const") == 0)
			{
				isFind = 1;
				break;
			}
			else
			{
				++hashIndex;
			}
		}
		if (isFind == 1) {
			return hashArray[hashIndex]->value;
		}
		else {
			return "";
		}
	}

	//Inserts s into  the symbol table
	void insert(char *idName , char *type, char *value) {

		struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
		strcpy(item->idName, idName);
		strcpy(item->type, type);
		strcpy(item->value, value);
		item->depth = itemDepth;
		item->fun_index = function_index;
		item->key = keyId;

		hashArray[keyId] = item;
		keyId ++;
	}

	void clear() {
		for (int i = 1; i < SIZE; i++)
		{
			if (hashArray[i] != NULL)
			{
				hashArray[i] = NULL;
			}
		}
	}

	//Dumps all entries of the symbol table. returns index of the entry.
	void dump() {
		for (int i = 1; i < SIZE; i++)
		{
			if (hashArray[i] != NULL)
			{
				printf("%-*d:%-*s%-*s%-*s%-*d%-*d\n", 5, i, 15, hashArray[i]->idName, 15, hashArray[i]->type, 25, hashArray[i]->value, 15, hashArray[i]->fun_index, 5, hashArray[i]->depth);
			}
		}
		clear();
	}


#line 233 "y.tab.c" /* yacc.c:339  */

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
    IDENTIFIER = 261,
    BOOL = 262,
    STRINGKEYWORD = 263,
    REAL = 264,
    INT = 265,
    VOID = 266,
    FOR = 267,
    REALCONSTANTS = 268,
    INTEGER = 269,
    BREAK = 270,
    CASE = 271,
    CONST = 272,
    CONTINUE = 273,
    DEFAULT = 274,
    ELSE = 275,
    FUNC = 276,
    GO = 277,
    IF = 278,
    IMPORT = 279,
    NIL = 280,
    PRINT = 281,
    PRINTLN = 282,
    RETURN = 283,
    STRUCT = 284,
    SWITCH = 285,
    VAR = 286,
    WHILE = 287,
    READ = 288,
    LE_OP = 289,
    GE_OP = 290,
    EQ_OP = 291,
    NE_OP = 292,
    ADD_ASSIGN = 293,
    SUB_ASSIGN = 294,
    MUL_ASSIGN = 295,
    DIV_ASSIGN = 296
  };
#endif
/* Tokens.  */
#define STR 258
#define TRUE 259
#define FALSE 260
#define IDENTIFIER 261
#define BOOL 262
#define STRINGKEYWORD 263
#define REAL 264
#define INT 265
#define VOID 266
#define FOR 267
#define REALCONSTANTS 268
#define INTEGER 269
#define BREAK 270
#define CASE 271
#define CONST 272
#define CONTINUE 273
#define DEFAULT 274
#define ELSE 275
#define FUNC 276
#define GO 277
#define IF 278
#define IMPORT 279
#define NIL 280
#define PRINT 281
#define PRINTLN 282
#define RETURN 283
#define STRUCT 284
#define SWITCH 285
#define VAR 286
#define WHILE 287
#define READ 288
#define LE_OP 289
#define GE_OP 290
#define EQ_OP 291
#define NE_OP 292
#define ADD_ASSIGN 293
#define SUB_ASSIGN 294
#define MUL_ASSIGN 295
#define DIV_ASSIGN 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 168 "yacl.y" /* yacc.c:355  */

	char typeOF[200];
	char val[200];
	double double_type;
	int int_type;
	int int_val;

#line 363 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 380 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   268

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  163

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      48,    49,     2,    44,    42,    43,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
      46,    47,    45,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   195,   195,   203,   206,   209,   233,   242,   295,   300,
     301,   307,   308,   312,   313,   322,   323,   334,   351,   352,
     358,   363,   391,   450,   451,   452,   453,   454,   455,   478,
     479,   480,   481,   482,   487,   488,   491,   499,   501,   500,
     518,   517,   534,   535,   536,   544,   551,   558,   558,   562,
     580,   580,   601,   607,   608,   612,   613,   613,   617,   621,
     633,   639,   644,   673,   676,   643,   679,   680,   679,   698,
     702,   703,   707,   708,   709,   710,   711,   715,   720,   726,
     733,   725,   759,   759,   759,   770,   771,   775,   776
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STR", "TRUE", "FALSE", "IDENTIFIER",
  "BOOL", "STRINGKEYWORD", "REAL", "INT", "VOID", "FOR", "REALCONSTANTS",
  "INTEGER", "BREAK", "CASE", "CONST", "CONTINUE", "DEFAULT", "ELSE",
  "FUNC", "GO", "IF", "IMPORT", "NIL", "PRINT", "PRINTLN", "RETURN",
  "STRUCT", "SWITCH", "VAR", "WHILE", "READ", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "','",
  "'-'", "'+'", "'>'", "'<'", "'='", "'('", "')'", "'['", "']'", "'{'",
  "'}'", "';'", "$accept", "value_declaration", "declarator",
  "declarator_list", "primary_expression", "unary_expression",
  "additive_expression", "relational_expression", "assignment_expression",
  "expression", "type_specifier", "parameter_list",
  "parameter_declaration", "simple_statment", "$@1", "$@2",
  "compound_start", "compound_end", "declaration", "$@3", "$@4",
  "declaration_list", "compound_statement", "$@5", "expression_statement",
  "If_After_Check", "If_After_Ltrue", "selection_statement",
  "iteration_statement", "$@6", "$@7", "$@8", "$@9", "$@10",
  "jump_statement", "statement_list", "statement", "func_expression",
  "add_main_func_first", "function_definition", "$@11", "$@12", "$@13",
  "$@14", "external_declaration", "program", YY_NULLPTR
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
     295,   296,    44,    45,    43,    62,    60,    61,    40,    41,
      91,    93,   123,   125,    59
};
# endif

#define YYPACT_NINF -78

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-78)))

#define YYTABLE_NINF -83

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,   -78,   -78,    17,   -78,    -4,   199,   -78,   -78,   125,
      28,    33,   -78,   -78,   -78,   -78,   -78,   -78,    47,   -78,
     -78,   -39,    45,    18,    19,   254,    15,    25,    37,   -78,
     -78,   -78,   -78,   -78,   -78,   199,   254,    68,    46,   -78,
     -78,   199,   -32,   -78,   -78,   -78,    68,   -78,   -78,   -78,
      44,    52,   223,   -78,   223,    67,    58,   104,    71,   -78,
     -78,   131,   110,   185,   -78,   133,   -78,   185,   -78,     2,
     -27,   -78,   217,   -78,   -78,   -78,   -78,   -78,    85,   -78,
     127,   249,   107,   217,    75,   131,   131,   131,    79,   217,
     -78,   -78,    80,   185,   185,   -78,   185,   185,   185,   185,
     185,    82,   -78,   -27,   -78,   -78,   -78,   -78,   -78,    95,
       2,    76,   -27,    93,   131,   217,   217,   217,   -78,   -78,
     -78,   185,   185,   185,   185,   185,   101,    97,   -78,   103,
     108,   109,   131,   -78,   185,   -78,   114,   -78,   217,   153,
     -27,   223,    82,   -78,   112,   159,   119,   117,   -78,   124,
     130,   164,   130,   140,   223,   148,   158,   -78,   223,   223,
     -78,   191,   -78
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    47,    77,     0,    53,    86,     0,    85,    87,     0,
       0,     0,    54,    29,    30,    31,    32,    33,     0,     1,
      88,     0,     0,    49,     0,     0,     0,     0,    79,     2,
       3,     4,     6,     5,    48,     0,     0,     0,     0,    52,
      51,     0,     0,    34,    83,    36,     0,    80,    78,    35,
       0,     0,     0,    45,     0,     7,     0,     0,     0,    38,
      40,    43,     0,     0,     8,     9,    11,    13,    23,    18,
      26,    24,    58,    72,    73,    74,    75,    76,     0,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     7,    44,
      42,     7,     9,    14,     0,    12,     0,     0,     0,     0,
       0,     7,    15,    27,    25,    81,    71,    46,    84,     7,
      22,     0,    62,     0,     0,    59,    39,    41,    10,    17,
      16,    20,    19,    21,     0,     0,     0,     0,    66,     0,
       0,     0,     0,    63,     0,    69,     0,    28,    37,     0,
      67,     0,     0,    64,     0,     0,     0,     0,    60,     0,
      56,     0,    56,     0,     0,     0,     0,    68,    57,     0,
      65,     0,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -78,   -11,   -61,   -43,    -6,   -78,   -72,   -14,   -68,   -56,
      74,   -78,   155,   -78,   -78,   -78,   -78,   -78,   210,   -78,
     -78,   -78,    64,   -78,   111,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -54,   -77,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   224,   -78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      18,    42,    43,    73,    86,    87,    54,   108,     4,    10,
      27,     5,   153,   154,    74,   130,   151,    75,    76,   127,
     139,   146,   134,   144,    77,    78,    79,     6,    51,     7,
      37,    50,    38,    48,     8,     9
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,   106,    92,   106,   104,    89,    92,    98,    25,   110,
      46,   102,     1,     1,    34,   113,     2,    47,    99,   100,
     102,   104,   102,    11,    95,    40,     3,     3,   102,   115,
     116,   117,    92,    92,    21,   119,   120,    92,    92,    92,
      13,    14,    15,    16,    17,    96,    97,   104,   104,   104,
      95,   118,   110,    24,   102,   102,   102,    93,   103,    26,
      92,    92,    92,   102,    92,   -50,    35,    28,   106,   112,
     104,   143,    36,   102,    41,   103,   138,   102,    95,    95,
      95,   106,   131,    22,   106,    23,   -82,   145,    29,    30,
      31,    55,   121,   122,   123,    44,    52,    56,    32,    33,
     158,   103,   103,   103,    53,   161,    83,    57,    58,    39,
      84,    59,    60,    61,    81,    45,    90,    82,    62,    85,
     140,   111,    94,   114,   103,    19,    81,   126,    63,   124,
      29,    30,    31,    55,    29,    30,    31,    88,   105,    56,
      32,    33,     1,   125,    32,    33,     2,   128,   132,    57,
      58,   133,   135,    59,    60,    61,     3,   136,   137,   142,
      62,   147,    29,    30,    31,    55,   141,   -15,   149,   150,
      63,    56,    32,    33,    63,    94,   152,   -15,   -15,   -15,
     107,    57,    58,   -55,   155,    59,    60,    61,    29,    30,
      31,    91,    62,   157,    29,    30,    31,    55,    32,    33,
     159,    49,    63,    56,    32,    33,    13,    14,    15,    16,
      17,   160,   148,    57,    58,    12,   156,    59,    60,    61,
      29,    30,    31,   101,    62,   129,    29,    30,    31,    55,
      32,    33,     0,    20,    63,    56,    32,    33,     0,     0,
       0,     0,     0,     0,   162,    57,    58,     0,     0,    59,
      60,    61,    29,    30,    31,   109,    62,    29,    30,    31,
       0,     0,    32,    33,     0,     0,    63,    32,    33
};

static const yytype_int16 yycheck[] =
{
      54,    78,    63,    80,    72,    61,    67,    34,    47,    81,
      42,    72,    17,    17,    25,    83,    21,    49,    45,    46,
      81,    89,    83,     6,    67,    36,    31,    31,    89,    85,
      86,    87,    93,    94,     6,    96,    97,    98,    99,   100,
       7,     8,     9,    10,    11,    43,    44,   115,   116,   117,
      93,    94,   124,     6,   115,   116,   117,    63,    72,    14,
     121,   122,   123,   124,   125,    47,    51,    48,   145,    83,
     138,   139,    47,   134,     6,    89,   132,   138,   121,   122,
     123,   158,   125,    50,   161,    11,    49,   141,     3,     4,
       5,     6,    98,    99,   100,    49,    52,    12,    13,    14,
     154,   115,   116,   117,    52,   159,    48,    22,    23,    35,
       6,    26,    27,    28,    47,    41,     6,    50,    33,    48,
     134,    14,    42,    48,   138,     0,    47,    51,    43,    47,
       3,     4,     5,     6,     3,     4,     5,     6,    53,    12,
      13,    14,    17,    48,    13,    14,    21,    54,    47,    22,
      23,    54,    49,    26,    27,    28,    31,    49,    49,     6,
      33,    49,     3,     4,     5,     6,    52,    34,    49,    52,
      43,    12,    13,    14,    43,    42,    52,    44,    45,    46,
      53,    22,    23,    53,    20,    26,    27,    28,     3,     4,
       5,     6,    33,    53,     3,     4,     5,     6,    13,    14,
      52,    46,    43,    12,    13,    14,     7,     8,     9,    10,
      11,    53,    53,    22,    23,     5,   152,    26,    27,    28,
       3,     4,     5,     6,    33,   114,     3,     4,     5,     6,
      13,    14,    -1,     9,    43,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    22,    23,    -1,    -1,    26,
      27,    28,     3,     4,     5,     6,    33,     3,     4,     5,
      -1,    -1,    13,    14,    -1,    -1,    43,    13,    14
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    21,    31,    73,    76,    92,    94,    99,   100,
      74,     6,    73,     7,     8,     9,    10,    11,    65,     0,
      99,     6,    50,    65,     6,    47,    14,    75,    48,     3,
       4,     5,    13,    14,    56,    51,    47,    95,    97,    65,
      56,     6,    66,    67,    49,    65,    42,    49,    98,    67,
      96,    93,    52,    52,    71,     6,    12,    22,    23,    26,
      27,    28,    33,    43,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    68,    79,    82,    83,    89,    90,    91,
      90,    47,    50,    48,     6,    48,    69,    70,     6,    64,
       6,     6,    57,    59,    42,    58,    43,    44,    34,    45,
      46,     6,    57,    62,    63,    53,    91,    53,    72,     6,
      61,    14,    62,    63,    48,    64,    64,    64,    58,    57,
      57,    59,    59,    59,    47,    48,    51,    84,    54,    79,
      80,    58,    47,    54,    87,    49,    49,    49,    64,    85,
      62,    52,     6,    63,    88,    90,    86,    49,    53,    49,
      52,    81,    52,    77,    78,    20,    77,    53,    90,    52,
      53,    90,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    56,    56,    56,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    61,    62,    62,
      62,    62,    63,    64,    64,    64,    64,    64,    64,    65,
      65,    65,    65,    65,    66,    66,    67,    68,    69,    68,
      70,    68,    68,    68,    68,    71,    72,    74,    73,    73,
      75,    73,    73,    76,    76,    77,    78,    77,    79,    80,
      81,    82,    84,    85,    86,    83,    87,    88,    83,    89,
      90,    90,    91,    91,    91,    91,    91,    92,    93,    95,
      96,    94,    97,    98,    94,    99,    99,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     1,     2,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     2,     1,     2,     6,     1,
       1,     1,     1,     1,     1,     3,     2,     6,     0,     3,
       0,     3,     2,     1,     2,     1,     1,     0,     5,     3,
       0,     6,     6,     1,     2,     0,     0,     2,     1,     0,
       0,    13,     0,     0,     0,    12,     0,     0,    11,     5,
       1,     2,     1,     1,     1,     1,     1,     1,     0,     0,
       0,    11,     0,     0,    11,     1,     1,     1,     2
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
#line 195 "yacl.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tldc ");
	strcat(jasm, "\"");
	strcat(jasm, (yyvsp[0].val));
	strcat(jasm, "\"");
	strcat(jasm, "\n");
	
}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 203 "yacl.y" /* yacc.c:1646  */
    {
	strcpy((yyval.val), (yyvsp[0].val));
}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 206 "yacl.y" /* yacc.c:1646  */
    {
	strcpy((yyval.val), (yyvsp[0].val));
}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 210 "yacl.y" /* yacc.c:1646  */
    {
	char tempStr[50];
	sprintf( tempStr, "%d", (yyvsp[0].int_type) );

	if (is_assigning == 0)
	{
		if (is_print == 1)
		{
			
		}
		else
		{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, tempStr);
			strcat(jasm, "\n");
		}
		
	}
	else{
		strcpy((yyval.val), tempStr);
	}
	
}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 234 "yacl.y" /* yacc.c:1646  */
    {
	char tempStr[50];
	sprintf( tempStr, "%g", (yyvsp[0].double_type) );
	strcpy((yyval.val), tempStr);
}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 243 "yacl.y" /* yacc.c:1646  */
    {
	int is_found_ident = 0;
	int tempdepth = itemDepth;
	temp_fun_index = now_fun_index;

	if(temp_fun_index != 0){
		while(tempdepth > -1){
			int index_depth = lookup((yyvsp[0].val), tempdepth);
			if(index_depth >= 0)
			{
				strcat(jasm, "\t\tiload ");
				char index_depth_str[10];
				sprintf(index_depth_str, "%d" , index_depth);

				strcat(jasm, index_depth_str);
				strcat(jasm, "\n");
				is_found_ident = 1;
				break;
			}
			tempdepth--;
		}
		temp_fun_index = 0;
	}

	if (is_found_ident == 0)
	{
		if (lookup((yyvsp[0].val), 0) >= 0)
		{
			strcat(jasm, "\t\tgetstatic int go_test.");
			strcat(jasm, (yyvsp[0].val));
			
		}
		else if(strcmp(lookup_const((yyvsp[0].val)), "") != 0)
		{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, lookup_const((yyvsp[0].val)));
			strcpy((yyvsp[0].val), lookup_const((yyvsp[0].val)));
		}
		else{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, (yyvsp[0].val));
		}
		
		strcat(jasm, "\n");
	}

	if (is_print == 1)
	{		
		is_print = 2;
		strcat(jasm, unary_symbol);
	}
}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 314 "yacl.y" /* yacc.c:1646  */
    {
	// strcpy($$, $2);
	memset(unary_symbol,0,strlen(unary_symbol));
	strcpy(unary_symbol,"\t\tineg\n");
}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 324 "yacl.y" /* yacc.c:1646  */
    {
	
	char tempJasm[1000] = "";
	int is_found_ident = 0;
	int tempdepth = itemDepth;

	temp_fun_index = now_fun_index;
	strcat(tempJasm, "\t\tiadd\n");
	strcpy((yyval.val), tempJasm);
}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 335 "yacl.y" /* yacc.c:1646  */
    {
	
	char tempJasm[1000] = "";
	int is_found_ident = 0;
	int tempdepth = itemDepth;

	temp_fun_index = now_fun_index;
	
	strcat(tempJasm, "\t\tisub\n");
	
	strcpy((yyval.val), tempJasm);
}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 353 "yacl.y" /* yacc.c:1646  */
    {

	strcat(jasm, "\t\tisub\n");
	strcat(jasm, "\t\tifgt ");
}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 359 "yacl.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tisub\n");
	strcat(jasm, "\t\tifle ");
}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 364 "yacl.y" /* yacc.c:1646  */
    {
	if (lookup((yyvsp[-2].val), 0) >= 0)
	{
		strcat(jasm, "\tgetstatic int go_test.");
		strcat(jasm, (yyvsp[-2].val));
		strcat(jasm, "\n");
		strcat(jasm, "\tsipush ");
		strcat(jasm, (yyvsp[0].val));
		strcat(jasm, "\n");
		strcat(jasm, "\tisub\n");
		strcat(jasm, "\tiflt ");
	}
	else{
		strcat(jasm, "\tiload ");
		strcat(jasm, (yyvsp[-2].val));
		strcat(jasm, "\n");
		strcat(jasm, "\tsipush ");
		strcat(jasm, (yyvsp[0].val));
		strcat(jasm, "\n");
		strcat(jasm, "\tisub\n");
		strcat(jasm, "\tiflt ");
	}
}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 392 "yacl.y" /* yacc.c:1646  */
    {
 	is_assigning =1;
 	if (strcmp((yyvsp[0].val), "\t\tisub\n") == 0 | strcmp((yyvsp[0].val), "\t\tiadd\n") == 0)
 	{
 		strcat(jasm, (yyvsp[0].val));
 	}
 	
 	int is_found_ident = 0;
	int tempdepth = itemDepth;
	temp_fun_index = now_fun_index;

	if(temp_fun_index != 0){
		while(tempdepth > -1){
			int index_depth = lookup((yyvsp[-2].val), tempdepth);
			if(index_depth >= 0)
			{
				strcat(jasm, "\t\tistore ");
				char index_depth_str[10];
				sprintf(index_depth_str, "%d" , index_depth);
				strcat(jasm, index_depth_str);
				strcat(jasm, "\n");
				is_found_ident = 1;
				break;
			}
			tempdepth--;
		}
		temp_fun_index = 0;
	}
	
	temp_fun_index = 0;

	if (is_found_ident == 0)
	{
		// check if $1 is const and avoid the const definetion
		if(strcmp(lookup_const((yyvsp[-2].val)), "") != 0)
		{
			// strcat(jasm, "\nYou should not assign some value for a CONST . \n");
			// yyerror("\n\tYou should not assign some value for a  CONST. \n\n");
		}
		else if (lookup((yyvsp[-2].val), 0) >= 0)
		{
			strcat(jasm, "\t\tputstatic int go_test.");
			strcat(jasm, (yyvsp[-2].val));
			// strcat(jasm, " iii ");
			strcat(jasm, "\n");
			
		}
		else{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, (yyvsp[-2].val));
			strcat(jasm, "\n");
		}
	}
 	is_assigning =0;
}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 456 "yacl.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tinvokestatic int go_test.");
	strcat(jasm, (yyvsp[-3].val));
	strcat(jasm, "(");
	strcat(jasm, "int,int");
	strcat(jasm, ")");
	strcat(jasm, "\n");

		if (lookup((yyvsp[-5].val), 0) >= 0)
		{
			strcat(jasm, "\t\tputstatic int go_test.");
		}
		else{
			strcat(jasm, "\t\tistore ");
		}

		strcat(jasm, (yyvsp[-5].val));
		strcat(jasm, "\n");
}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 492 "yacl.y" /* yacc.c:1646  */
    {
	insert((yyvsp[-1].val), (yyvsp[0].val) , "");
	strcat(temp_parameter, (yyvsp[0].val));
	strcat(temp_parameter, ",");
}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 501 "yacl.y" /* yacc.c:1646  */
    {
	is_print = 1;
	strcat(jasm, "\n\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 506 "yacl.y" /* yacc.c:1646  */
    {
	if (is_print == 2)
	{
		strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
	}
	else{
		strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(java.lang.String)\n");
	}
	is_print = 0;

}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 518 "yacl.y" /* yacc.c:1646  */
    {
	is_print = 1;
	strcat(jasm, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 523 "yacl.y" /* yacc.c:1646  */
    {
	if (is_print == 2)
	{
		strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");
	}
	else{
		strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)\n");
	}
	is_print = 0;
	
}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 537 "yacl.y" /* yacc.c:1646  */
    {
	strcat(jasm, (yyvsp[0].val));
	strcat(jasm, "\t\tireturn\n");
}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 545 "yacl.y" /* yacc.c:1646  */
    {
	itemDepth++;
}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 552 "yacl.y" /* yacc.c:1646  */
    {
	itemDepth--;
}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 558 "yacl.y" /* yacc.c:1646  */
    {is_assigning = 1;}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 558 "yacl.y" /* yacc.c:1646  */
    {
	insert((yyvsp[-2].val), "const" , (yyvsp[0].val));
	is_assigning = 0;
}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 562 "yacl.y" /* yacc.c:1646  */
    {
	insert((yyvsp[-1].val), (yyvsp[0].val), "");
	if (lookup((yyvsp[-1].val), 0) >= 0)
	{
		// global variable
		strcat(jasm, "\tfield static ");
		strcat(jasm, (yyvsp[0].val));
		strcat(jasm, " ");
		strcat(jasm, (yyvsp[-1].val));
		strcat(jasm, "\n");
	}
	else
	{
		// local variable

	}
	is_assigning = 0;
}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 580 "yacl.y" /* yacc.c:1646  */
    {is_assigning = 1;}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 580 "yacl.y" /* yacc.c:1646  */
    {

	insert((yyvsp[-4].val), (yyvsp[-3].val), "");
	if (lookup((yyvsp[-4].val), 0) >= 0)
	{
		// global variable
		strcat(jasm, "\tfield static ");
		strcat(jasm, (yyvsp[-3].val));
		strcat(jasm, " ");
		strcat(jasm, (yyvsp[-4].val));
		strcat(jasm, " = ");
		strcat(jasm, (yyvsp[0].val));
		strcat(jasm, "\n");
	}
	else
	{
		// local variable

	}
	is_assigning = 0;
}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 601 "yacl.y" /* yacc.c:1646  */
    {
	insert((yyvsp[-4].val), "array" , (yyvsp[0].val));
}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 612 "yacl.y" /* yacc.c:1646  */
    {strcat(jasm, "\tLbody:\n");strcat(jasm, "\t\tgoto Lpost\n");strcat(jasm, "\tLexit:\n");itemDepth--;}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 613 "yacl.y" /* yacc.c:1646  */
    {strcat(jasm, "\tLbody:\n");}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 613 "yacl.y" /* yacc.c:1646  */
    {strcat(jasm, "\t\tgoto Lpost\n");strcat(jasm, "\tLexit:\n");itemDepth--;}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 621 "yacl.y" /* yacc.c:1646  */
    {
	strcat(jasm, " L0\n");
	strcat(jasm, "\t\ticonst_0\n");
	strcat(jasm, "\t\tgoto Lfalse\n");
	strcat(jasm, "\tL0:\n");
	strcat(jasm, "\t\ticonst_1\n");
	strcat(jasm, "\tL1:\n");
	strcat(jasm, "\t\tifeq L2\n");
}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 633 "yacl.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tgoto L3\n");
	strcat(jasm, "\tL2:\n");
}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 639 "yacl.y" /* yacc.c:1646  */
    {strcat(jasm, "\tL3:\n");}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 644 "yacl.y" /* yacc.c:1646  */
    {
	// move the chars of relational_expression 
	int i, len;
	int pos = 0;
	for (i = 0; i < strlen(jasm) ; ++i)
	{
		if (jasm[i] == '{')
		{
			pos = i;
		}
	}
	len = strlen("\n\tLtest:");
	 for( i = strlen(jasm); i >= pos ; i-- ) 
    {
        jasm[i+len]=jasm[i];
    }
    // insert "Ltest:"
	strncpy( &jasm[pos+1], "\n\tLtest:", len ); 

	strcat(jasm, " Ltrue\n");
	strcat(jasm, "\t\ticonst_0\n");
	strcat(jasm, "\t\tgoto Lfalse\n");
	strcat(jasm, "\tLtrue:\n");
	strcat(jasm, "\t\ticonst_1\n");
	strcat(jasm, "\tLfalse:\n");
	strcat(jasm, "\t\tifeq Lexit\n");
	strcat(jasm, "\t\tgoto Lbody\n");
}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 673 "yacl.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\tLpost:\n");
}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 676 "yacl.y" /* yacc.c:1646  */
    {strcat(jasm, "\t\tgoto Ltest\n");}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 679 "yacl.y" /* yacc.c:1646  */
    {strcat(jasm, "\tLtest:\n");}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 680 "yacl.y" /* yacc.c:1646  */
    {
	strcat(jasm, " Ltrue\n");
	strcat(jasm, "\t\ticonst_0\n");
	strcat(jasm, "\t\tgoto Lfalse\n");
	strcat(jasm, "\tLtrue:\n");
	strcat(jasm, "\t\ticonst_1\n");
	strcat(jasm, "\tLfalse:\n");
	strcat(jasm, "\t\tifeq Lexit\n");
	strcat(jasm, "\t\tgoto Lbody\n");

	strcat(jasm, "\tLpost:\n");
	strcat(jasm, "\t\tgoto Ltest\n");}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 715 "yacl.y" /* yacc.c:1646  */
    {
	itemDepth = 0;
}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 720 "yacl.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 726 "yacl.y" /* yacc.c:1646  */
    {
	insert((yyvsp[-1].val), (yyvsp[-2].val), "");
	memset(temp_parameter,0,strlen(temp_parameter));
	now_fun_index++;
	function_index++;
}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 733 "yacl.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\tmethod public static ");
	strcat(jasm, (yyvsp[-5].val));
	strcat(jasm, " ");
	strcat(jasm, (yyvsp[-4].val));
	strcat(jasm, "(");

	for (int i = 0; i < sizeof(temp_parameter)/sizeof(temp_parameter[0]); ++i)
	{
		if (temp_parameter[i] == 0)
		{
			temp_parameter[i-1] = '\0';
			break;
		}
	}
	
	strcat(jasm, temp_parameter);
	strcat(jasm, ")\n");
	strcat(jasm, "\tmax_stack 15\n\tmax_locals 15\n\t{\n");
}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 754 "yacl.y" /* yacc.c:1646  */
    {
 	strcat(jasm, "\t}\n");
 	now_fun_index--;
 }
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 759 "yacl.y" /* yacc.c:1646  */
    {now_fun_index++;function_index++;}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 759 "yacl.y" /* yacc.c:1646  */
    {insert((yyvsp[-3].val), (yyvsp[-4].val), "");now_fun_index++;}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 760 "yacl.y" /* yacc.c:1646  */
    {
	if (strcmp((yyvsp[-8].val), "main") == 0)
	{
		strcat(jasm, "\t\treturn\n\t}\n");
	}
 	now_fun_index--;
}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2263 "y.tab.c" /* yacc.c:1646  */
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
#line 779 "yacl.y" /* yacc.c:1906  */


void yyerror(const char *str) {
	printf("error:%s\n", str);
}

int yywrap() {
	return 1;
}

int main()
{
	// isShouldAdd = 0;
	itemDepth = 0;
	hashArray = create();

	strcat(jasm, "class go_test\n{\n ");
	yyparse();

	printf("\n\n%s\n", "------ Symbol Table: ------");
	printf("%-*s:%-*s%-*s%-*s%-*s%-*s\n", 5, "Index:", 15, "Name", 15, "Type", 20, "Value", 15, "Fun_index", 5, "Depth");
	dump();

	printf("\n\n%s\n", "------ Write Java Assembly Code Into go_test.jasm ------");
	strcat(jasm, "}\n");
	FILE *fpt;
	char file_name[100];
	fpt = fopen("go_test.jasm", "w"); 
	fprintf(fpt, jasm);
	fclose(fpt);

	printf("\n\n%s\n", "------ Result After Run By Java ------");
	 char command[100] = "./javaa go_test.jasm";
	 printf("%s%s\n", "linux command1: ", command);
	 system(command);

	 memset(command, '\0', sizeof(command)-1);

	 strcat(command, "java go_test");
	 printf("%s%s\n", "linux command2: ", command);
	 system(command);
	return 0;
}
