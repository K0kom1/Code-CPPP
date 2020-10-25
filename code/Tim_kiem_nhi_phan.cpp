#include<bits/stdc++.h>
using namespace std;

int n,k ,a[100000] ;
int tknp( int l, int r )   // De quy tim kiem nhi phan.
{
	int t=(l+r)/2 ;
	if ( l>r ) return 0 ;
	if ( a[t]==k ) return t ;
	else 
		if ( a[t]<k ) tknp(t+1,r) ;
		else tknp(l,t-1) ;
}
int main()
{
	int t ;
	cin >> t ;
	for ( int i=1 ; i<=t ; i++ )
	{
		cin >> n >> k ;
		for ( int j=1 ; j<=n ; j++) cin >> a[j] ;
		int x=tknp(1,n) ;
		if (x!=0) cout<< x<< endl ;
			else cout << "NO" << endl ;
	}
}
