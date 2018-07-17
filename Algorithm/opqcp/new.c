/*
 * new.c - Generalized allocation function.
 *
 * Author:      Russ Fish
 *              Computer Science Dept.
 *              University of Utah
 * Date:        1 August 1980
 */
#include "misc.h"

typedef union
{
    long mem_size;	       /* Someplace to stash the actual block size. */

    /* Avoid messing up the double alignment of the block we are wrapping. */
    double dummy;
} mem_hdr;
extern char * malloc();			/* Use the Std I/O Mem Alloc. */

/*****************************************************************
 * TAG( new )
 * 
 *     Allocate a block of storage.
 * 
 */
address 
new(size)
int size;
{
    mem_hdr * retval;

    if ( (retval = (mem_hdr *)
	  malloc( (unsigned) (size + sizeof(mem_hdr)) )) <= 0 )
    {
        fprintf( stderr, "\nNo Space in heap! %d bytes requested.\n", size);
        exit( -1 );
    }

    /* Fill in the specified block size in a header word.  The returned
     * pointer points just AFTER the mem_hdr.  Only "new", "dispose",
     * "msize", and "expand" need to know about the mem_hdr.
     */
    retval->mem_size = (long) size;

    return (address)( retval + 1 );
}

/*****************************************************************
 * TAG( msize )
 * 
 *     Report the size of a block of storage.
 */
long
msize( obj )
address obj;
{
    return ( (mem_hdr *)obj - 1 )->mem_size;
}

/*****************************************************************
 * TAG( dispose )
 * 
 *     Free a block of storage.
 */
dispose( obj )
address obj;
{
    /* Get the "free" compatibility macro out of the way.  This is the
     * only place in the system where the real "free" function is visible.
     */
#   undef free
    if ( obj )
	free( (char *) ((mem_hdr *)obj - 1) );
}
