%{
#include "symbol.c"
%}
%start program


%union {
	char	val[200];
	float	float_type;
	int	    int_type;
	char	int_id[200];
};
//token and token has value 
%token <val> STR TRUE FALSE BOOL INT FLOAT 
%token LE_OP GE_OP EQ_OP NE_OP AND OR NOR EQUALS WHILE WHERE AR_OP
%token BREAK CONTINUE DEFAULT ELSE MATCH MUT CHAR ENUM
%token FOR FN DO IF IN PRINT PRINTLN EXTERN LET LOOP PUB
%token RETURN STATIC STRUCT SWITCH SELF USE
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN
%token <float_type> FLOATPOINT
%token <int_type> INTEGER
%token <int_id> IDENTIFIER
%type  <val> fn_va_list fn_val type_value_decl program primary_expr type_specifier decl_list  
//priority
%left OR
%left AND
%left NOR
%left LT LE EQ GE GT NE
%left PLUS MINUS
%left MULTIPLY DIVIDE
%nonassoc UMINUS

%%
//start program
program
: outer_decl {Trace("Reducing to program\n");}
| program outer_decl {Trace("Reducing to program\n");}
;
//outer declaration
outer_decl
: FN_def {Trace("Reducing to outer_decl\n");}
| decl_list {Trace("Reducing to outer_decl\n");}
| IDENTIFIER '(' fn_va_list ')'  {Trace("Reducing to outer_decl\n");}
;
//fuction's value list
fn_va_list
: fn_val  {Trace("Reducing to fn_va_list\n");}
| '(' fn_va_list ',' fn_val ')' {Trace("Reducing to fn_va_list\n");}
;
//function's id and type value
fn_val
: IDENTIFIER  {Trace("Reducing to fn_val\n");}
| type_value_decl  {Trace("Reducing to fn_val\n");}
;
//primary_expression
primary_expr
: fn_va_list  {Trace("Reducing to primary_expr\n");}
| primary_expr fn_va_list  {Trace("Reducing to primary_expr\n");}
// : type_value_decl
//check decl_list
//| decl_list
// | primary_expr type_value_decl
// | primary_expr decl_list
;
//unary
unary_expr
: primary_expr  {Trace("Reducing to unary_expr\n");}
| '-' primary_expr  {Trace("Reducing to unary_expr\n");}
;
// multiply divide mod
multi_expr
: unary_expr  {Trace("Reducing to multi_expr\n");}
| multi_expr '*' unary_expr  {Trace("Reducing to multi_expr\n");}
| multi_expr '/' unary_expr  {Trace("Reducing to multi_expr\n");}
| multi_expr '%' unary_expr  {Trace("Reducing to multi_expr\n");}
;
// add and minus
add_expr
: multi_expr {Trace("Reducing to add_expr\n");}
| add_expr '+' multi_expr  {Trace("Reducing to add_expr\n");}
| add_expr '-' multi_expr  {Trace("Reducing to add_expr\n");}
;
//relational expression < > <= >=
relational_expr
: add_expr  {Trace("Reducing to relational_expr\n");}
| relational_expr '<' primary_expr  {Trace("Reducing to relational_expr\n");}
| relational_expr '>' primary_expr  {Trace("Reducing to relational_expr\n");}
| relational_expr LE_OP primary_expr  {Trace("Reducing to relational_expr\n");}
| relational_expr GE_OP primary_expr  {Trace("Reducing to relational_expr\n");}
;
//equal expression
eq_expr
: relational_expr  {Trace("Reducing to eq_expr\n");}
| eq_expr EQ_OP relational_expr  {Trace("Reducing to eq_expr\n");}
| eq_expr NE_OP relational_expr  {Trace("Reducing to eq_expr\n");}
;
//and expression
and_expr
: eq_expr  {Trace("Reducing to and_expr\n");}
| and_expr '&' eq_expr  {Trace("Reducing to and_expr\n");}
;
//exclusive or expression
excl_or_expr
: and_expr  {Trace("Reducing to excl_expr\n");}
| excl_or_expr '^' and_expr  {Trace("Reducing to excl_expr\n");}
;
//inclusive or expression
incl_or_expr
: excl_or_expr  {Trace("Reducing to incl_or_expr\n");}
| incl_or_expr '|' excl_or_expr  {Trace("Reducing to incl_or_expr\n");}
;
//assign symbol expression "="
assign_expr
: incl_or_expr  {Trace("Reducing to assign_expr\n");}
| incl_or_expr '=' assign_expr  {Trace("Reducing to assign_expr\n");}
;
//expression
expr
: assign_expr  {Trace("Reducing to expr\n");}
| expr assign_expr  {Trace("Reducing to expr\n");}
|'(' expr ')'  {Trace("Reducing to expr\n");}
| '\"' expr '\"'  {Trace("Reducing to expr\n");}
;
//choose a type
type_specifier
: BOOL  {Trace("Reducing to type_specifier BOOL\n");}
| INT  {Trace("Reducing to type_specifier INT\n");}
| FLOAT  {Trace("Reducing to type_specifier FLOAT\n");}
| STR  {Trace("Reducing to type_specifier STR\n");}
;
//type's value declaration
type_value_decl
: STR  {
	strcpy( $$, $1 );
	{Trace("Reducing to type_value_decl\n");}
}
| TRUE  {
	strcpy( $$, $1 );
	{Trace("Reducing to type_value_decl\n");}
}
| FALSE {
	strcpy( $$, $1 );
	{Trace("Reducing to type_value_decl\n");}
}
| INTEGER
{
	char str_temp[50];
	sprintf( str_temp, "%d", $1 );
	strcpy( $$, str_temp );
	{Trace("Reducing to type_value_decl\n");}
}
| FLOATPOINT
{
	char str_temp[50];
	sprintf( str_temp, "%f", $1 );
	strcpy( $$, str_temp );
	{Trace("Reducing to type_value_decl\n");}
}
;

