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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 11 "parser.y" /* yacc.c:1915  */


#include <glib.h>
#include "ast.h"
#include "type.h"


#line 52 "parser.h" /* yacc.c:1915  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_UNKNOWN = 258,
    T_LEQ = 259,
    T_EQEQ = 260,
    T_NEQ = 261,
    T_GEQ = 262,
    T_ANDAND = 263,
    T_OROR = 264,
    T_MINUSEQ = 265,
    T_PLUSEQ = 266,
    T_MULEQ = 267,
    T_DIVEQ = 268,
    T_MODEQ = 269,
    T_COLONCOLON = 270,
    T_MINUSGT = 271,
    T_EQGT = 272,
    T_IF = 273,
    T_ELSE = 274,
    T_ENUM = 275,
    T_FN = 276,
    T_LET = 277,
    T_MATCH = 278,
    T_MUT = 279,
    T_REF = 280,
    T_RETURN = 281,
    T_STRUCT = 282,
    T_TRUE = 283,
    T_FALSE = 284,
    T_WHILE = 285,
    T_LOOP = 286,
    T_NEW = 287,
    T_BOX = 288,
    T_I32 = 289,
    T_U8 = 290,
    T_BOOL = 291,
    T_LIT_U8 = 292,
    T_LIT_I32 = 293,
    T_LIT_STR = 294,
    T_ID = 295,
    UNARY = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "parser.y" /* yacc.c:1915  */

      char* str;
      int num;

      GList* list;

      struct exp* exp;
      struct item* item;
      struct stmt* stmt;
      struct pat* pat;
      struct type* type;

      struct pair* pair;

#line 121 "parser.h" /* yacc.c:1915  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
