#include <stdio.h>


#define lenMAX  1024

int check = 0;
int keyId = 1;
int itemDepth = 0;
int function_index = 0;// 为function设置次序：1.2.3.4...
int temp_fun_index = 0;
// 
int now_fun_index = 0;
// 


struct symbol_table {
  char  id[100];
  char  type[100];
  char  value[100];
  int Skey;
  int depth;
  int fun_index;

};
struct symbol_table* *hash_table;

struct symbol_table* * init()
  {
    static struct symbol_table* table[lenMAX];
    return(table);
  };

int lookup( char *id, int depth)
// lookup方法需要输入id与其depth
  {
    int existence   = 0;
    int hash_index  = 1;
    int first_index =0;

    while ( hash_table[hash_index] != NULL )
    { printf("%d %d\n",hash_table[hash_index]->depth, hash_table[hash_index]->fun_index);
      if (hash_table[hash_index]->depth == depth && hash_table[hash_index]->fun_index == temp_fun_index)
      {
        first_index = hash_index;
        break;
      }else
      {
        hash_index++;
      }
    }
    while ( hash_table[hash_index] != NULL )
    {
      if ( strcmp( hash_table[hash_index]->id, id ) == 0 && hash_table[hash_index]->depth == depth )
      {
        existence = 1;
        break;
      }else  {
        hash_index++;
      }
    }
    // 
    // printf("%d", existence);
    // printf("%s", "  ");
    // printf("%d", hash_index);
    // printf("%s", "  ");
    // printf("%d\n", first_index);


    // 

    if ( existence == 1 )
    {
      return hash_index - first_index;
    }else  {
      return -1 ;
    }
  }

char* lookup_const(char *id) {
  int hash_index = 1;
  int existence = 0;
  int depth = 0;

  while (hash_table[hash_index] != NULL) {
      if (strcmp(hash_table[hash_index]->id, id) == 0 && hash_table[hash_index]->depth == depth && hash_table[hash_index]->fun_index == temp_fun_index 
        && strcmp(hash_table[hash_index]->type, "const") == 0)
    {
      existence = 1;
      break;
    }
    else
    {
      hash_index++;
    }
  }
  if (existence == 1) {
    return hash_table[hash_index]->value;
  }
  else {
    return "";
  }
}

void insert( char *id, char *type, char *value )
  {
    struct symbol_table *ob = (struct symbol_table *) malloc( sizeof(struct symbol_table) );
    strcpy( ob->id, id );
    strcpy( ob->type, type );
    strcpy( ob->value, value );
    ob->depth = itemDepth;
    ob->Skey = keyId;
    ob->fun_index = function_index;
    ob->Skey = keyId;
    hash_table[keyId] = ob;
    keyId++;
  }

  void setNull()
  {
    for ( int i = 1; i < lenMAX; i++ )
    {
      if ( hash_table[i] != NULL )
      {
        hash_table[i] = NULL;
      }
    }
  }

void printAll()
  {
    for ( int i = 1; i < lenMAX; i++ )
    {
      if ( hash_table[i] != NULL )
      {
        printf( "%d:%-*s%-*s%-*s%-*d%-*d\n", i,5,  hash_table[i]->id,10, hash_table[i]->type,10, hash_table[i]->value,5, hash_table[i]->depth,10,hash_table[i]->fun_index);
      }
    }
    setNull();
  }
