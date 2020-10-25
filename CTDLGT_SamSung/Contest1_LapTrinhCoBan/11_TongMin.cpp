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
int main()
{	
	int test,a[22];
	cin >> test;
	while(test--){
		int n;
		long long x=0, y=0;
		cin >> n;
		for(int i=1; i <= n; i++) cin >> a[i];
		qsort(a,1,n);
		
		for (int i=1; i <= n/2; i++){
			x = x*10 + a[2*i-1];
			y = y*10 + a[2*i];
		}
		if (n%2 != 0) x = x*10 + a[n];
		cout << x+y << endl;
	}

	return 0 ;
}

