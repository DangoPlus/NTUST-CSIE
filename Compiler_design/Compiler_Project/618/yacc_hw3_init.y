%{
// #include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "y.tab.h"
#include "hashtable.h"
// #include "hashtable_insert.h"
int  yylex  (void);
void  yyerror  (const char *str);


char jasm[10000];//定义我所需要的jasm
// int a1 = 0;
// int now_fun_index = 0;
int check_c = 0;
// c与后面的不一样，所以我需要单独为c
int add_const_is = 0;
int pirnt_type = 0;
// int is_assigning = 0;
char add_indentifier[100];
int is_over_OP = 0;
int is_const = 0;


%}
%start program
%union{
  char val[200];
  float float_type;
  int int_type;
  char int_id[200];
}

%token <val> STR TRUE FALSE BOOL INT VOID FLOAT
%token <int_type> INTEGER
%token BREAK CONTINUE DEFAULT ELSE MATCH MUT CHAR ENUM 
%token RETURN SELF USE STATIC STRUCT SWITCH 
%token FOR FUNC DO IF IN PRINT PRINTLN EXTERN LET LOOP PUB READ
%token LE_OP GE_OP EQ_OP NE_OP AND OR NOR EQUALS FU_OP WHILE WHERE
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN
%type  <val> value_declaration program primary_expression type_specifier declarator_list declarator inclusive_or_expression exclusive_or_expression and_expression equality_expression relational_expression additive_expression multiplicative_expression unary_expression 
%token <int_id> IDENTIFIER
%token <float_type> FLOATTYPE


%%

primary_expression
  : value_declaration
  | declarator_list 
  | primary_expression value_declaration 
  | primary_expression declarator_list
  ;

unary_expression
  : primary_expression
  | '-' primary_expression
  {
    strcat(jasm,"\t\tineg\n");
  }
  ;

multiplicative_expression
  : unary_expression
  | multiplicative_expression '*' unary_expression
  | multiplicative_expression '/' unary_expression
  | multiplicative_expression '%' unary_expression
  ;

additive_expression
  : multiplicative_expression
  | additive_expression '+' multiplicative_expression
  {
    // 因为我这边renturn的是一个 + 所有我需要结束后返回一个iadd
    strcat(jasm,"\t\tiadd\n");
  }
  | additive_expression '-' multiplicative_expression
  {
    strcat(jasm,"\t\tisub\n");
  }
  ;


relational_expression
  : additive_expression
  | relational_expression '<' primary_expression
  | relational_expression '>' primary_expression
  {  
    // strcat(jasm, "\t\tgetstatic int example.");
    is_over_OP = 1;
    strcat(jasm,"\t\tisub\n");
  }
  | relational_expression {is_const = 1;} LE_OP primary_expression
    {
    is_over_OP = 2;
    strcat(jasm,"\t\tisub\n");
  }
  | relational_expression GE_OP primary_expression

  ;

equality_expression
  : relational_expression
  | equality_expression EQ_OP relational_expression
  | equality_expression NE_OP relational_expression
  ;

and_expression
  : equality_expression
  | and_expression AND equality_expression
  ;

exclusive_or_expression
  : and_expression
  | exclusive_or_expression '^' and_expression
  ;

inclusive_or_expression
  : exclusive_or_expression
  | inclusive_or_expression OR exclusive_or_expression
  ;

assignment_expression
  : inclusive_or_expression
  | inclusive_or_expression '=' assignment_expression
  // {
  // strcat(jasm, "\t\tputstatic int example.");
  //    strcat(jasm, $1);
  //    strcat(jasm, "\n");
  //    }
  ;

expression
  : assignment_expression
  | expression assignment_expression
  | '(' assignment_expression')' 
  ;


type_specifier
  : BOOL
  | INT
  | VOID
  | STR
  ;

