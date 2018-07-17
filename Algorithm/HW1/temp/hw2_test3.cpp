#include <stdio.h>
struct findMaximum{
	int lowindex;
	int highindex;
	int maximum;
	int temp1;
	int temp2;
};
findMaximum FindMaximumSubArray(int A[])
{
	findMaximum fmax;
	fmax.lowindex = 0;
	fmax.highindex = 0;
	fmax.maximum = 0;
	fmax.temp1 = 0;
	fmax.temp2 = 0;
   	
	   	for (int i = 0; i < sizeof(A); i++) {

			if (fmax.temp1 >= 0) {
				fmax.temp1 += A[i];
			} else {
				fmax.temp1 = A[i];
				fmax.temp2 = i;
			}
			if (fmax.temp1 > fmax.maximum) {
				fmax.lowindex = fmax.temp2;
				fmax.maximum = fmax.temp1;
				fmax.highindex = i;
			}
		}
    return fmax;
}
int main(){
    int A[99999];
    int n;
    while (scanf("%d",&n) != -1){
    	for (int i = 0; i < n; i ++)
    		scanf("%d",&A[i]);
    	findMaximum final = FindMaximumSubArray(A);
    	printf("%d %d %d\n",final.lowindex,final.highindex,final.maximum);
	}
    return 0;
}

