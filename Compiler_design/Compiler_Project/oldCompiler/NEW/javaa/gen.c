/* Copyright 1996, Jason Hunt and Washington Univ., St. Louis */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "types.h"
#include "utils.h"
#include "build.h"
#include "gram.h"
#include "listing.h"

#define CONSTANT_Class -10
#define CONSTANT_Fieldref -11
#define CONSTANT_Methodref -12
#define CONSTANT_InterfaceMethodref -13
#define CONSTANT_String -14
#define CONSTANT_Integer -15
#define CONSTANT_Float -16
#define CONSTANT_Long -17
#define CONSTANT_Double -18
#define CONSTANT_NameAndType -19
#define CONSTANT_Utf8 -20


int UseStdOut;

signed long GetLabel(char*, long, long);

OpCodeTranslator OpCodeArray[202];
int OpCodeArrayCounter;
OpCodeTranslator ConstTypeArray[12];
int ConstTypeArrayCounter;
/* char Code[1000]; */
/* int CodeCounter; */
ConstPoolEntry ConstPool[1000];
int ConstPoolArrayIndex; /*current Const Pool array number*/
int ConstPoolIndex; /*current Const Pool index number (as Java VM thinks it is)*/
int ConstPoolRealIndex[1000];  /* this holds the "real" index into the 
				constant pool.  The indexes in the
				ConstPoolEntry type are really indexes into
				this array which holds the "true" index, in
				case we want to implement priority */
thisclassstruct ThisClass;
short SuperClass;
FieldInfo field[50];
short FieldCount;
methodname * methodnameshead;
MethodInfo currentmethod;
/*MethodInfo method[10];*/
short MethodCount;

char* GetLocalVarSigFromSlot(int);

void copyshort2char(char* myarrayptr, short int myint)
{
  // memcpy(myarrayptr,&myint,2);
  int c = 0;
  myarrayptr[c++] = (char) myint >> 8;
  myarrayptr[c++] = (char) myint & 0xFF;
}


void outshort2char(short int myint, FILE* myoutfp)
{
  // fwrite(&myint,2,1,myoutfp);
  fputc(myint >> 8, myoutfp);
  fputc(myint & 0xFF, myoutfp);
}

void copylong2char(char* myarrayptr, long myint)
{
  // memcpy(myarrayptr,&myint,4);
  int c = 0;
  myarrayptr[c++] = (char) myint >> 24;
  myarrayptr[c++] = (char) (myint & 0xFFFFFF) >> 16;
  myarrayptr[c++] = (char) (myint & 0xFFFF) >> 8;
  myarrayptr[c++] = (char) myint & 0xFF;
}

void outlong2char(long myint, FILE* myoutfp)
{
  // fwrite(&myint,4,1,myoutfp);
  fputc(myint >> 24, myoutfp);
  fputc((myint & 0xFFFFFF) >> 16, myoutfp);
  fputc((myint & 0xFFFF) >> 8, myoutfp);
  fputc(myint & 0xFF, myoutfp);
}

void outfloat2char(float myfloat, FILE* myoutfp)
{
  // fwrite(&myfloat,4,1,myoutfp);
  int myint;
  memcpy(&myint, &myfloat, 4);
  fputc(myint >> 24, myoutfp);
  fputc((myint & 0xFFFFFF) >> 16, myoutfp);
  fputc((myint & 0xFFFF) >> 8, myoutfp);
  fputc(myint & 0xFF, myoutfp);
}

void outlonglong2char(long long int mylong, FILE* myoutfp)
{
  // fwrite(&mylong,8,1,myoutfp);
  fputc(mylong >> 56, myoutfp);
  fputc((mylong & 0xFFFFFFFFFFFFFF) >> 48, myoutfp);
  fputc((mylong & 0xFFFFFFFFFFFF) >> 40, myoutfp);
  fputc((mylong & 0xFFFFFFFFFF) >> 32, myoutfp);
  fputc((mylong & 0xFFFFFFFF) >> 24, myoutfp);
  fputc((mylong & 0xFFFFFF) >> 16, myoutfp);
  fputc((mylong & 0xFFFF) >> 8, myoutfp);
  fputc(mylong & 0xFF, myoutfp);
}

void outdouble2char(double mydouble, FILE* myoutfp)
{
  // fwrite(&mydouble,8,1,myoutfp);
  long long int  mylong;
  memcpy(&mylong, &mydouble, 8);
  fputc(mylong >> 56, myoutfp);
  fputc((mylong & 0xFFFFFFFFFFFFFF) >> 48, myoutfp);
  fputc((mylong & 0xFFFFFFFFFFFF) >> 40, myoutfp);
  fputc((mylong & 0xFFFFFFFFFF) >> 32, myoutfp);
  fputc((mylong & 0xFFFFFFFF) >> 24, myoutfp);
  fputc((mylong & 0xFFFFFF) >> 16, myoutfp);
  fputc((mylong & 0xFFFF) >> 8, myoutfp);
  fputc(mylong & 0xFF, myoutfp);
}

/* this function simply takes the passed char and puts it in the next
   place in the code for the current method.  It makes the code look cleaner.
*/
void AddToCode(char mychar)
{
  currentmethod.Code[currentmethod.CodeCounter++] = mychar;
}

void AddShortToCode(short myshort)
{
  // memcpy(&currentmethod.Code[currentmethod.CodeCounter],&myshort,2);
  // currentmethod.CodeCounter +=2;
  currentmethod.Code[currentmethod.CodeCounter++] = 
	  		(char) myshort >> 8;
  currentmethod.Code[currentmethod.CodeCounter++] = 
	  		(char) myshort & 0xFF;
}

void AddLongToCode(long mylong)
{
  // memcpy(&currentmethod.Code[currentmethod.CodeCounter],&mylong,4);
  // currentmethod.CodeCounter +=4;
  currentmethod.Code[currentmethod.CodeCounter++] = 
	  		(char) mylong >> 24;
  currentmethod.Code[currentmethod.CodeCounter++] =
	  		(char)(mylong&0xFFFFFF)>>16;
  currentmethod.Code[currentmethod.CodeCounter++] =
	 		(char)(mylong&0xFFFF)>>8;
  currentmethod.Code[currentmethod.CodeCounter++] = 
	  		(char) mylong & 0xFF;
}

void EnterConstType(int myconsttype, char mybyteval)
{
   //printf("In EnterConstType with consttype: %i", myconsttype);
   ConstTypeArray[ConstTypeArrayCounter].opcode = myconsttype;
   ConstTypeArray[ConstTypeArrayCounter].byteval = mybyteval;
   ConstTypeArrayCounter++;
}

char GetConstType(int myconsttype)
{
   int i; /*counter*/
   i = 0;
   //message("In GetConstType");
   while ((i < ConstTypeArrayCounter) && (ConstTypeArray[i].opcode != myconsttype))
   {  i++;
   }
   if (i < ConstTypeArrayCounter) return ConstTypeArray[i].byteval;
   else oops("Looking for non-existent constant type");
}
 
/* these functions return an index to the myconsttype if it's already in the 
pool, otherwise, it returns -1
*/ 
short int InConstPool(char myconsttype, char* mystringval)
{
  int i;
  int temp;
  //message("In InConstPool");
  switch(myconsttype) {
    case CONSTANT_Utf8:
    {
      i = 1;
      while (i < ConstPoolArrayIndex) 
      {
        if ((myconsttype == ConstPool[i].consttype) &&
            (strcmp(mystringval, ConstPool[i].stringval) == 0)) 
          return ConstPool[i].myindex;
        else
          i++;
       }
       return -1;
       break;
    }
    case CONSTANT_String:
    case CONSTANT_Class:
    {
      temp = InConstPool(CONSTANT_Utf8, mystringval);
      if (temp == -1) return -1;  /* no Utf8 with that name */
      i = 1;
      while (i < ConstPoolArrayIndex) 
      {
         if ((myconsttype == ConstPool[i].consttype) &&
             (ConstPool[i].index1 == temp)) 
          return ConstPool[i].myindex;
        else
          i++;
       }
       return -1;
       break;
     }
     default:
     {
       oops("InConstPool sent bad consttype");
       break;
     }
  }
}

short int InConstPool(char myconsttype, char* mystringval1, char* mystringval2)
{
  int i;
  int temp1;
  int temp2;
  //message("In InConstPool");
  switch(myconsttype) {
    case CONSTANT_NameAndType:
    {
      temp1 = InConstPool(CONSTANT_Utf8, mystringval1);
      if (temp1 == -1) return -1;  /* no Utf8 with that name */
      temp2 = InConstPool(CONSTANT_Utf8, mystringval2);
      if (temp2 == -1) return -1;  /* no Utf8 with that name */
      i = 1;
      while (i < ConstPoolArrayIndex) 
      {
         if ((myconsttype == ConstPool[i].consttype) &&
             (ConstPool[i].index1 == temp1) &&
             (ConstPool[i].index2 == temp2)) 
          return ConstPool[i].myindex;
        else
          i++;
       }
       return -1;
       break;
     }
     default:
     {
       oops("InConstPool sent bad consttype");
       break;
     }
  }
}

short int InConstPool(char myconsttype, char* mystringval1, char* mystringval2,
		      char* mystringval3)
{
  int i;
  int temp1;
  int temp2;
  //message("In InConstPool");
  switch(myconsttype) {
    case CONSTANT_Fieldref:
    case CONSTANT_Methodref:
    case CONSTANT_InterfaceMethodref:
    {
      temp1 = InConstPool(CONSTANT_Class, mystringval1);
      if (temp1 == -1) return -1;  /* no Class with that name */
      temp2 = InConstPool(CONSTANT_NameAndType, mystringval2, mystringval3);
      if (temp2 == -1) return -1;  /* no NameAndType */
      i = 1;
      while (i < ConstPoolArrayIndex) 
      {
         if ((myconsttype == ConstPool[i].consttype) &&
             (ConstPool[i].index1 == temp1) &&
             (ConstPool[i].index2 == temp2)) 
          return ConstPool[i].myindex;
        else
          i++;
       }
       return -1;
       break;
     }
     default:
     {
       oops("InConstPool sent bad consttype");
       break;
     }
  }
}


