#include <stdio.h>
int main()
{
      char buffer[2000];
       while(scanf("%s", buffer)!=EOF) // ß@‚€±ÈÝ^ºÃ
    	//while(scanf("%s", buffer)==1) // Òý”µÅäŒ¦žé1
      {
              printf("hello, %s\n", buffer);
       }
       return 0;
}
