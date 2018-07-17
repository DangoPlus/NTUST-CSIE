%{
//A10515001 李大祥 compiler project1
int linenum = 1;
int keyId = 1;
#include <ctype.h>
#define SIZE 1024
#define MAX_LINE_LENG 1024
char buf[MAX_LINE_LENG];
char tempStrBuf[MAX_LINE_LENG];
struct DataItem {
   char data[100];
   int key;
};
struct DataItem* *hashArray;
int hashCode(int key) {
   return key % SIZE;
}
//Creates a symbol table.
struct DataItem* * create(){
  static struct DataItem* newHashArray[SIZE];
  return newHashArray;
};
//Returns index of the entry for int key
int lookup(char *data) {
   //get the hash
   int hashIndex = 1;
   int isFind = 0;
   //move in array until an empty
   printf("lookup:  %s\n", data);
   printf("hashArray[hashIndex]:  %s\n", hashArray[1]->data);
   while(hashArray[hashIndex] != NULL) {
      if(strcmp(hashArray[hashIndex]->data, data) == 0)
      {
        isFind = 1;
        break;
      }
      else
      {
        ++hashIndex;
      }
   }
   if(isFind == 1){
     return hashIndex;
   }
   else{
     return -1;
   }
}
//Inserts s into  the symbol table
void insert(char *data) {
   struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
	 strcpy(item->data, data);
   item->key = keyId;

   //get the hash
   int hashIndex = hashCode(keyId);

	 //move in array until an empty or deleted cell
	 int f = 1;
	 for(int i = 1;i < SIZE;i++){
 		  if(hashArray[i]->data != NULL &&  (strcmp(data, hashArray[i]->data) == 0)){
				f = 0;
		  }
   }
	 if (f) {
	 	hashArray[hashIndex] = item;
		keyId ++;
	 }
}
//Dumps all entries of the symbol table. returns index of the entry.
int * dump() {
	struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
	strcpy(item->data, "");
	item->key = -1;
	static int dumpIndex[SIZE];

   //move in array until an empty
	 int i = 0, hashIndex = 1;
   while(hashArray[hashIndex] != NULL) {
		 hashArray[hashIndex] = item;
		 dumpIndex[i] = hashIndex;
		 i++;
		 hashIndex++;
   }
   return dumpIndex;
}

#define LIST     {strcat(buf,yytext);strcat(buf," ");}
#define LISTNOSPACE     {strcat(buf,yytext);}
#define tokenIdentifier(t) {insert(yytext);LIST;printf("<%s:%s>\n", "id", t);}
#define convertUper(t) {for(int i = 0; i < strlen(t); i++){t[i] = toupper(t[i]);};printf("<%s>\n", t);}
#define tokenSysmbol(t) {LIST;printf("<'%s'>\n", t);}
#define tokenKeyword(t) {LIST;convertUper(t);}
#define tokenInteger(t) {LIST;printf("<%s:%s>\n", "integer", t);}
#define tokenBoolean(t) {LIST;printf("<%s:%s>\n", "boolean", t);}
#define tokenRealConstants(t) {LIST;printf("<%s:%s>\n", "real", t);}
#define tokenString(t) {LIST;printf("<string:%s>\n",t);}
%}
%x STRING
%%

"/*"([^\*]|(\*)*[^\*/])*(\*)*"*/" {LIST;}
"//"[^\n]* {LIST;}

(",")|(":")|(";")|("(")|(")")|("[")|("]")|("{")|("}")|("+")|("-")|("*")|("/")|("^")|("%")|("<")|("<=")|(">=")|(">")|("==")|("!=")|("&")|("!")|("=")|("+=")|("-=")|("*=")|("/=") {tokenSysmbol(yytext);}

("bool")|("break")|("case")|("const")|("continue")|("default")|("else")|("for")|("func")|("go")|("if")|("import")|("int")|("nil")|("print")|("println")|("real")|("return")|("string")|("struct")|("switch")|("var")|("void")|("while") {tokenKeyword(yytext);}

(true)|(false) {tokenBoolean(yytext);}
([a-zA-Z]+[a-zA-Z0-9]*) {tokenIdentifier(yytext);}
[1-9]+ {tokenInteger(yytext);}

-?(([0-9]+)([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?) {tokenRealConstants(yytext);}

\"{1} {LISTNOSPACE;BEGIN(STRING);}
<STRING>([^"]*)+ {LIST;strcat(tempStrBuf, yytext);}
<STRING>"\"\"" {LIST;strcat(tempStrBuf, "\"\"");}
<STRING>\"{1} {tokenString(tempStrBuf);tempStrBuf[0] = '\0';BEGIN(INITIAL);}

(" ")* ;
^[ \t]*\n ;

[ \t]+$ ;

[\t\n]+  {printf("%d: %s\n", linenum++, buf); buf[0] = '\0';}

%%

int main()
{
  hashArray = create();//Create a new symbol table.

  yylex(); /**Run regular expression before this part **/

  printf("%s\n", "Symbol Table:");
	for(int i = 1;i < SIZE;i++){
		if(hashArray[i] != NULL)
         printf("Index %d: %s\n", i, hashArray[i]->data);
	}
  return 0;
}
int yywrap()
{
return 1;
}
