#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const ull M = 1000000000 + 7;
ull luythua(ull a,ull b){
	ull res = 1;
	while(b){
		if (b & 1) res = res * a % M;
		a = a*a % M;
		b >>= 1;
		
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t --){
		ull n,x;
		cin >> n >> x;
		int * p = new int[n+7];
		for (int i = n-1; i >= 0; i--)
			cin >> p[i];
		ull res = 0;	
		for (int i = n-1; i >= 0; i--){
			res = (res%M + (p[i] * luythua(x,i) % M));
			}
		cout << res << endl;	
		delete[]p;	
	}
	return 0;
}

