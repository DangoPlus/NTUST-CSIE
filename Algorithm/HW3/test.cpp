#include <stdio.h>
#include <algorithm>
using namespace std;
struct store
{
	int number, stime, ftime, value;
};
bool compare( store a, store b )
{
	return(a.ftime < b.ftime);
}


int n;
int act_sel( void )
{
	int	Total;
	int	sum[Total];
	int	s[Total];
	scanf( "%d", &Total );
	store activity[Total];
	memset( s, -1, sizeof s );
	for ( int i = 0; i < Total; i++ )
	{
		scanf( "%d %d %d %d", &activity[i].number, &activity[i].stime, &activity[i].ftime, &activity[i].value );
	}
	sort( activity, activity + Total, compare );
	sum[0]	= activity[0].value;
	s[0]	= 0;
	for ( int i = 1; i < Total; i++ )
	{
		sum[i] = 0;
		int j;
		for ( j = i - 1; j >= 0; j-- )
		{
			if ( activity[j].ftime <= activity[i].stime )
			{
				if ( (sum[i - 1] > sum[j] + activity[i].value) && (sum[i - 1] >= sum[i]) )
					sum[i] = sum[i - 1];
				if ( (sum[i - 1] <= sum[j] + activity[i].value) && (sum[j] + activity[i].value >= sum[i]) )
				{
					sum[i]	= sum[j] + activity[i].value;
					s[i]	= j;
				}
			}   else{
				if ( (sum[i - 1] > activity[i].value) && (sum[i - 1] >= sum[i]) )
					sum[i] = sum[i - 1];
				if ( (sum[i - 1] <= activity[i].value) && (activity[i].value >= sum[i]) )
				{
					sum[i]	= activity[i].value;
					s[i]	= i;
				}
			}
		}
	}
	printf( "%d\n", sum[Total - 1] );
	int	k = Total - 1, q = 0;
	int	p[Total];
	while ( s[k] != k )
	{
		if ( s[k] != -1 )
		{
			p[q]	= activity[k].number;
			k	= s[k];
			q++;
		}else k--;
	}
	p[q] = activity[k].number;
	sort( p, p + q + 1 );
	for ( int i = 0; i < q; i++ )
		printf( "%d ", p[i] );
	printf( "%d", p[q] );
	printf( "\n" );
	n--;
	return(0);
}


int main( void )
{
	scanf( "%d", &n );
	while ( n > 0 )
		act_sel();
}
