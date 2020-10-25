#include<bits/stdc++.h>
using namespace std ;
#define max 100

int snt(long x) //ham kiem tra x co phai la snt.
{
	long  m,k;
	if ((x==2) || (x==3)) return(1);
	if ((x<2)||(x % 2==0)||(x % 3==0)) return(0);
	k=5; m=trunc(sqrt(x));

	while (k<=m){
		if ((x % k==0)||(x % (k+2)==0)) return(0);
		k=k+6;
	}
	return(1);
	}
int main(){
    int n,x,sum=0 ,a[max][max];
    cin >> n ;
    for ( int i=1; i<=n ; i++ )
        for ( int j=1; j<=n ; j++ ) cin >> a[i][j] ;
    for ( int i=1; i<=n ; i++ )
        for ( int j=1; j<=i ; j++ )
            if (snt(a[i][j])) sum+=a[i][j];
    cout <<sum ;
    return 0 ;
}
