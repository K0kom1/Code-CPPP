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
            cout << m << " ";
            k/=m ;
       }
    }
    return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        int k;
        scanf("%d", &k);
        pt(k);
        cout << endl;
    }

    return 0;
}
