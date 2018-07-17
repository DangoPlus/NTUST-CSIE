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
#line 11 "parser.y" /* yacc.c:1909  */

#include <glib.h>
#include "ast.h"

#line 49 "parser.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LITDEC = 258,
    ID = 259,
    LITSTR = 260,
    LITCHAR = 261,
    T = 262,
    F = 263,
    ABSTRACT = 264,
    ALIGNOF = 265,
    AS = 266,
    BE = 267,
    BOX = 268,
    BREAK = 269,
    CONST = 270,
    CONTINUE = 271,
    CRATE = 272,
    DO = 273,
    ELSE = 274,
    EXTERN = 275,
    FINAL = 276,
    FN = 277,
    FOR = 278,
    IF = 279,
    IMPL = 280,
    IN = 281,
    LET = 282,
    LOOP = 283,
    MACRO_RULES = 284,
    MACRO = 285,
    MATCH = 286,
    MOD = 287,
    MOVE = 288,
    MUT = 289,
    NEW = 290,
    OFFSETOF = 291,
    OVERRIDE = 292,
    PRIV = 293,
    PUB = 294,
    PURE = 295,
    REF = 296,
    RETURN = 297,
    SIZEOF = 298,
    STATIC = 299,
    SELF = 300,
    STRUCT = 301,
    SUPER = 302,
    TRAIT = 303,
    TYPEOF = 304,
    TYPE = 305,
    UNSAFE = 306,
    UNSIZED = 307,
    USE = 308,
    VIRTUAL = 309,
    WHERE = 310,
    WHILE = 311,
    YIELD = 312,
    BOOL = 313,
    U8 = 314,
    U16 = 315,
    U32 = 316,
    U64 = 317,
    I8 = 318,
    I16 = 319,
    I32 = 320,
    I64 = 321,
    F32 = 322,
    F64 = 323,
    USIZE = 324,
    ISIZE = 325,
    CHAR = 326,
    STR = 327,
    COLON = 328,
    QUALIFIER = 329,
    ELEMENTSELECT = 330,
    RARROW = 331,
    POUNDNOT = 332,
    POUND = 333,
    DOLLAR = 334,
    LBRACK = 335,
    RBRACK = 336,
    LCBRACK = 337,
    RCBRACK = 338,
    COMMA = 339,
    SEMICOLON = 340,
    DIVEQU = 341,
    REMAINEQU = 342,
    REMAINDER = 343,
    ANDEQU = 344,
    LOGICAND = 345,
    AND = 346,
    OREQU = 347,
    LOGICOR = 348,
    INCLUOR = 349,
    EXCOREQU = 350,
    EXCLUSIVEOR = 351,
    LOGICLEFTSHIFTEQU = 352,
    LOGICLEFTSHIFT = 353,
    LOGICRIGHTSHIFTEQU = 354,
    LOGICRIGHTSHIFT = 355,
    LESSEQU = 356,
    GREATEREQU = 357,
    LESS = 358,
    GREATER = 359,
    ADDEQU = 360,
    SUBEQU = 361,
    MULEQU = 362,
    LOGICEQU = 363,
    EQU = 364,
    NOTEQU = 365,
    EXCL = 366,
    LPAREN = 367,
    RPAREN = 368,
    ADD = 369,
    SUB = 370,
    MUL = 371,
    DIV = 372,
    DDOT = 373,
    TDOT = 374,
    UNKNOWN = 375,
    ENUM = 376,
    STRING = 377,
    DOT = 378,
    NOT = 379,
    UNDER = 380,
    REM = 381
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "parser.y" /* yacc.c:1909  */

      int num;
      char* str;
      char ch;
      int booll;
      GList* list;
      GNode* node;

#line 197 "parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
