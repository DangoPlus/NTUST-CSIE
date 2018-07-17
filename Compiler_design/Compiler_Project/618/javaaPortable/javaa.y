/* Copyright 1996, Jason Hunt and Washington University */
%token <string> LABEL
%token <string> IDENTIFIER
%token <intval> INTCONSTANT
%token <longval> LONGCONSTANT
%token <floatval> FLOATCONSTANT
%token <doubleval> DOUBLECONSTANT
%token <charval> CHARCONSTANT
%token <string> STRING_LITERAL
%token <Rk> CLASS
%token <Rk> EXTENDS
%token <Rk> ACCESS
%token <Rk> IMPLEMENTS
%token <Rk> FIELD
%token <Rk> METHOD
%token <Rk> MAX_STACK
%token <Rk> MAX_LOCALS
%token <Rk> CODE
%token <Rk> PUBLIC
%token <Rk> PRIVATE
%token <Rk> PROTECTED
%token <Rk> ABSTRACT
%token <Rk> FINAL
%token <Rk> INTERFACE
%token <Rk> STATIC
%token <Rk> NATIVE
%token <Rk> SYNCHRONIZED
%token <Rk> TRANSIENT
%token <Rk> VOLATILE
%token <Rk> BYTE
%token <Rk> CHAR
%token <Rk> DOUBLE
%token <Rk> FLOAT
%token <Rk> INT
%token <Rk> LONG
%token <Rk> SHORT
%token <Rk> BOOLEAN
%token <Rk> VOID
%token <Rk> DEFAULT
%token <Rk> TO
%token <Rk> EXCEPTIONS
%token <Rk> SOURCEFILE
%token <Rk> THROWS
%token <Rk> LINENUMBERTABLE
%token <Rk> LOCALVARIABLETABLE
%token <Rk> ACC_PUBLIC
%token <Rk> ACC_PRIVATE
%token <Rk> ACC_PROTECTED
%token <Rk> ACC_STATIC
%token <Rk> ACC_FINAL
%token <Rk> ACC_SYNCHRONIZED
%token <Rk> ACC_VOLATILE
%token <Rk> ACC_TRANSIENT
%token <Rk> ACC_NATIVE
%token <Rk> ACC_INTERFACE
%token <Rk> ACC_ABSTRACT
%token <Rk> AALOAD
%token <Rk> AASTORE
%token <Rk> ACONST_NULL
%token <Rk> ALOAD_0
%token <Rk> ALOAD_1
%token <Rk> ALOAD_2
%token <Rk> ALOAD_3
%token <Rk> ANEWARRAY
%token <Rk> ARETURN
%token <Rk> ARRAYLENGTH
%token <Rk> ASTORE_0
%token <Rk> ASTORE_1
%token <Rk> ASTORE_2
%token <Rk> ASTORE_3
%token <Rk> ATHROW
%token <Rk> BALOAD
%token <Rk> BASTORE
%token <Rk> BIPUSH
%token <Rk> CALOAD
%token <Rk> CASTORE
%token <Rk> CHECKCAST
%token <Rk> D2F
%token <Rk> D2I
%token <Rk> D2L
%token <Rk> DADD
%token <Rk> DALOAD
%token <Rk> DASTORE
%token <Rk> DCMPG
%token <Rk> DCMPL
%token <Rk> DCONST_0
%token <Rk> DCONST_1
%token <Rk> DDIV
%token <Rk> DLOAD_0
%token <Rk> DLOAD_1
%token <Rk> DLOAD_2
%token <Rk> DLOAD_3
%token <Rk> DMUL
%token <Rk> DNEG
%token <Rk> DREM
%token <Rk> DRETURN
%token <Rk> DSTORE_0
%token <Rk> DSTORE_1
%token <Rk> DSTORE_2
%token <Rk> DSTORE_3
%token <Rk> DSUB
%token <Rk> DUP
%token <Rk> DUP_X1
%token <Rk> DUP_X2
%token <Rk> DUP2
%token <Rk> DUP2_X1
%token <Rk> DUP2_X2
%token <Rk> F2D
%token <Rk> F2I
%token <Rk> F2L
%token <Rk> FADD
%token <Rk> FALOAD
%token <Rk> FASTORE
%token <Rk> FCMPG
%token <Rk> FCMPL
%token <Rk> FCONST_0
%token <Rk> FCONST_1
%token <Rk> FCONST_2
%token <Rk> FDIV
%token <Rk> FLOAD_0
%token <Rk> FLOAD_1
%token <Rk> FLOAD_2
%token <Rk> FLOAD_3
%token <Rk> FMUL
%token <Rk> FNEG
%token <Rk> FREM
%token <Rk> FRETURN
%token <Rk> FSTORE_0
%token <Rk> FSTORE_1
%token <Rk> FSTORE_2
%token <Rk> FSTORE_3
%token <Rk> FSUB
%token <Rk> GETFIELD
%token <Rk> GETSTATIC
%token <Rk> GOTO
%token <Rk> GOTO_W
%token <Rk> I2B
%token <Rk> I2C
%token <Rk> I2D
%token <Rk> I2F
%token <Rk> I2L
%token <Rk> I2S
%token <Rk> IADD
%token <Rk> IALOAD
%token <Rk> IAND
%token <Rk> IASTORE
%token <Rk> ICONST_0
%token <Rk> ICONST_1
%token <Rk> ICONST_2
%token <Rk> ICONST_3
%token <Rk> ICONST_4
%token <Rk> ICONST_5
%token <Rk> ICONST_M1
%token <Rk> IDIV
%token <Rk> IF_ACMPEQ
%token <Rk> IF_ACMPNE
%token <Rk> IF_ICMPEQ
%token <Rk> IF_ICMPNE
%token <Rk> IF_ICMPLT
%token <Rk> IF_ICMPGE
%token <Rk> IF_ICMPGT
%token <Rk> IF_ICMPLE
%token <Rk> IFEQ
%token <Rk> IFNE
%token <Rk> IFLT
%token <Rk> IFGE
%token <Rk> IFGT
%token <Rk> IFLE
%token <Rk> IFNONNULL
%token <Rk> IFNULL
%token <Rk> ILOAD_0
%token <Rk> ILOAD_1
%token <Rk> ILOAD_2
%token <Rk> ILOAD_3
%token <Rk> IMUL
%token <Rk> INEG
%token <Rk> IOR
%token <Rk> IREM
%token <Rk> IRETURN
%token <Rk> ISHL
%token <Rk> ISHR
%token <Rk> ISTORE_0
%token <Rk> ISTORE_1
%token <Rk> ISTORE_2
%token <Rk> ISTORE_3
%token <Rk> ISUB
%token <Rk> IUSHR
%token <Rk> IXOR
%token <Rk> JSR
%token <Rk> JSR_W
%token <Rk> L2D
%token <Rk> L2F
%token <Rk> L2I
%token <Rk> LADD
%token <Rk> LALOAD
%token <Rk> LAND
%token <Rk> LASTORE
%token <Rk> LCMP
%token <Rk> LCONST_0
%token <Rk> LCONST_1
%token <Rk> LDIV
%token <Rk> LLOAD_0
%token <Rk> LLOAD_1
%token <Rk> LLOAD_2
%token <Rk> LLOAD_3
%token <Rk> LMUL
%token <Rk> LNEG
%token <Rk> LOR
%token <Rk> LREM
%token <Rk> LRETURN
%token <Rk> LSHL
%token <Rk> LSHR
%token <Rk> LSTORE_0
%token <Rk> LSTORE_1
%token <Rk> LSTORE_2
%token <Rk> LSTORE_3
%token <Rk> LSUB
%token <Rk> LUSHR
%token <Rk> LXOR
%token <Rk> MONITORENTER
%token <Rk> MONITOREXIT
%token <Rk> NOP
%token <Rk> POP
%token <Rk> POP2
%token <Rk> RETURN
%token <Rk> SALOAD
%token <Rk> SASTORE
%token <Rk> SWAP
%token <Rk> IINC
%token <Rk> INSTANCEOF
%token <Rk> INVOKEINTERFACE
%token <Rk> INVOKENONVIRTUAL
%token <Rk> INVOKESTATIC
%token <Rk> INVOKEVIRTUAL
%token <Rk> LDC
%token <Rk> LDC_W
%token <Rk> LDC2_W
%token <Rk> MULTIANEWARRAY
%token <Rk> NEW
%token <Rk> NEWARRAY
%token <Rk> PUTFIELD
%token <Rk> PUTSTATIC
%token <Rk> SIPUSH
%token <Rk> ILOAD
%token <Rk> FLOAD
%token <Rk> ALOAD
%token <Rk> LLOAD
%token <Rk> DLOAD
%token <Rk> ISTORE
%token <Rk> FSTORE
%token <Rk> ASTORE
%token <Rk> LSTORE
%token <Rk> DSTORE
%token <Rk> RET
%token <Rk> WIDE
%token <Rk> LOAD
%token <Rk> STORE
%token <Rk> LOOKUPSWITCH
%token <Rk> TABLESWITCH
%{
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "types.h"
#include "utils.h"
#include "build.h"
#include "protos.h"
#include "listing.h"
%}

