#include <bits/stdc++.h>
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
    int q,n;
    cin >> n >> q;
    int a[n];
    for (int i=0; i < n; i++) cin >> a[i];
    qsort(a,0,n-1);
    while (q--) {
        int l,r;
        cin >> l >> r;
        int i=0, j=n-1;
        while (i < n && a[i] < l) i++;
        while (j >= 0 && a[j] > r) j--;
        if (j-i+1 > 0) cout << j-i+1 << endl;
        else cout << 0 << endl;
    }
}