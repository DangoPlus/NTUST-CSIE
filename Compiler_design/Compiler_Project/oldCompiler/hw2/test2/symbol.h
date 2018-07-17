#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;
#define BUCKETCOUNT 16
extern "C"
{
  void yyerror(const char *s);
  int yywrap(void);
  extern int yylex(void);

}

struct Type
{
  string m_sId;
  int m_nInt;
  char m_cOp;
  float m_fREAL;
  string m_str;
};
#define YYSTYPE Type

struct hashEntry
{
    char* key;
    struct hashEntry* next;
};

typedef struct hashEntry entry;

class new_table
{
private:
  entry bucket[BUCKETCOUNT];
public:
  void creat()
  {
      for (int i = 0; i < BUCKETCOUNT; ++i) {
          bucket[i].key = NULL;
          bucket[i].next = NULL;
      }
  }

  void drop()
  {
      int i;
      entry* e;
      entry *ep;
      for (i = 0; i<BUCKETCOUNT; ++i) {
          e = &(bucket[i]);
          while (e->next != NULL) {
              ep = e->next;
              e->next = ep->next;
              free(ep->key);
              free(ep);
          }
      }
  }

  int keyToIndex(const char* key)
  {
      int index , len , i;
      if (key == NULL)return -1;

      len = strlen(key);
      index = (int)key[0];
      for (i = 1; i<len; ++i) {
          index *= 1103515245 + (int)key[i];
      }
      index >>= 27;
      index &= (BUCKETCOUNT - 1);
      return index;
  }

  int insert(const char* key)
  {
    int index;
     entry* e , *ep;
   index = keyToIndex(key);
   if (bucket[index].key == NULL) {
       bucket[index].key = strdup(key);
   }
   else {
       ep = &(bucket[index]);
       e = (entry*)malloc(sizeof (entry));
       e->key = strdup(key);
       e->next = NULL;
       ep->next = e;
   }
  }

  int lookfor(const char* key)
  {
     int index,flag;
     const entry* e;
     index = keyToIndex(key);
     flag=0;
     e = &(bucket[index]);
     if(e->key==NULL) return 0;
     while (e != NULL) {
         if (strcmp(key,e->key)==0)  flag=1;
        e = e->next;
     }

     return flag;
  }

  void printTable()
  {
      int i;
      entry* e;
      for (i = 0; i<BUCKETCOUNT; ++i) {
          printf("\nbucket[%d]:\n" , i);
          e = &(bucket[i]);
          while (e->key != NULL) {
              printf("\t%s\n" , e->key );
              if (e->next == NULL)break;
              e = e->next;
          }
      }
  }
};
