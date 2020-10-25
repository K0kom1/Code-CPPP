#include<bits/stdc++.h>
using namespace std;
const int N=1e9+7;
void qsort(long long a[], int l , int r)
{
	int  i=l , j=r ;
	long long x=a[(l+r)/2] ;
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

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n,m;
        cin >> n >> m;
        long long a[n+m];
        for (int i=0; i < n+m; i++) cin >> a[i];
        qsort(a,0,n+m-1);
        for (int i=0; i < n+m; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
    
}