//parameter list
para_list
: para_decl  {Trace("Reducing to para_list\n");}
| para_list ',' para_decl  {Trace("Reducing to para_list\n");}
;
//parameter declaration
para_decl
: IDENTIFIER ':' type_specifier  
{
	insert( $1, $3, "" );
	{Trace("Reducing to para_decl\n");}
}
;
//declaration list
decl_list
: declaration  {Trace("Reducing to decl_list\n");}
| decl_list declaration  {Trace("Reducing to decl_list\n");}
;

// const_expr
// : LET IDENTIFIER '=' expr 
// ;
// let declaration
declaration
: LET IDENTIFIER '=' type_value_decl ';'{
	insert( $2, "const", $4 );
	{Trace("Reducing to declaration\n");}
}
| LET MUT IDENTIFIER '[' type_specifier ','type_value_decl ']'';'{
	insert( $3,"array",$7);
	{Trace("Reducing to declaration\n");}
}
| LET IDENTIFIER ':' type_specifier '=' type_value_decl ';'{
	insert( $2, $4, $6 );
	{Trace("Reducing to declaration\n");}
}
| LET MUT IDENTIFIER ':' type_specifier '=' type_value_decl ';'{
	insert( $3, $5, $7 );
	{Trace("Reducing to declaration\n");}
}
| LET MUT IDENTIFIER ':' type_specifier ';'{
    insert( $3, $5, "");
	{Trace("Reducing to declaration\n");}
}
| LET MUT IDENTIFIER '=' type_value_decl ';'{
    insert( $3, "", $5);
	{Trace("Reducing to declaration\n");}
}
| LET MUT IDENTIFIER ';'{
	insert( $3, "int", "" );
	{Trace("Reducing to declaration\n");}
}
;
//single line statement
single_line_stat
: IDENTIFIER '=' expr ';'  {Trace("Reducing to single_line_stat\n");}
| PRINT expr ';'		   {Trace("Reducing to single_line_stat\n");}
| PRINTLN expr ';'       {Trace("Reducing to single_line_stat\n");}
| RETURN ';'     {Trace("Reducing to single_line_stat\n");}
| RETURN expr ';'    {Trace("Reducing to single_line_stat\n");}
;
//curly brackets start
cubr_start
: '{'  {Trace("Reducing to cubr_start\n");}
{
	if ( judge == 1 )
	{
		ObScope++;
	}else  {
		judge++;
	}
}
;
//curly brackets end
cubr_end
: '}'   {Trace("Reducing to cubr_end\n");}
{
	ObScope--;
}
;
//curly brackets statement
cubr_stat
: cubr_start stat_list cubr_end  {Trace("Reducing to cubr_stat\n");}
| cubr_start decl_list cubr_end  {Trace("Reducing to cubr_stat\n");}
| cubr_start decl_list stat_list cubr_end  {Trace("Reducing to cubr_stat\n");}
| cubr_start cubr_end  {Trace("Reducing to cubr_stat\n");}
;
//expression statement
expr_stat
:  expr  {Trace("Reducing to expr_stat\n");}
;
//if statement
select_stat
: IF '(' expr ')' statement  {Trace("Reducing to select_stat\n");}
| IF '(' expr ')' statement ELSE statement  {Trace("Reducing to select_stat\n");}
;
//while statement
iteration_stat
: WHILE '(' expr_stat ')' statement  {Trace("Reducing to iteration_stat\n");}
;

// jump_statement
// : GO IDENTIFIER '(' expr_stat ')'
// ;
//statement list
stat_list
: statement    {Trace("Reducing to stat_list\n");}
| stat_list statement  {Trace("Reducing to stat_list\n");}
;

statement
: single_line_stat  {Trace("Reducing to statement\n");}
| cubr_stat  {Trace("Reducing to statement\n");}
| expr_stat  {Trace("Reducing to statement\n");}
| select_stat  {Trace("Reducing to statement\n");}
| iteration_stat  {Trace("Reducing to statement\n");}
;
//function expression
fn_expr
:FN {
	judge = 0;
	ObScope++; // enter scope
	{Trace("Reducing to fn_expr\n");}
};
//function definition
FN_def
: fn_expr IDENTIFIER '(' ')' cubr_stat
{
	insert( $2, "func", "" );
	{Trace("Reducing to FN_def\n");}
}
| fn_expr IDENTIFIER '(' para_list ')' AR_OP type_specifier cubr_stat
{
	insert( $2, "func", $7 );
	{Trace("Reducing to FN_def\n");}
}
////
// | fn_expr type_specifier IDENTIFIER '('  ')' cubr_stat
// {
// 	insert( $3, $2, "" );
// 	{Trace("Reducing to FN_def\n");}
// }
;
%%
//error detect
void yyerror( const char *str )
{
	printf("error:%s\n",str);
}

int yywrap()
{
	return(1);
}

int main()
{
	//init
	judge	= 0;
	ObScope	= 0;
	table	= create();
	yyparse();
	printf( "Symbol Table\n" );
	printf( "Id          Type      Value     Scope\n" );
	dump();
	return(0);
}


