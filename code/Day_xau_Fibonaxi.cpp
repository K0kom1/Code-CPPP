#include<bits/stdc++.h>
using namespace std ;
long long A[100000] ;
void init()
{
	A[1]=1 ;
	A[2]=1 ;
	for ( int i=3 ; i<=93 ; i++ ) 
		A[i] = A[i-1] + A[i-2] ;

	return ;
}
char VLL(long long i, int x)
{
	if ( x==1 ) return 'A' ;
	if ( x==2 ) return 'B' ;
	if ( i>A[x-2] ) return VLL( i-A[x-2], x-1 ) ;
	return VLL( i, x-2 ) ; 
}
int main(){
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL); cout.tie(NULL);
	int test ,N ;
	long long i ;
	init() ;
	cin >> test ;
	while ( test-- ){
		cin >> N >> i ; 
		cout << VLL(i, N) << endl ;
	}
	return 0 ;
}


