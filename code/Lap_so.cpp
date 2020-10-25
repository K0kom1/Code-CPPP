#include <stdio.h>


int main() {
    int t ;
    scanf("%d",&t);
    for (int i=1; i<=t; i++) 
    {
        int n,k=1,a[101];
        scanf ("%d",&n);
        for (int j=1; j<=n; j++) scanf("%d",&a[j]);
        while (k<n)
        {
            int note=0;
            for (int j=k+1; j<=n; j++)
                if (a[k]==a[j]) 
                {
                    printf ("%d\n",a[k]);
                    note=1;
                    break;
                }
            if (note==1) break;
            k++ ;
            if (k==n) printf ("NO\n") ;
        }
    }
    return 0;
}

