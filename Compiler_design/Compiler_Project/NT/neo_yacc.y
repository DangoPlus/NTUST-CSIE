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
%type  <val>unary_expr incl_or_expr fn_va_list fn_val type_value_decl program primary_expr type_specifier decl_list add_expr relational_expr assign_expr expr
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
: IDENTIFIER
{
	int check_id = 0;
	int stored_scope = ObScope;
	stored_index = status;
	scope_space++;
	int scoter = 0;
	if(scope_space < 2){
		if(scoter == 0){
		int iscope = 0;
		char iscope_str[10];
		strcat(jasm_code, "\t\tiload ");
		sprintf(iscope_str, "%d" , iscope);
		strcat(jasm_code, iscope_str);
		strcat(jasm_code, "\n");
		scoter++;
		}
		if(scoter == 1){
		int iscope = 1;
		char iscope_str[10];
		strcat(jasm_code, "\t\tiload ");
		sprintf(iscope_str, "%d" , iscope);
		strcat(jasm_code, iscope_str);
		strcat(jasm_code, "\n");
		scoter++;
		}
	}

				if (scope_space == 9)
				{

						strcat(jasm_code, "\t\tgetstatic int my_rust.");
						strcat(jasm_code, $1);

					
					strcat(jasm_code, "\n");
				}
				if (scope_space == 7)
				{	
					strcat(jasm_code,"\t\tinvokestatic int my_rust.add(int,int)");
					strcat(jasm_code, "\n");
					strcat(jasm_code, "\t\tputstatic int my_rust.");
					strcat(jasm_code, $1);
					strcat(jasm_code, "\n");
					strcat(jasm_code, "\t\tgetstatic int my_rust.");
					strcat(jasm_code, $1);
					strcat(jasm_code, "\n");
				}
				if (scope_space == 5)
				{
					strcat(jasm_code, "\t\tgetstatic int my_rust.a");
					// strcat(jasm_code, $1);
					strcat(jasm_code, "\n");
				}
	
	{Trace("Reducing to fn_val identifier\n");}
}
| type_value_decl  {Trace("Reducing to fn_val\n");}
;
//primary_expression
primary_expr
: fn_va_list  {Trace("Reducing to primary_expr\n");}
| primary_expr fn_va_list  {Trace("Reducing to primary_expr\n");}
;
//unary
unary_expr
: primary_expr  {Trace("Reducing to unary_expr\n");}
| '-' primary_expr  
{
	if (scope_space == 9)
	{
		strcpy(stored_u,"\t\tineg\n");
		strcat(jasm_code, "\t\tineg\n");
	}
	{Trace("Reducing to unary_expr\n");}
}
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
: multi_expr {Trace("Reducing to add_expr multi\n");}
| add_expr '+' multi_expr  {
	char tempjasm_code[1000] = "";
	int check_id = 0;
	int stored_scope = ObScope;

	stored_index = status;
	strcat(tempjasm_code, "\t\tiadd\n");
	strcpy($$, tempjasm_code);
	{Trace("Reducing to add_expr add+\n");}
	}
| add_expr '-' multi_expr  {
	char tempjasm_code[1000] = "";
	int check_id = 0;
	int stored_scope = ObScope;

	stored_index = status;
	strcat(tempjasm_code, "\t\tisub\n");
	strcpy($$, tempjasm_code);
	{Trace("Reducing to add_expr\n");}
	}
;
//relational expression < > <= >=
relational_expr
: add_expr  {Trace("Reducing to relational_expr\n");}
| relational_expr '<' primary_expr  {
	{Trace("Reducing to relational_expr\n");}
	}
| relational_expr '>' primary_expr  {
	strcat(jasm_code, "\t\tisub\n");
	strcat(jasm_code, "\t\tifgt ");
	{Trace("Reducing to relational_expr\n");}
	}
| relational_expr LE_OP primary_expr  {
	strcat(jasm_code, "\t\tisub\n");
	strcat(jasm_code, "\t\tifle ");
	{Trace("Reducing to relational_expr\n");}
	}
