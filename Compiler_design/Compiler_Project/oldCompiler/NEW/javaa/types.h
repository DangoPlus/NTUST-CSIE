/* copyright 1996, Jason Hunt and Washington University, St. Louis */
typedef
   struct {
      int opcode;
      char byteval;
   }
OpCodeTranslator;

typedef
   struct lookupentry{
      long match;
      char* alabel;
      lookupentry* next;
   }
;

typedef
   struct exceptionentry{
      short start_pc;
      short end_pc;
      short handler_pc;
      short catch_type;
      exceptionentry* next;
   }
;

typedef
   struct throwsentry{
      short exceptionclass;
      throwsentry* next;
   }
;

/*yes, I know this is redundant*/
typedef
   struct interfaceentry{
      short index;
      interfaceentry* next; 
   }
;

typedef
   struct linenumberentry{
      short start_pc;
      short line_number;
      linenumberentry* next;
   }
;

typedef
   struct tableentry{
      char* alabel;
      tableentry* next;
   }
;

typedef
   struct methodname{
      char name[L_tmpnam];
      methodname* next;
   }
;

typedef
   struct unresolvedindex{
      long location;
      long opcodelocation;
      unresolvedindex* next;
   }
;

/* This structure is intended to hold every constant pool entry.  
*/
typedef
   struct {
      short int myindex;
      char consttype;
      short int index1;
      short int index2;
      char* stringval;
      long int intval;  
      float floatval;
      long long int longval;
      /*long int longval2;*/
      double doubleval;
   }
ConstPoolEntry; 

typedef
   struct {
      char* name;
      long index;
      unresolvedindex* unresolvedindexhead;
   }
LabelInfo;

typedef
   struct {
      short access_flags;
      short name_index;
      short signature_index;
      short constantvalue_index;  

   }
FieldInfo;

typedef
   struct {
      short start_pc;
      short length;
      short name_index;
      short signature_index;
      short slot;
      char* name;
      char* signature;
   }
LocalVarInfo;

typedef
   struct userlocalvarentry{
      short start_pc;
      short length;
      short name_index;
      short signature_index;
      short slot;
      userlocalvarentry* next;
   }
;

typedef
   struct {
      short access_flags;
      short name_index;
      short signature_index;
      short max_stack;
      short max_locals;
      char Code[65535];
      unsigned short CodeCounter;
      LabelInfo Label[100];
      short LabelCounter;
      LocalVarInfo LocalVar[256];
      short LocalVarCounter;
      short currentslot;
      short ExceptionsCounter;
      exceptionentry* exceptionhead;
      short ThrowsCounter;
      throwsentry* throwshead;
      short LineNumberCounter;
      linenumberentry* linenumberhead;
      short UserLocalVarCounter;
      userlocalvarentry* userlocalvarhead;
   }
MethodInfo; 

typedef
   struct {
      short access_flags;
      short classindex;
      char* classname;
      short superclassindex;
      char* superclassname;
      short interfacecount;
      interfaceentry* interfacehead;
      short sourcefileindex;
   }
thisclassstruct;

typedef
  enum { CharType=1, 
         IntType=2, 
         FloatType=3, 
         VoidType=4, 
         StructType=5, 
         UnionType=6,
         EnumType=7, 
         AnyType=8, 
         ConstType=9 }
BaseType;

typedef
   struct {
      int type;
      int intval;
      long long longval;
      char* stringval;
      float floatval;
      double doubleval;
   }
ArgType;
 

typedef
   struct {
      BaseType B;
      union {
         struct _Symbol *contents;
         int             intval;
      } info;
      int function;
      int numdims;
      int dimsize[7];
      int ptrcount;
   }
Type;

typedef
  enum { ExternClass, StaticClass, AutoClass, RegisterClass, TypedefClass }
StorageClass;

typedef
  enum { ConstQualifier, VolatileQualifier, NonQualified }
TypeQualifier;

typedef struct _MimeType {
      Type          T;
      StorageClass  C;
      TypeQualifier Q;
} MimeType;


typedef struct _Symbol {
   struct _Symbol *nextused;   /* links all used symbols        */
   struct _Symbol *next;       /* in free list or at same level */
   struct _Symbol *adj;        /* next adjacent struct member   */
   int             InUse;      /* symbol already declared?      */
   int             level;      /* static nest level of symbol   */
   MimeType        M;
   char           *name;
   int             SymbolID;   /* number used internally        */
   struct _Symbol *ForwardHash;/* forward isohash link  */
   struct _Symbol *BackHash;   /* backward isohash link  */
   struct _Symbol *IsoVar;     /* isovariable stacks  */
   struct _Symbol *IsoLevel;   /* isolevel links  */
   int             ExprID;     /* expression ID   */
   struct _Symbol *nextreg;    /* for symbol table in WIL */
   int             registered;
} Symbol;

typedef struct _Terminal {
   int terminal;
   char string[100];
} Terminal;

typedef
   enum { SymbolRef, IntegerOperand, FloatOperand, StringOperand, Operator,
          CharOperand, Conversion
} NodeType;

typedef
   enum {Error,
         Iota,
         Use,
         Ptr2Int,
         Ptr2Chr,
         Int2Ptr,
         Int2Chr,
         Chr2Int,
         Chr2Ptr,
         X2Bot
} ConvType;

typedef
   enum { Lvalue, Rvalue, NonLRvalue}
LRvalue;

typedef struct _NodeInfo {
   NodeType type;
   MimeType exprtype;
   LRvalue  LR;
   struct _TreeNode *NextAliasRelation;
   struct {
      Symbol *may;
      Symbol *must;
   } alias;
   union {
      /* other node types can go here */
      Symbol  *symbol;
      char    *str;
      int      integer;
      float    floating;
      char     chr;
      Terminal oper;
      ConvType conv;
   } value;
} NodeInfo;

typedef struct _TreeNode {
   struct {
     int linenumber;
     int colnumber;
   } sourceinfo;
   NodeInfo info;
   struct _TreeNode *child;
   struct _TreeNode *sibling;
   struct _TreeNode *head;
   struct _TreeNode *parent;
   struct _TreeNode *leftsib;
   struct {
      struct _TreeNode *slink;
      int ExprID;
      int level;
   } WILinfo;
} TreeNode;

