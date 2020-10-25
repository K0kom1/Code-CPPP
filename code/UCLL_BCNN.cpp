#include <stdio.h>

int ucll(int a, int b)
{
    if ( b==1 || a==1) { return b ;}
    while ( b!=0) 
    {
          int c=b ;
          b= a%b ;
          a=c ;
    }
    return a;
}
   
int main()
{
    int a,b,n;
    scanf("%d", &n);
    for ( int i=1; i<=n; i++ )
    {
        scanf("%d%d",&a,&b);
        int k=ucll(a,b);
        printf("%d %d\n", k, a*b/k);
    }
    return 0;
}
