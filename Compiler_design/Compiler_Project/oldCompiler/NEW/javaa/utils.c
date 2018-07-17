#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/times.h>
#include <string.h>
#include <time.h>
#include "types.h"
#include "utils.h"
#include "build.h"
#include "listing.h"

/* void bzero(unsigned char *start, int len)
{
   while (len-- > 0) *(start++) = (unsigned char) 0;
} */

void RangeCheck(int lower, int value, int upper, char *errormessage) 
{
   if ((value < lower) | (value > upper)) {
      StartMessage();
      printf("RangeCheck fails: %d <= %d <= %d:  ",lower,value,upper);
      EndMessage();
      oops(errormessage);
   }
}

char *ArbName(void) {
   static int entered = 0;
   char  *ans;
   unsigned char c;
   if (!entered) {
      int t;
      entered = 1;
      t = time(NULL);
      srand(t);
   }
   ans = (char *)malloc(8);
   sprintf(&(ans[1]),"$%5.5d",rand()%10000);
   c = strlen(ans);
   ans[0] = c;
   return(&(ans[1]));
}

char *ConsStrings(char *str1, char *str2)
{
   char *ans;
   unsigned char c;
   if (str1 == NULL) str1 = "";
   if (str2 == NULL) str2 = "";
   c = strlen(str1) + strlen(str2);
   ans = (char *) malloc(c+2);
   strcpy(&(ans[1]),str1);
   strcpy(&(ans[strlen(str1)+1]),str2);
   ans[0] = c;
   return(&(ans[1]));
}

void ReportID(char *id)
{
   Symbol *sym;
   char str[100];
   if (sym=FindSymbol(0,id)) FormatSymbol(str,sym);
   else                      strcpy(str,"--- Null Symbol ---");
   message(str);
}
