#include<bits/stdc++.h>
using namespace std;

int n,k ,a[100000] ;
int tknp( int l, int r )   // De quy tim kiem nhi phan.
{
	int t=(l+r)/2 ;
	if ( l>r ) return 0 ;
	if ( a[t]==k ) return 1 ;
	else 
		if ( a[t]<k ) tknp(t+1,r) ;
		else tknp(l,t-1) ;
}
int main()
{
	int m ;
	cin >> n >>m ;
	for ( int j=1 ; j<=n ; j++) cin >> a[j] ;
	for ( int i=1 ; i<=m ; i++ )
	{
		cin >> k ;
		cout << tknp(1,n)<<endl ;
	}
}