short int InConstPool(char myconsttype, long int mylong)
{
  int i;
  int temp1;
  int temp2;
  //message("In InConstPool");
  switch(myconsttype) {
    case CONSTANT_Integer:
    {
      i = 0;
      while (i < ConstPoolArrayIndex) 
      {
         if ((myconsttype == ConstPool[i].consttype) &&
             (ConstPool[i].intval == mylong)) 
          return ConstPool[i].myindex;
        else
          i++;
       }
       return -1;
       break;
    }
    default:
    {
       oops("InConstPool sent bad consttype");
       break;
    }
  }
}

short int InConstPool(char myconsttype, float myfloat)
{
  int i;
  int temp1;
  int temp2;
  //message("In InConstPool");
  switch(myconsttype) {
    case CONSTANT_Float:
    {
      i = 0;
      while (i < ConstPoolArrayIndex) 
      {
         if ((myconsttype == ConstPool[i].consttype) &&
             (ConstPool[i].floatval == myfloat)) 
          return ConstPool[i].myindex;
        else
          i++;
       }
       return -1;
       break;
    }
    default:
    {
       oops("InConstPool sent bad consttype");
       break;
    }
  }
}


short int InConstPool(char myconsttype, long long int mylong)
{
  int i;
  int temp1;
  int temp2;
  //message("In InConstPool");
  switch(myconsttype) {
    case CONSTANT_Long:
    {
      i = 0;
      while (i < ConstPoolArrayIndex) 
      {
         if ((myconsttype == ConstPool[i].consttype) &&
             (ConstPool[i].longval == mylong)) 
          return ConstPool[i].myindex;
        else
          i++;
       }
       return -1;
       break;
    }
    default:
    {
       oops("InConstPool sent bad consttype");
       break;
    }
  }
}

short int InConstPool(char myconsttype, double mydouble)
{
  int i;
  int temp1;
  int temp2;
  //message("In InConstPool");
  switch(myconsttype) {
    case CONSTANT_Double:
    {
      i = 0;
      while (i < ConstPoolArrayIndex) 
      {
         if ((myconsttype == ConstPool[i].consttype) &&
             (ConstPool[i].doubleval == mydouble))  
          return ConstPool[i].myindex;
        else
          i++;
       }
       return -1;
       break;
    }
    default:
    {
       oops("InConstPool sent bad consttype");
       break;
    }
  }
}




/* These routines generate a constant pool entry according to the 
specified paramenters.  If the requested entry already exists, it just
returns the index to that entry.
*/
short GenConst(char myconsttype, char* mystringval)
{
  short int checkresult;
  short int toreturn;
  short int touse;
  //message("In GenConst");
  checkresult = InConstPool(myconsttype, mystringval);
  if (checkresult >= 0) return checkresult;
  toreturn = ConstPoolIndex;
  touse = ConstPoolArrayIndex;
  ConstPoolArrayIndex++;
  ConstPoolIndex++;
  ConstPool[touse].consttype = myconsttype;
  ConstPool[touse].myindex = toreturn;
  switch(myconsttype) {
    case CONSTANT_Utf8:
    {
      ConstPool[touse].stringval = (char *) malloc(strlen(mystringval));
      strcpy(ConstPool[touse].stringval, mystringval);
      break;
    }
    case CONSTANT_String:
    case CONSTANT_Class:
    {
      ConstPool[touse].index1 = GenConst(CONSTANT_Utf8,mystringval);
      break;
    }
    default:
    {
      oops("GenConst sent bad consttype");
      break;
    }
  }
  return toreturn;
}


short GenConst(char myconsttype, char* mystringval1, char* mystringval2)
{
  short int checkresult;
  short int toreturn;
  short int touse;
  //message("In GenConst");
  checkresult = InConstPool(myconsttype, mystringval1, mystringval2);
  if (checkresult >= 0) return checkresult;
  toreturn = ConstPoolIndex;
  touse = ConstPoolArrayIndex;
  ConstPoolIndex++;
  ConstPoolArrayIndex++;
  ConstPool[touse].consttype = myconsttype;
  ConstPool[touse].myindex = toreturn;
  switch(myconsttype) {
    case CONSTANT_NameAndType:
    {
      ConstPool[touse].index1 = GenConst(CONSTANT_Utf8,mystringval1);
      ConstPool[touse].index2 = GenConst(CONSTANT_Utf8,mystringval2);
      break;
    }
    default:
    {
      oops("GenConst sent bad consttype");
      break;
    }
  }
  return toreturn;
}


short GenConst(char myconsttype, char* mystringval1, char* mystringval2,
	       char* mystringval3)
{
  short int checkresult;
  short int toreturn;
  short int touse;
  //message("In GenConst");
  checkresult = InConstPool(myconsttype, mystringval1, mystringval2, 
			    mystringval3);
  if (checkresult >= 0) return checkresult;
  toreturn = ConstPoolIndex;
  touse = ConstPoolArrayIndex;
  ConstPoolIndex++;
  ConstPoolArrayIndex++;
  ConstPool[touse].consttype = myconsttype;
  ConstPool[touse].myindex = toreturn;
  switch(myconsttype) {
    case CONSTANT_Fieldref:
    case CONSTANT_Methodref:
    case CONSTANT_InterfaceMethodref:
    {
      ConstPool[touse].index1 = GenConst(CONSTANT_Class,mystringval1);
      ConstPool[touse].index2 = GenConst(CONSTANT_NameAndType,
					    mystringval2, mystringval3);
      break;
    }
    default:
    {
      oops("GenConst sent bad consttype");
      break;
    }
  }
  return toreturn;
}


short GenConst(char myconsttype, long int mylong)
{
  short int checkresult;
  short int toreturn;
  short int touse;
  //message("In GenConst");
  checkresult = InConstPool(myconsttype, mylong); 
  if (checkresult >= 0) return checkresult;
  toreturn = ConstPoolIndex;
  touse = ConstPoolArrayIndex;
  ConstPoolIndex++;
  ConstPoolArrayIndex++;
  ConstPool[touse].consttype = myconsttype;
  ConstPool[touse].myindex = toreturn;
  switch(myconsttype) {
    case CONSTANT_Integer:
    {
      ConstPool[touse].intval = mylong; 
      break;
    }
    default:
    {
      oops("GenConst sent bad consttype");
      break;
    }
  }
  return toreturn;
}


short GenConst(char myconsttype, float myfloat)
{
  short int checkresult;
  short int toreturn;
  short int touse;
  //message("In GenConst");
  checkresult = InConstPool(myconsttype, myfloat); 
  if (checkresult >= 0) return checkresult;
  toreturn = ConstPoolIndex;
  touse = ConstPoolArrayIndex;
  ConstPoolIndex++;
  ConstPoolArrayIndex++;
  ConstPool[touse].consttype = myconsttype;
  ConstPool[touse].myindex = toreturn;
  switch(myconsttype) {
    case CONSTANT_Float:
    {
      ConstPool[touse].floatval = myfloat; 
      break;
    }
    default:
    {
      oops("GenConst sent bad consttype");
      break;
    }
  }
  return toreturn;
}


short GenConst(char myconsttype, long long int mylong)
{
  short int checkresult;
  short int toreturn;
  short int touse;
  //message("In GenConst");
  checkresult = InConstPool(myconsttype, mylong); 
  if (checkresult >= 0) return checkresult;
  toreturn = ConstPoolIndex;
  touse = ConstPoolArrayIndex;
  ConstPoolIndex++;
  ConstPoolIndex++;
  ConstPoolArrayIndex++;
  ConstPool[touse].consttype = myconsttype;
  ConstPool[touse].myindex = toreturn;
  switch(myconsttype) {
    case CONSTANT_Long:
    {
      ConstPool[toreturn].longval = mylong; 
      break;
    }
    default:
    {
      oops("GenConst sent bad consttype");
      break;
    }
  }
  return toreturn;
}


short GenConst(char myconsttype, double mydouble)
{
  short int checkresult;
  short int toreturn;
  short int touse;
  //message("In GenConst");
  checkresult = InConstPool(myconsttype,mydouble); 
  if (checkresult >= 0) return checkresult;
  toreturn = ConstPoolIndex;
  touse = ConstPoolArrayIndex;
  ConstPoolIndex++;
  ConstPoolIndex++;
  ConstPoolArrayIndex++;
  ConstPool[touse].consttype = myconsttype;
  ConstPool[touse].myindex = toreturn;
  switch(myconsttype) {
    case CONSTANT_Double:
    {
      ConstPool[touse].doubleval = mydouble; 
      break;
    }
    default:
    {
      oops("GenConst sent bad consttype");
      break;
    }
  }
  return toreturn;
}




void EnterOpCode(int myopcode, char mybyteval)
{
   OpCodeArray[OpCodeArrayCounter].opcode = myopcode;
   OpCodeArray[OpCodeArrayCounter].byteval = mybyteval;
   OpCodeArrayCounter++;
}

char GetOpCode(int myopcode)
{
   for (int j=0; j<OpCodeArrayCounter;j++)
     if(myopcode == OpCodeArray[j].opcode) return OpCodeArray[j].byteval;
   oops("Looking for non-existent op code");
}

#define ACC_SUPER 0x0020
void SetThisClass(short access_flags, char* classname, char* superclassname)
{
  //message(superclassname);
  ThisClass.access_flags = access_flags | ACC_SUPER;
  ThisClass.classindex = GenConst(CONSTANT_Class,classname);
  ThisClass.classname = classname;
  ThisClass.superclassindex = GenConst(CONSTANT_Class,superclassname);
  ThisClass.superclassname = superclassname;
  ThisClass.interfacecount = 0;
  ThisClass.interfacehead = NULL;
  ThisClass.sourcefileindex = -1;  /* it will get set later */
}

char* GetThisClass()
{
  return ThisClass.classname;
} 

char* GetSuperClass()
{
  return ThisClass.superclassname;
}


void SetSourceFile(char* name)
{
  ThisClass.sourcefileindex = GenConst(CONSTANT_Utf8, name);
  GenConst(CONSTANT_Utf8, "SourceFile"); /* will be used when outputting this
					    attribute */
}

