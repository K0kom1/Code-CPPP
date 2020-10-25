#include <stdio.h>
int n;
int a[200][200];
void xoahang(int i)
{
    for (int h=i; h<n; h++)
        for (int j=0; j<n; j++)
            a[h][j]=a[h+1][j];
    return;
}

void xoacot (int j)
{
    for (int i=0; i<n; i++)
        for (int c=j; c<n; c++)
            a[i][c]=a[i][c+1];
    return;
}
int main() {
    int k;
    scanf("%d",&n);
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            scanf ("%d",&a[i][j]) ;
    scanf ("%d",&k) ;
    for (int q=0; q<k; q++)
    {
        int i,j;
        scanf ("%d%d",&i,&j) ;
        xoahang (i) ;
        xoacot (j) ;
        n-- ;
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++) printf  ("%d ",a[i][j]) ;
        printf ("\n") ;
    }
    return 0;
}
