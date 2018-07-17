/*
 * misc.h   - Just the subset of defs needed for opqcp.
 *
 * Author:      Russ Fish
 *              Computer Science Dept.
 *              University of Utah
 * Date:        1 August 1980
 */

#ifndef MISCH			   /* Only once. */
#define MISCH

#include <stdio.h>		   /* Defines NULL. */

/*****************************************************************
 * TAGS( string boolean fn byte address )
 *
 *     Commonly used types.
 *
 */
typedef char * string;             /* Character Strings. */
typedef int boolean;               /* Logical vars or values. */

typedef char byte;                 /* Byte is the unit of "sizeof". */

typedef char * address;

/*****************************************************************
 * TAGS( TRUE FALSE )
 */

#define TRUE  1                         /* Logical constants. */
#define FALSE 0

/*****************************************************************
 * TAGS( NEW NEW_1 NEW_N new )
 *
 *     NEW(type,size)
 * Generalized allocation function, given an object type and size (in
 * bytes) to be allocated.
 * 
 * Variants:
 *     NEW_1(type)   - Allocate a single object of the given type.
 *     NEW_N(type,n) - Allocate an array of N objects of the given type.
 */
extern address
new();              /* In-core allocator. */
/* ( size )
 * int size;
 */
#define NEW(type,size) (type *)new(size)        /* Macro with type cast. */
#define NEW_1(type) (type *)new(sizeof(type))	/* Single arg, fixed size. */
#define NEW_N(type,n) (type *)new((n)*sizeof(type))  /* Array of base type. */

/*****************************************************************
 * TAGS( FREE free dispose )
 * 
 * Macros to cast the argument to dispose().
 */
#define FREE( ptr )	dispose( (address)ptr )
#define free( ptr )	dispose( (address)ptr )

/*****************************************************************
 * TAG( SIZE SIZE_N msize )
 *
 * SIZE returns the size (in bytes) of an allocated object.
 *
 * SIZE_N returns the number of objects of TYPE in ARRAY.
 */
extern long
msize();
/* ( obj )
 * address obj;
 */
#define SIZE(obj) msize( (address)obj )
#define SIZE_N(type, array) (msize( (address)array ) / sizeof (type))

#endif