void AddToInterfaceList(char* name)
{
  interfaceentry* toadd;
  toadd = (interfaceentry*) malloc(sizeof(interfaceentry));
  toadd->index = GenConst(CONSTANT_Class, name);
  toadd->next = ThisClass.interfacehead;
  ThisClass.interfacehead = toadd;
  ThisClass.interfacecount++;
}
 

 
void InitAssembler()
{
   OpCodeArrayCounter = 0;
   EnterOpCode(AALOAD, 50);
   EnterOpCode(AASTORE, 83);
   EnterOpCode(ACONST_NULL, 1);
   EnterOpCode(ALOAD_0, 42);
   EnterOpCode(ALOAD_1, 43);
   EnterOpCode(ALOAD_2, 44);
   EnterOpCode(ALOAD_3, 45);
   EnterOpCode(ANEWARRAY, 189);
   EnterOpCode(ARETURN, 176);
   EnterOpCode(ARRAYLENGTH, 190);
   EnterOpCode(ASTORE_0, 75);
   EnterOpCode(ASTORE_1, 76);
   EnterOpCode(ASTORE_2, 77);
   EnterOpCode(ASTORE_3, 78);
   EnterOpCode(ATHROW, 191);
   EnterOpCode(BALOAD, 51);
   EnterOpCode(BASTORE, 84);
   EnterOpCode(BIPUSH, 16);
   EnterOpCode(CALOAD, 52);
   EnterOpCode(CASTORE, 85);
   EnterOpCode(CHECKCAST, 192);
   EnterOpCode(D2F, 144);
   EnterOpCode(D2I, 142);
   EnterOpCode(D2L, 143);
   EnterOpCode(DADD, 99);
   EnterOpCode(DALOAD, 49);
   EnterOpCode(DASTORE, 82);
   EnterOpCode(DCMPG, 152);
   EnterOpCode(DCMPL, 151);
   EnterOpCode(DCONST_0, 14);
   EnterOpCode(DCONST_1, 15);
   EnterOpCode(DDIV, 111);
   EnterOpCode(DLOAD_0, 38);
   EnterOpCode(DLOAD_1, 39);
   EnterOpCode(DLOAD_2, 40);
   EnterOpCode(DLOAD_3, 41);
   EnterOpCode(DMUL, 107);
   EnterOpCode(DNEG, 119);
   EnterOpCode(DREM, 115);
   EnterOpCode(DRETURN, 175);
   EnterOpCode(DSTORE_0, 71);
   EnterOpCode(DSTORE_1, 72);
   EnterOpCode(DSTORE_2, 73);
   EnterOpCode(DSTORE_3, 74);
   EnterOpCode(DSUB, 103);
   EnterOpCode(DUP, 89);
   EnterOpCode(DUP_X1, 90);
   EnterOpCode(DUP_X2, 91);
   EnterOpCode(DUP2, 92);
   EnterOpCode(DUP2_X1, 93);
   EnterOpCode(DUP2_X2, 94);
   EnterOpCode(F2D, 141);
   EnterOpCode(F2I, 139);
   EnterOpCode(F2L, 140);
   EnterOpCode(FADD, 98);
   EnterOpCode(FALOAD, 48);
   EnterOpCode(FASTORE, 81);
   EnterOpCode(FCMPG, 150);
   EnterOpCode(FCMPL, 149);
   EnterOpCode(FCONST_0, 11);
   EnterOpCode(FCONST_1, 12);
   EnterOpCode(FCONST_2, 13);
   EnterOpCode(FDIV, 110);
   EnterOpCode(FLOAD_0, 34);
   EnterOpCode(FLOAD_1, 35);
   EnterOpCode(FLOAD_2, 36);
   EnterOpCode(FLOAD_3, 37);
   EnterOpCode(FMUL, 106);
   EnterOpCode(FNEG, 118);
   EnterOpCode(FREM, 114);
   EnterOpCode(FRETURN, 174);
   EnterOpCode(FSTORE_0, 67);
   EnterOpCode(FSTORE_1, 68);
   EnterOpCode(FSTORE_2, 69);
   EnterOpCode(FSTORE_3, 70);
   EnterOpCode(FSUB, 102);
   EnterOpCode(GETFIELD, 180);
   EnterOpCode(GETSTATIC, 178);
   EnterOpCode(GOTO,167);
   EnterOpCode(GOTO_W,200);
   EnterOpCode(I2B,145);
   EnterOpCode(I2C,146);
   EnterOpCode(I2D,135);
   EnterOpCode(I2F,134);
   EnterOpCode(I2L,133);
   EnterOpCode(I2S,147);
   EnterOpCode(IADD,96);
   EnterOpCode(IALOAD,46);
   EnterOpCode(IAND,126);
   EnterOpCode(IASTORE,79);
   EnterOpCode(ICONST_0,3);
   EnterOpCode(ICONST_1,4);
   EnterOpCode(ICONST_2,5);
   EnterOpCode(ICONST_3,6);
   EnterOpCode(ICONST_4,7);
   EnterOpCode(ICONST_5,8);
   EnterOpCode(ICONST_M1,2);
   EnterOpCode(IDIV,108);
   EnterOpCode(IF_ACMPEQ,165);
   EnterOpCode(IF_ACMPNE,166);
   EnterOpCode(IF_ICMPEQ,159);
   EnterOpCode(IF_ICMPNE,160);
   EnterOpCode(IF_ICMPLT,161);
   EnterOpCode(IF_ICMPGE,162);
   EnterOpCode(IF_ICMPGT,163);
   EnterOpCode(IF_ICMPLE,164);
   EnterOpCode(IFEQ,153);
   EnterOpCode(IFNE,154);
   EnterOpCode(IFLT,155);
   EnterOpCode(IFGE,156);
   EnterOpCode(IFGT,157);
   EnterOpCode(IFLE,158);
   EnterOpCode(IFNONNULL,199);
   EnterOpCode(IFNULL,198);
   EnterOpCode(ILOAD_0,26);
   EnterOpCode(ILOAD_1,27);
   EnterOpCode(ILOAD_2,28);
   EnterOpCode(ILOAD_3,29);
   EnterOpCode(IMUL,104);
   EnterOpCode(INEG,116);
   EnterOpCode(IOR,128);
   EnterOpCode(IREM,112);
   EnterOpCode(IRETURN,172);
   EnterOpCode(ISHL,120);
   EnterOpCode(ISHR,122);
   EnterOpCode(ISTORE_0,59);
   EnterOpCode(ISTORE_1,60);
   EnterOpCode(ISTORE_2,61);
   EnterOpCode(ISTORE_3,62);
   EnterOpCode(ISUB,100);
   EnterOpCode(IUSHR,124);
   EnterOpCode(IXOR,130);
   EnterOpCode(JSR,168);
   EnterOpCode(JSR_W,201);
   EnterOpCode(L2D,138);
   EnterOpCode(L2F,137);
   EnterOpCode(L2I,136);
   EnterOpCode(LADD,97);
   EnterOpCode(LALOAD,47);
   EnterOpCode(LAND,127);
   EnterOpCode(LASTORE,80);
   EnterOpCode(LCMP,148);
   EnterOpCode(LCONST_0,9);
   EnterOpCode(LCONST_1,10);
   EnterOpCode(LDIV,109);
   EnterOpCode(LLOAD_0,30);
   EnterOpCode(LLOAD_1,31);
   EnterOpCode(LLOAD_2,32);
   EnterOpCode(LLOAD_3,33);
   EnterOpCode(LMUL,105);
   EnterOpCode(LNEG,117);
   EnterOpCode(LOR,129);
   EnterOpCode(LREM,113);
   EnterOpCode(LRETURN,173);
   EnterOpCode(LSHL,121);
   EnterOpCode(LSHR,123);
   EnterOpCode(LSTORE_0,63);
   EnterOpCode(LSTORE_1,64);
   EnterOpCode(LSTORE_2,65);
   EnterOpCode(LSTORE_3,66);
   EnterOpCode(LSUB,101);
   EnterOpCode(LUSHR,125);
   EnterOpCode(LXOR,131);
   EnterOpCode(MONITORENTER,194);
   EnterOpCode(MONITOREXIT,195);
   EnterOpCode(NOP,0);
   EnterOpCode(POP,87);
   EnterOpCode(POP2,88);
   EnterOpCode(RETURN,177);
   EnterOpCode(SALOAD,53);
   EnterOpCode(SASTORE,86);
   EnterOpCode(SWAP,95);
   EnterOpCode(IINC, 132);
   EnterOpCode(INSTANCEOF, 193);
   EnterOpCode(INVOKEINTERFACE, 185);
   EnterOpCode(INVOKENONVIRTUAL, 183);
   EnterOpCode(INVOKESTATIC, 184);
   EnterOpCode(INVOKEVIRTUAL, 182);
   EnterOpCode(LDC, 18);
   EnterOpCode(LDC_W, 19);
   EnterOpCode(LDC2_W, 20);
   EnterOpCode(MULTIANEWARRAY, 197);
   EnterOpCode(NEW, 187);
   EnterOpCode(NEWARRAY, 188);
   EnterOpCode(PUTFIELD, 181);
   EnterOpCode(PUTSTATIC, 179);
   EnterOpCode(SIPUSH, 17);
   EnterOpCode(ILOAD, 21);
   EnterOpCode(ALOAD, 25);
   EnterOpCode(FLOAD, 23);
   EnterOpCode(LLOAD, 22);
   EnterOpCode(DLOAD, 24);
   EnterOpCode(ISTORE, 54);
   EnterOpCode(FSTORE, 56);
   EnterOpCode(ASTORE, 58);
   EnterOpCode(LSTORE, 55);
   EnterOpCode(DSTORE, 57);
   EnterOpCode(RET, 169);
   EnterOpCode(WIDE, 196);
   EnterOpCode(LOOKUPSWITCH, 171);
   EnterOpCode(TABLESWITCH, 170);

   ConstTypeArrayCounter = 0;
   EnterConstType(CONSTANT_Class, 7);
   EnterConstType(CONSTANT_Fieldref, 9);
   EnterConstType(CONSTANT_Methodref, 10);
   EnterConstType(CONSTANT_InterfaceMethodref, 11);
   EnterConstType(CONSTANT_String, 8);
   EnterConstType(CONSTANT_Integer, 3);
   EnterConstType(CONSTANT_Float, 4);
   EnterConstType(CONSTANT_Long, 5);
   EnterConstType(CONSTANT_Double, 6);
   EnterConstType(CONSTANT_NameAndType, 12);
   EnterConstType(CONSTANT_Utf8, 1);
   ConstPoolIndex = 1;
   ConstPoolArrayIndex = 1;
   for (int i=1;i<1000;i++) ConstPoolRealIndex[i]=i; 
   //message("Done with InitAssembler");
   //printf("OpCodeArrayCounter is %i\n", OpCodeArrayCounter);
   MethodCount = 0;
   FieldCount = 0;
   methodnameshead = NULL;
}