value_declaration
  : STR   {
    
        strcpy($$, $1);
        //处理字符串内容
        strcat(jasm, "\t\tldc ");
        strcat(jasm, "\"");
        strcat(jasm, $1);
        strcat(jasm, "\"");
        strcat(jasm, "\n");
      pirnt_type = 2;
    
  }
  | TRUE  {
    strcpy($$, $1);
  }
  | FALSE {
    strcpy($$, $1);
  }
  | INTEGER 
  {
    

        printf("%s %d\n", "这里用来判断 1 ：", $1 );
        char tempStr[50];
        sprintf( tempStr, "%d", $1 );
        strcpy($$, tempStr);

        printf("%s %d\n","add_const_is : ",add_const_is );
        if (add_const_is != 0)
          {
            strcat(jasm,"\t\tsipush ");
            strcat(jasm,$$);
            strcat(jasm,"\n");  /* code */
          }
          pirnt_type = 1;
  }
  | FLOATTYPE
  {
    char tempStr[50];
    sprintf( tempStr, "%g", $1 );
    strcpy($$, tempStr);
  }
  ;

// when function be called
declarator_list
  : declarator
  | declarator_list '(' declarator_list ')' 
  | declarator_list   
  {
    add_const_is = 1;
  }
   ',' declarator_list{
    printf("%s\n","waoooooooooo!" );
    add_const_is = 0;
  }
  ;

declarator
  : IDENTIFIER
  {
    if (is_const != 0)
    {
      strcat(jasm,"\t\tsipush ");
            strcat(jasm,"10");
            strcat(jasm,"\n");  /* code */
    }else{

        pirnt_type = 1;

        if (check_c == 0)
        {
          /* code */
        
          // 已经声明的变量需要再hashtable重新查找若存在则输出新的内容
          int is_found_ident = 0;
          // 
          int itemDepth_local = itemDepth;
          temp_fun_index = now_fun_index;
          printf("%s %s %d\n","we r here : ",$1,temp_fun_index );
          // printf("%d\n", temp_fun_index);
          // 这边已经可以进入

           
          if( temp_fun_index != 0){
              // strcat(jasm, "\t\tiload 0");
            
            while(itemDepth_local > -1){
              // printf("aaa %d\n", itemDepth_local );
              int index_depth = lookup($1, itemDepth_local) - 1;
              // printf("%s %d %d\n", $1,itemDepth_local,index_depth);
              // printf("%d\n", itemDepth_local);
              // printf("%d\n", index_depth);
              // printf("aaa %d\n", index_depth);
              //这边的问题 iload根本没有读取，上面的判断根本没有进入
              //strcat(jasm, "\t\tiload 0");
              if(index_depth >= 0){

                // printf("vv %d\n",a1 );
                // printf("%s\n",index_depth );
                strcat(jasm, "\t\tiload ");
                char index_depth_char[10];
                sprintf(index_depth_char, "%d" , index_depth);
                strcat(jasm, index_depth_char);
                strcat(jasm, "\n");
                is_found_ident = 1;
                break;
              }
            itemDepth_local--;
            // 跳出当前的函数就-1
            }
            temp_fun_index = 0;
          }
          // temp_fun_index = 0

      //     getstatic int example.a
      //     sipush 10
      //     invokestatic int example.add(int, int)
      //     putstatic int example.c
      // /* 16:   c = add(a, 10); */
          int check_add = strcmp($1,"add");
          printf("%s %s %d\n","$1 check_add ", $1, check_add);
          if (is_found_ident == 0 &&  check_add != 0 )
            {
              // 
              printf("%s %d\n"," lookup : ", lookup($1, 0));
              if (lookup($1, 0) >= 0)
              {
                printf("%s %s\n", "为了example我输出了getstatic int example ", $1);
                strcat(jasm, "\t\tgetstatic int example.");
                // getstatic int example.a
                strcat(jasm, $1);
                printf(" %s %s\n",  "\t\tgetstatic int ." ,$1);
              }
              else if(strcmp(lookup_const($1), "") != 0)
              {
                printf("%s\n","12345lookUP_const" );
                strcat(jasm, "\t\tsipush ");
                strcat(jasm, lookup_const($1));
                strcpy($1, lookup_const($1));
              }
              else{
                strcat(jasm, "\t\tsipush ");
                strcat(jasm, $1);
              }
              
              strcat(jasm, "\n");
            } 
            else if(is_found_ident == 0 && check_add == 0)//这边专门为add设置，其他不走，只能走else在这边直接写死
            {
              strcpy(add_indentifier, $1);
               
            }
        }
      // 这里为C进行特别设置
    // }
    // check_c--;//当读了c之后，将c-1，只是为了暂时跳过c
  }
  }
  | value_declaration 
  ;

