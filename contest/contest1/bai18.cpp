#include<bits/stdc++.h>
using namespace std;
 
int a[32], t[32], n, s, m, res, dem = 0; 
 
pair<long long, int> A[32];
 
vector< pair<long long, int> > vt;
 
int binarySearch(int value, int left, int right);
 
int main()
{
	cin >> n >> s;
	for(int i = 0; i < n; ++i) 
		cin >> t[i];
	m = n / 2;
	res = n + 1;
 
	for(int i = 0; i < (1 << m); ++i)
	{
		int e = 0;
        pair<long long, int> d = pair<long long, int> (0,0);
        for(int j = 0; j < m; ++j)
            if((i & (1 << j)))
			{
                d.first += t[j];
                e++;
            }
            d.second += e;
        vt.push_back(d);
    }
 
	sort(vt.begin(), vt.end());
 
	m = n - m;
	for(int i = 0; i < (1 << m); ++i)
	{
		int e = 0;
        pair<long long, int> d = pair<long long, int> (0,0);
        for(int j = 0; j < m; ++j)
            if((i & (1 << j)))
			{
                d.first += t[n-m + j];
                e++;
            }
        //int tim = binarySearch(s - d.first, 0, n-m - 1);
        int hh = s - d.first;
        int f = lower_bound(vt.begin(), vt.end(), hh) - vt.begin();
        int tim = vt[f].second; 
		res = min(res, tim + e);
    }
 
	cout << res;
	return 0;
}
 
int binarySearch(int value, int left, int right) 
{
	int ans = n + 1;
	while (left <= right) 
	{
		int middle = (left + right) / 2;
		if (vt[middle].first == value)
			ans = min(ans, vt[middle].second);
		if (vt[middle].first > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return ans;
}
