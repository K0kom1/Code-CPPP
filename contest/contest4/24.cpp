#include<bits/stdc++.h>
using namespace std;
const long long MOD = 123456789; 

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n = 2, k, res = 1;
		cin >> k;
		k--;
		while(k)
		{
			if(k & 1)
				res = res * n % MOD;
			k = k >> 1;
			n = n * n % MOD;
		}
		cout << res << endl;
	}
	return 0;
}

