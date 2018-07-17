%{
//A10515001 李大祥 compiler project2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1024

int  yylex  (void);
void  yyerror  (const char *str);

int keyId = 1;
int itemDepth = 0;

char jasm[10000];
char temp_parameter[1000];
char unary_symbol[20];
int now_fun_index = 0;
int function_index = 0;
int temp_fun_index = 0;
int is_print = 0;
int is_assigning = 0;

struct DataItem {
	char idName[100];
	char type[100];
	char value[100];
	int key;
	int depth;
	int fun_index;
};

struct DataItem * *hashArray;

//Creates a symbol table.
struct DataItem * * create() {
	static struct DataItem* newHashArray[SIZE] ;
	return newHashArray;
};

//Returns index of the entry for int key
int lookup(char *idName , int depth) {
	int hashIndex = 1;
	int isFind = 0;
	int first_index = 0;

	while (hashArray[hashIndex] != NULL) {
		if ( hashArray[hashIndex]->depth == depth && hashArray[hashIndex]->fun_index == temp_fun_index)
		{
			first_index = hashIndex;
			break;
		}
		else
		{
			++hashIndex;
		}
	}

	while (hashArray[hashIndex] != NULL) {
		if (strcmp(hashArray[hashIndex]->idName, idName) == 0 && hashArray[hashIndex]->depth == depth && hashArray[hashIndex]->fun_index == temp_fun_index && strcmp(hashArray[hashIndex]->type, "const") != 0)
		{
			isFind = 1;
			break;
		}
		else
		{
			++hashIndex;
		}
	}
	if (isFind == 1) {
		return hashIndex - first_index;
	}
	else {
		return -1;
	}
}

// search by relaxed condition
int lookup_nodepth(char *idName) {
	int hashIndex = 1;
	int isFind = 0;

	while (hashArray[hashIndex] != NULL) {
		if (strcmp(hashArray[hashIndex]->idName, idName) == 0 )
		{
			isFind = 1;
			break;
		}
		else
		{
			++hashIndex;
		}
	}
	if (isFind == 1) {
		return hashIndex;
	}
	else {
		return -1;
	}
}

// search for const
char* lookup_const(char *idName) {
	int hashIndex = 1;
	int isFind = 0;
	int depth = 0;

	while (hashArray[hashIndex] != NULL) {
			if (strcmp(hashArray[hashIndex]->idName, idName) == 0 && hashArray[hashIndex]->depth == depth && hashArray[hashIndex]->fun_index == temp_fun_index 
				&& strcmp(hashArray[hashIndex]->type, "const") == 0)
		{
			isFind = 1;
			break;
		}
		else
		{
			++hashIndex;
		}
	}
	if (isFind == 1) {
		return hashArray[hashIndex]->value;
	}
	else {
		return "";
	}
}

//Inserts s into  the symbol table
void insert(char *idName , char *type, char *value) {
	struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
	strcpy(item->idName, idName);
	strcpy(item->type, type);
	strcpy(item->value, value);
	item->depth = itemDepth;
	item->fun_index = function_index;
	item->key = keyId;

	hashArray[keyId] = item;
	keyId ++;
}

//Dumps all entries of the symbol table. returns index of the entry.
void dump() {
	for (int i = 1; i < SIZE; i++)
	{
		if (hashArray[i] != NULL)
		{
			printf("%-*d:%-*s%-*s%-*s%-*d%-*d\n", 5, i, 15, hashArray[i]->idName, 15, hashArray[i]->type, 25, hashArray[i]->value, 15, hashArray[i]->fun_index, 5, hashArray[i]->depth);
		}
	}
	// clear the hashArray
	for (int i = 1; i < SIZE; i++)
	{
		if (hashArray[i] != NULL)
			{
		hashArray[i] = NULL;
		}
	}
}
%}

%union {
	char str[200];
	double double_type;
	int int_type;
	int int_val;
}

