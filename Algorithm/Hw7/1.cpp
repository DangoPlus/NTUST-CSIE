#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstring>


using namespace std;

const int N = 99999;
int parent[N];

struct EDGE {
	int	v;
	int	u;
	int	w;
} edge[N];



bool compare( EDGE a, EDGE b )
{
	return(a.w < b.w);
}


void set()
{
	for ( int i = 0; i < N; i++ )
		parent[i] = i;
}


int fs( int n )
{
	int k, i, r = n;
	while ( parent[r] != r )
	{
		r = parent[r];
	}
	k = n;
	while ( k != r )
	{
		i		= parent[k];
		parent[k]	= r;
		k		= i;
	}
	return(r);
}


int kruskal( int n, int p )
{
	int i, x, y, sum, cnt = 0;
	set();
	for ( sum = 0, i = 0; i < n && cnt < n - 1; i++ )
	{
		x	= fs( edge[i].u );
		y	= fs( edge[i].v );
		if ( x == y )
			continue;
		parent[x] = parent[y]; ++cnt;
		if ( p == 1 && edge[i].u <= edge[i].v )
			printf( "%d %d\n", edge[i].u, edge[i].v );
		if ( p == 1 && edge[i].u > edge[i].v )
			printf( "%d %d\n", edge[i].v, edge[i].u );
		sum += edge[i].w;
	}
		printf( "%d\n", sum );
}


int main()
{
	int	Sum;
	int	n, m, p, u, v, w;
	scanf( "%d", &Sum );
	while ( Sum > 0 )
	{
		scanf( "%d%d%d", &m, &n, &p );
		for ( int i = 0; i < n; i++ )
		{
			scanf( "%d", &edge[i].v );
			scanf( "%d", &edge[i].u );
			scanf( "%d", &edge[i].w );
		}
		sort( edge, edge + n, compare );
		kruskal(n,p);
		Sum--;
	}
	return(0);
}
