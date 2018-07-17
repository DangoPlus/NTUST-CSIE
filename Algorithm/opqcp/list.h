/*
 * list.h - Definitions for list datastructures.
 *
 * Author:      Russ Fish
 *              Computer Science Dept.
 *              University of Utah
 * Date:        1 August 1980
 */

#ifndef	LISTLINKS                         /* only once */

/*****************************************************************/
/* TAG( list LISTHDR TLISTHDR NULLPTR P N  T_P T_N ) */
/* TAG( LISTLINKS TLISTLINKS ) */
typedef                                 /* Generalized list header. */
    struct listhdr
    {
	int t_tag;			/* object type tag */
        struct listhdr *next,*prev;     /* Backward & forward pointers */
    }
    list;

/* LISTLINKS = a type tag, followed by a LISTHDR */
#define LISTLINKS	int t_tag; struct tlist * next, * prev
#define	TLISTLINKS(type)    int t_tag; type * next, * prev

/* Access for List pointer manipulations. (Previous and Next.) */
#define P(node) ((node)->prev)
#define N(node) ((node)->next)
/*   #define P(node) (((list *)(node))->prev)
 *   #define N(node) (((list *)(node))->next)
 */

/* Versions of P and N with cast on result to set list subtype properly. */
#define T_P(type,node) ((type *)(node)->prev)
#define T_N(type,node) ((type *)(node)->next)

/* *****************************************************************
 * TAG( list_list LLIST NEW_LIST_LIST )
 * 
 * list of lists data structure.
 */

typedef struct list_list
{
        TLISTLINKS(struct list_list);
        list * l_list;
} list_list;

#define	LLIST(type,ll)	(type *)ll->l_list	/* get the list pointed to */

/*****************************************************************/

/* TAG( ADD INSERT REMOVE ) */
/* ADD links new members into a list, given a pointer to the new member, and
 * a pointer to the first (left) element of the list.
 */
#define ADD(new,first) ( P(new) = NULL ,N(new) = (first),\
 			(  ((first)!=NULL) ? (P(first)=(new), 0) :0 ),\
			first = (new) )

/* INSERT links members into the middle of a list, given a pointer to the new
 * member, and a pointer to the list element to insert after.
 */
#define INSERT(new,after) ( P(new) = (after),N(new) = N(after),\
	( (N(after)!=NULL) ? (P(N(after))=(new), 0) :0),\
	N(after) = (new) )

/* REMOVE unlinks a list element from a list, given a pointer to the element.
 */
#define REMOVE(elt) (  ( (P(elt)!=NULL) ? (N(P(elt))=N(elt), 0) :0 ),\
 		       ( (N(elt)!=NULL) ? (P(N(elt))=P(elt), 0) :0)  )


/****************************************************************
 * TAG( TRACE FREE_LIST FIRSTP ENDP )
 *
 *	TRACE - Traces a linear list.
 *      FREE_LIST - Walks a list, freeing the elements.
 *	FIRSTP - Tests an element, TRUE if it is the first.
 *	ENDP - Tests an element, TRUE if it is the end.
 */
#define TRACE(t_var,ini)   for((t_var)=(ini);(t_var)!=NULL;(t_var)=N(t_var))
#define FREE_LIST(lst)  {while(N(lst)){lst=N(lst);free(P(lst));} free(lst);}
#define FIRSTP(ptr)   (P(ptr) == NULL)
#define ENDP(ptr)     (N(ptr) == NULL)

/****************************************************************
 * TAGS( DEL )
 *      del   deletes an element from a list, updating the base 
 *	      pointer of the list if necesary.
 */
#define DEL(elt,base) (  ( (P(elt)!=NULL) ? (N(P(elt)) = N(elt)) :0 ),\
 		          ( (N(elt)!=NULL) ? (P(N(elt)) = P(elt)) :0) ,\
                          ( ((elt)==(base)) ? ((base)= N(base) ) :0)    )

#endif	LISTLINKS
