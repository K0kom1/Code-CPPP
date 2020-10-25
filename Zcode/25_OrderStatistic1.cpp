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

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n,k;
        cin >> n >> k;
        int a[n];
        for (int i=0; i < n; i++) {
            cin >> a[i];
        }
        qsort(a,0,n-1);
        cout << a[k-1] << endl;
    }
    return 0;
    
}
