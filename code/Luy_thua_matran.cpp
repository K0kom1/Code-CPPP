#include<bits/stdc++.h>
using namespace std;
long long a[11][11], t[11][11] ,m=1000000007;

int nhanmatr(int n,long long a[11][11], long long b[11][11])
{
	static long long t1[11][11] ;
	for ( int i=1 ; i<=n ; i++ )
		for ( int j=1 ; j<=n ; j++ )
		{
			for ( int l=1 ; l<=n ; l++ )
				t1[i][j]+=a[i][l]*b[l][j] ;
		}
	for ( int i=1 ; i<=n ; i++ )
		for ( int j=1 ; j<=n ; j++ )
			t[i][j]=t1[i][j] ;
	return 0 ;
}
int inkq( int n) 
{
//	cout << n ;
	for ( int i=1 ; i<=n ; i++ )
	{
		for ( int j=1 ; j<=n ; j++ )
			cout << t[i][j] <<" " ;
		cout << endl ;
	}
	return 0 ;
}

void  luythua( int n,int k )
{
	if (k==0) 
	{
		inkq(n) ;
		return ;
	}
	if ( k%2==0 )
	{
		nhanmatr(n,t,t) ;
		luythua(n,k/2) ;
	}
	else 
	{
		
		nhanmatr(n,t,a) ;
		luythua(n,k-1) ;
	}
	return ;
}

int main()
{
	int x,n ,k;
	cin >> x ;
	for ( int i=1 ; i<=x ; i++ )
	{
		cin >> n >> k ;
		for ( int j=1 ; j<=n ; j++ )
			for ( int l=1 ; l<=n ; l++ )
			{
				cin >> a[j][l] ;
				t[j][l]=a[j][l] ;
			}
		k-- ;	
		luythua(n,k) ;
	}
}
