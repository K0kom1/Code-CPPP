#include<bits/stdc++.h>

using namespace std;

int a[1005], f[1005], n;

int qhd()
{
	int res = 1;
	memset(f, 0, sizeof(f));
	for(int i = 1; i <= n; ++i)
	{
		f[i] = 1;
		for(int j = 1; j < i; ++j)
			if(a[j] < a[i]) 
				f[i] = max(f[i], f[j] + 1);
		res = max(res, f[i]);
	}
	return res;
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	cout << qhd();
	return 0;
}