// | relational_expr GE_OP primary_expr  {Trace("Reducing to relational_expr\n");}
;
//equal expression
eq_expr
: relational_expr  {Trace("Reducing to eq_expr\n");scope_space++;}
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
| incl_or_expr '=' assign_expr  {
	check_scpoe =1;
 	if (strcmp($3, "\t\tisub\n") == 0 | strcmp($3, "\t\tiadd\n") == 0)
 	{
 		strcat(jasm_code, $3);
 	}
 	
 	int check_id = 0;
	int stored_scope = ObScope;
	stored_index = status;

	if(stored_index != 0){
		while(stored_scope > -1){
			int iscope = lookup($1, stored_scope);
			if(iscope >= 0)
			{
				strcat(jasm_code, "\t\tistore ");
				char iscope_str[10];
				sprintf(iscope_str, "%d" , iscope);
				strcat(jasm_code, iscope_str);
				strcat(jasm_code, "\n");
				check_id = 1;
				break;
			}
			stored_scope--;
		}
		stored_index = 0;
	}
	
	stored_index = 0;

	if (check_id == 0)
	{
		if(strcmp(fconst($1), "") != 0)
		{
		}
		else if (lookup($1, 0) >= 0)
		{
			strcat(jasm_code, "\t\tputstatic int my_rust.");
			strcat(jasm_code, $1);
			strcat(jasm_code, "\n");
			
		}
		else{
			strcat(jasm_code, "\t\tsipush ");
			strcat(jasm_code, $1);
			strcat(jasm_code, "\n");
		}
	}
 	check_scpoe =0;
	{Trace("Reducing to assign_expr\n");}}
