#include<bits/stdc++.h>
using namespace std;
const int N=100;
unsigned long long fibo[N];
void init() {
	fibo[1]=1;
	for (int i=2; i < N; i++)
		fibo[i] = fibo[i-1] + fibo[i-2];
	return ;
}
void fibonaxi2() {
	unsigned long long n;
	cin >> n;
	for (int i=0; i < N; i++) {
		if (fibo[i] == n) {
			cout << "YES" << endl;
		return;
		}
	}
	cout << "NO" << endl;
	return;
}
int main() {
	init();
	// for (int i=0; i < N; i++) 
	// 	cout << fibo[i] << endl;
	int test;
	cin >> test;
	while (test--) {
		fibonaxi2();
	}
	return 0;
}