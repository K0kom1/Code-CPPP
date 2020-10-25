#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7; 

unsigned long long Powll(unsigned long long Hx,unsigned long long Gx) 
{ 

    unsigned long long res = 1; 
    while (Gx) 
	{ 
        if (Gx & 1)	
			res = res * Hx % MOD; 
			
        Gx = Gx >> 1; 
        Hx = Hx * Hx % MOD; 
    } 
    return res; 
} 

int main()
{
//	unsigned long long n, k, sum = 0;
//	cin >> n >> k;
//	
//	vector< vector<unsigned long long> > C(n + 1, vector<unsigned long long> (n + 1, 0));
//	C[0][0] = 1;
//	for(int i = 1; i <= n; ++i)
//	{
//		C[i][0] = 1; C[i][i] = 1;
//		for(int j = 1; j < i; ++j)
//		C[i][j] = (C[i - 1][j - 1] % MOD + C[i - 1][j] % MOD) % MOD;
//	}
//	
//	for(int i = 1; i <= n; ++i)
//	{
//	unsigned long long y = Powll(i, k) % MOD;
//		sum = (sum+ C[n][i] * y % MOD) % MOD;
//	}
//	cout << sum;
unsigned long long y = Powll(3,5) % MOD;
cout << y ;
	return 0;
}

