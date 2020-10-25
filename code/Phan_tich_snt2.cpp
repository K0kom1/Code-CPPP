#include <stdio.h>
#include <math.h>
int pt(int k)
{
    int m=1 ;
    while (k!=1)
    {
        m++; 
        int dem=0;
        while ( k%m==0 )
        {
            dem++ ;
            k/=m ;
       }
        if (dem>0) printf(" %d(%d)",m,dem);
    }
    return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        int k;
        scanf ("%d", &k);
        printf ("Test %d:", i) ;
        pt(k);
        printf("\n");
    }
    return 0;
}
