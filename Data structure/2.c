#include <stdio.h>

void printN( int N) 
{
	if(N){
		printN( N-1 );
		printf("%d\n",N);
	}
	return;
}

void main()
{
	printN(10000);
}
