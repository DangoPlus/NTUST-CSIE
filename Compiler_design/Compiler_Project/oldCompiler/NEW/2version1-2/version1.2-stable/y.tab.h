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
    IDENTIFIER = 261,
    BOOL = 262,
    STRINGKEYWORD = 263,
    REAL = 264,
    INT = 265,
    VOID = 266,
    REALCONSTANTS = 267,
    INTEGER = 268,
    BREAK = 269,
    CASE = 270,
    CONST = 271,
    CONTINUE = 272,
    DEFAULT = 273,
    ELSE = 274,
    FOR = 275,
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
#define REALCONSTANTS 267
#define INTEGER 268
#define BREAK 269
#define CASE 270
#define CONST 271
#define CONTINUE 272
#define DEFAULT 273
#define ELSE 274
#define FOR 275
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
#line 95 "yacl.y" /* yacc.c:1909  */

  char typeOF[200];
  char val[200];
  double double_type;
  int int_type;
  int int_val;

#line 144 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