%type <argtype>     argument fieldconstant
%type <string>      label
%type <intval>      no_arg_op one_arg_op fieldref_arg_op
%type <intval>      methodref_arg_op class_arg_op label_arg_op
%type <intval>      localvar_arg_op localvar_arg newarraytype
%type <intval>      access_specifier class_modifiers method_modifiers
%type <intval>      field_modifiers max_locals_decl
%type <intval>      abstract_entry final_entry public_entry
%type <intval>      interface_entry static_entry native_entry
%type <intval>      synchronized_entry transient_entry volatile_entry
%type <string>      superclass classname arrayorclassname
%type <string>      returntype arguments type basetype arrayadder
%type <string>      argumentlist methodargument methodarguments
%type <string>      methodargumentlist
%type <classfieldmethodstruct> classfieldmethodname endname
%type <lookuplistptr>   lookuplist
%type <tablelistptr>    tablelist

%union {
   Terminal        rk;
   Terminal        NT;
   Terminal        RK;
   Terminal        Rk;

   float           floatval;
   double          doubleval;
   char            charval;
   int             intval;
   long            longval;
   char           *string;

   BaseType        basetype;
   StorageClass    storageclass;
   TypeQualifier   typequalifier;
   ArgType     argtype;

   lookupentry *   lookuplistptr;
   tableentry *    tablelistptr;

   struct {
    char* classname;
    char* fieldmethodname;
   }        classfieldmethodstruct;

   struct _declinfo {
      int   function;
      int   ptrcount;
      int   dimsize[7];
      int   numdims;
      char *name;
   }               declinfo;

   struct {
      TreeNode *formals;
      struct _declinfo D;
   }               funcstuff;

   struct {
      Type          T;
      StorageClass  C;
      TypeQualifier Q;
   } declspecs;

   struct {
      Type          T;
      StorageClass  C;
      TypeQualifier Q;
      TreeNode     *node;
   } declspecsnode;

   struct {
      Type          T;
      StorageClass  C;
      TypeQualifier Q;
      Symbol       *headsym;
      Symbol       *prevsym;
   } structdeclspecs;

   struct {
      Symbol   *headsym;
      Symbol   *prevsym;
   } headprevsym;

   struct {
      int       spec;
      int       val;
      char     *id;
   } idspecval;

   struct {
      Symbol   *sym;
      int       val;
   } symval;

   Type            typetype;

   Symbol         *sym;

   struct {
      TreeNode *decl;
      TreeNode *func;
   } declfunc;

   struct {
      TreeNode *decl;
      TreeNode *func;
      TreeNode *exprs;
      TreeNode *last;
   } declfuncexprs;

   struct {
      TreeNode *exprs;
      TreeNode *last;
   } exprslast;

   TreeNode       *node;
}

