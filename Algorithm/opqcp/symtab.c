/* 
 * symtab.c - Symbol Table package routines.
 *	      ( Descriptions in file symtab.h .)
 * 
 * Author:	Russ Fish
 * 		Computer Science Dept.
 * 		University of Utah
 * Date:	3 September 1981
 */

#include "misc.h"
#include "symtab.h"

/*****************************************************************
 * TAG( new_symbol )
 */
id *				/* Constructor. */
new_symbol( sym_name, table )
string sym_name;
hash_table * table;
{
    id  * ret,  * * slot;

    /* Allocate id node and link into symbol table at hashed location. */
    ret = NEW_1( id );
    slot = hash( sym_name, table );
    ADD( ret, *slot );

    ret->var_name = sym_name;	/* Link to name string from id. */
    ret->var_value = NULL;	/* No value cell or fn ptr yet. */

    return( ret );
}

/*****************************************************************
 * TAG( find_symbol )
 */
id *				/* Locator, NULL if not found. */
find_symbol( sym_name, table )
string sym_name;
hash_table * table;
{
    register id * sym;			/* Symbol list traversal ptr. */

    /* Search list to which symbol hashes. */
    TRACE( sym, *hash( sym_name, table ) )
    {
	/* Break out of search loop when matching name is found. */
	if ( strcmp( sym_name, sym->var_name ) == 0 ) break;
    }				/* sym is NULL if trace loop exits. */

    return( sym );
}

/*****************************************************************
 *  TAG( new_hash_table )
 */
hash_table *			/* Constructor. */
new_hash_table( n_entries )
int n_entries;
{
    hash_table * ret;
    id ** ent;			/* Entries of table are bases of id lists. */
    int i;

    ret = NEW( hash_table, sizeof( hash_table ) + n_entries * sizeof( id * ) );

    ret->hash_size = n_entries;		/* Remember the size, for hash comp. */

    for ( i = 0, ent = & ret->hash_id[0];	/* Clear the entries. */
	  i < n_entries;
	  i++ )
	      *ent++ = NULL;	/* Empty list pointers. */

    return( ret );
}

/*****************************************************************
 *  TAG( hash )
 */
id * *	   /* Hashing algorithm, returns ptr to base of an id list in table. */
hash( sym_name, table )
string sym_name;
hash_table * table;
{
    register char * c;
    register int i, n, hash_val;

    /* Hash is the total of the character codes, modulo number of entries. */
    for ( i = 0, n = strlen( sym_name ), c = (char *)sym_name, hash_val = 0;
	  i < n;
	  i++ )
	      hash_val += *c++;

    return( & table->hash_id[ hash_val % table->hash_size ] );
}

/*****************************************************************
 * TAG( ld_table )
 * 
 * Links a vector of already initialiazed id's into a hash table.
 * NULL var_name terminates the vector.
 */
ld_table( id_vec, table )
id id_vec[];
hash_table * table;
{
    id * sym;			/* Vector traversal ptr. */
    id  * * slot;

    for ( sym = & id_vec[0]; sym->var_name != NULL; sym++ )
    {
	/* Link id node into symbol table at hashed location. */
        slot = hash( sym->var_name, table );
	ADD( sym, *slot );
    }
}

/*****************************************************************
 * TAG( fr_hash_table )
 * 
 * Dispose of a hash table.
 */
fr_hash_table( table )
hash_table * table;
{
    id ** ent;			/* Entries of table are bases of id lists. */
    id * ids;
    int i;

    for ( i = 0, ent = & table->hash_id[0];	/* Clear the entries. */
	  i < table->hash_size;
	  i++, ent++ )
	if ( ids = *ent )
	    FREE_LIST( ids );

    FREE( table );
}

