#include<bits/stdc++.h>
using namespace std;
//void swap(int &a, int &b)
//{
//    int t = a;
//    a = b;
//    b = t;
//}
void xuatmang(int a[], int n ) 
{
	for ( int i=1 ; i<=n ; i++ )
		cout << a[i] << " " ;
	return ;
}
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
int main()
{
	int n, m, a[20005] ;
	cin >> n >> m;
	for ( int i=0 ; i<n ; i++)
		cin >> a[i] ;
	qsort(a,0,n-1) ;
	cout << abs(a[(n-1)/2]-m);
//	xuatmang(a,n) ;
	return 0 ;
}