void ConstPoolDump(FILE* myoutfp)
{
  short int mylen;
  outshort2char(ConstPoolIndex, myoutfp);
  for(int i=1;i<ConstPoolArrayIndex;i++)
  {
    putc(GetConstType(ConstPool[i].consttype), myoutfp);
    switch(ConstPool[i].consttype) {
      case CONSTANT_Utf8:
      {
	mylen = strlen(ConstPool[i].stringval);
        outshort2char(mylen, myoutfp);
        for(int j=0;j<mylen;j++)
        {
          putc(ConstPool[i].stringval[j], myoutfp);
        }
        break;
      }
      case CONSTANT_String:
      case CONSTANT_Class:
      {
        outshort2char(ConstPoolRealIndex[ConstPool[i].index1], myoutfp);
        break;
      }
      case CONSTANT_NameAndType:
      case CONSTANT_Fieldref:
      case CONSTANT_Methodref:
      case CONSTANT_InterfaceMethodref: 
      {
        outshort2char(ConstPoolRealIndex[ConstPool[i].index1], myoutfp);
        outshort2char(ConstPoolRealIndex[ConstPool[i].index2], myoutfp);
        break;
      }
      case CONSTANT_Integer:
      {
        outlong2char(ConstPool[i].intval, myoutfp);
        break;
      }
      case CONSTANT_Float:
      {
        outfloat2char(ConstPool[i].floatval, myoutfp);
        break;
      }
      case CONSTANT_Long:
      {
        outlonglong2char(ConstPool[i].longval, myoutfp);
        break;
      }
      case CONSTANT_Double:
      {
        outdouble2char(ConstPool[i].doubleval, myoutfp);
        break;
      }
      default:
      {
	oops("Bad Consttype in ConstPoolDump");
    	break;
      }
    }
  }
}


/* very simple file copy.  Probably should use system reads and writes */
void CopyMethod(char* aname, FILE* myoutfp)
{
   int mychar;
   FILE *myinfp;
   if ((myinfp = fopen(aname, "r")) == 0)
     oops("Couldn't open method file for copying");
   mychar = fgetc(myinfp);
   while(mychar != EOF)
   {
     fputc(mychar,myoutfp);
     mychar = fgetc(myinfp);
   }
   fclose(myinfp);
}
      
  

void MethodDump(MethodInfo mymethod, FILE* outfp)
{
  int i;
  int lastlocal;
  int codeattlen;
  short additionalattrib; 
  short additionalcodeattrib; 
  throwsentry* tempthrow;
  throwsentry* todiethrow;
  linenumberentry* templinenum;
  linenumberentry* todielinenum;
  userlocalvarentry* tempuserlocalvar;
  userlocalvarentry* todieuserlocalvar;
  outshort2char(mymethod.access_flags, outfp);
  outshort2char(mymethod.name_index, outfp);
  outshort2char(mymethod.signature_index, outfp);
  additionalattrib = 0;
  if (mymethod.CodeCounter > 0) additionalattrib++;
  if (mymethod.ThrowsCounter > 0) additionalattrib++;
  outshort2char(additionalattrib, outfp); /* attributes count */
  if (mymethod.CodeCounter > 0)
  {
    outshort2char(GenConst(CONSTANT_Utf8,"Code"), outfp);
           /* this should really only be a lookup here since the 
              constant pool is already dumped. But it won't be dumped
	      yet if we dump methods to separate files first!*/

    /* stack local codelen, exceptiontbllen, attribcnt */
    // codeattlen = mymethod.CodeCounter+8;
    codeattlen = mymethod.CodeCounter+12;
    /*codeattlen = mymethod.CodeCounter+4;*/
    if (mymethod.ExceptionsCounter > 0)
       codeattlen += mymethod.ExceptionsCounter * 8;
    if (mymethod.LineNumberCounter > 0)
       codeattlen += 8 + (mymethod.LineNumberCounter * 4);
    if (mymethod.UserLocalVarCounter > 0) /*use user-defined local var table
					    first */
    {
       codeattlen += 8 + (mymethod.UserLocalVarCounter * 10);
    }
    else
    {
      if (mymethod.LocalVarCounter >= 0)
         codeattlen += 8 + ((mymethod.LocalVarCounter + 1) * 10);
    }
    outlong2char(codeattlen,outfp); /* length of whole attribute */
    /* the next lines are commented out and changed below because
       although the documentation says u2 u2 u4 for the lengths, the
       actual class file appears to be u1 u1 u2 */
    //outshort2char(5,outfp); /* max stack - let user specify? */
    //outshort2char(0,outfp); /* max_locals - can let user specify or
//				  can derive from signature and other vars? */
        
    //outlong2char(mymethod.CodeCounter,outfp);
    //putc(5,outfp);
    //putc(2,outfp);
    outshort2char(mymethod.max_stack, outfp);
    //putc(mymethod.max_stack & 0x00FF, outfp);
    /* output max_locals -- if user specifically defined it, use that,
       otherwise use the slot number of the last variable */
    if (mymethod.max_locals > -1)
    {
       outshort2char(mymethod.max_locals, outfp);
       //putc(mymethod.max_locals & 0x00FF, outfp);
    }
    else
    {
       outshort2char(mymethod.currentslot, outfp);
       //putc(mymethod.currentslot & 0x00FF, outfp);
    }
    outlong2char(mymethod.CodeCounter,outfp);
    //outshort2char(mymethod.CodeCounter,outfp);
    i = 0;
    while (i < mymethod.CodeCounter)
    {
      putc(mymethod.Code[i],outfp);
      i++;
    }
    /* output exceptions table */
    outshort2char(mymethod.ExceptionsCounter,outfp); 
    for(exceptionentry* tempexception = mymethod.exceptionhead;
        tempexception != NULL; tempexception = tempexception->next)
    {
      outshort2char(tempexception->start_pc, outfp); 
      outshort2char(tempexception->end_pc, outfp); 
      outshort2char(tempexception->handler_pc, outfp); 
      outshort2char(tempexception->catch_type, outfp); 
    }

    /*calculate the number of additional attributes*/
    additionalcodeattrib = 0;
    if (mymethod.LineNumberCounter > 0) additionalcodeattrib++;
    if ((mymethod.UserLocalVarCounter > 0) || (mymethod.LocalVarCounter >= 0)) 
       additionalcodeattrib++;
    outshort2char(additionalcodeattrib, outfp);

    /*output line number table, if any */
    if (mymethod.LineNumberCounter > 0)
    {
      outshort2char(GenConst(CONSTANT_Utf8,"LineNumberTable"), outfp);
      outlong2char(2 + (mymethod.LineNumberCounter * 4), outfp);
      outshort2char(mymethod.LineNumberCounter, outfp);
      templinenum = mymethod.linenumberhead;
      while(templinenum != NULL)
      {
        outshort2char(templinenum->start_pc, outfp);
        outshort2char(templinenum->line_number, outfp);
        todielinenum = templinenum;
        templinenum = templinenum->next;
        free(todielinenum);
      }
    }

    /*output local variable table -- do the user-defined one, if there is one,
      otherwise do the generated one. */
    if (mymethod.UserLocalVarCounter > 0)
    {
      outshort2char(GenConst(CONSTANT_Utf8,"LocalVariableTable"), outfp);
      outlong2char(2 + (mymethod.UserLocalVarCounter * 10), outfp);
      outshort2char(mymethod.UserLocalVarCounter, outfp);
      tempuserlocalvar = mymethod.userlocalvarhead;
      while(tempuserlocalvar != NULL)
      {
        outshort2char(tempuserlocalvar->start_pc, outfp);
        outshort2char(tempuserlocalvar->length, outfp);
        outshort2char(tempuserlocalvar->name_index, outfp);
        outshort2char(tempuserlocalvar->signature_index, outfp);
        outshort2char(tempuserlocalvar->slot, outfp);
        todieuserlocalvar = tempuserlocalvar;
        tempuserlocalvar = tempuserlocalvar->next;
        free(todieuserlocalvar);
      }
    }
    else
    {
      if (mymethod.LocalVarCounter >= 0)
      {
        outshort2char(GenConst(CONSTANT_Utf8,"LocalVariableTable"), outfp);
        outlong2char((long)((mymethod.LocalVarCounter + 1) * 10) + 2, outfp);
        outshort2char(mymethod.LocalVarCounter + 1, outfp);
        for (int k =0; k <= mymethod.LocalVarCounter; k++)
        {
          outshort2char(mymethod.LocalVar[k].start_pc,outfp);
          outshort2char(mymethod.LocalVar[k].length,outfp);
          outshort2char(mymethod.LocalVar[k].name_index,outfp);
          outshort2char(mymethod.LocalVar[k].signature_index,outfp);
          outshort2char(mymethod.LocalVar[k].slot,outfp);
        }
      }
    }
  }
  /* output throws (exceptions) table, if any */
  if (mymethod.ThrowsCounter > 0)
  {
    outshort2char(GenConst(CONSTANT_Utf8,"Exceptions"), outfp);
    outlong2char(2 + (mymethod.ThrowsCounter * 2), outfp); /* attrib length */
    outshort2char(mymethod.ThrowsCounter, outfp); /* exception tbl length */
    tempthrow = mymethod.throwshead;
    while(tempthrow != NULL)
    {
      outshort2char(tempthrow->exceptionclass, outfp);
      todiethrow = tempthrow;
      tempthrow = tempthrow->next;
      free(todiethrow);
    }
  }
    
}

        


