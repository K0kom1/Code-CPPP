#include<bits/stdc++.h>
using namespace std;
const int N=1e7+1;
// void sorting7() {
//     int n;
//     cin >> n;
//     int a[n+1];
//     for (int i=0; i < n; i++) cin >> a[i];
//     int l=0, r=n-1;
//     while (l < n && a[l] < a[l+1]) l++;
//     while (r >= 0 && a[r] > a[r-1]) r--;
//     int min=N, max=0;
//     for (int i=l; i <= r; i++) {
//         if (min > a[i]) min = a[i];
//         if (max < a[i]) max = a[i];
//     }
// 	l=0; r=n-1;
//     while (a[l] <= min) l++;
//     while (a[r] >= max) r--;
//     cout << l+1 <<" "<< r+1 << endl;
//     return ;
// }
// int main()
// {
// 	int test;
// 	cin >> test;
// 	while(test--){
// 		sorting7();
// 	}
// 	return 0 ;
// }
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
	int test;
	cin >> test;
	while(test--){
        int n;
        cin >> n;
        int a[n+1],b[n+1];
        for (int i=0; i < n; i++) {
            cin >> a[i];
            b[i]=a[i];
        } 
		qsort(b,0,n-1);
        int l=0, r=n-1;
        while (a[l] == b[l]) l++;
        while (a[r] == b[r]) r--;
        cout << l+1 <<" "<< r+1 << endl;
	}
	return 0 ;
}
