#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>
#include <deque>
using namespace std;
const int	maximum	= 500000;
struct EDGE                   
{
	int	from;
	int	toward;
	int	distance;
	EDGE( int from, int toward, int distance )
	{
		this->from	= from;
		this->toward	= toward;
		this->distance	= distance;
	}
	bool operator < (const EDGE &t) const {
		return(distance > t.distance);
	}
};
priority_queue<EDGE>	q;                     
vector<EDGE>		G[maximum];             
bool			visible[maximum];            
int			N, M, a, b, w, r;       
void initial()     
{
	while ( !q.empty() )
		q.pop();
	for ( int i = 0; i < maximum; ++i )
		G[i].clear();
	memset( visible, false, sizeof(visible) );
}
void getsc()      
{
	for ( int i = 0; i < M; ++i )
	{
		scanf( "%d%d%d", &a, &b, &w );
		G[a].push_back( EDGE( a, b, w ) );
		G[b].push_back( EDGE( b, a, w ) );
	}
}
int prim()
{
	for ( int i = 0; i < G[0].size(); ++i )
	{
		q.push( G[0][i] );
	}
	visible[0] = true;     
	int	rs	= 0;   
	int	cs	= N - 1;  
	while ( !q.empty() && cs )
	{
		EDGE p = q.top(); q.pop();
		if ( visible[p.toward] )
			continue;
		rs += p.distance;
		if ( r == 1 && p.from <= p.toward )
			cout << p.from << " " << p.toward << endl;
		if ( r == 1 && p.toward < p.from )
			cout << p.toward << " " << p.from << endl;
		cs--;
		visible[p.toward] = true; 
		for ( int i = 0; i < G[p.toward].size(); ++i )
		{
			EDGE pp = G[p.toward][i];
			if ( !visible[pp.toward] )
				q.push( pp );
		}
	}
	printf( "%d\n", rs );
}
int main()
{
	int Sum;
	cin >> Sum;
	while ( Sum > 0 )
	{
		scanf( "%d %d %d", &N, &M, &r );
		initial();
		getsc();
		prim();
		Sum--;
	}
	return(0);
}
