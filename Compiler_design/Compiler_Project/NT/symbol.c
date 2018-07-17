#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
//define size
#define SIZE			256
#define MAX_LINE_LENG	256
#define STRLEN			256
#define Trace(t)        printf(t)
int yylex( void );
//error detect declaration
void yyerror( const char *str );
//debug_test
char stack[100];
int tstack		= 1;
int hstack		= 2;
int fstack		= 3;
int zstack		= 0;
int vstack		= 10;
char nostack[10];
char instack[10];
char offstack[10];
char tpstack[10];

//judge
int	judge		= 0;
//key
int	key_id		= 1;
//hashtable's scope
int	ObScope		= 0;
//struct store id type value key and which scope
struct symbol_table {
	char	id[100];
	char	type[100];
	char	value[100];
	int    	key;
	int 	scope;
	int 	func_id;
};
char jasm_code[10000];
char jasm_code_temp1[10000];
char jasm_code_temp2[10000];
char jasm_code_temp4[10000];
char stored_temp[1000];
char stored_u[20];
int status = 0;
int index_st = 0;
int stored_index = 0;
int check_output = 0;
int check_scpoe = 0;
int scope_space = 0;
int check_inside = 0;
int str_temp_store = 0;
int dobstat = 0;
int prtc = 0;
int defog = 99;
// struct table {
// 	char *key;
// 	char *value;
// 	struct table *next;
// };

struct symbol_table* *table;
//hashtable *hashtable = NULL;
// build table
	struct symbol_table* * create()
	{
		static struct symbol_table* newtable[SIZE];
		return(newtable);
	};

//     if( ( hashtable = malloc( sizeof( hashtable_t ) ) ) == NULL ) {
// 		return NULL;
// }
//return index          table[lookup("" , 0)]->id or scope
	int lookup( char *id, int scope )
	{
		int	index	= 1;
		int	find	= 0;
		int outer_index = 0;
		
		while ( table[index] != NULL )
		{
			if (table[index]->scope == scope && table[index]->func_id == stored_index )
			{
				outer_index = index;
				break;
			}else  {
				++index;
			}
		}

	while (table[index] != NULL) {
		if (strcmp(table[index]->id, id) == 0 && table[index]->scope == scope && table[index]->func_id == stored_index && strcmp(table[index]->type, "const") != 0)
		{
			find = 1;
			break;
		}
		else
		{
			++index;
		}
	}
	if (find == 1) {
		return index - outer_index;
	}
	else {
		return -1;
	}
}

char* fconst(char *id) {
	int index = 1;
	int find = 0;
	int scope = 0;

	while (table[index] != NULL) {
			if (strcmp(table[index]->id, id) == 0 && table[index]->scope == scope && table[index]->func_id == stored_index 
				&& strcmp(table[index]->type, "const") == 0)
		{
			find = 1;
			break;
		}
		else
		{
			++index;
		}
	}
	if (find == 1) {
		return table[index]->value;
	}
	else {
		return "";
	}
}

// insert symbol insert(id,type,value)
	void insert( char *id, char *type, char *value )
	{
		struct symbol_table *item = (struct symbol_table *) malloc( sizeof(struct symbol_table) );
        //copy each element
		strcpy( item->id, id );
		strcpy( item->type, type );
		strcpy( item->value, value );
		item->scope	= ObScope;

		item->func_id = index_st;

		item->key	= key_id;

		table[key_id] = item;
		key_id++;
	}
    //after dump clean the table
	void clear()
	{
		for ( int i = 1; i < SIZE; i++ )
		{
			if ( table[i] != NULL )
			{
				table[i] = NULL;
			}
		}
	}

//Dumps all entries of the symbol table. returns index of the entry.
	void dump()
	{
		for ( int i = 1; i < SIZE; i++ )
		{
			if ( table[i] != NULL )
			{
				printf( "%d:%-*s%-*s%-*s%-*d\n",
				 i, 10,
				  table[i]->	id, 	12,
				  table[i]->	type, 	12, 
				  table[i]->	value, 	12,
				  table[i]->	scope);
			}
		}
		clear();
	}
