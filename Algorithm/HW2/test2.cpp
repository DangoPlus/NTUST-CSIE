#include <stdio.h>
int main()
{
      char buffer[2000];
       while(scanf("%s", buffer)!=EOF) // �@�����^��
    	//while(scanf("%s", buffer)==1) // �����䌦��1
      {
              printf("hello, %s\n", buffer);
       }
       return 0;
}
