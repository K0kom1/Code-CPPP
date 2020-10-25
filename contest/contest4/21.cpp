#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7; 

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n, k, res = 1;
		cin >> n >> k;
		while(k)
		{
			if(k & 1)
				res = res * n % MOD;
			k /= 2;
			n = n * n % MOD;
		}
		cout << res << endl;
	}
	return 0;
}

