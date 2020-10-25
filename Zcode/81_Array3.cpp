#include<bits/stdc++.h>
using namespace std;
int main() {
	int test;
	cin >> test;
	while (test--) {
		string s;
		cin >> s;
		int n = s.length(), k = n-1;
		while (k > 0 && s[k] >= s[k - 1]) k--;
		if (k == 0) cout << -1 << endl;
		else {
			int max = k;
			for (int i = k + 1; i < n; i++)
				if (s[i] < s[k-1] && s[i] > s[max]) max = i;
			swap(s[k-1], s[max]);
			cout << s << endl;
		}
	}
	return 0;
}