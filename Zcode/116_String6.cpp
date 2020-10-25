#include<bits/stdc++.h>
using namespace std;
#define ll long long
string min(string x) {
	for (int i=0; i < x.length(); i++)
		if (x[i]== '6') x[i] = '5';
	return x;
}
string max(string x) {
	for (int i = 0; i < x.length(); i++)
		if (x[i] == '5') x[i] = '6';
	return x;
}
int main()
{
	int test;
	cin >> test;
	while (test--) {
		string a, b;
		stringstream ss;
		cin >> a >> b;
		ll m, n,p,q;

		ss << min(a) << " " << min(b) << " " << max(a) << " " << max(b);
		ss >> m >> n >> p >> q;

		cout << m+n << " " << p+q << endl;
	}
	return 0;
}