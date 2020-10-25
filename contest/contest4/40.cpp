#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		vector<int> vt;
		int n, k = 0;
		cin >> n;
	
		for(int i = 0; i < n; i++)
		{
			int x; 
			cin >> x;
			vt.push_back(x);
		}
		
		int ans = lower_bound(vt.begin(), vt.end(), 1) - vt.begin();
		
		cout << ans;
	}
	return 0;
}