%token <str> STR TRUE FALSE IDENTIFIER BOOL STRINGKEYWORD REAL INT VOID FOR 
%token <double_type> REALCONSTANTS
%token <int_type> INTEGER 
%token  BREAK CASE CONST CONTINUE DEFAULT ELSE  FUNC GO IF
%token IMPORT  NIL PRINT PRINTLN  RETURN 
%token STRUCT SWITCH VAR  WHILE READ
%token LE_OP GE_OP EQ_OP NE_OP
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN

%type  <str> value_declaration program primary_expression type_specifier declarator_list declarator expression  assignment_expression relational_expression additive_expression  parameter_list parameter_declaration external_declaration unary_expression declaration function_definition declaration_list  '-'
%start program

%%

value_declaration
: STR  {
	strcat(jasm, "\t\tldc ");
	strcat(jasm, "\"");
	strcat(jasm, $1);
	strcat(jasm, "\"");
	strcat(jasm, "\n");
}
| TRUE  {
	strcpy($$, $1);
}
| FALSE {
	strcpy($$, $1);
}
| INTEGER
{
	char tempStr[50];
	sprintf( tempStr, "%d", $1 );

	if (is_assigning == 0)
	{
		if (is_print != 1)
		{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, tempStr);
			strcat(jasm, "\n");
		}
	}
	else{
		strcpy($$, tempStr);
	}
}
| REALCONSTANTS
{
	char tempStr[50];
	sprintf( tempStr, "%g", $1 );
	strcpy($$, tempStr);
};

declarator
: IDENTIFIER
{
	int is_found_ident = 0;
	int tempdepth = itemDepth;
	temp_fun_index = now_fun_index;

	if(temp_fun_index != 0){
		while(tempdepth > -1){
			int index_depth = lookup($1, tempdepth);
			if(index_depth >= 0)
			{
				strcat(jasm, "\t\tiload ");
				char index_depth_str[10];
				sprintf(index_depth_str, "%d" , index_depth);

				strcat(jasm, index_depth_str);
				strcat(jasm, "\n");
				is_found_ident = 1;
				break;
			}
			tempdepth--;
		}
		temp_fun_index = 0;
	}

	if (is_found_ident == 0)
	{
		if (lookup($1, 0) >= 0)
		{
			strcat(jasm, "\t\tgetstatic int go_test.");
			strcat(jasm, $1);
			
		}
		else if(strcmp(lookup_const($1), "") != 0)
		{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, lookup_const($1));
			strcpy($1, lookup_const($1));
		}
		else{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, $1);
		}
		
		strcat(jasm, "\n");
	}

	if (is_print == 1)
	{		
		is_print = 2;
		strcat(jasm, unary_symbol);
		memset(unary_symbol,0,strlen(unary_symbol));
	}
} 
| value_declaration
;

// when function be called
declarator_list
: declarator
|  declarator ',' declarator_list
;

primary_expression
: declarator_list
| primary_expression declarator_list
;

unary_expression
: primary_expression 
| '-' 
{
	if (is_print == 1)
	{
		strcpy(unary_symbol,"\t\tineg\n");
	}
} 
primary_expression 
;

additive_expression
: declarator
|  additive_expression  '+'  declarator
{
	char tempJasm[1000] = "";
	int is_found_ident = 0;
	int tempdepth = itemDepth;

	temp_fun_index = now_fun_index;
	strcat(tempJasm, "\t\tiadd\n");
	strcpy($$, tempJasm);
}
| additive_expression  '-' declarator
{
	char tempJasm[1000] = "";
	int is_found_ident = 0;
	int tempdepth = itemDepth;

	temp_fun_index = now_fun_index;
	strcat(tempJasm, "\t\tisub\n");
	strcpy($$, tempJasm);
}
;

