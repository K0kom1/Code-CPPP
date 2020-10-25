#include<bits/stdc++.h>
using namespace std;
const int N=1e9+7;
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
        cin >> n;
        int a[n];
        for (int i=0; i < n; i++)
            cin >> a[i];
        qsort(a,0,n-1);
        
        for (int i=0; i < n/2; i++) {
            cout << a[n-i-1] << " ";
            cout << a[i] << " ";
        }
        if (n % 2) cout << a[n/2] ;
        cout << endl;
    }
    return 0;
    
}