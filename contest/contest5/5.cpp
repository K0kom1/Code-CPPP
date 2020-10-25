#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int n , k ;
long long c[1000][1000];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                if(j == 0 || j == i)
                    c[i][j] = 1;
                else
                    c[i][j] = (c[i-1][j-1] + c[i-1][j]) % mod;
            }
        }
        cout << c[n][k] << endl;
    }
    
}