%{
   static void     CheckStructDcl(Type,int);
   static MimeType GenBlankMimeType();
   static Type     GenBlankType();
   static TreeNode *MakeBinOpSubTree(int, TreeNode *, TreeNode *);
   static TreeNode *MakeUnOpSubTree(int, TreeNode *);
   static TreeNode *MakeFuncSibs(TreeNode *, TreeNode *, TreeNode *,
              TreeNode *, TreeNode *);
   static TreeNode *GenEntryArgs(TreeNode *);
%}

%start compilation_unit
%%
compilation_unit
    : { InitAssembler();} classlist
            { EndAssembler();}
    ;

classlist:
    class classlist
    | class
    ;

class   : class_modifiers classword IDENTIFIER superclass interfaces '{'
      fieldlist
        {
        SetThisClass($1, $3, $4);
        }
          methodlist sourcefilename '}'
    ;

class_modifiers
    : abstract_entry final_entry public_entry interface_entry
        {$$ = $1 | $2 | $3 | $4;}
    ;

classword: CLASS
        {break;}
    |   {break;}
    ;


superclass
    : EXTENDS classname
        { $$ = $2;}
    | {
        char* tempstring;
        int len = strlen("java/lang/Object")+1;
        tempstring = (char *) malloc(sizeof(char)*len);
        strncpy(tempstring,"java/lang/Object", len);
        $$ = tempstring;
      }
    ;

classname: IDENTIFIER '.' classname
        {
          $$ = ConsStrings($1,ConsStrings("/",$3));
        }
    | IDENTIFIER
        {
          $$ = $1;
        }
    ;

classfieldmethodname
    : IDENTIFIER '.' endname
        {
          if ($3.classname == NULL) $$.classname = $1;
          else $$.classname = ConsStrings($1,ConsStrings("/",$3.classname));
          $$.fieldmethodname = $3.fieldmethodname;
        }
    | IDENTIFIER
        {
          $$.classname = GetThisClass();
          $$.fieldmethodname = $1;
        }
    ;