void EndAssembler()
{
   FILE *outfp;
   int i;
   methodname *tempmethodname;
   methodname *todiemethodname;
   interfaceentry* tempinterface;
   interfaceentry* todieinterface;

   if ((outfp = fopen(ConsStrings(GetThisClass(),".class"), "w")) == 0)
     perror("out.class"), exit(1);
   /* Header Info */
   putc(0xCA, outfp); /* magic number */
   putc(0xFE, outfp);
   putc(0xBA, outfp);
   putc(0xBE, outfp);
   putc(0x00, outfp); /* minor version */
   putc(0x02, outfp);
   putc(0x00, outfp); /* major version */
   putc(0x2E, outfp);
   
   i = 0;
   printf("\nConstPool Dump:\n");
   ConstPoolDump(outfp);
   printf("\nEnd of ConstPool Dump\n");
   outshort2char(ThisClass.access_flags, outfp); /* Access info */
   outshort2char(ThisClass.classindex, outfp);
   outshort2char(ThisClass.superclassindex, outfp);

   /* output interfaces (that this class implements) */
   outshort2char(ThisClass.interfacecount, outfp);
   tempinterface = ThisClass.interfacehead;
   while (tempinterface != NULL)
   {
     outshort2char(tempinterface->index, outfp);
     todieinterface = tempinterface;
     tempinterface = tempinterface->next;
     free(todieinterface);
   }
 
   /* output fields */
   outshort2char(FieldCount, outfp);
   for (int k=1;k<=FieldCount;k++)
   {
     outshort2char(field[k].access_flags, outfp);
     outshort2char(field[k].name_index, outfp);
     outshort2char(field[k].signature_index, outfp);
     if (field[k].constantvalue_index != 0)
     {
       outshort2char(1,outfp); /*attributes count*/
       outshort2char(GenConst(CONSTANT_Utf8,"ConstantValue"), outfp);
       outlong2char(2, outfp); /* attribute length */
       outshort2char(field[k].constantvalue_index, outfp);
     }
     else
     {
       outshort2char(0, outfp); /*attributes count*/
     }
   }
   outshort2char(MethodCount, outfp);
   //printf("\nCode Dump:\n");
   /* will want to go through linked list of method's file names and copy
      them into outfp */
   tempmethodname = methodnameshead;
   while(tempmethodname != NULL)
   {  
     CopyMethod(tempmethodname->name, outfp);
     remove(tempmethodname->name);
     todiemethodname = tempmethodname;
     tempmethodname = tempmethodname->next;
     free(todiemethodname);
   }
   /*for (int j=1;j<=MethodCount;j++)
   {
     MethodDump(method[j], outfp);
   }
   */
   if (ThisClass.sourcefileindex == -1)
   {
     outshort2char(0, outfp); /*attributes count*/
   }
   else
   {
     outshort2char(1, outfp); /*attributes count*/
     outshort2char(GenConst(CONSTANT_Utf8,"SourceFile"), outfp); /* just a 
						lookup at this point */
     outlong2char(2, outfp);  /*attribute length*/
     outshort2char(ThisClass.sourcefileindex, outfp);
   }
   //printf("\nEnd of Code Dump\n");
   fclose(outfp);
}


void GenNoArgCode(int opcode)
{
   //message("In GenNoArgCode");
   //printf("The opcode is : %i\n", GetOpCode(opcode));
   switch (opcode){
     default:
     {
       AddToCode(GetOpCode(opcode));
       break;
     }
   }
}

void GenOneArgCode(int opcode, ArgType arg1)
{
   short int mytemp;
   //message("In GenOneArgCode");
   //printf("The opcode is : %i\n", GetOpCode(opcode));
   //AddToCode(GetOpCode(opcode));
   switch(opcode) {
     case (LDC):
     case (LDC_W):
     {
       switch (arg1.type) {
         case STRING_LITERAL:
         {
 	   //printf("Calling GenConst with %s", arg1.stringval);
           mytemp = GenConst(CONSTANT_String,arg1.stringval);
           break;
         }
         case INTCONSTANT:
         {
           mytemp = GenConst(CONSTANT_Integer,(long)arg1.intval);
           break;
         } 
         case FLOATCONSTANT:
         {
           mytemp = GenConst(CONSTANT_Float,arg1.floatval);
           break;
         }
         case LONGCONSTANT:
         {
	   AddToCode(GetOpCode(LDC2_W));
	   AddShortToCode(GenConst(CONSTANT_Long,arg1.longval));
 	   warning("Long argument: using LDC2_W");
           return;
	 }
         case DOUBLECONSTANT:
         {
	   AddToCode(GetOpCode(LDC2_W));
	   AddShortToCode(GenConst(CONSTANT_Double ,arg1.doubleval));
 	   warning("Double argument: using LDC2_W");
           return;
	 }
         default:
         {
           oops("bad argument type");
         }
       } 
       if (mytemp > CHAR_MAX)
       {
         AddToCode(GetOpCode(LDC_W));
         AddShortToCode(mytemp);
	 if (opcode != LDC_W) message("Using LDC_W");
       }
       else
       { 
         AddToCode(GetOpCode(LDC));
         AddToCode((char) (mytemp & 0x00FF));
	 if (opcode != LDC) message("Using LDC");
       }
       break;
     }
     case (LDC2_W):
     {
       switch (arg1.type) {
         case LONGCONSTANT:
         {
	   AddToCode(GetOpCode(opcode));
	   AddShortToCode(GenConst(CONSTANT_Long,arg1.longval));
           break;
	 }
         case DOUBLECONSTANT:
         {
	   AddToCode(GetOpCode(opcode));
	   AddShortToCode(GenConst(CONSTANT_Double ,arg1.doubleval));
           break;
	 }
         default:
         {
           oops("bad argument type to LDC2_W");
         }
       }
       break;
     }
     case (BIPUSH):
     {
       if(arg1.type != INTCONSTANT)
	 oops("Bad argument type to BIPUSH.");
       if(arg1.intval > 128)
	 oops("Argument too large for BIPUSH.");
       if(arg1.intval < -127)
	 oops("Argument too small for BIPUSH.");
       AddToCode(GetOpCode(opcode));
       AddToCode(arg1.intval);
       break;
     }
     case (SIPUSH):
     {
       if(arg1.type != INTCONSTANT)
	 oops("Bad argument type to SIPUSH.");
       if(arg1.intval > 32767)
	 oops("Argument too large for SIPUSH.");
       if(arg1.intval < -32768)
	 oops("Argument too small for SIPUSH.");
       AddToCode(GetOpCode(opcode));
       AddShortToCode(arg1.intval);
       break;
     }
     default:
     {
       /*do nothing now*/
     }
   }
}

void GenTwoArgCode(int opcode, ArgType arg1, ArgType arg2)
{
   //message("In GenTwoArgCode");
   switch(opcode) {
     case (IINC):
     {
       /* need to check type */
       AddToCode(GetOpCode(opcode));
       AddToCode(arg1.intval);
       AddToCode(arg2.intval);
       break;
     }
     default:
     {
       /* do nothing now */
     }
  }
}

void GenMethodArgCode(int opcode, char* arg1, char* arg2, char* arg3)
{
   //message("In GenMethodArgCode");
   AddToCode(GetOpCode(opcode));
   AddShortToCode(GenConst(CONSTANT_Methodref, arg1, 
	   	           arg2, arg3));
}

void GenINVOKEINTERFACECode(int opcode, char* arg1, char* arg2, char* arg3,
			    int nargs)
{
   //message("In GenMethodArgCode");
   AddToCode(GetOpCode(opcode));
   AddShortToCode(GenConst(CONSTANT_InterfaceMethodref, arg1, 
	   	           arg2, arg3));
   if (nargs > CHAR_MAX)
  	oops("Number of argument words too big for invokeinterface.");
   AddToCode(nargs);
   AddToCode(0);  /* for reserved spot */
}

void GenFieldArgCode(int opcode, char* arg1, char* arg2, char* arg3)
{
   //message("In GenFieldArgCode");
   //printf("OpCode: %i GetOpCode: %i",opcode,(int)GetOpCode(opcode));
   AddToCode(GetOpCode(opcode));
   AddShortToCode(GenConst(CONSTANT_Fieldref, arg1, 
	   	           arg2, arg3));
}

void GenClassArgCode(int opcode, char* arg1)
{
   //message("In GenFieldArgCode");
   AddToCode(GetOpCode(opcode));
   AddShortToCode(GenConst(CONSTANT_Class, arg1)); 
}

void GenMULTIANEWARRAYCode(int opcode, char* arg1, int dimensions)
{
   //message("In GenMULTIANEWARRAYCode");
   if (dimensions > CHAR_MAX)
   	oops("Dimensions too big for MULTIANEWARRAY.");
   AddToCode(GetOpCode(opcode));
   AddShortToCode(GenConst(CONSTANT_Class, arg1));
   AddToCode((char) dimensions); 
}

void GenLabelArgCode(int opcode, char* arg1)
{
   signed long location;
   signed long offset;
   /* need to see if offset big enough to need goto_w, jsr_w, etc. */
   //message("In GenLabelArgCode");
   location = GetLabel(arg1, currentmethod.CodeCounter, 
			currentmethod.CodeCounter + 1);
   offset = location - (currentmethod.CodeCounter); /* not a valid
					value if location is -1 */	
   switch (opcode)
   {
     case (IFEQ):
     case (IFLT):
     case (IFLE):
     case (IFGT):
     case (IFGE):
     case (IFNE):
     case (IFNULL):
     case (IFNONNULL):
     case (IF_ICMPEQ):
     case (IF_ICMPNE):
     case (IF_ICMPLT):
     case (IF_ICMPGT):
     case (IF_ICMPLE):
     case (IF_ICMPGE):
     case (IF_ACMPEQ):
     case (IF_ACMPNE):
     {
       AddToCode(GetOpCode(opcode));
       if (location == -1) /* label not yet defined */
       {
	 AddShortToCode((signed short) 0); /*place holder*/
       }
       else
       {
         if ((offset > 32767) || (offset < -32768))
	 {
	   oops("instruction used label that's too far away.");
	 }
	 else
	 {
	   AddShortToCode((signed short) offset);
	 }
       }
       break;
     }
     case (GOTO):
     {
       if (location == -1) /* label not yet defined */
       {
         // AddToCode(GetOpCode(GOTO_W));
	 // AddLongToCode((signed long) 0); /*place holder*/
          AddToCode(GetOpCode(GOTO));
	  AddShortToCode((signed short) 0); /*place holder*/
       }
       else
       {
         if ((offset > 32767) || (offset < -32768))
	 {
	   message("Using GOTO_W");
           AddToCode(GetOpCode(GOTO_W));
	   AddLongToCode(offset);
	 }
	 else
	 {
           AddToCode(GetOpCode(opcode));
	   AddShortToCode((signed short) offset);
	 }
       }
       break;
     }
     case (JSR):
     {
       if (location == -1) /* label not yet defined */
       {
         AddToCode(GetOpCode(JSR_W));
	 AddLongToCode((signed long) 0); /*place holder*/
       }
       else
       {
         if ((offset > 32767) || (offset < -32768))
	 {
	   message("Using JSR_W");
           AddToCode(GetOpCode(JSR_W));
	   AddLongToCode(offset); 
	 }
	 else
	 {
           AddToCode(GetOpCode(opcode));
	   AddShortToCode((signed short) offset);
	 }
       }
       break;
     }
     case (GOTO_W):
     {
       if (location == -1) /* label not yet defined */
       {
         AddToCode(GetOpCode(opcode));
	 AddLongToCode((signed long) 0); /*place holder*/
       }
       else
       {
         if ((offset > 32767) || (offset < -32768))
	 {
           AddToCode(GetOpCode(opcode));
	   AddLongToCode(offset); 
	 }
	 else
	 {
	   message("Optimizing: using GOTO");
           AddToCode(GetOpCode(GOTO));
	   AddShortToCode((signed short) offset);
	 }
       }
       break;
     }
     case (JSR_W):
     {
       if (location == -1) /* label not yet defined */
       {
         AddToCode(GetOpCode(opcode));
	 AddLongToCode((signed long) 0); /*place holder*/
       }
       else
       {
         if ((offset > 32767) || (offset < -32768))
	 {
           AddToCode(GetOpCode(opcode));
	   AddLongToCode(offset); 
	 }
	 else
	 {
	   message("Optimizing: using JSR");
           AddToCode(GetOpCode(JSR));
	   AddShortToCode((signed short) offset);
	 }
       }
       break;
     }
   }
}

