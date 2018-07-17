/* 
 * symtab.h - Declarations for using Symbol Table package.
 * 
 * Author:	Russ Fish
 * 		Computer Science Dept.
 * 		University of Utah
 * Date:	28 August 1981
 */

/*****************************************************************
 * TAG( symtab )
 * 
 * Simple symbol table package.  Hash on name string gives buckets within
 * hash table, which are bases of lists of id's, rather than reprobing
 * within table.  Multiple dictionaries are supported.
 */
#ifndef _SYM_TAB				/* Only once. */
#define _SYM_TAB

#include "list.h"			/* Needs list package. */

/*****************************************************************
 * TAG( id )
 *
 * id - Identifier datatype.
 */
typedef struct _id id;
struct _id
{
	TLISTLINKS(id);			/* Linked lists within hash buckets. */
	string var_name;		/* Character string name of id. */
	address var_value;		/* Ptr to value of variable id. */
};

/*****************************************************************
 * TAG( new_symbol find_symbol )
 */
extern id *
new_symbol();				/* Constructor. */
/* ( sym_name, table )
 * string sym_name;
 * hash_table * table;
 */

extern id *
find_symbol();				/* Locator, NULL if not found. */
/* ( sym_name, table )
 * string sym_name;
 * hash_table * table;
 */

/*****************************************************************
 *  TAG( hash_table new_hash_table hash )
 *
 * Datatype for hash dictionaries.
 */
typedef struct
{
	int hash_size;			/* Number of entries in table. */
	id * hash_id[1];		/* Base of id list on entry. */
}
hash_table;

extern hash_table *
new_hash_table();		      /* Constructor, returns cleared table. */
/* ( n_entries )
 * int n_entries;
 */

extern id * *
hash();	   /* Hashing algorithm, returns ptr to base of an id list in table. */
/* ( sym_name, table )
 * string sym_name;
 * hash_table * table;
 */

/*****************************************************************
 * TAG( ld_table )
 * 
 * Links a vector of already initialiazed id's into a hash table.
 * NULL var_name terminates the vector.
 */
extern 
ld_table();
/* ( id_vec, table )
 * id id_vec[];
 * hash_table * table;
 */

/*****************************************************************
 * TAG( fr_hash_table )
 * 
 * Dispose of a hash table.
 */
extern 
fr_hash_table();
/* ( table )
 * hash_table * table;
 */

/* Macros to aid in initializing symbol vectors. */
#define NULLS  NULL,NULL
#define VAR_SYM(name_string,var_name) { NULLS, name_string,&var_name, NULL }
#define FN_SYM(name_string,fn_name) { NULLS, name_string, NULL, fn_name }

#endif _SYM_TAB
