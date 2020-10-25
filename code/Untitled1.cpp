#include<stdio.h>
#include<math.h>
int main()
{
	int n,m ;
	scanf("%d%d",&n,&m) ;
	if ( n>=m )
	{
		for ( int i=1 ; i<=n ; i++ )
		{
			for ( int j=n-m+1 ; j<=n ; j++ ) 
				if ( i>j) printf( "%d", i ) ;
				else printf( "%d", j ) ;
			printf("\n") ;
		}
	}
	else 
	{
		for ( int i=m-n+1 ; i<=m ; i++ )
		{
			for ( int j=1 ; j<=m ; j++ ) 
				if ( i>j) printf( "%d", i ) ;
				else printf( "%d", j ) ;
			printf("\n") ;
		}
	}
	return 0 ;
}

