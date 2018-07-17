#include <stdio.h>
#define MAX 1000
void dfs( int v, int visited[] );
int	array[MAX][MAX];
int	flag = 1;
int main(void)
{
	int n;
	scanf( "%d", &n );
	for ( int m = 0; m < n; m++ )
	{
		int	i;
		int	v, e, a, b;
		scanf( "%d", &v );
		scanf( "%d", &e );
		int visited[v];
		for ( i = 0; i < v; i++ )
			visited[i] = 0;
		for ( i = 0; i < e; i++ )
		{
			scanf( "%d %d", &a, &b );
			array[a][0]++;
			array[a][array[a][0]] = b;
		}
		dfs( 0, visited );
		if ( flag == 1 )
			printf( "%d YES\n", m + 1 );
		else
			printf( "%d NO\n", m + 1 );
	}
}


void dfs( int v, int visited[] )
{
	int i;
	visited[v] = 1;
	for ( i = 1; i <= array[v][0]; i++ )
	{
		if ( visited[array[v][i]] == 0 )
			dfs( array[v][i], visited );
		else if ( visited[array[v][i]] == 2 )
		{
			flag = 0;
			break;
		}
	}
	visited[v] = 2;
}
