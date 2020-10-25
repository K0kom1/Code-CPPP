#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, k;
		vector<int> vt;
		cin >> n >> m >> k;
		int h = m + n;
		for (int i = 0; i < h; ++i)
		{
			int x; cin >> x;
			vt.push_back(x);
		}
		sort(vt.begin(), vt.end());
		cout << vt[k-1] << endl;
	}
	return 0;
}