endname
    : IDENTIFIER '.' endname
        {
          if ($3.classname == NULL) $$.classname = $1;
          else $$.classname = ConsStrings($1,ConsStrings("/",$3.classname));
          $$.fieldmethodname = $3.fieldmethodname;
        }
    | IDENTIFIER
        {
          $$.classname = NULL;
          $$.fieldmethodname = $1;
        }
    ;

abstract_entry
    : ABSTRACT
        {$$ = 0x0400;}
    | {$$=0;}
    ;

final_entry
    : FINAL
        {$$ = 0x0010;}
    | {$$=0;}
    ;

public_entry
    : PUBLIC
        {$$ = 0x0001;}
    | {$$=0;}
    ;

interface_entry
    : INTERFACE
        {$$ = 0x0200;}
    | {$$=0;}
    ;

static_entry
    : STATIC
        {$$ = 0x0008;}
    | {$$=0;}
    ;

native_entry
    : NATIVE
        {$$ = 0x0100;}
    | {$$=0;}
    ;

synchronized_entry
    : SYNCHRONIZED
        {$$ = 0x0020;}
    | {$$=0;}
    ;

transient_entry
    : TRANSIENT
        {$$ = 0x0080;}
    | {$$=0;}
    ;

volatile_entry
    : VOLATILE
        {$$ = 0x0040;}
    | {$$=0;}
    ;

access_specifier
    : PRIVATE
        {$$ = 2;}
    | PRIVATE PROTECTED
        {$$ = 6;}
    | PROTECTED
        {$$ = 4;}
    | PUBLIC
        {$$ = 1;}
    | {$$=0;}
    ;

interfaces
    : IMPLEMENTS interfacelist
        {break;}
    |   {break;}
    ;

interfacelist
    : interfacelist classname
        { AddToInterfaceList($2);}
    | classname
        { AddToInterfaceList($1);}
    ;

fieldlist
    : fieldlist field
    | {break;}
    ;

field   : FIELD access_specifier field_modifiers type IDENTIFIER fieldconstant
        {NewField($2|$3, $5, $4, $6);}
    ;

fieldconstant
    : '=' INTCONSTANT
             {$$.type = INTCONSTANT;
              $$.intval = $2;
             }
    | '=' FLOATCONSTANT
             {$$.type = FLOATCONSTANT;
              $$.floatval = $2;
             }
    | '=' LONGCONSTANT
             {$$.type = LONGCONSTANT;
              $$.longval = $2;
             }
    | '=' DOUBLECONSTANT
             {$$.type = DOUBLECONSTANT;
              $$.doubleval = $2;
             }
    |
             {$$.type = 0;
             }
    ;

field_modifiers
    : static_entry final_entry transient_entry volatile_entry
        { $$ = $1 | $2 | $3 | $4 ;}
    ;

methodlist
    : methodlist method
    | {break;}
    ;

method  :
          METHOD access_specifier method_modifiers {NewNewMethod($2|$3);}
      returntype
      IDENTIFIER
      '(' methodarguments ')' throwslist MAX_STACK INTCONSTANT
          max_locals_decl
      {
        char* tmpstr;
        /*message("Calling NewMethod.");*/
        tmpstr = ConsStrings("(",ConsStrings($8,ConsStrings(")",$5)));
        /*message(tmpstr);*/
        NewMethod($6, tmpstr, $12, $13); }
        '{'
            code
        exceptiontable
        linenumbertable
        localvariabletable
        '}'
        {EndMethod();}
    ;

throwslist :
      THROWS throwsentries
        {break;}
    |   {break;}
    ;

throwsentries :
      throwsentries classname
        {AddToThrowsList($2);}
    | classname
        {AddToThrowsList($1);}
        ;

max_locals_decl:
    MAX_LOCALS INTCONSTANT
        {$$ = $2;}
    |   {$$ = -1;}
    ;

returntype
    : type
        { $$ = $1; }
    | VOID
            { char* tempstring;
              tempstring = (char *) malloc(sizeof(char) * (strlen("B")+1));
              strcpy(tempstring,"V");
              $$ = tempstring;
        }
    ;

arguments
    : argumentlist
        { $$ = $1;}
    | {$$ = NULL;}
    ;

argumentlist: type ',' argumentlist
        {
          /*message("in arguments with comma.");*/
          $$ = ConsStrings($1,$3);
        }
    | type
        { $$ = $1; /*message("in arguments");*/}
    ;


methodarguments
    : methodargumentlist
        { $$ = $1;}
    | {$$ = NULL;}
    ;

