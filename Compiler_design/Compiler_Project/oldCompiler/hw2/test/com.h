 #include  <stdlib.h>
 #include  <string.h> 
 #include  <ctype.h>
 #include  <string.h>
 #include  <stdio.h>
 #define HASHSIZE 256
 #define GLOBAL 0
 typedef int Type;
 extern FILE * yyout,*yyin;
 typedef struct table *Table;
 Table types; 
 Table currentTable;
 int currentLevel;
 int params;//堆栈已分配的单元个数;
 int paramcount;//参数和临时变量总数记录
 int realParam;//参数的个数记录
 extern int calltype;//函数调用方式__stdcall&__cdecl
 char funBuffer[1024];//函数声明缓冲区
 char localValBuffer[1024]; //局部变量缓冲区
 char varBuffer[1024];//全局变量缓冲区
 ///////////////////char stringBuffer[1024];//字符串常量缓冲区
 extern int msgIndex;//字符串索引
 int bufferLen;//缓冲区长度
 int callparam;//调用时记录参数数目
 extern int label;//自动生成标号

 typedef struct symbol {
  char *name;//串名
  int scope;//层次
  int sclass;//符号表内类型
  struct symbol * up;//上一个被插入的符号的指针
  int ty;//类型
  float ref;//引用地址
  int value;//符号表中符号的值
  int calltype;//如果是函数,记录调用方式
  int isLocal;//记录是全局变量还是局部变量
 } *Symbol;
 /*
 void 1 int  2 char 3
 void* 11 int* 12 char* 13
 void[] 21 int[] 22 char[] 23
 void*[] 31 int*[] 32 char*[] 33
 */

 struct entry {
  struct symbol sym;
  struct entry *link;
 };

 struct table {
  int level;
  Table previous;
  struct entry *buckets[HASHSIZE];
   struct symbol * all;
 };
 extern Table table( Table tp, int level);
 extern struct symbol * install(char *name, Table *tpp, int level, int sclass);
 extern struct symbol * lookup(char *name, Table tp);
 extern void enterscope();
 extern void exitscope();
 extern Symbol makeSym( char *text );

 

 typedef struct expression{//表达式的类型
  int is_const;
  int value;
  char *code;
  char *name;
  char *temp;
 } expr;
