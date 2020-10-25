
#include<stdio.h>
#include<math.h>
int n ;
int beautiful(int k)
{
	int i=0,t=0,a[100] ;
	while ( k!=0 )
	{
		a[++i]=k%10 ;
		t+=a[i] ;
		k/=10 ;
	}
	if ( t%10!=0 ) return 0 ;
	for ( int j=1 ; j<=n/2 ; j++ )
		if ( a[j]!=a[n-j+1] ) return 0 ;
	return 1; 
}
int main()
{
	int d=0,m=1;
	scanf( "%d",&n ) ;
	for ( int i=1 ; i<=n-1 ; i++ ) m*=10 ;

	for ( int i=m ; i<=10*m-1 ; i++ )
		if ( beautiful(i)==1) d++ ;
	printf("%d",d) ;
	return 0;
}