methodargumentlist: methodargument ',' methodargumentlist
        {
          /*message("in arguments with comma.");*/
          $$ = ConsStrings($1,$3);
        }
    | methodargument
        { $$ = $1; /*message("in arguments");*/}
    ;
methodargument: type
        { $$ = $1;
          /*message("calling IncrementLocalVarSlot");*/
          IncrementLocalVarSlot($1); /*message("in methodargument");*/}
    | type IDENTIFIER
        { $$ = $1; NewLocalVar($2, $1);/*message("in methodargument");*/}
    ;


type    : basetype arrayadder
        {
          /*message("In type.");*/
          $$ = ConsStrings($2,$1);
        }
    ;

basetype: BYTE
        { $$ = ConsStrings("B",""); }
    | CHAR
        { $$ = ConsStrings("C",""); }
    | DOUBLE
        { $$ = ConsStrings("D",""); }
    | FLOAT
        { $$ = ConsStrings("F",""); }
    | INT
        { $$ = ConsStrings("I",""); }
    | LONG
        { $$ = ConsStrings("J",""); }
    | SHORT
        { $$ = ConsStrings("S",""); }
    | BOOLEAN
        { $$ = ConsStrings("Z",""); }
    | classname
        {
         $$ = ConsStrings("L", ConsStrings($1,";"));
         /*message($$);*/
         /*message("Got classname.");*/}
    ;

arrayadder
    : '[' ']' arrayadder
        {$$ = ConsStrings("[",$3);}
    | {$$=NULL;}
    ;

method_modifiers
    : static_entry abstract_entry final_entry native_entry
      synchronized_entry
        { $$ = $1 | $2 | $3 | $4 | $5;}
    ;

localvar: type IDENTIFIER
        {NewLocalVar($2, $1);}
    ;

arrayorclassname
    : classname
        {$$ = $1;}
    | basetype '[' ']' arrayadder
        {$$ = ConsStrings("[",ConsStrings($4,$1));}
    ;


code    : op_list
            {break;}
    ;

op_list : op_list op_line
            {break;}
    |
            {break;}
    ;

op_line : label op
            {break;}
    | op
            {break;}
    | localvar
            {break;}
    | label localvar
            {break;}
    ;

label   : LABEL
        {DefineLabel($1);}
    ;

op  : no_arg_op
                {GenNoArgCode($1);
        }
    | one_arg_op argument
        {GenOneArgCode($1, $2);
        }
    | fieldref_arg_op type classfieldmethodname
        {GenFieldArgCode($1, $3.classname, $3.fieldmethodname, $2);
        }
    | methodref_arg_op returntype classfieldmethodname
      '(' arguments ')'
        {GenMethodArgCode($1, $3.classname, $3.fieldmethodname,
                     ConsStrings("(",ConsStrings($5,
                   ConsStrings(")",$2))));
        }
    | class_arg_op classname
        {GenClassArgCode($1, $2);
        }
    | ANEWARRAY arrayorclassname
        {GenClassArgCode($1.terminal, $2);
        }
    | INVOKEINTERFACE returntype classfieldmethodname
      '(' arguments ')' INTCONSTANT
        {GenINVOKEINTERFACECode($1.terminal, $3.classname,
                 $3.fieldmethodname,
                     ConsStrings("(",ConsStrings($5,
                   ConsStrings(")",$2))), $7);
        }
    | label_arg_op IDENTIFIER
        {GenLabelArgCode($1, $2);
        }
        | localvar_arg_op localvar_arg
        {GenLocalVarArgCode($1,$2);
        }
        | IINC localvar_arg INTCONSTANT
        {GenIINCCode($1.terminal,$2,$3);
        }
    | LOOKUPSWITCH DEFAULT IDENTIFIER '{' lookuplist '}'
        {GenLOOKUPSWITCHCode($1.terminal,$3,$5);
        }
    | TABLESWITCH INTCONSTANT TO INTCONSTANT DEFAULT IDENTIFIER '{'
      tablelist '}'
        {GenTABLESWITCHCode($1.terminal,$2,$4,$6,$8);
        }
        | MULTIANEWARRAY arrayorclassname INTCONSTANT
        {GenMULTIANEWARRAYCode($1.terminal,$2,$3);
        }
        | NEWARRAY newarraytype
        {GenNEWARRAYCode($1.terminal,$2);
        }
    ;

