#include <stdio.h>
#include<iostream>
using namespace std;

struct findMaximum{
	int lowindex;
	int highindex;
	int maximum;
	int temp1;
	int temp2;
};
findMaximum FindMaximumSubArray(int A[], int n)
{
	findMaximum fmax;
   fmax.highindex = 0;
   fmax.lowindex = 0;
   fmax.maximum = A[0];
   fmax.temp1 = 0;
   fmax.temp2 = 0;
	   	for (int i = 0; i < n; i++) {

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
    int A[100000];
    int n;
    while (scanf("%d",&n) != -1){
    	for (int i = 0; i < n; i ++)
    		scanf("%d",&A[i]);
    	findMaximum final;
		final = FindMaximumSubArray(A, n);
    	printf("%d %d %d\n",final.lowindex,final.highindex,final.maximum);
	}
    return 0;
}
