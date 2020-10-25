#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e5+10;

void solve() {
	long long dp[mxN],n;
	cin >> n;
	vector<long long> arr(n);
	for (auto& i: arr) cin >> i;
	if (n == 1) {
		cout << arr[0] << "\n";
		return;
	}
	dp[0] = arr[0];
	dp[1] = arr[1];
	if (n >= 3) dp[2] = arr[0] + arr[2];
	for (int i = 3; i < n; ++i) dp[i] = max(dp[i-2], dp[i-3]) + arr[i];
	cout << max(dp[n-1], dp[n-2]) << "\n";
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	cin >> t;
	while (t--)
		solve();
}