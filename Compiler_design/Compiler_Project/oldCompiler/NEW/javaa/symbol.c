/* copyright 1996 Jason Hunt and Washington University St Louis */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "utils.h"
#include "build.h"
#include "listing.h"

#define  StartNestLevel  (2)
#define  EndNestLevel    (64)

static int SymBlock=1024;   /* How many symbols to allocate at a time */

static int NumSymbols=0;

static Symbol *FirstSymbolatLevel[EndNestLevel+1];
static Symbol *FreeSymbols;
static Symbol *UsedSymbols;

static int NestLevel = StartNestLevel;

int IsTypeSymbol(char *name)
{
  Symbol *sym;
  
  if (!(sym = FindSymbol(0,name))) return(0);
  if (sym->M.C == TypedefClass) return(1);
  else                          return(0);
}

int CurrentNestLevel(void) { return(NestLevel); }

void IncrNestLevel(void) {
   char str[100];
   RangeCheck(StartNestLevel,NestLevel,EndNestLevel-1,"Nest level overflow");
   FirstSymbolatLevel[++NestLevel] = NULL;
/* sprintf(str,"Nest level now %d",NestLevel); */
/* message(str);                               */
}
void DecrNestLevel(void) {
   char str[100];
   RangeCheck(StartNestLevel+1,NestLevel,EndNestLevel,"Nest level underflow");
   FirstSymbolatLevel[NestLevel--] = NULL;
/* sprintf(str,"Nest level now %d",NestLevel); */
/* message(str);                               */
}

void DumpSymbolDisplay(void) {
   int i;
   Symbol *sym;
   for (i=NestLevel; i>= 0; --i) {
      printf("\n Symbol display level %d\n",i);
      for (sym=FirstSymbolatLevel[i]; sym; sym=sym->next) {
         ShowSymbol(sym,2); printf("\n");
      }
   }
}

int GetNestLevel(void) {
   return(NestLevel);
}

Symbol *RetrieveSymbol(char *name) 
{
   Symbol *sym;
   sym = LookupSymbol(0,name);
   if (!(sym->InUse)) {
      StartMessage();
      printf("Symbol %s not declared\n",name);
      oops("Undeclared symbol");
      EndMessage();
   }
   return(sym);
}

Symbol *EnterSymbol(MimeType M, char *name)
{
  Symbol *sym;
  sym = LookupSymbol(NestLevel, name);
  if (sym->InUse) {
     StartMessage();
     printf("Symbol %s multiply defined\n",name);
     EndMessage();
  }
  sym->InUse = 1;
  sym->M     = M;
  sym->level = NestLevel;
  return(sym);
}

Symbol *GetSymbol(void) {
   Symbol *sym;

   if (!FreeSymbols) {
      Symbol *newblock;
      int i;
      newblock = (Symbol *) malloc (SymBlock * sizeof(Symbol));
      if (!newblock) oops("out of storage for symbol table");
      bzero((unsigned char *)newblock,SymBlock * sizeof(Symbol));
      for (i=0; i<SymBlock; ++i) {
         newblock[i].next = FreeSymbols;
         FreeSymbols = &(newblock[i]);
      }
   }
              

   sym =  FreeSymbols;
   FreeSymbols = FreeSymbols->next;

   sym->nextused = UsedSymbols;
   UsedSymbols = sym;

   sym->next   = NULL;
   return(sym);
}

Symbol *ExistsSymbol(char *name)
{
   return(FindSymbol(0,name));
}

Symbol *FindSymbol(int level, char *name)
{
   int i;
   Symbol *sym;
   for (i=NestLevel; i>= level; i--)
      for (sym = FirstSymbolatLevel[i]; sym; sym=sym->next) {
         if (!strcmp(name,sym->name)) return(sym);
      }
   return(NULL);
}

Symbol *LookupSymbol(int level, char *name) 
{
   Symbol *sym;

   if (sym=FindSymbol(level,name)) return(sym);

   sym =  GetSymbol();

   sym->name = (char *)malloc(strlen(name)+2);
   sym->InUse = 0;  /* not yet initialized */
   sym->SymbolID = ++NumSymbols;
   strcpy(sym->name,name);

   sym->next                 = FirstSymbolatLevel[level];
   FirstSymbolatLevel[level] = sym;
   return(sym);
}

void FormatType(char *str /* must be 27 chars wide*/, MimeType M)
{
  char *basetype;
  char *storageclass;
  char *typequalifier;
  char *function;

  switch (M.C) {
   case ExternClass:      storageclass = "extern";    break;
   case StaticClass:      storageclass = "static";    break;
   case AutoClass:        storageclass = "auto";      break;
   case RegisterClass:    storageclass = "reg";       break;
   case TypedefClass:     storageclass = "typedef";   break;
   default:               oops("Bad StorageClass");
  }

  switch (M.Q) {
   case ConstQualifier:    typequalifier = "const";    break;
   case VolatileQualifier: typequalifier = "vol";      break;
   case NonQualified:      typequalifier = " ";        break;
   default:                oops("Bad TypeQualifier");
 }

  switch (M.T.B) {
    case CharType:        basetype = "char";          break;
    case IntType:         basetype = "int";           break;
    case FloatType:       basetype = "float";         break;
    case VoidType:        basetype = "void";          break;
    case StructType:      basetype = "struct";        break;
    case UnionType:       basetype = "union";         break;
    case EnumType:        basetype = "enum";          break;
    case ConstType:       basetype = "const";         break;
    default:              oops("Bad Base Type");
  }

  if (M.T.function) function = "()";
  else            function = " ";

  sprintf(str," %-5s *%1.1d %-2s [%1.1d] %-7s %-5s",
           basetype,
           M.T.ptrcount,
           function,
           M.T.numdims,
           storageclass,
           typequalifier
  );
}

void FormatSymbol(char *str, Symbol *sym)
{
  char p1[80];
  FormatType(p1,sym->M);
  sprintf(str,"Symbol%3.3d(%2.2d) %s: %s",
          sym->SymbolID,
          sym->level,
          p1,
          sym->name);
}

void PrintSymbol(Symbol *sym)
{
   char str[100];
   FormatSymbol(str,sym);
   printf("%s",str);
}

void ShowSymbol(Symbol *sym, int level)
{
    int spacing = 2*level+1;
    printf("\n%-*s",spacing," ");
    PrintSymbol(sym);
    if ((sym->M.T.ptrcount == 0) && (sym->M.T.function ==0))
    switch (sym->M.T.B) {
       Symbol *s;
       case StructType:
       case UnionType:
       case EnumType:   for (s=sym->M.T.info.contents; s; s=s->adj)
                              ShowSymbol(s,level+1);
                        break;
       case ConstType:
                        printf(" Value is %d",sym->M.T.info.intval);
       default:         break;
    }
}


void ForEachSymbol(void (*Apply)(Symbol *, int))
{
   Symbol *sym;
   for (sym=UsedSymbols; sym; sym=sym->nextused) Apply(sym,0);
}
