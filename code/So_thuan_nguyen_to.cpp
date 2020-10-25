#include <stdio.h>
#include <math.h>

//ham kiem tra x co phai la so nguyen to
int snt(long x ) 
{
    long  k,m; 
    if ((x==2) || (x==3) )
       return 1;
    if ((x<2)||(x%2==0) || (x%3==0))
       return 0;
       
    k=-1; m=trunc(sqrt(x));
    do {
        k=k+6;
        if ((x%k==0) || (x%(k+2)==0))
           break;
     } while ( k<=m);      
     if (k>m) return(1); 
     else return(0);
}
//ham kiem tra cac cs va tong cs co phai la snt
int tcs(int x)
{
    int t=0;
    while ( x!=0 )
    {
        int k = x%10 ;
        if (k!=2 && k!=3 && k!=5 && k!=7)                          
        return 0;
        x = x/10 ;
        t+=k ;
    }
    if (snt(t) ==1) return 1;
    else return 0;
}

int main() {
    int n ;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        int a,b,d=0;
        scanf("%d%d", &a,&b);
        for (int j=a; j<=b; j++)
        {
            if ( tcs(j)==1 )
                if ( snt(j)==1 ) d++;
        }
        printf ("%d\n",d) ;
    }
    return 0;
}