// when funtion be defined
parameter_list
  : parameter_declaration
  | parameter_list ',' parameter_declaration
  // | parameter_declaration ',' parameter_declaration
  ;
parameter_declaration
  : IDENTIFIER ':' type_specifier 
  {
    insert($1, $3 , "");
  }
  ;

declaration_list
  : declaration
  | declaration_list declaration
  ;

declaration
  : LET IDENTIFIER '=' value_declaration ';'{
    insert($2 , "const" , $4 );
  }
  | LET MUT IDENTIFIER ';'{

//       field static int c
// /* 6: let mut c; */

    insert( $3, "int", "" );
    // global variable
    strcat(jasm, "\tfield static ");
    strcat(jasm, "int ");
    strcat(jasm, $3);
    strcat(jasm, "\n");
  }
  | LET MUT IDENTIFIER ':' type_specifier ';'{
    insert($3 , $5 , "" );
    strcat(jasm, "\tfield static ");
    strcat(jasm, $5);
    strcat(jasm, " ");
    strcat(jasm, $3);
    strcat(jasm, "\n");
  }
  | LET MUT IDENTIFIER '=' value_declaration ';'{

//     field static int a = 5
// /* 7: let mut a = 5; */

    insert($3 , "" , $5 );
    // global variable
    strcat(jasm, "\tfield static ");
    strcat(jasm, "int ");
    strcat(jasm, $3);
    strcat(jasm, " = ");

    strcat(jasm, $5);
    strcat(jasm, "\n");
    printf("%s\n", jasm);
  }
  | LET IDENTIFIER ':' type_specifier '=' value_declaration ';' {
    insert($2 , $4 , $6 );
  }
  | LET MUT IDENTIFIER ':' type_specifier '=' value_declaration ';'
  {
    insert($3 , $5 , $7 );


    // insert($3, $5, "");
    printf("strcmpsssssssss1111111111%s\n", $3);
    if (lookup($3, 0) >= 0)
    {

      strcat(jasm, "\tfield static ");
      strcat(jasm, $5);
      strcat(jasm, " ");
      strcat(jasm, $3);
      strcat(jasm, " = ");
      strcat(jasm, $7);
      strcat(jasm, "\n");
    }
  }
  ;

  simple_statment
  : IDENTIFIER '=' expression ';'
  {
    printf("%s %d\n", "check_c : qiguai1: ", check_c);
    check_c = 0;

    // 这边预设一个char用来存入 = 之前的被赋值对象
    // char assigned[] = "\t\tputstatic int example.";
    // printf("%s\n", "IDENTIFIER '=' expression ';'");
     printf("%s \n", "assignment_expression!!!");

     //这里果然是经过了C确认是经过了C 
     if (strcmp($1, "c") == 0)
     {
       /* code */
      strcat(jasm, "\t\tinvokestatic int example.");
     strcat(jasm, add_indentifier);
     strcat(jasm, "(int, int)\n");
     }
     

     strcat(jasm, "\t\tputstatic int example.");
     strcat(jasm, $1);
     strcat(jasm, "\n");
     printf("%s %s\n", "我输出了putstatic int example  这是在expression中获得的 : ", $1);


  }
  | IDENTIFIER '=' declaration_list ';'
  {
    // printf("%s\n", "这里是declaration+list!!!!");
  }
  | PRINT 
  {
    strcat(jasm, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
  }
   expression
     {

     if (pirnt_type == 1)
      {
        strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
      }
      else  if (pirnt_type == 2)
      {
        strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(java.lang.String)\n");
      }

    
   } ';'
  | PRINTLN
  //这边对PRINTLN进行处理helloworld.rust
  {
    strcat(jasm, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
  }

   expression
   {
    printf("pirnt_type %d\n", pirnt_type);
    // if (strcmp($3 , "n") == 0)
    //   {
      //   strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
      // }
      // else{
     if (pirnt_type == 1)
      {
        strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");
      }
      else  if (pirnt_type == 2)
      {
        strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)\n");
      }
    // }
   } ';' 
  
  | RETURN ';'
  | RETURN expression ';'
  {
    // strcat(jasm, "\t\tireturn\n");
    // printf("return!!!" );
    // strcat(jasm, "\tiload 1\n");
    // strcat(jasm,"\tiadd\n");
    strcat(jasm,"\t\tireturn\n"); 
  }
    // 初步尝试出错，所以是本句grammar需要
    // 这里初步写死a,b 的type
    // 但对expression来说，我又需要进行拆分，写死过程可能需要更多的步骤
//     iload 0
//     iload 1
//     iadd
//     ireturn
// /* 11:   return a+ b; */

  
  ;

compound_start
  : '{'
  {
    // if (check == 1)
    // {
      itemDepth++;
    // }
    // else{
    //   check++;
    // }
  }
  ;

compound_end
  : '}'
  {
    itemDepth--;
    //这里当遇到main才会出现return情况
    // if (strcmp($3, "main") == 0)
    // {
    //   strcat(jasm, "\t\treturn\n\t}\n");
    // }
    //en这个地方因为main无法判断故无法执行
  }
  ;

compound_statement
  : compound_start statement_list compound_end
  | compound_start declaration_list compound_end
  | compound_start declaration_list statement_list compound_end
  | compound_start compound_end
  ;

expression_statement
  :  expression 
  ;

selection_statement
  : IF '(' 
  {
    printf("%s %d\n", "lid : ", add_const_is);
    add_const_is = 1 ;
  }
  expression ')' 
  {
    add_const_is = 0 ;
  }
   '{' 
   {
//     ifgt L0
//     iconst_0 
//     goto L1
//     L0:
// iconst_1
// L1:
// ifeq L2
    strcat(jasm,"\t\tifgt L0\n");
    strcat(jasm,"\t\ticonst_0\n");
    strcat(jasm,"\t\tgoto L1\n");
    strcat(jasm,"\tL0:\n");
    strcat(jasm,"\t\ticonst_1\n");
    strcat(jasm,"\tL1:\n");
    strcat(jasm,"\t\tifeq L2\n");

   }
    statement '}' ELSE 
    {
      strcat(jasm, "\t\tgoto L3\n");
      strcat(jasm, "\tL2:\n");
    }
    '{' statement '}'
    {
      strcat(jasm, "\tL3:\n");
    }
  ;

iteration_statement
  : WHILE 
  {
    add_const_is = 1 ;
    
    // strcat(jasm, "\tLtest: \n");
    strcat(jasm, "\tLbegin:\n");
     // strcat(jasm, "\t\tgetstatic int example.n\n");
     // strcat(jasm, "\t\tsipush 2\n");

     // strcat(jasm, "\t\tisub\n");
     
     
  }
   '(' expression_statement ')' 
   {
    is_const = 0;
    strcat(jasm, "\t\tifle Ltrue\n");

      if (is_over_OP == 1)
      {
        strcat(jasm, "\t\ticonst_1\n");
      }
      else if (is_over_OP == 2){
        strcat(jasm, "\t\ticonst_0\n");
      }
     
     strcat(jasm, "\t\tgoto Lfalse\n");

     strcat(jasm, "\tLtrue:\n");

      if (is_over_OP == 1)
      {
        strcat(jasm, "\t\ticonst_0\n");
      }
      else if (is_over_OP == 2){
        strcat(jasm, "\t\ticonst_1\n");
      }
    strcat(jasm, "\tLfalse:\n");
     strcat(jasm, "\t\tifeq Lexit\n");
   }
   compound_start
    statement_list
    {
strcat(jasm, "\t\tgoto Lbegin\n");
     strcat(jasm, "\tLexit:\n");
    }
   compound_end

  ;

statement_list
  : statement
  | statement_list statement
  ;

statement
  : simple_statment
  | declaration_list
  | compound_statement
  | expression_statement 
  | selection_statement 
  | iteration_statement 
  ;

func_expression:
  FUNC {
    // check = 0;
    itemDepth = 0;
    //这边定义我们需要的itemDepth
  };

// function_add_insert
//   : {
//     strcat(jasm, "\tmethod public static ");  
//     {memset(temp_parameter,0,strlen(temp_parameter));now_fun_index++;function_index++;}parameter_list
    
//   } ;

function_definition 
  : func_expression  IDENTIFIER '(' ')'
  {   
    now_fun_index++;//原yacc文件在这边也加了一次
    printf("%d\n",  function_index);
    if (strcmp($2,"main") == 0)
      {
        strcat(jasm, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
      }
    else
      {
        printf("函数构成发生错误");
      }
  }

   // compound_statement
  '{'
  {
    printf("%s\n", "<statement_list>sdfs</statement_list>");
  }

  statement_list

  '}'
  {
    now_fun_index++;
    function_index++;
    insert($2, "", "");//这个地方我不太确定main是不是要提前插入到symboltable中待定
    if (strcmp($2, "main") == 0)
    {
      strcat(jasm, "\t\treturn\n\t}\n");
    }
 
  }
    // compound_start statement_list compound_end
    // compound_start declaration_list compound_end
    // compound_start declaration_list statement_list compound_end
    // compound_start compound_end
    //以上都是fn main的函数构成方法
  | func_expression  IDENTIFIER '(' IDENTIFIER ':' type_specifier ',' IDENTIFIER ':' type_specifier ')' FU_OP type_specifier '{' 
  {   
    strcat(jasm, "\tmethod public static "); 
    function_index++;
    now_fun_index++;
    // function_index代表该id属于rust文件中的第几个function中，需要symboltable表注入之前将该值记录下来 
    insert($2, $13, "");
    //生成之后对symbol_table又有影响
    insert($4, $6, "");
    insert($8, $10, "");

    // 
    strcat(jasm, $13);
    strcat(jasm, " ");  
    strcat(jasm, $2); 
    strcat(jasm, "(");
    //这里放两个参数a:int ,b :int
    strcat(jasm," ");
    strcat(jasm,$6);
    strcat(jasm,",");
    strcat(jasm," ");
    strcat(jasm,$10);
    strcat(jasm,")\n");
    strcat(jasm,"\tmax_stack 15\n");
    strcat(jasm,"\tmax_locals 15\n");
    strcat(jasm,"\t{\n");
    printf("%s\n", "add function已经结束！！！！！");
    // a1++;
    // now_fun_index++;
    
  }

  statement_list

  '}'
  {
    strcat(jasm,"\t}\n");
  }
  // IDENTIFIER '('parameter_list ')' FU_OP type_specifier compound_statement //这里是原语句，特殊的范例需要上面一句用以取代
  // {   
  //   strcat(jasm, "\tmethod public static ");    
  //   insert($3, $8, "");
  //   // 
  //   strcat(jasm, $8);
  //   strcat(jasm, " ");  
  //   strcat(jasm, $3); 
  //   strcat(jasm, "(");
    // 这边能想到的就是通过lookup来查询
    // 但倘若只有这一个方法，那就是对parameter全部展开
    // lookup
    // strcat(jasm, ")");  

    // strcat(jasm, " i am here!"); 
//     method public static int add(int, int)
//     max_stack 15
//     max_locals 15
//     {
// /* 10:  fn add(a:int, b:int) -> int { */
  // }
  | func_expression  IDENTIFIER '(' ')' FU_OP type_specifier compound_statement 
  {
    insert($2, $6, "");

  }
  | func_expression  IDENTIFIER '(' parameter_list ')' compound_statement 
  {

    insert($2, "", "");
  }
  ;

external_declaration
  : function_definition
  | declaration_list
  | IDENTIFIER '(' declarator_list ')' 
  ;

program
  : external_declaration
  | program external_declaration
  ;
%%

void yyerror(const char *str){
    // printf("error:%s\n",str);
}

int yywrap(){
    return 1;
}

int main()
{
  itemDepth = 0;
  hash_table = init();
  //在yyparse前面开始读数据
  strcat(jasm, "class example\n{\n ");
  yyparse();
  printf( " -------- symbol table --------\n" );
  printf( "id     type     value   depth   fun_index\n" );
  printAll();

  strcat(jasm, "}\n");//此所有应写入数据全部注入jasm中
  printf("\n\n%s\n", "------ Write Java Assembly Code Into example.jasm ------");

  FILE *fpt;
  char file_name[100];
  fpt = fopen("example.jasm", "w"); 

  fprintf(fpt, jasm);
  fclose(fpt);

  char command[100] = "";
  printf("\n\n%s\n", "------ Convert example.jasm To example.class By javaa program------");
  strcat(command, "./javaa example.jasm");
  printf("%s%s\n\n", "Execute  command : ", command);
  system(command);

  memset(command, '\0', sizeof(command)-1);

  printf("\n\n%s\n", "------ Result After Run example.class ------");
  strcat(command, "java example");
  printf("%s%s\n\n", "Execute command : ", command);
  system(command);

  return(0);


}

