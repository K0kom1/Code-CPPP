#include <iostream>
using namespace std;

int main() {
	int a[5],d=0 ;
	for ( int i=1 ; i<=4 ; i++ )
		cin >> a[i] ;
	for ( int i=1 ; i<=4 ; i++ )
		for ( int j=1 ; j<=4 ; j++ )
			if ( a[i]<a[j] ) swap(a[i],a[j]) ;
	for ( int i=1 ; i<=3 ; i++ ) 
		if ( a[i]==a[i+1] ) d++ ;
	cout << d ;

	return 0;
}