void GenLocalVarArgCode(int opcode, int index)
{
   char* tempsig;
   //message("In GenLocalVarArgCode");
   /* check if generic load or store used */
   if(opcode == LOAD)
   {
     tempsig = GetLocalVarSigFromSlot(index);
     switch (tempsig[0])  /*only need to look at first char of signature */
     {
        /* are bytes, chars, shorts, and booleans considered as ints? */
  	case 'B':
	case 'C':
	case 'S':
	case 'Z':
	case 'I':
	{
	  opcode = ILOAD;
	  message("Using ILOAD.");
	  break;
	}
	case 'F':
	{
	  opcode = FLOAD;
	  message("Using FLOAD.");
	  break;
	}
	case 'J':
	{
	  opcode = LLOAD;
	  message("Using LLOAD.");
	  break;
	}
	case 'D':
	{
	  opcode = DLOAD;
	  message("Using DLOAD.");
	  break;
	}
	case 'L':
	case '[':
	{
	  opcode = ALOAD;
	  message("Using ALOAD.");
	  break;
	}
  	default:
        { oops("Bad signature in GenLocalVarArgCode.");
 	}
      }
   }
   if(opcode == STORE)
   {
     tempsig = GetLocalVarSigFromSlot(index);
     switch (tempsig[0])  /*only need to look at first char of signature */
     {
        /* are bytes, chars, shorts, and booleans considered as ints? */
  	case 'B':
	case 'C':
	case 'S':
	case 'Z':
	case 'I':
	{
	  opcode = ISTORE;
	  message("Using ISTORE.");
	  break;
	}
	case 'F':
	{
	  opcode = FSTORE;
	  message("Using FSTORE.");
	  break;
	}
	case 'J':
	{
	  opcode = LSTORE;
	  message("Using LSTORE.");
	  break;
	}
	case 'D':
	{
	  opcode = DSTORE;
	  message("Using DSTORE.");
	  break;
	}
	case 'L':
	case '[':
	{
	  opcode = ASTORE;
	  message("Using ASTORE.");
	  break;
	}
  	default:
        { oops("Bad signature in GenLocalVarArgCode.");
 	}
      }
   }
   
   /* need to check if index is big enough to need use of wide statement */
   if (index > CHAR_MAX)
   {
     /* make sure the user didn't put out a wide statement already*/ 
     if(currentmethod.Code[currentmethod.CodeCounter-1] !=
	 GetOpCode(WIDE))
     {  
       AddToCode(GetOpCode(WIDE));
     }
     AddToCode(GetOpCode(opcode));
     AddShortToCode(index);
   }
   else
   {
     switch(opcode)
     {
     	case (ILOAD):
        {
	  switch(index)
  	  {
	    case 0:
	    {
	      AddToCode(GetOpCode(ILOAD_0));
	      break;
	    }
	    case 1:
	    {
	      AddToCode(GetOpCode(ILOAD_1));
	      break;
	    }
	    case 2:
	    {
	      AddToCode(GetOpCode(ILOAD_2));
	      break;
	    }
	    case 3:
	    {
	      AddToCode(GetOpCode(ILOAD_3));
	      break;
	    }
	    default:
	    {
	      AddToCode(GetOpCode(opcode));
	      AddToCode(index & 0x00FF);
    	    }
	  }
	  break;
   	}
     	case (FLOAD):
        {
	  switch(index)
  	  {
	    case 0:
	    {
	      AddToCode(GetOpCode(FLOAD_0));
	      break;
	    }
	    case 1:
	    {
	      AddToCode(GetOpCode(FLOAD_1));
	      break;
	    }
	    case 2:
	    {
	      AddToCode(GetOpCode(FLOAD_2));
	      break;
	    }
	    case 3:
	    {
	      AddToCode(GetOpCode(FLOAD_3));
	      break;
	    }
	    default:
	    {
	      AddToCode(GetOpCode(opcode));
	      AddToCode(index & 0x00FF);
    	    }
	  }
	  break;
   	}
     	case (ALOAD):
        {
	  switch(index)
  	  {
	    case 0:
	    {
	      AddToCode(GetOpCode(ALOAD_0));
	      break;
	    }
	    case 1:
	    {
	      AddToCode(GetOpCode(ALOAD_1));
	      break;
	    }
	    case 2:
	    {
	      AddToCode(GetOpCode(ALOAD_2));
	      break;
	    }
	    case 3:
	    {
	      AddToCode(GetOpCode(ALOAD_3));
	      break;
	    }
	    default:
	    {
	      AddToCode(GetOpCode(opcode));
	      AddToCode(index & 0x00FF);
    	    }
	  }
	  break;
   	}
     	case (LLOAD):
        {
	  switch(index)
  	  {
	    case 0:
	    {
	      AddToCode(GetOpCode(LLOAD_0));
	      break;
	    }
	    case 1:
	    {
	      AddToCode(GetOpCode(LLOAD_1));
	      break;
	    }
	    case 2:
	    {
	      AddToCode(GetOpCode(LLOAD_2));
	      break;
	    }
	    case 3:
	    {
	      AddToCode(GetOpCode(LLOAD_3));
	      break;
	    }
	    default:
	    {
	      AddToCode(GetOpCode(opcode));
	      AddToCode(index & 0x00FF);
    	    }
	  }
	  break;
   	}
     	case (DLOAD):
        {
	  switch(index)
  	  {
	    case 0:
	    {
	      AddToCode(GetOpCode(DLOAD_0));
	      break;
	    }
	    case 1:
	    {
	      AddToCode(GetOpCode(DLOAD_1));
	      break;
	    }
	    case 2:
	    {
	      AddToCode(GetOpCode(DLOAD_2));
	      break;
	    }
	    case 3:
	    {
	      AddToCode(GetOpCode(DLOAD_3));
	      break;
	    }
	    default:
	    {
	      AddToCode(GetOpCode(opcode));
	      AddToCode(index & 0x00FF);
    	    }
	  }
	  break;
   	}
     	case (ISTORE):
        {
	  switch(index)
  	  {
	    case 0:
	    {
	      AddToCode(GetOpCode(ISTORE_0));
	      break;
	    }
	    case 1:
	    {
	      AddToCode(GetOpCode(ISTORE_1));
	      break;
	    }
	    case 2:
	    {
	      AddToCode(GetOpCode(ISTORE_2));
	      break;
	    }
	    case 3:
	    {
	      AddToCode(GetOpCode(ISTORE_3));
	      break;
	    }
	    default:
	    {
	      AddToCode(GetOpCode(opcode));
	      AddToCode(index & 0x00FF);
    	    }
	  }
	  break;
   	}
     	case (FSTORE):
        {
	  switch(index)
  	  {
	    case 0:
	    {
	      AddToCode(GetOpCode(FSTORE_0));
	      break;
	    }
	    case 1:
	    {
	      AddToCode(GetOpCode(FSTORE_1));
	      break;
	    }
	    case 2:
	    {
	      AddToCode(GetOpCode(FSTORE_2));
	      break;
	    }
	    case 3:
	    {
	      AddToCode(GetOpCode(FSTORE_3));
	      break;
	    }
	    default:
	    {
	      AddToCode(GetOpCode(opcode));
	      AddToCode(index & 0x00FF);
    	    }
	  }
	  break;
   	}
     	case (ASTORE):
        {
	  switch(index)
  	  {
	    case 0:
	    {
	      AddToCode(GetOpCode(ASTORE_0));
	      break;
	    }
	    case 1:
	    {
	      AddToCode(GetOpCode(ASTORE_1));
	      break;
	    }
	    case 2:
	    {
	      AddToCode(GetOpCode(ASTORE_2));
	      break;
	    }
	    case 3:
	    {
	      AddToCode(GetOpCode(ASTORE_3));
	      break;
	    }
	    default:
	    {
	      AddToCode(GetOpCode(opcode));
	      AddToCode(index & 0x00FF);
    	    }
	  }
	  break;
   	}
     	case (LSTORE):
        {
	  switch(index)
  	  {
	    case 0:
	    {
	      AddToCode(GetOpCode(LSTORE_0));
	      break;
	    }
	    case 1:
	    {
	      AddToCode(GetOpCode(LSTORE_1));
	      break;
	    }
	    case 2:
	    {
	      AddToCode(GetOpCode(LSTORE_2));
	      break;
	    }
	    case 3:
	    {
	      AddToCode(GetOpCode(LSTORE_3));
	      break;
	    }
	    default:
	    {
	      AddToCode(GetOpCode(opcode));
	      AddToCode(index & 0x00FF);
    	    }
	  }
	  break;
   	}
     	case (DSTORE):
        {
	  switch(index)
  	  {
	    case 0:
	    {
	      AddToCode(GetOpCode(DSTORE_0));
	      break;
	    }
	    case 1:
	    {
	      AddToCode(GetOpCode(DSTORE_1));
	      break;
	    }
	    case 2:
	    {
	      AddToCode(GetOpCode(DSTORE_2));
	      break;
	    }
	    case 3:
	    {
	      AddToCode(GetOpCode(DSTORE_3));
	      break;
	    }
	    default:
	    {
	      AddToCode(GetOpCode(opcode));
	      AddToCode(index & 0x00FF);
    	    }
	  }
	  break;
   	}
     	case (RET):
        {
	   AddToCode(GetOpCode(opcode));
	   AddToCode(index & 0x00FF);
	   break;
   	}
	default:
	{ 
	  oops("Bad opcode to GenLocalVariable.");
	}
    }
  }
}

