#include<bits/stdc++.h>
using namespace std;

unsigned long long Pow(int n, int k)
{
	unsigned long long res = 1;
	while(k)
		{
			if(k & 1)
				res = res * n;
			k = k >> 1;
			n = n * n;
		}
	return res;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long n, k;
		cin >> n >> k;
		while (k != (Pow(2, n-1))) 
		{
			if(k > (Pow(2, n-1)))
				k = (Pow(2, n)) - k;
			n--;
		}
		cout << n << endl;
	}
	return 0;
}
