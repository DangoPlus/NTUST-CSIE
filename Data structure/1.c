#include <stdio.h>

void printN( int N) 
{
	int i;
	for ( i=1; i <=N; i++){
		printf("%d\n", i);
	}
	return;
}

void main()
{
	printN(10);
}