void GenIINCCode(int opcode, int index, int myconst)
{
   if (myconst > CHAR_MAX)
   {
     oops("Constant too big for IINC instruction.");
   }
   message("In GenIINCCode.");
   printf("%i\n",myconst);
   if (index > CHAR_MAX)
   {
     /* make sure the user didn't put out a wide statement already*/ 
     if(currentmethod.Code[currentmethod.CodeCounter-1] !=
	 GetOpCode(WIDE))
     {  
       AddToCode(GetOpCode(WIDE));
     }
     AddToCode(GetOpCode(opcode));
     AddShortToCode(index);
     AddToCode((char)myconst);
   }
   else
   {
     AddToCode(GetOpCode(opcode));
     AddToCode((char)index);
     AddToCode((char)myconst);
   }
}

void GenNEWARRAYCode(int opcode, int atype)
{
   AddToCode(GetOpCode(opcode));
   AddToCode((char) atype);
}

void GenLOOKUPSWITCHCode(int opcode, char* mydefault, lookupentry* head)
{
   int opcodelocation;
   long j;
   lookupentry* tempptr;
   lookupentry* todie;
   opcodelocation = currentmethod.CodeCounter;
   AddToCode(GetOpCode(opcode));
   /* add byte pad */
   for (int i = opcodelocation % 4; (i%4 != 0); i++)
   {
     AddToCode(0); /* filler byte */
     /* i++;*/ /* isn't this redundant???? Yes, it is!!!*/
   }
   /* add mydefault offset */
   AddLongToCode(opcodelocation - GetLabel(mydefault,opcodelocation,
			  	     	   currentmethod.CodeCounter));
   /* count npairs */
   j = 0;
   tempptr = head;
   while(tempptr != NULL)
   {
     j++;
     tempptr = tempptr->next;
   }
   AddLongToCode(j);
   /* now add the pairs */
   tempptr = head;
   while (tempptr != NULL)
   {
     AddLongToCode(tempptr->match);
     AddLongToCode(opcodelocation - GetLabel(tempptr->alabel,opcodelocation,
			  	     	   currentmethod.CodeCounter));
     todie = tempptr;
     tempptr = tempptr->next;
     free(todie);
   }
}

void GenTABLESWITCHCode(int opcode, int mylow, int myhigh, 
			char* mydefault, tableentry* head)
{
   int opcodelocation;
   long j;
   tableentry* tempptr;
   tableentry* todie;
   opcodelocation = currentmethod.CodeCounter;
   AddToCode(GetOpCode(opcode));
   /* add byte pad */
   for (int i = opcodelocation % 4; (i%4 != 0); i++)
   {
     AddToCode(0); /* filler byte */
     i++; /* isn't this redundant???? */
   }
   /* add mydefault offset */
   AddLongToCode(opcodelocation - GetLabel(mydefault,opcodelocation,
			  	     	   currentmethod.CodeCounter));
   /* count npairs */
   AddLongToCode(mylow);
   AddLongToCode(myhigh);

   /* now add the entries */
   tempptr = head;
   while (tempptr != NULL)
   {
     AddLongToCode(opcodelocation - GetLabel(tempptr->alabel,opcodelocation,
			  	     	   currentmethod.CodeCounter));
     todie = tempptr;
     tempptr = tempptr->next;
     free(todie);
   }
}
     

void NewNewMethod(int access)
{
   MethodCount++;
   currentmethod.access_flags = access;  
   currentmethod.CodeCounter = 0;
   GenConst(CONSTANT_Utf8, "Code");  /* note: don't need this if no code
					ever generated */
   currentmethod.LabelCounter = 0; 
   currentmethod.LocalVarCounter = -1;
   currentmethod.ExceptionsCounter = 0;
   currentmethod.exceptionhead = NULL;
   currentmethod.ThrowsCounter = 0;
   currentmethod.throwshead = NULL;
   currentmethod.LineNumberCounter = 0;
   currentmethod.linenumberhead = NULL;
   currentmethod.UserLocalVarCounter = 0;
   currentmethod.userlocalvarhead = NULL;
   if ((currentmethod.access_flags & 0x0008) > 0)
      /* this is a static method, no default 0 variable */
   {
      currentmethod.currentslot = 0; 
   }
   else
   {
      currentmethod.currentslot = 1; 
   }
}

void NewMethod(char* name, char* signature, int maxstack, int maxlocals)

{
   currentmethod.name_index = GenConst(CONSTANT_Utf8, name);
   currentmethod.signature_index = GenConst(CONSTANT_Utf8, signature);
   currentmethod.max_stack = maxstack;
   currentmethod.max_locals = maxlocals;
}


void EndMethod()
{
   FILE * myoutfp;
   methodname * tempmethodname;
   methodname * prevmethodname;
   methodname * newmethodname;

   /* add new method name to the list*/
   tempmethodname = methodnameshead;
   newmethodname = (methodname *) malloc(sizeof(methodname));
   newmethodname->next = NULL;
   if (tempmethodname == NULL)
   {
     methodnameshead = newmethodname;
   }
   else
   {
     while (tempmethodname != NULL)
     {
	prevmethodname = tempmethodname;
	tempmethodname = tempmethodname->next;
     }
     prevmethodname->next = newmethodname;
   }

   /* create a temp file name and open a new file */
   tmpnam(newmethodname->name); 
   if ((myoutfp = fopen(newmethodname->name, "w")) == 0)
     perror("cannot open file"), exit(1);
   MethodDump(currentmethod,myoutfp);
   fclose(myoutfp);
}
   

/* maybe overload this for the case of constants */
void NewField(int access, char* name, char* signature, ArgType constantval)
{
   FieldCount++;
   field[FieldCount].access_flags = access;
   field[FieldCount].name_index = GenConst(CONSTANT_Utf8, name);
   field[FieldCount].signature_index = GenConst(CONSTANT_Utf8, signature);
   if (constantval.type != 0)  /* a constant was passed up */
   {
     GenConst(CONSTANT_Utf8,"ConstantValue"); /* will be referenced later */
     switch (signature[0]) 
     {
       case 'B':
       case 'C':
       case 'I':
       case 'S':
       case 'Z':
       {
	 if (constantval.type != INTCONSTANT) 
		oops("Constant type does not match field type.");
	 field[FieldCount].constantvalue_index = 
		GenConst(CONSTANT_Integer, (long)constantval.intval);
	 break;
       }
       case 'F':
       {
	 if (constantval.type != FLOATCONSTANT) 
		oops("Constant type does not match field type.");
	 field[FieldCount].constantvalue_index = 
		GenConst(CONSTANT_Float,constantval.floatval);
	 break;
       }
       case 'J':
       {
	 if (constantval.type != LONGCONSTANT) 
		oops("Constant type does not match field type.");
	 field[FieldCount].constantvalue_index = 
		GenConst(CONSTANT_Long,constantval.longval);
	 break;
       }
       case 'D':
       {
	 if (constantval.type != DOUBLECONSTANT) 
		oops("Constant type does not match field type.");
	 field[FieldCount].constantvalue_index = 
		GenConst(CONSTANT_Double,constantval.doubleval);
	 break;
       }
       default:
       {
	 oops("Can't have a constant value for a field of this type.");
       }
     }
   }
   else
   {
     field[FieldCount].constantvalue_index = 0;
   }
}


/*What exactly do start_pc and length mean?  Does length simply go to the last 
reference to that variable, or should this be user-defined? */ 

void NewLocalVar(char* name, char* signature)
{
   /* do we need to search to see if this variable has already been defined? */
   short currentspot;
   short tempslot;
   currentmethod.LocalVarCounter++;
   currentspot = currentmethod.LocalVarCounter;
   if (name != NULL)
   {
      currentmethod.LocalVar[currentspot].name_index =
				GenConst(CONSTANT_Utf8, name);
      currentmethod.LocalVar[currentspot].name = 
			(char *) malloc(strlen(name));
      strcpy(currentmethod.LocalVar[currentspot].name, name);
   }
   else
   {
      currentmethod.LocalVar[currentspot].name_index = 0;
      currentmethod.LocalVar[currentspot].name = NULL;
   }
   currentmethod.LocalVar[currentspot].signature_index =
				GenConst(CONSTANT_Utf8, signature);
   currentmethod.LocalVar[currentspot].signature = 
			(char *) malloc(strlen(signature));
   strcpy(currentmethod.LocalVar[currentspot].signature, signature);
   currentmethod.LocalVar[currentspot].start_pc = -1; 
   currentmethod.LocalVar[currentspot].length = 0;

   /* assign the slot number then increment currentslot based on the
      signature of this variable */
   currentmethod.LocalVar[currentspot].slot = 
		currentmethod.currentslot;
   tempslot = currentmethod.currentslot;
   if ((strcmp(signature, "J") ==0) || (strcmp(signature, "D") ==0))  
      /* long or double so takes up two slots */
   {
      currentmethod.currentslot = tempslot +2;
      //message("Incremented slot by 2.");
   }
   else 
   {
      currentmethod.currentslot = tempslot +1;
      //message("Incremented slot by 1.");
   }

   GenConst(CONSTANT_Utf8, "LocalVariableTable");  /* note: don't need this if 
					no local var table ever generated */
}

void IncrementLocalVarSlot(char* signature)
{
   short tempslot;
   tempslot = currentmethod.currentslot;
   if ((strcmp(signature, "J") ==0) || (strcmp(signature, "D") ==0))  
      /* long or double so takes up two slots */
   {
      currentmethod.currentslot = tempslot +2;
      //message("Incremented slot by 2.");
   }
   else 
   {
      currentmethod.currentslot = tempslot +1;
      //message("Incremented slot by 1.");
   }
}

char* GetLocalVarSigFromSlot(int index)
{
   int i;
   for(i = 0; i <= currentmethod.LocalVarCounter &&
                  currentmethod.LocalVar[i].slot != index; i++);
   if (i > currentmethod.LocalVarCounter)
	oops("Generic load/store instruction used, but no local variable found for this slot.");
   return currentmethod.LocalVar[i].signature;
}

