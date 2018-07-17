%{
#include <stdio.h>
#include "y.tab.h"
int yylex (void);
void yyerror (const char *str);
%}
%start program

%union{
  char * type;
  char * val;
  int index;
};

%token COMMA COLON SEMICOLON LP RP LSB RSB LCB RCB
%token PLUS MINUS MULTIPLY DIVIDE CARET MODULUS LT
%token LE GE GT EQ NE AND OR NOR EQUALS WHILE READ
%token BOOL BREAK CASE CONST CONTINUE DEFAULT ELSE
%token FOR FUNC GO IF IMPORT INT NIL PRINT PRINTLN
%token REAL RETURN STRING STRUCT SWITCH TYPE VAR VOID

%token IDENTIFIER
%token REALVAL
%token INTEGERVAL
%token STRINGVAL
%token BOOLEAN TRUE FALSE


%%

program:
        decl
        | program decl
        ;

decl:
        var_decl_list
        | cons_decl_list
        | func_decl_list
        ;

var_decl_list:
        var_decl
        |var_decl var_decl_list
        |
        ;

var_decl: VAR IDENTIFIER typelist SEMICOLON
        ;

typelist:
        BOOL boolval
        |INT  intval
        |REAL REALval
        |STRING strval
        ;

boolval:
        | EQUALS BOOLEAN
        ;
intval:
        | EQUALS INTEGERVAL
        ;
REALval:
        | EQUALS REALVAL
strval:
        | EQUALS '\"' STRINGVAL '\"'
        ;

cons_decl_list:
        cons_decl
        |cons_decl cons_decl_list
        |
        ;

cons_decl:
        CONST IDENTIFIER EQUALS CONSVAL
        ;

CONSVAL: BOOLEAN
         |INTEGERVAL
         |REALVAL
         |STRINGVAL
         ;


type : VOID
         | BOOL
         | INT
         | REAL
         | STRING
         ;

statement_block:
        statement_block stmt
        |
        ;
stmt:
       ';'
        | expr SEMICOLON
        | PRINT expr SEMICOLON
        | PRINTLN expr SEMICOLON
        | IDENTIFIER '=' expr SEMICOLON
        | READ IDENTIFIER SEMICOLON
        | RETURN SEMICOLON
        | RETURN expr SEMICOLON
        | WHILE '(' expr ')' stmt

        | IF '(' expr ')' stmt %prec IFX

        | IF '(' expr ')' stmt ELSE stmt

        | '{' stmt_list '}'
        ;
stmt_list:
        stmt
        | stmt_list stmt
        ;
expr:
        	INTEGERVAL
          | IDENTIFIER
        	| MINUS expr %prec UMINUS
        	| expr PLUS expr
        	| expr MINUS expr
        	| expr MULTIPLY expr
        	| expr DIVIDE expr
        	| expr LT expr
        	| expr GT expr
        	| expr GE expr
        	| expr LE expr
        	| expr NE expr
        	| expr EQ expr
          | expr CARET expr
          | expr MODULUS expr
          | expr AND expr
          | expr OR expr
          | '(' expr ')'
        	;

%%

int main()
{
yyparse();
}
void yyerror(const char *str){
    printf("error:%s\n",str);
}
