#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;
long long f[100005];

long long qhd(int n, int k)
{
    memset(f,0,sizeof(f));
    f[0] = 1;
    f[1] = 1;
    for(int i  = 2; i <= n ;i++)
    {
        f[i] = 0;
        for(int j = 1; j <= k && j <= i; j++)
        {
            f[i] = (f[i] + f[i-j]) % mod;
        }
    }
    return f[n];
}
int main()
{
    int t,n,k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << qhd(n,k) << endl;
    }
}
