#include<stdio.h>
#include<math.h>
int main()
{
	int n,m ;
	scanf("%d%d",&n,&m) ;
	if ( n>=m )
	{
		for ( int i=n ; i>=1 ; i-- )
		{
			for ( int j=n ; j>=n-m+1 ; j-- ) 
				if ( i>j) printf( "%c",'`'+i ) ;
				else printf( "%c",'`'+j ) ;
			printf("\n") ;
		}
	}
	else 
	{
		for ( int i=m ; i>=m-n+1 ; i-- )
		{
			for ( int j=m ; j>=1 ; j-- ) 
				if ( i>j) printf( "%c", '`'+i ) ;
				else printf( "%c",'`'+j) ;
			printf("\n") ;
		}	
	}
	return 0 ;
}

