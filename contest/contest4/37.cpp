#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		vector<int> vt;
		cin >> n >> k;
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			vt.push_back(x);
		}
		int ans = upper_bound(vt.begin(), vt.end(), k) - vt.begin();
		if (ans == 0 && vt[ans] > k) cout << -1 << endl;
		else cout << ans << endl;
	}
	return 0;
}

