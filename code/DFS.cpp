#include<bits/stdc++.h>
using namespace std ;
int check[1005][1005] ;
int V,E,u ;
void DFS(int u ) 
{
	check[u][u]=1 ;
	for ( int i=1 ; i<=V ; i++ )
		if ( check[u][i]==1 )
			if ( check[i][i]==0 )
			{
				cout << i << " " ;
				DFS(i) ;
			}
}
int main(){
	int test ;
	cin >> test ;
	while ( test-- )
	{
		cin >> V >> E >> u ;
		memset(check, 0, sizeof(check));
		for ( int i=1 ; i<=E ; i++ )
		{
			int a , b ;
			cin >> a >> b ;
			check[a][b]=check[b][a]=1 ;
		}
		cout << u << " " ;
		DFS(u) ;
		cout << endl ;
	}
	return 0 ;
}


