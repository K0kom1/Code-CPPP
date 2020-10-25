#include<bits/stdc++.h>
using namespace std ;
long long A[52] ;
void init()
{
	A[0]=0 ;
	for ( int i=1 ; i<=50 ; i++ ) 
		A[i] = 2*A[i-1] + 1 ;
	return ;
}
int Dayso(int n,long long k)
{
	if ( k==A[n-1]+1 ) return n ;
	if ( k>A[n-1]+1 ) return Dayso( n-1, k-A[n-1]-1 ) ;
	return Dayso( n-1,k) ; 
}
int main(){
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL); cout.tie(NULL);
	int test ,n ;
	long long k ;
	init() ;
	cin >> test ;
	while ( test-- ){
		cin >> n >> k; 
		cout << Dayso(n, k) << endl ;
	}
	return 0 ;
}


