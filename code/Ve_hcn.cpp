#include<stdio.h>
int main()
{
	int n,m ;
	scanf("%d%d",&n,&m) ;
	for ( int i=1 ; i<=n ; i++ )
	{
		if ( i<=m )
		{
			for ( int j=i ; j<=m ; j++ ) printf( "%c",'@'+j ) ;
			for ( int j=i-1; j>0 ; j-- ) printf( "%c",'@'+j  ) ;
		}
		else
		{
//			printf( "%c",'@'+i  ) ;
			for ( int j=m ; j>=1 ; j-- ) printf( "%c",'@'+j  ) ;
		}
		printf("\n") ;
	}
	return 0 ;
}

