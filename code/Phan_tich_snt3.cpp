#include <stdio.h>
#include <math.h>
int pt(int k)
{
	int dem=0;
    int m=-1 ;  
    for ( int i=2 ; i<=3 ; i++ )
	{
		while ( k%i==0 )
    	{
    	    dem++ ;
     	   k/=i ;
   		}
    	if (dem>0) printf("%d %d\n",i,dem);
    	dem=0 ;
	}
	
    while (k!=1)
    { 	
        m+=6;
        dem=0;
        while ( k%m==0 )
        {
            dem++ ;
            k/=m ;
       	}
        if (dem>0) printf("%d %d\n",m,dem);
        dem=0 ;
        while ( k%(m+2)==0 )
        {
            dem++ ;
            k/=(m+2) ;
        }
        if (dem>0) printf("%d %d\n",m+2,dem);
    }
    return 0;
}
int main() {
    int k;
    scanf ("%d", &k);
    pt(k);
    return 0;
}

