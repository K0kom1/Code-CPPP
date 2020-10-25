#include <stdio.h>

int main() {
    int n ,j;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        int m,a[101];
        scanf("%d", &m);
        for ( j=1; j<=m; j++) scanf("%d", &a[j]) ;
        for ( j=1; j<=m/2; j++)
            if (a[j]!=a[m-j+1]) break;
        if ( j==m/2 +1 ) printf("YES\n") ;
        else printf ("NO\n") ;
    }
    return 0;
}
