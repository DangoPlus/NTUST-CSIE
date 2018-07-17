%{
#include <stdio.h>
// #include <common.h> 
int  yylex  (void);
void  yyerror  (const char *str);
%}

%token BOOL BREAK CASE CONST CONTINUE DEFAULT ELSE FOR FUNC GO IF 
%token IMPORT INT NIL PRINT PRINTLN REAL RETURN STRINGKEYWORD 
%token STRUCT SWITCH VAR VOID WHILE READ
%token TRUE FALSE
%token IDENTIFIER INTEGER REALCONSTANTS STR 
%token LE_OP GE_OP EQ_OP NE_OP 
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN
%start program

%union{
  char * type;
  char * val;
  int index;
};

%%

primary_expression
	: value_declaration
	| declarator
	;

unary_expression
	: primary_expression
	| '-' primary_expression
	;

multiplicative_expression
	: unary_expression
	| multiplicative_expression '*' unary_expression
	| multiplicative_expression '/' unary_expression
	| multiplicative_expression '%' unary_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;


relational_expression
	: additive_expression
	| relational_expression '<' primary_expression
	| relational_expression '>' primary_expression
	| relational_expression LE_OP primary_expression
	| relational_expression GE_OP primary_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

assignment_expression
	: inclusive_or_expression
	| inclusive_or_expression '=' assignment_expression
	;

expression
	: assignment_expression
	;

type_specifier
	: BOOL
	| STR
	| REAL
	| INT
	;

value_declaration
	: STR
	| TRUE
	| FALSE
	| INTEGER
	| REALCONSTANTS
	;

// when function be called
declarator
	: IDENTIFIER
	| IDENTIFIER '(' identifier_list ')'
	| IDENTIFIER '(' ')'
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

// when funtion be defined
parameter_declaration
	: IDENTIFIER type_specifier
	| 
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

declaration
	: CONST IDENTIFIER '=' value_declaration
	| VAR IDENTIFIER type_specifier
	| VAR IDENTIFIER type_specifier '=' value_declaration
	| VAR IDENTIFIER '[' INTEGER ']' type_specifier
	;

declaration_list
	: declaration
	| declaration_list declaration
	;


simple_statment
	: IDENTIFIER '[' INTEGER ']' '=' expression
	| IDENTIFIER '=' expression
	| PRINT expression
	| PRINTLN expression
	| READ IDENTIFIER
	| RETURN expression
	| RETURN INTEGER
	| RETURN REALCONSTANTS
	| RETURN STR
	| RETURN TRUE
	| RETURN FALSE
	;

compound_start
	: '{'
	{
		// printf("%s\n", "{");
	};

compound_end
	: '}'
	{
		// printf("%s\n", "}");
	};

compound_statement
	: compound_start statement_list compound_end
	| compound_start declaration_list compound_end
	| compound_start declaration_list statement_list compound_end
	| compound_start compound_end
	;

expression_statement
	:  expression 
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	;

iteration_statement
	: FOR '(' expression_statement ')' statement
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression_statement ')' statement
	;

jump_statement
	: GO IDENTIFIER
	;

statement_list
	: statement
	| statement_list statement
	;

statement
	: simple_statment
	| compound_statement
	| expression_statement 
	| selection_statement 
	| iteration_statement 
	| jump_statement 
	;

function_definition
	: FUNC type_specifier IDENTIFIER '(' parameter_list ')' compound_statement
	| FUNC IDENTIFIER '(' ')' compound_statement
	| FUNC type_specifier IDENTIFIER '(' ')' compound_statement
	| FUNC VOID IDENTIFIER '(' ')' compound_statement
	| FUNC VOID IDENTIFIER '(' parameter_list ')' compound_statement
	;

external_declaration
	: function_definition
	| declaration
	| IDENTIFIER '(' identifier_list ')'
	;

program
	: external_declaration
	| program external_declaration
	{printf("%s\n", $$);};

%%

void yyerror(const char *str){
    printf("error:%s\n",str);
}

int yywrap(){
    return 1;
}

int main()
{
    yyparse();
}

// not finish ::

// // | RETURN
	// | RETURN expression