no_arg_op : AALOAD
        {$$=$1.terminal;}
    | AASTORE
        {$$=$1.terminal;}
    | ACONST_NULL
        {$$=$1.terminal;}
    | ALOAD_0
        {$$=$1.terminal;}
    | ALOAD_1
        {$$=$1.terminal;}
    | ALOAD_2
        {$$=$1.terminal;}
    | ALOAD_3
        {$$=$1.terminal;}
    | ARETURN
        {$$=$1.terminal;}
    | ARRAYLENGTH
        {$$=$1.terminal;}
    | ASTORE_0
        {$$=$1.terminal;}
    | ASTORE_1
        {$$=$1.terminal;}
    | ASTORE_2
        {$$=$1.terminal;}
    | ASTORE_3
        {$$=$1.terminal;}
    | ATHROW
        {$$=$1.terminal;}
    | BALOAD
        {$$=$1.terminal;}
    | BASTORE
        {$$=$1.terminal;}
    | CALOAD
        {$$=$1.terminal;}
    | CASTORE
        {$$=$1.terminal;}
    | D2F
        {$$=$1.terminal;}
    | D2I
        {$$=$1.terminal;}
    | D2L
        {$$=$1.terminal;}
    | DADD
        {$$=$1.terminal;}
    | DALOAD
        {$$=$1.terminal;}
    | DASTORE
        {$$=$1.terminal;}
    | DCMPG
        {$$=$1.terminal;}
    | DCMPL
        {$$=$1.terminal;}
    | DCONST_0
        {$$=$1.terminal;}
    | DCONST_1
        {$$=$1.terminal;}
    | DDIV
        {$$=$1.terminal;}
    | DLOAD_0
        {$$=$1.terminal;}
    | DLOAD_1
        {$$=$1.terminal;}
    | DLOAD_2
        {$$=$1.terminal;}
    | DLOAD_3
        {$$=$1.terminal;}
    | DMUL
        {$$=$1.terminal;}
    | DNEG
        {$$=$1.terminal;}
    | DREM
        {$$=$1.terminal;}
    | DRETURN
        {$$=$1.terminal;}
    | DSTORE_0
        {$$=$1.terminal;}
    | DSTORE_1
        {$$=$1.terminal;}
    | DSTORE_2
        {$$=$1.terminal;}
    | DSTORE_3
        {$$=$1.terminal;}
    | DSUB
        {$$=$1.terminal;}
    | DUP
        {$$=$1.terminal;}
    | DUP_X1
        {$$=$1.terminal;}
    | DUP_X2
        {$$=$1.terminal;}
    | DUP2
        {$$=$1.terminal;}
    | DUP2_X1
        {$$=$1.terminal;}
    | DUP2_X2
        {$$=$1.terminal;}
    | F2D
        {$$=$1.terminal;}
    | F2I
        {$$=$1.terminal;}
    | F2L
        {$$=$1.terminal;}
    | FADD
        {$$=$1.terminal;}
    | FALOAD
        {$$=$1.terminal;}
    | FASTORE
        {$$=$1.terminal;}
    | FCMPG
        {$$=$1.terminal;}
    | FCMPL
        {$$=$1.terminal;}
    | FCONST_0
        {$$=$1.terminal;}
    | FCONST_1
        {$$=$1.terminal;}
    | FCONST_2
        {$$=$1.terminal;}
    | FDIV
        {$$=$1.terminal;}
    | FLOAD_0
        {$$=$1.terminal;}
    | FLOAD_1
        {$$=$1.terminal;}
    | FLOAD_2
        {$$=$1.terminal;}
    | FLOAD_3
        {$$=$1.terminal;}
    | FMUL
        {$$=$1.terminal;}
    | FNEG
        {$$=$1.terminal;}
    | FREM
        {$$=$1.terminal;}
    | FRETURN
        {$$=$1.terminal;}
    | FSTORE_0
        {$$=$1.terminal;}
    | FSTORE_1
        {$$=$1.terminal;}
    | FSTORE_2
        {$$=$1.terminal;}
    | FSTORE_3
        {$$=$1.terminal;}
    | FSUB
        {$$=$1.terminal;}
    | I2B
        {$$=$1.terminal;}
    | I2C
        {$$=$1.terminal;}
    | I2D
        {$$=$1.terminal;}
    | I2F
        {$$=$1.terminal;}
    | I2L
        {$$=$1.terminal;}
    | I2S
        {$$=$1.terminal;}
    | IADD
        {$$=$1.terminal;}
    | IALOAD
        {$$=$1.terminal;}
    | IAND
        {$$=$1.terminal;}
    | IASTORE
        {$$=$1.terminal;}
    | ICONST_0
        {$$=$1.terminal;}
    | ICONST_1
        {$$=$1.terminal;}
    | ICONST_2
        {$$=$1.terminal;}
    | ICONST_3
        {$$=$1.terminal;}
    | ICONST_4
        {$$=$1.terminal;}
    | ICONST_5
        {$$=$1.terminal;}
    | ICONST_M1
        {$$=$1.terminal;}
    | IDIV
        {$$=$1.terminal;}
    | ILOAD_0
        {$$=$1.terminal;}
    | ILOAD_1
        {$$=$1.terminal;}
    | ILOAD_2
        {$$=$1.terminal;}
    | ILOAD_3
        {$$=$1.terminal;}
    | IMUL
        {$$=$1.terminal;}
    | INEG
        {$$=$1.terminal;}
    | IOR
        {$$=$1.terminal;}
    | IREM
        {$$=$1.terminal;}
    | IRETURN
        {$$=$1.terminal;}
    | ISHL
        {$$=$1.terminal;}
    | ISHR
        {$$=$1.terminal;}
    | ISTORE_0
        {$$=$1.terminal;}
    | ISTORE_1
        {$$=$1.terminal;}
    | ISTORE_2
        {$$=$1.terminal;}
    | ISTORE_3
        {$$=$1.terminal;}
    | ISUB
        {$$=$1.terminal;}
    | IUSHR
        {$$=$1.terminal;}
    | IXOR
        {$$=$1.terminal;}
    | L2D
        {$$=$1.terminal;}
    | L2F
        {$$=$1.terminal;}
    | L2I
        {$$=$1.terminal;}
    | LADD
        {$$=$1.terminal;}
    | LALOAD
        {$$=$1.terminal;}
    | LAND
        {$$=$1.terminal;}
    | LASTORE
        {$$=$1.terminal;}
    | LCMP
        {$$=$1.terminal;}
    | LCONST_0
        {$$=$1.terminal;}
    | LCONST_1
        {$$=$1.terminal;}
    | LDIV
        {$$=$1.terminal;}
    | LLOAD_0
        {$$=$1.terminal;}
    | LLOAD_1
        {$$=$1.terminal;}
    | LLOAD_2
        {$$=$1.terminal;}
    | LLOAD_3
        {$$=$1.terminal;}
    | LMUL
        {$$=$1.terminal;}
    | LNEG
        {$$=$1.terminal;}
    | LOR
        {$$=$1.terminal;}
    | LREM
        {$$=$1.terminal;}
    | LRETURN
        {$$=$1.terminal;}
    | LSHL
        {$$=$1.terminal;}
    | LSHR
        {$$=$1.terminal;}
    | LSTORE_0
        {$$=$1.terminal;}
    | LSTORE_1
        {$$=$1.terminal;}
    | LSTORE_2
        {$$=$1.terminal;}
    | LSTORE_3
        {$$=$1.terminal;}
    | LSUB
        {$$=$1.terminal;}
    | LUSHR
        {$$=$1.terminal;}
    | LXOR
        {$$=$1.terminal;}
    | MONITORENTER
        {$$=$1.terminal;}
    | MONITOREXIT
        {$$=$1.terminal;}
    | NOP
        {$$=$1.terminal;}
    | POP
        {$$=$1.terminal;}
    | POP2
        {$$=$1.terminal;}
    | RETURN
        {$$=$1.terminal;}
    | SALOAD
        {$$=$1.terminal;}
    | SASTORE
        {$$=$1.terminal;}
    | SWAP
        {$$=$1.terminal;}
    | WIDE
        {$$=$1.terminal;}
    ;

