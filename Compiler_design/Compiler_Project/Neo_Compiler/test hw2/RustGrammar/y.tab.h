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
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SHL = 258,
    SHR = 259,
    LE = 260,
    EQEQ = 261,
    NE = 262,
    GE = 263,
    ANDAND = 264,
    OROR = 265,
    SHLEQ = 266,
    SHREQ = 267,
    MINUSEQ = 268,
    ANDEQ = 269,
    OREQ = 270,
    PLUSEQ = 271,
    STAREQ = 272,
    SLASHEQ = 273,
    CARETEQ = 274,
    PERCENTEQ = 275,
    DOTDOT = 276,
    DOTDOTDOT = 277,
    MOD_SEP = 278,
    RARROW = 279,
    LARROW = 280,
    FAT_ARROW = 281,
    LIT_BYTE = 282,
    LIT_CHAR = 283,
    LIT_INTEGER = 284,
    LIT_FLOAT = 285,
    LIT_STR = 286,
    LIT_STR_RAW = 287,
    LIT_BYTE_STR = 288,
    LIT_BYTE_STR_RAW = 289,
    IDENT = 290,
    UNDERSCORE = 291,
    LIFETIME = 292,
    SELF = 293,
    STATIC = 294,
    ABSTRACT = 295,
    ALIGNOF = 296,
    AS = 297,
    BECOME = 298,
    BREAK = 299,
    CATCH = 300,
    CRATE = 301,
    DO = 302,
    ELSE = 303,
    ENUM = 304,
    EXTERN = 305,
    FALSE = 306,
    FINAL = 307,
    FN = 308,
    FOR = 309,
    IF = 310,
    IMPL = 311,
    IN = 312,
    LET = 313,
    LOOP = 314,
    MACRO = 315,
    MATCH = 316,
    MOD = 317,
    MOVE = 318,
    MUT = 319,
    OFFSETOF = 320,
    OVERRIDE = 321,
    PRIV = 322,
    PUB = 323,
    PURE = 324,
    REF = 325,
    RETURN = 326,
    SIZEOF = 327,
    STRUCT = 328,
    SUPER = 329,
    UNION = 330,
    UNSIZED = 331,
    TRUE = 332,
    TRAIT = 333,
    TYPE = 334,
    UNSAFE = 335,
    VIRTUAL = 336,
    YIELD = 337,
    DEFAULT = 338,
    USE = 339,
    WHILE = 340,
    CONTINUE = 341,
    PROC = 342,
    BOX = 343,
    CONST = 344,
    WHERE = 345,
    TYPEOF = 346,
    INNER_DOC_COMMENT = 347,
    OUTER_DOC_COMMENT = 348,
    SHEBANG = 349,
    SHEBANG_LINE = 350,
    STATIC_LIFETIME = 351,
    LAMBDA = 352,
    SHIFTPLUS = 353,
    FORTYPE = 354,
    RANGE = 355
  };
#endif
/* Tokens.  */
#define SHL 258
#define SHR 259
#define LE 260
#define EQEQ 261
#define NE 262
#define GE 263
#define ANDAND 264
#define OROR 265
#define SHLEQ 266
#define SHREQ 267
#define MINUSEQ 268
#define ANDEQ 269
#define OREQ 270
#define PLUSEQ 271
#define STAREQ 272
#define SLASHEQ 273
#define CARETEQ 274
#define PERCENTEQ 275
#define DOTDOT 276
#define DOTDOTDOT 277
#define MOD_SEP 278
#define RARROW 279
#define LARROW 280
#define FAT_ARROW 281
#define LIT_BYTE 282
#define LIT_CHAR 283
#define LIT_INTEGER 284
#define LIT_FLOAT 285
#define LIT_STR 286
#define LIT_STR_RAW 287
#define LIT_BYTE_STR 288
#define LIT_BYTE_STR_RAW 289
#define IDENT 290
#define UNDERSCORE 291
#define LIFETIME 292
#define SELF 293
#define STATIC 294
#define ABSTRACT 295
#define ALIGNOF 296
#define AS 297
#define BECOME 298
#define BREAK 299
#define CATCH 300
#define CRATE 301
#define DO 302
#define ELSE 303
#define ENUM 304
#define EXTERN 305
#define FALSE 306
#define FINAL 307
#define FN 308
#define FOR 309
#define IF 310
#define IMPL 311
#define IN 312
#define LET 313
#define LOOP 314
#define MACRO 315
#define MATCH 316
#define MOD 317
#define MOVE 318
#define MUT 319
#define OFFSETOF 320
#define OVERRIDE 321
#define PRIV 322
#define PUB 323
#define PURE 324
#define REF 325
#define RETURN 326
#define SIZEOF 327
#define STRUCT 328
#define SUPER 329
#define UNION 330
#define UNSIZED 331
#define TRUE 332
#define TRAIT 333
#define TYPE 334
#define UNSAFE 335
#define VIRTUAL 336
#define YIELD 337
#define DEFAULT 338
#define USE 339
#define WHILE 340
#define CONTINUE 341
#define PROC 342
#define BOX 343
#define CONST 344
#define WHERE 345
#define TYPEOF 346
#define INNER_DOC_COMMENT 347
#define OUTER_DOC_COMMENT 348
#define SHEBANG 349
#define SHEBANG_LINE 350
#define STATIC_LIFETIME 351
#define LAMBDA 352
#define SHIFTPLUS 353
#define FORTYPE 354
#define RANGE 355

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
