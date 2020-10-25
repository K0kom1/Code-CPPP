#include <stdio.h>

int main() {
    int n,m,a[101],buoc=0;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) scanf("%d",&a[i]);
   		m=n-1 ;
    for (int i=1; i<n; i++)
    {
        int note=0 ;
        for (int j=1; j<=m; j++)
        {
            if (a[j]>a[j+1])
            {
                int b=a[j] ;
                a[j]=a[j+1] ;
                a[j+1]=b ;
                note=1; //danh dau mang co su thay doi.
            }
        }
        m-- ;
        if (note==1) 
        {
            buoc++;
            printf ("Buoc %d:",buoc);
            for (int k=1; k<=n; k++)
                printf (" %d",a[k]) ;
            printf ("\n");
        }
        else break;
        }
    return 0;
}