one_arg_op : BIPUSH
        {$$=$1.terminal;}
        | LDC
        {$$=$1.terminal;}
        | LDC_W
        {$$=$1.terminal;}
        | LDC2_W
        {$$=$1.terminal;}
        | SIPUSH
        {$$=$1.terminal;}
    ;


methodref_arg_op
    : INVOKESTATIC
        {$$=$1.terminal;}
        | INVOKENONVIRTUAL
        {$$=$1.terminal;}
        | INVOKEVIRTUAL
        {$$=$1.terminal;}
    ;

fieldref_arg_op
        : GETFIELD
        {$$=$1.terminal;}
        | GETSTATIC
        {$$=$1.terminal;}
        | PUTFIELD
        {$$=$1.terminal;}
        | PUTSTATIC
        {$$=$1.terminal;}
    ;

class_arg_op
    : CHECKCAST
        {$$=$1.terminal;}
    | INSTANCEOF
        {$$=$1.terminal;}
    | NEW
        {$$=$1.terminal;}
    ;
label_arg_op
    : GOTO
        {$$=$1.terminal;}
    | GOTO_W
        {$$=$1.terminal;}
    | IF_ACMPEQ
        {$$=$1.terminal;}
    | IF_ACMPNE
        {$$=$1.terminal;}
    | IF_ICMPEQ
        {$$=$1.terminal;}
    | IF_ICMPNE
        {$$=$1.terminal;}
    | IF_ICMPLT
        {$$=$1.terminal;}
    | IF_ICMPGE
        {$$=$1.terminal;}
    | IF_ICMPGT
        {$$=$1.terminal;}
    | IF_ICMPLE
        {$$=$1.terminal;}
    | IFEQ
        {$$=$1.terminal;}
    | IFNE
        {$$=$1.terminal;}
    | IFLT
        {$$=$1.terminal;}
    | IFGE
        {$$=$1.terminal;}
    | IFGT
        {$$=$1.terminal;}
    | IFLE
        {$$=$1.terminal;}
    | IFNONNULL
        {$$=$1.terminal;}
    | IFNULL
        {$$=$1.terminal;}
    | JSR
        {$$=$1.terminal;}
    | JSR_W
        {$$=$1.terminal;}
    ;