short GetLocalVar(char* name)
{
   int i;
   for(i = 0; i <= currentmethod.LocalVarCounter &&
 		  (currentmethod.LocalVar[i].name == NULL ||
		  strcmp(currentmethod.LocalVar[i].name,name) !=0); i++);
   if (i > currentmethod.LocalVarCounter)
	oops(ConsStrings("Local Variable not declared: ",name));
   if (currentmethod.LocalVar[i].start_pc == -1)
        currentmethod.LocalVar[i].start_pc =
					currentmethod.CodeCounter;
   currentmethod.LocalVar[i].length = currentmethod.CodeCounter - 
				currentmethod.LocalVar[i].start_pc;
   return currentmethod.LocalVar[i].slot;
}


void DefineLabel(char* name)
{
   int i;
   unresolvedindex* j;
   unresolvedindex* todie;
   int k;
   long t1, t2, t3,t4;
   int labelptr;
   labelptr = -1;
   for (i=0;i<currentmethod.LabelCounter;i++)
   {
     if (strcmp(name, currentmethod.Label[i].name) == 0)
        labelptr = i;
   }
   if (labelptr >= 0) /*label with same name already found*/
   {
     if (currentmethod.Label[labelptr].index == -1)/*label not yet defined*/
     {
    	currentmethod.Label[labelptr].index 
		= currentmethod.CodeCounter;
	j = currentmethod.Label[labelptr].unresolvedindexhead;
	while (j != NULL) /* fix all unresolved references */
 	{
 	  if((currentmethod.Code[j->location-1] == GetOpCode(IFEQ))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IFLT))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IFLE))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IFGT))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IFGE))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IFNE))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IFNULL))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IFNONNULL))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IF_ICMPEQ))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IF_ICMPNE))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IF_ICMPLT))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IF_ICMPGT))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IF_ICMPLE))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IF_ICMPGE))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IF_ACMPEQ))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(IF_ACMPNE))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(GOTO))
 	   ||(currentmethod.Code[j->location-1] == GetOpCode(JSR)))
	  {
	    if ((currentmethod.CodeCounter-(j->location-1) > 32767)
	     || (currentmethod.CodeCounter-(j->location-1) < -32768))
		oops("instruction used label that's too far away.");
	    copyshort2char(&currentmethod.Code[j->location],
		(signed short) currentmethod.CodeCounter
			       - (j->opcodelocation));
	    todie = j;
	    j = j->next;
 	    free(todie);
	  }
	  else
	  {
	    copylong2char(&currentmethod.Code[j->location],
			currentmethod.CodeCounter-(j->opcodelocation));
	    todie = j;
	    j = j->next;
 	    free(todie);
	  }
	  currentmethod.Label[labelptr].unresolvedindexhead = NULL;
      	}
     }
     else
     {
 	oops("label already defined!");
     }
   }
   else /* label not yet defined */
   {
	currentmethod.Label[currentmethod.LabelCounter].name = name;
	currentmethod.Label[currentmethod.LabelCounter].index = 
		currentmethod.CodeCounter;
	currentmethod.Label[currentmethod.LabelCounter].unresolvedindexhead = NULL;
	currentmethod.LabelCounter++;
        //message(ConsStrings("Label added: ", name));
   }
}


/*This function returns the location of a label if it is defined.  If it is
  not defined, it adds "location" to the list of unresolved references.
  myopcodelocation is the offset from the beginning of the code of the
  opcode that uses this label (used for calculating the real offset later).
  mylocation is the offset from the beginning of the code where the label's
  offset belongs.
*/
signed long GetLabel(char* name, long myopcodelocation, long mylocation)
{
   int i;
   int labelptr;
   long toreturn;
   labelptr = -1;
   unresolvedindex* lastindex;
   for (i=0;i<currentmethod.LabelCounter;i++)
   {
     if (strcmp(name, currentmethod.Label[i].name) == 0)
        labelptr = i;
   }
   if (labelptr >= 0)
   {
     if (currentmethod.Label[labelptr].index >= 0)
     {
	/* let's just return the index instead of the actual offset 
	   (for cases like tableswitch and lookupswitch where the offset
	    is calculated from a few bytes back, not just one. */
        return currentmethod.Label[labelptr].index;
     }
     else /*add this to list of unresolved indexes*/ 
     {
	lastindex = currentmethod.Label[labelptr].unresolvedindexhead;
	currentmethod.Label[labelptr].unresolvedindexhead =
			(unresolvedindex*) malloc(sizeof(unresolvedindex));
	currentmethod.Label[labelptr].unresolvedindexhead->location =
			mylocation;
	currentmethod.Label[labelptr].unresolvedindexhead->opcodelocation 
			= myopcodelocation;
	currentmethod.Label[labelptr].unresolvedindexhead->next =
			lastindex;
	return -1;
     }
   }
   else /*put label in list with no index*/
   {
     currentmethod.Label[currentmethod.LabelCounter].name = name;
     currentmethod.Label[currentmethod.LabelCounter].index = -1;
     currentmethod.Label[currentmethod.LabelCounter].unresolvedindexhead 
			= (unresolvedindex*) malloc(sizeof(unresolvedindex));
     currentmethod.Label[currentmethod.LabelCounter].unresolvedindexhead->location 
			= mylocation;
     currentmethod.Label[currentmethod.LabelCounter].unresolvedindexhead->opcodelocation 
			= myopcodelocation;
     currentmethod.Label[currentmethod.LabelCounter].unresolvedindexhead->next 
			= NULL; 
     currentmethod.LabelCounter++;
     return -1;
   }
}
 

lookupentry* AddToLookupList(lookupentry* head, int mymatch, char* thelabel)
{
  lookupentry* toreturn;
  toreturn = (lookupentry *) malloc(sizeof(lookupentry));
  toreturn->match = mymatch;
  toreturn->alabel = (char *) malloc(strlen(thelabel));
  strcpy(toreturn->alabel,thelabel);
  toreturn->next = head;
  return toreturn;
}
	
tableentry* AddToTableList(tableentry* head, char* thelabel)
{
  tableentry* toreturn;
  toreturn = (tableentry *) malloc(sizeof(tableentry));
  toreturn->alabel = (char *) malloc(strlen(thelabel));
  strcpy(toreturn->alabel,thelabel);
  toreturn->next = head;
  return toreturn;
}

void AddToThrowsList(char* name)
{
  throwsentry* toadd;
  toadd = (throwsentry*) malloc(sizeof(throwsentry));
  toadd->exceptionclass = GenConst(CONSTANT_Class, name);
  toadd->next = currentmethod.throwshead;
  currentmethod.throwshead = toadd;
  currentmethod.ThrowsCounter++;
} 
  

void AddToExceptionList(char* start_pc, char* end_pc, char* handler_pc,
		   char* catch_type)
{
  exceptionentry* newexception;
  exceptionentry* tempexception;
  long int tempoffset;
  newexception = (exceptionentry*) malloc(sizeof(exceptionentry));
  tempoffset = GetLabel(start_pc, 0, 0);
  if (tempoffset == -1) oops("Label not defined.");
  if (tempoffset > 65536) oops("Offset to this label larger than 2 bytes.");
  newexception->start_pc = tempoffset; 
  tempoffset = GetLabel(end_pc, 0, 0);
  if (tempoffset == -1) oops("Label not defined.");
  if (tempoffset > 65536) oops("Offset to this label larger than 2 bytes.");
  newexception->end_pc = tempoffset; 
  tempoffset = GetLabel(handler_pc, 0, 0);
  if (tempoffset == -1) oops("Label not defined.");
  if (tempoffset > 65536) oops("Offset to this label larger than 2 bytes.");
  newexception->handler_pc = tempoffset;
  if (catch_type == NULL)
  {
    newexception->catch_type = 0;
  }
  else
  { 
    newexception->catch_type = GenConst(CONSTANT_Class, catch_type);
  }
  newexception->next = NULL;

  /*insert into list*/
  if (currentmethod.exceptionhead == NULL)
  {
    currentmethod.exceptionhead = newexception;
  }
  else
  {
    tempexception = currentmethod.exceptionhead;
    for(;tempexception->next != NULL; tempexception = tempexception->next);
    tempexception->next = newexception;
  }
  currentmethod.ExceptionsCounter++;
}

void AddToLineNumberList(char* alabel, short line_number)
{
  linenumberentry* toadd;
  linenumberentry* temp;
  long tempoffset;
  tempoffset = GetLabel(alabel, 0, 0);
  if (tempoffset == -1) oops("Label not defined.");
  if (tempoffset > 65536) oops("Offset to this label larger than 2 bytes.");
  toadd = (linenumberentry*) malloc(sizeof(linenumberentry));
  toadd->start_pc = tempoffset;
  toadd->line_number = line_number;
  toadd->next = NULL;
  if (currentmethod.linenumberhead == NULL)
  {
    currentmethod.linenumberhead = toadd;
  }
  else
  {
    for(temp = currentmethod.linenumberhead; temp->next != NULL; temp = temp->next);
    temp->next = toadd;
  }
  currentmethod.LineNumberCounter++;
}

void AddToUserLocalVarList(char* startlabel, char* endlabel, char* signature,
			   char* name, short slot)
{
  userlocalvarentry* toadd;
  userlocalvarentry* temp;
  long tempoffset;
  toadd = (userlocalvarentry*) malloc(sizeof(userlocalvarentry));
  tempoffset = GetLabel(startlabel, 0, 0);
  if (tempoffset == -1) oops("Label not defined.");
  if (tempoffset > 65536) oops("Offset to this label larger than 2 bytes.");
  toadd->start_pc = tempoffset;
  tempoffset = GetLabel(endlabel, 0, 0);
  if (tempoffset == -1) oops("Label not defined.");
  if (tempoffset > 65536) oops("Offset to this label larger than 2 bytes.");
  toadd->length = tempoffset - toadd->start_pc;
  toadd->name_index = GenConst(CONSTANT_Utf8,name);
  toadd->signature_index = GenConst(CONSTANT_Utf8,signature);
  toadd->slot = slot;
  toadd->next = NULL;
  if (currentmethod.userlocalvarhead == NULL)
  {
    currentmethod.userlocalvarhead = toadd;
  }
  else
  {
    for(temp = currentmethod.userlocalvarhead; temp->next != NULL; temp = temp->next);
    temp->next = toadd;
  }
  currentmethod.UserLocalVarCounter++;
}
	
