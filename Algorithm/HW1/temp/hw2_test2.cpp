#include <stdio.h>
struct findMaximum{
	int lowindex;
	int highindex;
	int maximum;
	int temp;
	int temp2;
};

findMaximum FindMaximumSubArray(int A[])
{
	findMaximum fmax;
   	fmax.lowindex = 0;
	fmax.highindex = 0;
	fmax.maximum = A[0];
	fmax.temp = 0;
	fmax.temp2 = 0;
		for (int i = 0; i < sizeof(A); i++) {

			if (fmax.temp >= 0) {
				fmax.temp += A[i];
			} else {
				fmax.temp = A[i];
				fmax.temp2 = i;
			}
			if (fmax.temp > fmax.maximum) {
				fmax.lowindex = fmax.temp2;
				fmax.maximum = fmax.temp;
				fmax.lowindex = i;
			}
    		findMaximum final = FindMaximumSubArray(A);
			printf("%d %d %d\n",final.lowindex,final.highindex,final.maximum);
		}
}
int main(){
    int A[99999];
    int n;
    while (scanf("%d",&n) != -1){
    	for (int i = 0; i < n; i ++)
    		scanf("%d",&A[i]);
    		FindMaximumSubArray(A);
	}
    

    return 0;
}

