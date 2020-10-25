#include<bits/stdc++.h>
using namespace std;

void qsort(int a[], int l , int r)
{
	int  i=l , j=r ;
	int x=a[(l+r)/2] ;
	do{
		while ( a[i]<x ) i++ ;
		while ( a[j]>x ) j-- ;
		if ( i<=j )
		{
			swap(a[i],a[j]) ;
			i++ ;
			j-- ;
		}
	}while ( i<=j ) ;
	if ( l<j ) qsort(a,l,j) ;
	if ( i<r ) qsort(a,i,r) ;
	return ;
}
void xuatmang(int a[], int n ) 
{
	for ( int i=1 ; i<=n ; i++ )
		cout << a[i] << " " ;
	cout << endl ;
	return ;
}
int kangaru( int a[], int n )
{
	int static b[100000] ;
	int i=n-1,j=n,d=0 ;
//	while ( a[j]<2*a[i] ) j++ ;
	do{
		if ( 2*a[i]<=a[j] )
		{
			cout << i<<" "<<j<<endl;
			b[i]=1 ;
			j-- ;
			while ( b[j]==1 ) j-- ;
			i-- ;
			while ( i>=j ) i-- ; 
				cout << i<<" "<<j<<endl;
			d++ ;
		}
		else i-- ;
	}while ( i>0 ) ;
	return (n-d) ;
}
int main()
{
	int t, n ;
	cin >> t ;
	for ( int i=1 ; i<=t ; i++ )
	{
		int n , a[100000] ;
		cin >> n ;
		for ( int j=1 ; j<=n ; j++ )
			cin >> a[j] ;
		qsort(a,1,n) ;
		xuatmang(a,n) ;
		cout << kangaru(a,n) << endl ;
	}
	return 0 ;
}