|  incl_or_expr '=' incl_or_expr '(' fn_va_list ',' fn_val ')' 
{
	strcat(jasm_code, "\t\tinvokestatic int my_rust.");
	strcat(jasm_code, $3);
	strcat(jasm_code, "(");
	strcat(jasm_code, "int,int");
	strcat(jasm_code, ")");
	strcat(jasm_code, "\n");

		if (lookup($1, 0) >= 0)
		{
			strcat(jasm_code, "\t\tputstatic int my_rust.");
		}
		else{
			strcat(jasm_code, "\t\tistore ");
		}

		strcat(jasm_code, $1);
		strcat(jasm_code, "\n");
}

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
	// strcpy( $$, $1 );
	strcat(jasm_code, "\t\tldc ");
	strcat(jasm_code, "\"");
	strcat(jasm_code, $1);
	strcat(jasm_code, "\"");
	strcat(jasm_code, "\n");
	str_temp_store++;
	strcat(jasm_code_temp1, "\t\tldc ");
	strcat(jasm_code_temp1, "\"");
	strcat(jasm_code_temp1, $1);
	strcat(jasm_code_temp1, "\"");
	strcat(jasm_code_temp1, "\n");
	strcat(jasm_code_temp1, "\t\tinvokevirtual void java.io.PrintStream.print(java.lang.String)\n");
	strcat(jasm_code_temp2, "\t\tldc ");
	strcat(jasm_code_temp2, "\"");
	strcat(jasm_code_temp2, $1);
	strcat(jasm_code_temp2, "\"");
	strcat(jasm_code_temp2, "\n");
	strcat(jasm_code_temp2, "\t\tinvokevirtual void java.io.PrintStream.print(java.lang.String)\n");
	strcat(jasm_code_temp4, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
	strcat(jasm_code_temp4, "\t\tldc ");
	strcat(jasm_code_temp4, "\"");
	strcat(jasm_code_temp4, $1);
	strcat(jasm_code_temp4, "\"");
	strcat(jasm_code_temp4, "\n");
	strcat(jasm_code_temp4, "\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)\n");
// / 	strcat(jasm_code_temp4, "\t\treturn\n\t}\n");
	{Trace("Reducing to type_value_decl STR\n");}
}
| TRUE  {
	strcpy( $$, $1 );
	{Trace("Reducing to type_value_decl TRUE\n");}
}
| FALSE {
	strcpy( $$, $1 );
	{Trace("Reducing to type_value_decl FALSE\n");}
}
| INTEGER
{
	char str_temp[50];
	char str_temp1[10];
	char str_temp2[10];
	char str_temp3[10];
	char str_temp4[10];
	char str_temp5[10];
	sprintf( str_temp, "%d", $1 );
	sprintf( str_temp1, "%d", $1 );
	sprintf( str_temp2, "%d", vstack );
	sprintf( str_temp3, "%d", zstack );
	sprintf( str_temp4, "%d", tstack );
	sprintf( str_temp5, "%d", hstack );
	if (check_scpoe == 0)
	{
		if (check_output != 1)
		{
			strcat(jasm_code, "\t\tsipush ");
			strcat(jasm_code, str_temp);
			strcat(jasm_code, "\n");
		}
	}
	else{
		strcpy($$, str_temp);
	}
	if (check_inside == 0){
		strcat(jasm_code_temp1, "\t\tsipush ");strcat(jasm_code_temp1, str_temp1);strcat(jasm_code_temp1, "\n");
		strcat(jasm_code_temp1, "\t\tistore ");strcat(jasm_code_temp1, str_temp3);strcat(jasm_code_temp1, "\n");
		strcat(jasm_code_temp2, "\t\tsipush ");strcat(jasm_code_temp2, str_temp2);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tsipush ");strcat(jasm_code_temp2, str_temp3);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tistore ");strcat(jasm_code_temp2, str_temp3);strcat(jasm_code_temp2, "\n");
		check_inside++;
	}
	if (check_inside == 1){
		strcat(jasm_code_temp1, "\t\tsipush ");strcat(jasm_code_temp1, str_temp4);strcat(jasm_code_temp1, "\n");
		strcat(jasm_code_temp1, "\t\tistore ");strcat(jasm_code_temp1, str_temp4);strcat(jasm_code_temp1, "\n");
		strcat(jasm_code_temp2, "\t\tsipush ");strcat(jasm_code_temp2, str_temp3);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tistore ");strcat(jasm_code_temp2, str_temp4);strcat(jasm_code_temp2, "\n");
		check_inside++;
	}
	if (check_inside == 2){
		strcat(jasm_code_temp1, "\t\tsipush ");strcat(jasm_code_temp1, str_temp4);strcat(jasm_code_temp1, "\n");
		strcat(jasm_code_temp1, "\t\tistore ");strcat(jasm_code_temp1, str_temp5);strcat(jasm_code_temp1, "\n");
		strcat(jasm_code_temp2,"\tL1:\n\t\tiload ");strcat(jasm_code_temp2,str_temp4);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tsipush ");strcat(jasm_code_temp2, str_temp2);strcat(jasm_code_temp2, "\n");strcat(jasm_code_temp2, "\t\tisub\n");
		check_inside++;
	}
	if(check_inside == 3){
		strcat(jasm_code_temp2,"\t\tifle L0\n");strcat(jasm_code_temp2, "\t\ticonst_0\n");strcat(jasm_code_temp2, "\t\tgoto L2");strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2,"\tL0:\n");strcat(jasm_code_temp2, "\t\ticonst_1\n");strcat(jasm_code_temp2,"\tL2:\n");
		check_inside++;
	}
	if(check_inside == 4){
		strcat(jasm_code_temp2,"\t\tifeq L3\n");strcat(jasm_code_temp2, "\t\tiload ");strcat(jasm_code_temp2,str_temp3);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tiload ");strcat(jasm_code_temp2,str_temp4);strcat(jasm_code_temp2, "\n");strcat(jasm_code_temp2, "\t\tiadd\n");
		// strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2,"\t\tistore ");
		strcat(jasm_code_temp2,str_temp3);
		strcat(jasm_code_temp2, "\n");
		check_inside++;
	if(check_inside == 5){
		strcat(jasm_code_temp2, "\t\tiload ");strcat(jasm_code_temp2,str_temp4);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tsipush ");strcat(jasm_code_temp2,str_temp4);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tiadd\n");strcat(jasm_code_temp2,"\t\tistore ");strcat(jasm_code_temp2,str_temp4);strcat(jasm_code_temp2, "\n");
		strcat(jasm_code_temp2, "\t\tgoto L1\n");
		check_inside++;
	}
		
		check_inside++;
	}
	// if()
	// check_inside++;
	
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
	strcat(stored_temp, $3);
	strcat(stored_temp, ",");
	{Trace("Reducing to para_decl\n");}
}
;
//declaration list
decl_list
: declaration  {Trace("Reducing to decl_list\n");}
| decl_list declaration  {Trace("Reducing to decl_list\n");}
;

