#include<bits/stdc++.h>
using namespace std ;
const long long m = 1e9 + 7; 
unsigned long long Powll(unsigned long long Hx,unsigned  long long Gx) 
{ 
     unsigned long long res = 1; 
    while (Gx) 
	{ 
        if (Gx & 1)	
			res = res * Hx % m; 
			
        Gx = Gx >> 1; 
        Hx = Hx * Hx % m; 
    } 
    return res; 
} 
int main(){
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL); cout.tie(NULL);
	unsigned long long n , k ,tong=0;
	cin >> n >> k ;

	unsigned long long a[5001] ;
	// tinh to hop:
	a[0]=1 ; a[n]=1 ;
	for ( int i=1 ; i<=n/2 ; i++ )
	{
		a[i]=(a[i-1]*(n-i+1)/i) % m ;
		a[n-i]=a[i] ;
	}

	for ( int i=1 ; i<=n ; i++ )
	{
		tong=(tong+ ( a[i] * Powll(i ,k ) )%m )%m ;
	}
	cout << tong ;
	return 0 ;
}

