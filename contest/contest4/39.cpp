#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n+1], b[n+1];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		int m = -1;
		for(int i = 0; i < n-1; i++)
		{
			cin >> b[i];
			if (m == -1 && b[i] != a[i])
				m = i;
		}
		cout << m + 1 << endl;
	}
	return 0;
}
