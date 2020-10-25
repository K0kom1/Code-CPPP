#include<bits/stdc++.h>
using namespace std;
#define max 100
int main()
{
	int a[max] ,n,dem=0;
	cin >> n ;
	for ( int i=1 ; i<=n ; i++ ) cin >> a[i] ;
	for ( int i=1 ; i<=n ; i++ )
		if (a[i]%2==0) dem++ ;
	cout << n-dem ;
	for ( int i=1 ; i<=n ; i++ )
		if (a[i]%2==1) cout << " " << a[i] ;
	cout << endl << dem ;
	for ( int i=1 ; i<=n ; i++ )
		if (a[i]%2==0) cout << " " << a[i] ;
	return 0 ;
}

