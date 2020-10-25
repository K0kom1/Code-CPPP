#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

int n , k ;
unsigned long long c[1005][1005], a[1005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if(n < k) cout << '0' << endl;
        else
        {
        	memset(a, 0, k+1);
    	    a[0] = 1;
    	    for(int i = 0; i <= n; i++)
          	for(int j = 0; j <= i; j++)
          	{
  	            if(j == 0 || j == i)
                 	c[i][j] = 1;
             	else
                	c[i][j] = (c[i-1][j-1] + c[i-1][j]) % mod;
 	                	
              	if(a[j] == 0) a[j] = a[j-1] * (j+1) % mod;
          	}
  	      	cout << c[n][k] * a[k-1] % mod << endl;	
		}
    }
    return 0;
}
