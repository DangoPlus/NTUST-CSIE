#include "com.h"
Table table( Table tp, int level)
 {
  int i;
  Table newTemp = (Table) malloc( sizeof( struct table ) );
  newTemp->previous = tp;
  newTemp->level = level; 
  for( i = 0; i < HASHSIZE; i++ )
  {
   newTemp->buckets[i] = NULL;
  }
  if (tp)
   newTemp->all = tp->all;
  return newTemp;
 }

 struct symbol * install(char *name, Table *tpp, int level, int sclass)
 {
  Table tp = *tpp;
  struct entry *p;
  int len;
  unsigned h = name[0] & (HASHSIZE - 1);
  if (level > 0 && tp->level < level)
   tp = *tpp = table(tp, level);
  currentTable = tp;
  p = (struct entry *) malloc( sizeof( struct entry ) );
  len = strlen( name );
  p->sym.name = (char *) malloc( len * sizeof( char ) );
  strcpy( p->sym.name, name );
  p->sym.scope = level;
  p->sym.up = tp->all;
  p->sym.sclass = sclass;
  tp->all = &p->sym;
  p->link = tp->buckets[h];
  tp->buckets[h] = p;
  return &p->sym;
 }

 struct symbol * lookup(char *name, Table tp) {
  struct entry *p;
  unsigned h = name[0] & (HASHSIZE-1);
  if( tp == NULL ) return NULL;
  do
   for (p = tp->buckets[h]; p; p = p->link )
   {
    if ( p != NULL && strcmp(name, p->sym.name) == 0 )
     return &p->sym;
   }
  while ((tp = tp->previous) != NULL);
  return NULL;
 }

 void enterscope() {
  currentLevel++;
 }
 void exitscope() {
  if (currentTable->level == currentLevel) {
   Table tt = currentTable;
   currentTable = currentTable->previous;
   free( tt );
  }
  --currentLevel;
 }
 Symbol makeSym( char *text )
 {
  int len;
  Symbol temp = (Symbol) malloc( sizeof( struct symbol ) );
  len = strlen( text );
  temp->name = (char *) malloc( len * sizeof( char ) );
  strcpy( temp->name, text );
  temp->scope = currentLevel;
  return temp;
 }
