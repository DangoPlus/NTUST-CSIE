/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 7 "neo_yacc.y" /* yacc.c:1909  */

	char	val[200];
	float	float_type;
	int	    int_type;
	char	int_id[200];

#line 185 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
