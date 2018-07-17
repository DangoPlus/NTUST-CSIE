%{
#include <stdio.h>
#define Trace(t) if (Opt_P) printf(t)
int Opt_P = 1;
void yyerror(char *);
int yylex(void);
%}

%start program
%token COMMA COLON SEMICOLON LP RP LSB RSB LCB RCB PLUS MINUS MULTIPLY DIVIDE CARET MODULUS LT LE GE GT EQ NE AND OR NOR EQUALS PLUSEQUALS MINUSEQUALS MULTIPLYEQUALS DIVIDEEQUALS
%token BOOL BREAK CASE CONST CONTINUE DEFAULT ELSE FOR FUNC GO IF IMPORT INT NIL PRINT PRINTLN REAL RETURN STRING STRUCT SWITCH TYPE VAR VOID WHILE READ
%token<m_sId>IDENTIFIER
%token<m_fREAL>REALVAL
%token<m_nInt>INTEGERVAL
%token<m_str>STRINGVAL
%token BOOLEAN

%left OR
%left AND
%left NOR
%left LE GE GT LT EQ NE
%left PLUS MINUS
%left MULTIPLY DIVIDE MODULUS
%left CARET
%nonassoc UMINUS
%nonassoc IFX


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
        BOOL boolvalue
        |INT  intvalue
        |REAL realvalue
        |STRING strvalue
        ;

boolvalue:
        | EQUALS BOOLEAN
        ;
intvalue:
        | EQUALS INTEGERVAL
        ;
realvalue:
        | EQUALS REALVAL
strvalue:
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

func_decl_list: func_decl
         | func_decl_list func_decl
         ;

func_decl: 
         ;

type : VOID
         | BOOL
         | INT
         | REAL
         | STRING
         ;
FORMAL_ARG: IDENTIFIER type
         | FORMAL_ARG COMMA IDENTIFIER type
         |
         ;
function: LCB cons_decl_list var_decl_list statement_block RCB;

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
