#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long n;
struct matrix
{
    long long c[2][2];
    matrix()
    {
        c[0][0] = 0;
        c[0][1] = 1;
        c[1][0] = 1;
        c[1][1] = 1;
    }
};
matrix operator * (matrix a, matrix b)
{
    matrix res;
    for(int i = 0 ; i <= 1; i++)
    {
        for(int j = 0; j <= 1; j++)
        {
            res.c[i][j] = 0;
            for(int k = 0 ; k <= 1; k++)
                res.c[i][j] = (res.c[i][j] + a.c[i][k]*b.c[k][j])%mod;
        }
    }
    return res;
}
matrix powll(matrix a, long long n)
{
        if(n==1)    return a;
        if(n % 2 == 0)
        {
            matrix x = powll(a,n/2);
            return x*x;
        }
        return a*(powll(a,n-1));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if(n == 0 || n == 1)    cout << n << endl;
        else
        {
            matrix res;
        res = powll(res,n);
        cout << res.c[0][1] << endl;
        }
    }
}

