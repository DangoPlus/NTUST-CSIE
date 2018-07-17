/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison interface for Yacc-like parsers in C

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
#line 27 "yacc_hw3_init.y" /* yacc.c:1916  */

  char val[200];
  float float_type;
  int int_type;
  char int_id[200];

#line 167 "y.tab.h" /* yacc.c:1916  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
