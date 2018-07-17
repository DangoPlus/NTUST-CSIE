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
//judge
int	judge		= 0;
//key
int	key_id		= 1;
//hashtable's depth
int	ObScope		= 0;
//struct store id type value key and which scope
struct symbol_table {
	char	id[50];
	char	type[50];
	char	value[50];
	int    	key;
	int 	scope;
};
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

		while ( table[index] != NULL )
		{
            // if( next != NULL && next->key != NULL && strcmp( key, next->key ) == 0 ) {
		    //     free( next->value );
            //     next->value = strdup( value );
			if ( strcmp( table[index]->id,
            id ) == 0 && table[index]->scope == scope )
			{
				find = 1;
				break;
			}else  {
				++index;
			}
		}
		if ( find == 1 )
		{
			return(index);
		}else  {
			return(-1);
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
				 i, 10, table[i]->id, 10,
				  table[i]->type, 10, 
				  table[i]->value, 10,
				  table[i]->scope);
			}
		}
		clear();
	}