localvar_arg_op
    : ILOAD
        {$$=$1.terminal;}
    | FLOAD
        {$$=$1.terminal;}
    | ALOAD
        {$$=$1.terminal;}
    | LLOAD
        {$$=$1.terminal;}
    | DLOAD
        {$$=$1.terminal;}
    | ISTORE
        {$$=$1.terminal;}
    | FSTORE
        {$$=$1.terminal;}
    | ASTORE
        {$$=$1.terminal;}
    | LSTORE
        {$$=$1.terminal;}
    | DSTORE
        {$$=$1.terminal;}
    | RET
        {$$=$1.terminal;}
    | LOAD
        {$$=$1.terminal;}
    | STORE
        {$$=$1.terminal;}
    ;

localvar_arg: INTCONSTANT
        { $$ = $1;}
    | IDENTIFIER
        { $$ = GetLocalVar($1);}
    ;

lookuplist: INTCONSTANT ':' IDENTIFIER lookuplist
        { $$ = AddToLookupList($4,$1,$3); }
    |   {$$ = NULL;}
    ;

tablelist: IDENTIFIER tablelist
        { $$ = AddToTableList($2,$1); }
    |   {$$ = NULL;}
    ;

newarraytype:
    BOOLEAN
        { $$ = 4;}
    | CHAR
        { $$ = 5;}
    | FLOAT
        { $$ = 6;}
    | DOUBLE
        { $$ = 7;}
    | BYTE
        { $$ = 8;}
    | SHORT
        { $$ = 9;}
    | INT
        { $$ = 10;}
    | LONG
        { $$ = 11;}
    ;

argument: IDENTIFIER
             {$$.type = IDENTIFIER;
              $$.stringval = $1;
             }
    | INTCONSTANT
             {$$.type = INTCONSTANT;
              $$.intval = $1;
             }
    | LONGCONSTANT
             {$$.type = LONGCONSTANT;
              $$.longval = $1;
             }
    | STRING_LITERAL
             {$$.type = STRING_LITERAL;
              $$.stringval = $1;
             }
        | FLOATCONSTANT
             {$$.type = FLOATCONSTANT;
              $$.floatval = $1;
          /*message("got a float constant.");*/
             }
        | DOUBLECONSTANT
             {$$.type = DOUBLECONSTANT;
              $$.doubleval = $1;
          /*message("got a double constant.");*/
             }
    ;

exceptiontable:
    EXCEPTIONS '{' exceptionslist '}'
        { break; }
    | {break;}
    ;

exceptionslist: exceptionslist IDENTIFIER IDENTIFIER IDENTIFIER classname
        { AddToExceptionList($2,$3,$4,$5); }
        | exceptionslist IDENTIFIER IDENTIFIER IDENTIFIER INTCONSTANT
        {
          if ($5 != 0) oops("Must have a class name or 0 here.");
              AddToExceptionList($2,$3,$4,NULL);
        }
    |   {break;}
    ;

linenumbertable:
    LINENUMBERTABLE '{' linenumberlist '}'
        { break; }
    | {break;}
    ;

linenumberlist: linenumberlist IDENTIFIER INTCONSTANT
        { AddToLineNumberList($2,$3); }
    |   {break;}
    ;

localvariabletable:
    LOCALVARIABLETABLE '{' localvariablelist '}'
        { break; }
    | {break;}
    ;

localvariablelist: localvariablelist IDENTIFIER IDENTIFIER type IDENTIFIER
               INTCONSTANT
        { AddToUserLocalVarList($2,$3,$4,$5,$6); }
    |   {break;}
    ;

sourcefilename:
      SOURCEFILE STRING_LITERAL
        { SetSourceFile($2); }
    |   {break;}
    ;
%%
