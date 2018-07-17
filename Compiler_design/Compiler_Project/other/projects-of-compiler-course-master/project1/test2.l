%{
	// 除了symboltable不正确，其他应该都正确
int linenum = 1;
#include <ctype.h>
#include <time.h>
#define SIZE 1024
#define MAX_LINE_LENG 1024
char buf[MAX_LINE_LENG];

struct DataItem {
   char data[100];
   int key;
};
struct DataItem* hashArray[SIZE];
struct DataItem* dummyItem;
struct DataItem* item;

int hashCode(int key) {
   return key % SIZE;
}
//Creates a symbol table.
void create(){

};
//Returns index of the entry for string s, or nil if s is not found.
struct DataItem *lookup(int key) {
   //get the hash
   int hashIndex = hashCode(key);

   //move in array until an empty
   while(hashArray[hashIndex] != NULL) {

      if(hashArray[hashIndex]->key == key)
         return hashArray[hashIndex];

      //go to next cell
      ++hashIndex;

      //wrap around the table
      hashIndex %= SIZE;
   }

   return NULL;
}
//Inserts s into a new entry of the symbol table and returns index of the entry.
void insert(char *data) {
   struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
	 strcpy(item->data, data);
	 srand((unsigned)time(0));
	 int key = rand() % SIZE;
   item->key = key;

   //get the hash
   int hashIndex = hashCode(key);

   //move in array until an empty or deleted cell
   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
      //go to next cell
      ++hashIndex;

      //wrap around the table
      hashIndex %= SIZE;
   }
   hashArray[hashIndex] = item;
}
//Dumps all entries of the symbol table. returns index of the entry.
struct DataItem* dump(struct DataItem* item) {
   int key = item->key;

   //get the hash
   int hashIndex = hashCode(key);

   //move in array until an empty
   while(hashArray[hashIndex] != NULL) {

      if(hashArray[hashIndex]->key == key) {
         struct DataItem* temp = hashArray[hashIndex];

         //assign a dummy item at deleted position
         hashArray[hashIndex] = dummyItem;
         return temp;
      }

      //go to next cell
      ++hashIndex;

      //wrap around the table
      hashIndex %= SIZE;
   }

   return NULL;
}

#define LIST     {strcat(buf,yytext);strcat(buf," ");}
#define tokenIdentifier(t) {insert(yytext);LIST;printf("<%s:%s>\n", "id", t);}
#define convertUper(t) {for(int i = 0; i < strlen(t); i++){t[i] = toupper(t[i]);};printf("<%s>\n", t);}
#define tokenSysmbol(t) {LIST;printf("<'%s'>\n", t);}
#define tokenKeyword(t) {LIST;convertUper(t);}

#define substrings(t){int l = strlen(t);for(int i = 0; i < strlen(t); i++){t[i] = t[i+1];};t[l-2]= '\0';t[l-1]= '\0';printf("<string:%s>\n",t); }
#define tokenInteger(t) {LIST;printf("<%s:%d>\n", "integer", t);}
#define tokenBoolean(t) {LIST;printf("<%s:%s>\n", "boolean", t);}
#define tokenRealConstants(t) {LIST;printf("<%s:%s>\n", "real", t);}
#define tokenString(t) {LIST;substrings(t);}
%}

%%

"/*"([^\*]|(\*)*[^\*/])*(\*)*"*/" {LIST;}
"//"[^\n]* {LIST;}

(",")|(":")|(";")|("(")|(")")|("[")|("]")|("{")|("}")|("+")|("-")|("*")|("/")|("^")|("%")|("<")|("<=")|(">=")|(">")|("==")|("!=")|("&")|("!")|("=")|("+=")|("-=")|("*=")|("/=") {tokenSysmbol(yytext);}

("bool")|("break")|("case")|("const")|("continue")|("default")|("else")|("for")|("func")|("go")|("if")|("import")|("int")|("nil")|("print")|("println")|("real")|("return")|("string")|("struct")|("switch")|("var")|("void")|("while") {tokenKeyword(yytext);}

(true)|(false) {tokenBoolean(yytext);}
([a-zA-Z]+[a-zA-Z0-9]*) {tokenIdentifier(yytext);}
[1-9]+ {tokenInteger(yytext);}

-?(([0-9]+)([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?) {tokenRealConstants(yytext);}
\"(\\.|[^"\\])*\" {tokenString(yytext)}

[“ ”]* ;
^[ \t]*\n ;

[ \t]+$ ;

[\t\n]+  {printf("%d: %s\n", linenum++, buf); buf[0] = '\0';}

%%

int main()
{
  yylex(); /* 进行分析 */
	printf("%s\n", "-------symbol table-------");
	for(int i = 1;i < SIZE;i++){
		if(hashArray[i] != NULL)
         printf("%d: %s\n", hashArray[i]->key, hashArray[i]->data);
	}
  return 0;
}
int yywrap()
{
return 1;
}