relational_expression
: additive_expression
| relational_expression '>'  primary_expression
{
	strcat(jasm, "\t\tisub\n");
	strcat(jasm, "\t\tifgt ");
}
| relational_expression LE_OP primary_expression
{
	strcat(jasm, "\t\tisub\n");
	strcat(jasm, "\t\tifle ");
}
| relational_expression '<' primary_expression
{
	if (lookup($1, 0) >= 0)
	{
		strcat(jasm, "\tgetstatic int go_test.");
		strcat(jasm, $1);
		strcat(jasm, "\n");
		strcat(jasm, "\tsipush ");
		strcat(jasm, $3);
		strcat(jasm, "\n");
		strcat(jasm, "\tisub\n");
		strcat(jasm, "\tiflt ");
	}
	else{
		strcat(jasm, "\tiload ");
		strcat(jasm, $1);
		strcat(jasm, "\n");
		strcat(jasm, "\tsipush ");
		strcat(jasm, $3);
		strcat(jasm, "\n");
		strcat(jasm, "\tisub\n");
		strcat(jasm, "\tiflt ");
	}
}
;

assignment_expression
:  IDENTIFIER  '='   additive_expression 
 {
 	is_assigning =1;
 	if (strcmp($3, "\t\tisub\n") == 0 | strcmp($3, "\t\tiadd\n") == 0)
 	{
 		strcat(jasm, $3);
 	}
 	
 	int is_found_ident = 0;
	int tempdepth = itemDepth;
	temp_fun_index = now_fun_index;

	if(temp_fun_index != 0){
		while(tempdepth > -1){
			int index_depth = lookup($1, tempdepth);
			if(index_depth >= 0)
			{
				strcat(jasm, "\t\tistore ");
				char index_depth_str[10];
				sprintf(index_depth_str, "%d" , index_depth);
				strcat(jasm, index_depth_str);
				strcat(jasm, "\n");
				is_found_ident = 1;
				break;
			}
			tempdepth--;
		}
		temp_fun_index = 0;
	}
	
	temp_fun_index = 0;

	if (is_found_ident == 0)
	{
		// check if $1 is const and avoid the const definetion
		if(strcmp(lookup_const($1), "") != 0)
		{
		}
		else if (lookup($1, 0) >= 0)
		{
			strcat(jasm, "\t\tputstatic int go_test.");
			strcat(jasm, $1);
			strcat(jasm, "\n");
			
		}
		else{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, $1);
			strcat(jasm, "\n");
		}
	}
 	is_assigning =0;
}
;

expression
: unary_expression
| assignment_expression
| expression assignment_expression
| relational_expression
| expression relational_expression
| IDENTIFIER '=' IDENTIFIER '(' declarator_list  ')'
{
	strcat(jasm, "\t\tinvokestatic int go_test.");
	strcat(jasm, $3);
	strcat(jasm, "(");
	strcat(jasm, "int,int");
	strcat(jasm, ")");
	strcat(jasm, "\n");

		if (lookup($1, 0) >= 0)
		{
			strcat(jasm, "\t\tputstatic int go_test.");
		}
		else{
			strcat(jasm, "\t\tistore ");
		}

		strcat(jasm, $1);
		strcat(jasm, "\n");
}
;

type_specifier
: BOOL
| STRINGKEYWORD
| REAL
| INT
| VOID
;

// when funtion be defined
parameter_list
: parameter_declaration
| parameter_list ','  parameter_declaration 
;
parameter_declaration
: IDENTIFIER type_specifier
{
	insert($1, $2 , "");
	strcat(temp_parameter, $2);
	strcat(temp_parameter, ",");
};