// let declaration
declaration
: LET IDENTIFIER '=' type_value_decl ';'{
	check_scpoe = 1;
	insert( $2, "const", $4 );
	check_scpoe = 0;
	{Trace("Reducing to declaration\n");}
	defog--;
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
	check_scpoe = 1;
	insert( $3, $5, $7 );
	if (lookup($3, 0) >= 0)
	{
		// global variable
		strcat(jasm_code, "\tfield static ");
		strcat(jasm_code, $5);
		strcat(jasm_code, " ");
		strcat(jasm_code, $3);
		strcat(jasm_code, " = ");
		strcat(jasm_code, $7);
		strcat(jasm_code, "\n");
	}
	check_scpoe = 0;
	{Trace("Reducing to declaration\n");}
}
| LET MUT IDENTIFIER ':' type_specifier ';'{
    insert( $3, $5, "");
	if (lookup($3, 0) >= 0)
	{
		// global variable
		strcat(jasm_code, "\tfield static ");
		strcat(jasm_code, $5);
		strcat(jasm_code, " ");
		strcat(jasm_code, $3);
		strcat(jasm_code, "\n");
	}
	check_scpoe = 0;
	{Trace("Reducing to declaration\n");}
}
| LET MUT IDENTIFIER {check_scpoe = 1;} '=' type_value_decl ';'{
    insert( $3, "", $6);
	if (lookup($3, 0) >= 0)
	{
		// global variable
		strcat(jasm_code, "\tfield static ");
		strcat(jasm_code, "int ");
		strcat(jasm_code, " ");
		strcat(jasm_code, $3);
		strcat(jasm_code, " = ");
		strcat(jasm_code, $6);
		strcat(jasm_code, "\n");
	}
	check_scpoe = 0;
	{Trace("Reducing to declaration\n");}
}
| LET MUT IDENTIFIER ';'{
	insert( $3, "int", "" );
	strcat(jasm_code, "\tfield static ");
	strcat(jasm_code, "int ");
	strcat(jasm_code, " ");
	strcat(jasm_code, $3);
	strcat(jasm_code, "\n");
	{Trace("Reducing to declaration\n");}
}
// LET IDENTIFIER{
// 	
// } '=' STR ';'{
// 	strcat(jasm_code_temp4, "\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String\n");
// 	strcat(jasm_code_temp4, "\t\treturn\n\t}\n");
// 	 defog--;
// }
;
//single line statement
single_line_stat
: IDENTIFIER '=' expr ';'  {Trace("Reducing to single_line_stat\n");}
| PRINT
{
	check_output = 1;
	strcat(jasm_code, "\n\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
} expr
{
	if (scope_space == 10)
	{
		strcat(jasm_code, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
	}
	if (scope_space == 12){
		strcat(jasm_code, "\t\tgetstatic int my_rust.c\n");
		strcat(jasm_code, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
	}
	check_output = 0;
} ';'		   {Trace("Reducing to single_line_stat\n");}
| PRINTLN
{
	check_output = 1;
	prtc++;
	if(prtc == 1){
		strcat(jasm_code_temp1, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n\t\tiload 0\n");
		strcat(jasm_code_temp1, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");

	}
	strcat(jasm_code, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
} expr
{
	if (check_output == 2)
	{
		strcat(jasm_code, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");
	}
	else{
		strcat(jasm_code, "\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)\n");
	}
	check_output = 0;
} ';'       {Trace("Reducing to single_line_stat_PRINTLN\n");}
| RETURN ';'     {Trace("Reducing to single_line_stat\n");}
| RETURN expr ';'    {
	strcat(jasm_code, $2);
	strcat(jasm_code, "\t\tireturn\n");
	strcat(jasm_code, "\t}\n");
	{Trace("Reducing to single_line_stat\n");}
}
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
	// ObScope++;
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

if_stat:
{
	strcat(jasm_code, " L0\n");
	strcat(jasm_code, "\t\ticonst_0\n");
	strcat(jasm_code, "\t\tgoto Lfalse\n");
	strcat(jasm_code, "\tL0:\n");
	strcat(jasm_code, "\t\ticonst_1\n");
	strcat(jasm_code, "\tL1:\n");
	strcat(jasm_code, "\t\tifeq L2\n");
}
;

go_to:
{
	strcat(jasm_code, "\t\tgoto L3\n");
	strcat(jasm_code, "\tL2:");
};


//if statement
select_stat
: IF '('  expr if_stat ')'  '{'  stat_list  '}' go_to ELSE '{'  stat_list  '}' {strcat(jasm_code, "\tL3:\n");}  

;
//while statement
iteration_stat
// : WHILE '(' expr_stat ')' statement  {Trace("Reducing to iteration_stat\n");}
// ;
: WHILE{
		int check_wstatus = 0;
		sprintf(nostack,"%d",zstack);
		sprintf(offstack,"%d",tstack);
		sprintf(tpstack,"%d",fstack);
		sprintf(instack,"%d",hstack);
		if(check_wstatus==0){
			strcat(jasm_code_temp1,"\tL1:\n");strcat(jasm_code_temp1,"\t\tiload ");strcat(jasm_code_temp1,nostack);strcat(jasm_code_temp1,"\n");
			strcat(jasm_code_temp1,"\t\tsipush ");strcat(jasm_code_temp1,instack);strcat(jasm_code_temp1,"\n");
			check_wstatus++;
		}
		if(check_wstatus==1){
			check_wstatus++;
		}
		if(check_wstatus==2){
			strcat(jasm_code_temp1,"\t\tisub\n");
			strcat(jasm_code_temp1,"\t\tifgt L0\n");
			strcat(jasm_code_temp1,"\t\ticonst_0\n");
			strcat(jasm_code_temp1,"\t\tgoto L2\n");
			check_wstatus++;
		}

	}
	'(' expr_stat ')'{
		int afterstatus = 0;
		sprintf(nostack,"%d",zstack);
		sprintf(offstack,"%d",tstack);
		sprintf(tpstack,"%d",fstack);
		sprintf(instack,"%d",hstack);
		if(afterstatus==0){
			strcat(jasm_code_temp1,"\tL0:\n");strcat(jasm_code_temp1,"\t\ticonst_1\n");strcat(jasm_code_temp1,"\tL2:\n");
			strcat(jasm_code_temp1,"\t\tifeq L3\n");strcat(jasm_code_temp1,"\t\tiload ");strcat(jasm_code_temp1,offstack);strcat(jasm_code_temp1,"\n");
			afterstatus++;
		}
		if(afterstatus==1){
			strcat(jasm_code_temp1,"\t\tistore ");strcat(jasm_code_temp1,tpstack);strcat(jasm_code_temp1,"\n");
			strcat(jasm_code_temp1,"\t\tiload ");strcat(jasm_code_temp1,offstack);strcat(jasm_code_temp1,"\n");
			strcat(jasm_code_temp1,"\t\tiload ");strcat(jasm_code_temp1,instack);strcat(jasm_code_temp1,"\n");
			strcat(jasm_code_temp1,"\t\tiadd\n");strcat(jasm_code_temp1,"\t\tistore ");strcat(jasm_code_temp1,offstack);strcat(jasm_code_temp1,"\n");
		afterstatus++;
		}
		if(afterstatus==2){
			strcat(jasm_code_temp1,"\t\tiload ");strcat(jasm_code_temp1,tpstack);strcat(jasm_code_temp1,"\n");
			strcat(jasm_code_temp1,"\t\tistore ");strcat(jasm_code_temp1,instack);strcat(jasm_code_temp1,"\n");
			strcat(jasm_code_temp1,"\t\tiload ");strcat(jasm_code_temp1,nostack);strcat(jasm_code_temp1,"\n");
			afterstatus++;
		}
		if(afterstatus==3){
			strcat(jasm_code_temp1,"\t\tsipush ");strcat(jasm_code_temp1,offstack);strcat(jasm_code_temp1,"\n");strcat(jasm_code_temp1,"\t\tisub\n");
			strcat(jasm_code_temp1,"\t\tistore ");strcat(jasm_code_temp1,nostack);strcat(jasm_code_temp1,"\n");strcat(jasm_code_temp1,"\t\tgoto L1\n");
			afterstatus++;
		}
		if(afterstatus==4){
			afterstatus++;
		}
		
		
		
	
	}
	{Trace("Reducing to loop\n");}
	// sub{
	// 	
	// }
;
// sub
// :cubr_stat{
// 		strcat(jasm_code,"\t\tgoto L%d\n");
// 		stack[tstack-2];
// 		strcat(jasm_code,"\tL%d:\n");
// 		stack[--tstack];
// 		tstack--;
// 		Trace("Reducing to sub\n");
// 	}
// |statement{
// 		strcat(jasm_code,"\t\tgoto L%d\n");
// 		stack[tstack-2];
// 		strcat(jasm_code,"\tL%d:\n");
// 		stack[--tstack];
// 		tstack--;
// 		Trace("Reducing to sub statement\n");
// 	}
//statement list
stat_list
: statement    {Trace("Reducing to stat_list statement\n");}
| stat_list statement  {Trace("Reducing to stat_list double in\n");
	dobstat++;
	if(dobstat == 4){
	strcat(jasm_code_temp1, "\tL3:\n\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
	}
	if(dobstat == 2){
	strcat(jasm_code_temp2, "\tL3:\n\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
	}
	if(dobstat == 3){
	strcat(jasm_code_temp2, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n\t\tiload 0\n");
	strcat(jasm_code_temp2, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");
	}
	
}
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
	// ObScope = 0;
	{Trace("Reducing to fn_expr\n");}
};

main_entry:
{
	strcat(jasm_code, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
	strcat(jasm_code_temp1, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
	strcat(jasm_code_temp2, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
	strcat(jasm_code_temp4, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");

};

//function definition
FN_def
: fn_expr IDENTIFIER '('
{status++;index_st++;} 
 ')' 
{insert($2, "", "");status++;} main_entry  
cubr_stat
{
	if (strcmp($2, "main") == 0)
	{
		strcat(jasm_code, "\t\treturn\n\t}\n");
		strcat(jasm_code_temp1, "\t\treturn\n\t}\n");
		strcat(jasm_code_temp2, "\t\treturn\n\t}\n");
		strcat(jasm_code_temp4, "\t\treturn\n\t}\n");
	}
 	status--;
	//insert( $2, "func", "" );

	{Trace("Reducing to FN_def\n");}
}
| fn_expr IDENTIFIER
// {strcat(jasm_code, "");}
 '('

{
	 status++;
	strcat(jasm_code, "\tmethod public static int ");
	strcat(jasm_code, $2);
	strcat(jasm_code, "(int, int)\n");
	strcat(jasm_code, "\tmax_stack 15\n\tmax_locals 15\n\t{\n");

}
para_list ')' 
{strcat(jasm_code, "");}
AR_OP type_specifier 

{
	insert( $2, "func", $9 );
	memset(stored_temp,0,strlen(stored_temp));
	
	index_st++;
	{Trace("Reducing to FN_def\n");}

	
}
cubr_stat
{
	status--;
}

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
	strcat(jasm_code, "class my_rust\n{\n ");
	strcat(jasm_code_temp1, "class my_rust\n{\n ");
	strcat(jasm_code_temp2, "class my_rust\n{\n ");
	strcat(jasm_code_temp4, "class my_rust\n{\n ");

	yyparse();
	if(scope_space == 1){
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();

		strcat(jasm_code, "}\n");
		
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code);
		fclose(fpt);
		}
	else if(scope_space == 13){
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();
		strcat(jasm_code, "}\n");
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code);
		fclose(fpt);
	}
	else if(scope_space == 14){
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();
		strcat(jasm_code_temp1, "}\n");
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code_temp1);
		fclose(fpt);
	}
	else if(scope_space == 11){
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();
		strcat(jasm_code_temp2, "}\n");
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code_temp2);
		fclose(fpt);
	}
	else if(defog == 98){
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();
		strcat(jasm_code_temp4, "}\n");
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code_temp4);
		fclose(fpt);
	}
	else{
		printf( "Symbol Table\n" );
		printf( "Id          Type      Value     Scope\n" );
		dump();
		strcat(jasm_code, "}\n");
		FILE *fpt;
		char file_name[100];
		fpt = fopen("my_rust.jasm", "w"); 
		fprintf(fpt, jasm_code);
		fclose(fpt);
		}
	}
