#include<bits/stdc++.h>
using namespace std ;
int A[1005][1005];
void BFS_hangdoi( int u , int n)
{
	queue <int> hangdoi ;
	hangdoi.push(u) ;
	cout << u << " " ;
	A[u][u]=1 ;
	while ( !hangdoi.empty() )
	{
		u=hangdoi.front() ;
		hangdoi.pop() ;
		for ( int i=1 ; i<=n ; i++ )
		{
			if ( A[u][i]==1 && A[i][i]==0 )
			{
				hangdoi.push(i) ;
				cout << i << " " ;
				A[i][i]=1 ;
			}
		}
	}
	cout << endl ;
}
int main(){
	int t; 
	int V,E,u ;
	cin >> t;

	while(t--)
	{
		cin >> V >> E >> u ;
		memset(A, 0, sizeof(A));
		for ( int i=1 ; i<=E ; i++ )
		{
			int a , b ;
			cin >> a >> b ;
			A[a][b]=A[b][a]=1 ;
		}
		BFS_hangdoi(u, V);
	}
	return 0 ;
}