simple_statment
: IDENTIFIER '[' INTEGER ']' '=' expression
| PRINT
{
	is_print = 1;
	strcat(jasm, "\n\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
}
 expression
{
	if (is_print == 2)
	{
		strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
	}
	else{
		strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(java.lang.String)\n");
	}
	is_print = 0;
}
| PRINTLN 
{
	is_print = 1;
	strcat(jasm, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
} 
expression
{
	if (is_print == 2)
	{
		strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");
	}
	else{
		strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)\n");
	}
	is_print = 0;
	
}
| READ IDENTIFIER
| RETURN
| RETURN expression
{
	strcat(jasm, $2);
	strcat(jasm, "\t\tireturn\n");
}
;

compound_start
: '{'
{
	itemDepth++;
}
;

compound_end
: '}'
{
	itemDepth--;
}
;

declaration
: CONST {is_assigning = 1;} IDENTIFIER '=' value_declaration {
	insert($3, "const" , $5);
	is_assigning = 0;
}
| VAR  IDENTIFIER  type_specifier {
	insert($2, $3, "");
	if (lookup($2, 0) >= 0)
	{
		// global variable
		strcat(jasm, "\tfield static ");
		strcat(jasm, $3);
		strcat(jasm, " ");
		strcat(jasm, $2);
		strcat(jasm, "\n");
	}
	is_assigning = 0;
}
| VAR  IDENTIFIER type_specifier {is_assigning = 1;} '=' value_declaration {

	insert($2, $3, "");
	if (lookup($2, 0) >= 0)
	{
		// global variable
		strcat(jasm, "\tfield static ");
		strcat(jasm, $3);
		strcat(jasm, " ");
		strcat(jasm, $2);
		strcat(jasm, " = ");
		strcat(jasm, $6);
		strcat(jasm, "\n");
	}
	is_assigning = 0;
}
| VAR IDENTIFIER '[' INTEGER ']' type_specifier {
	insert($2, "array" , $6);
}
;

declaration_list
: declaration
| declaration_list declaration
;

compound_statement
:  {strcat(jasm, "\tLbody:\n");strcat(jasm, "\t\tgoto Lpost\n");strcat(jasm, "\tLexit:\n");itemDepth--;}  
| {strcat(jasm, "\tLbody:\n");} statement_list {strcat(jasm, "\t\tgoto Lpost\n");strcat(jasm, "\tLexit:\n");itemDepth--;}  
;

expression_statement
:  expression
;

If_After_Check:
{
	strcat(jasm, " L0\n");
	strcat(jasm, "\t\ticonst_0\n");
	strcat(jasm, "\t\tgoto Lfalse\n");
	strcat(jasm, "\tL0:\n");
	strcat(jasm, "\t\ticonst_1\n");
	strcat(jasm, "\tL1:\n");
	strcat(jasm, "\t\tifeq L2\n");
}
;

If_After_Ltrue:
{
	strcat(jasm, "\t\tgoto L3\n");
	strcat(jasm, "\tL2:");
};

selection_statement
: IF '('  expression If_After_Check ')'  '{'  statement_list  '}' If_After_Ltrue ELSE '{'  statement_list  '}' {strcat(jasm, "\tL3:\n");}  
;

iteration_statement
:  FOR  '('   relational_expression 
{
	// move the chars of relational_expression 
	int i, len;
	int pos = 0;
	for (i = 0; i < strlen(jasm) ; ++i)
	{
		if (jasm[i] == '{')
		{
			pos = i;
		}
	}
	len = strlen("\n\tLtest:");
	 for( i = strlen(jasm); i >= pos ; i-- ) 
    {
        jasm[i+len]=jasm[i];
    }
    // insert "Ltest:"
	strncpy( &jasm[pos+1], "\n\tLtest:", len ); 

	strcat(jasm, " Ltrue\n");
	strcat(jasm, "\t\ticonst_0\n");
	strcat(jasm, "\t\tgoto Lfalse\n");
	strcat(jasm, "\tLtrue:\n");
	strcat(jasm, "\t\ticonst_1\n");
	strcat(jasm, "\tLfalse:\n");
	strcat(jasm, "\t\tifeq Lexit\n");
	strcat(jasm, "\t\tgoto Lbody\n");
} 
';'
{
	strcat(jasm, "\tLpost:\n");
}
  assignment_expression {strcat(jasm, "\t\tgoto Ltest\n");} ')'  '{' compound_statement  '}'

|
FOR  '('  assignment_expression ';' {strcat(jasm, "\tLtest:\n");} relational_expression 
{
	strcat(jasm, " Ltrue\n");
	strcat(jasm, "\t\ticonst_0\n");
	strcat(jasm, "\t\tgoto Lfalse\n");
	strcat(jasm, "\tLtrue:\n");
	strcat(jasm, "\t\ticonst_1\n");
	strcat(jasm, "\tLfalse:\n");
	strcat(jasm, "\t\tifeq Lexit\n");
	strcat(jasm, "\t\tgoto Lbody\n");

	strcat(jasm, "\tLpost:\n");
	strcat(jasm, "\t\tgoto Ltest\n");}
 ')' 
 '{'  compound_statement '}'

;

jump_statement
: GO IDENTIFIER '(' expression_statement ')'
;

statement_list
: statement
| statement_list statement
;

statement
: simple_statment
| expression_statement
| selection_statement
| iteration_statement
| jump_statement
;

func_expression:
FUNC {
	itemDepth = 0;
};

add_main_func_first:
{
	strcat(jasm, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
};

function_definition:
 func_expression  type_specifier IDENTIFIER  '(' 
{
	insert($3, $2, "");
	memset(temp_parameter,0,strlen(temp_parameter));
	now_fun_index++;
	function_index++;
}
 parameter_list ')'  
{
	strcat(jasm, "\tmethod public static ");
	strcat(jasm, $2);
	strcat(jasm, " ");
	strcat(jasm, $3);
	strcat(jasm, "(");

	for (int i = 0; i < sizeof(temp_parameter)/sizeof(temp_parameter[0]); ++i)
	{
		if (temp_parameter[i] == 0)
		{
			temp_parameter[i-1] = '\0';
			break;
		}
	}
	
	strcat(jasm, temp_parameter);
	strcat(jasm, ")\n");
	strcat(jasm, "\tmax_stack 15\n\tmax_locals 15\n\t{\n");
}  
 '{'  statement_list  '}' 
 {
 	strcat(jasm, "\t}\n");
 	now_fun_index--;
 }

| func_expression type_specifier IDENTIFIER '(' {now_fun_index++;function_index++;} ')' {insert($3, $2, "");now_fun_index++;} add_main_func_first  compound_start  statement_list  compound_end 
{
	if (strcmp($3, "main") == 0)
	{
		strcat(jasm, "\t\treturn\n\t}\n");
	}
 	now_fun_index--;
}
;

external_declaration
: function_definition
| declaration_list
;

program
: external_declaration
| program external_declaration
;

%%

int main()
{
	itemDepth = 0;
	hashArray = create();

	strcat(jasm, "class go_test\n{\n ");
	yyparse();

	printf("\n\n%s\n", "------ Symbol Table: ------");
	printf("%-*s:%-*s%-*s%-*s%-*s%-*s\n", 5, "Index:", 15, "Name", 15, "Type", 20, "Value", 15, "Fun_index", 5, "Depth");
	dump();

	printf("\n\n%s\n", "------ Write Java Assembly Code Into go_test.jasm ------");
	strcat(jasm, "}\n");
	
	FILE *fpt;
	char file_name[100];
	fpt = fopen("go_test.jasm", "w"); 
	fprintf(fpt, jasm);
	fclose(fpt);

	char command[100] = "";
	printf("\n\n%s\n", "------ Convert go_test.jasm To go_test.class By javaa program------");
	strcat(command, "./javaa go_test.jasm");
	printf("%s%s\n\n", "Execute linux command1: ", command);
	system(command);

	// clear the command string 
	memset(command, '\0', sizeof(command)-1);

	printf("\n\n%s\n", "------ Result After Run go_test.class ------");
	strcat(command, "java go_test");
	printf("%s%s\n\n", "Execute linux command2: ", command);
	system(command);
	return 0;
}
