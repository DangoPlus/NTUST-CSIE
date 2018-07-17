#include<stdio.h>
struct base{
	int sum;
	int maxsum;
	int first;
	int last;
	int temp;  
};
int main()  
{  
	base base1;
    int j,i,n,t;  
    int a[100002];  
     base1.sum=0;
	 base1.maxsum=-1001;
	 base1.first =0;
	 base1.last = 0;
	 base1.temp = 1;  
    scanf("%d",&t);  
    for (j=1;j<=t;j++)  
    {  
        scanf("%d",&n);  
        for (i=0;i<n;i++)  
        {  
            scanf("%d",&a[i]);  
        }  
        for (i=0;i<n;i++)  
        {  
            base1.sum += a[i];  
            if (base1.sum > base1.maxsum)  
            {  
                base1.maxsum = base1.sum;base1.first = base1.temp;base1.last = i+1;  
            }  
            if (base1.sum < 0)  
            {  
                base1.sum = 0;base1.temp = i+2;  
            }  
        }  
  printf("%d %d %d\n",base1.first,base1.last,base1.maxsum);  
    }  
    
    return 0;  
}  
