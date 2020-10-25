#include<bits/stdc++.h>
using namespace std;
#define max 100;
int main()
{
    int n,d,c ;
    cin >> n ;
    int a[max][max],u=m,v=n;
  
    m=n*n ;
 
    while (r!=m)
    {
        for(int i=y;i<n;i++)
            {r++; a[x][i]=r;}
        x++;
        for(int i=x;i<m;i++)
            {r++; a[i][n]=r;}
        n--;
        for(int i=n-1;i>=y;i--)
            {r++; a[m][i]=r;}
        m--;
        for(int i=m-1;i>=x;i--)
            {r++; a[i][y]=r;}
        y++;
    }
    for(int i=0;i<u;i++)
    {
        for(int j=0;j<v;j++) cout << a[i][j] << ' ';
        cout << endl;
    }

    return 0;
    }