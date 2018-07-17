#include <stdio.h>

int FindMaximum(int a, int b, int c){
	int Maximum = a;
	if (b > Maximum) Maximum = b;
	if (c > maximum) Maximum = c;
	return Maximum;
}

int FindMaxSubArray(int *arr, int leftside, int rightside ){
	
}


int main(void){
	int input_a;
	scanf("%d",&input_a);
//	printf("%d\n",input_a);  //打印输入index 
	int array_a[input_a - 1];
	for (int n = 0; n < input_a; ++n){
		scanf("%d", &array_a[n]);
	}
//	for (int s = 0; s < input_a; ++s){
//		printf("%d ",array_a[s]);  //打印输入array 
//	}
	return 0;
}
