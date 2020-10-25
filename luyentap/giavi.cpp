#include <iostream>
#include <cmath>
using namespace std;
int kt = 0;
long long n, a[100], s[100], b[100], m, S=1, B=0;
void Try (long long i) {
for (long long j = 0; j <= 1; j++) {
	a[i] = j;
	if (a[i] == 1) {
			kt = 1;
			S = S * s[i];
			B = B + b[i];
			}
	if (i == n) {
	if(kt == 1)
	if (abs(S - B) < m) m = abs(S - B);

	}
	else Try (i + 1);
	if (a[i] == 1) {
			S = S / s[i];
			B = B - b[i];
			}
	}
}


int main() {
	cin >> n;
		for (long long i = 1; i <= n; i++) {
			cin >> s[i]>> b[i];;
		}
	m = 999999;
	Try(1);
	cout << m;
	return 0;
}
