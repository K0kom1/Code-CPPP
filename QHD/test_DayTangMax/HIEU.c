#include <stdio.h>
int main()
{
	int n , a[1001] , f[1001] , res = 0 , i , j ;
	scanf("%d",&n) ;
	for(i=0;i<n;i++) {
   		scanf("%d",&a[i]) ;
   		f[i] = 1 ;
   		for(j=0;j<i;j++)
      		if ( a[i] > a[j] && f[j] + 1 > f[i] ) f[i] = f[j] + 1 ;
   		if ( f[i] > res ) res = b[i] ;
	}
	printf("%d",res) ;
	return 0 ;
}
