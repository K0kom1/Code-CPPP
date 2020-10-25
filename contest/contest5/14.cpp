#include<bits/stdc++.h>

using namespace std;
int C[1005][1005];
int qhd(string ss, int n)
{
	int i, j;
	memset(C, 0, sizeof(C));
	for(i = 1; i <= n; ++i)
	{
		for(j = 1; j <= n; ++j)
		{
			if(ss[i-1] == ss[j-1] && i != j)
				C[i][j] = C[i-1][j-1] + 1;
			else 
				C[i][j] = max(C[i-1][j], C[i][j-1]);
				
		}
	}
	return C[n][n];
}
int main()
{
	int test;
	cin >> test;
	string s;
	int n;
	while(test--)
	{
		cin >> n;
		cin >> s;
		cout << qhd(s, n) << endl;
	}
	return 0;
}

