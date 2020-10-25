#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const ull M = 1000000000+7; 
ull gcd(ull a, ull b){
	if (b == 0) return a;
		else return gcd(b , a % b);
}
ull nhan(ull a , ull b){
	ull res = 1;
	 while(b){
	 	if (b&1) res = res * a % M;
	 	a = a * a % M;
	 	b >>= 1;
	 }
	 return res;
	
}

int main(){
	int t;
	cin >> t;
	while(t --){
		ull n;
		cin >> n;
		int a[n+2];
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		ull res = a[1];
		for (int i = 2; i <= n; i++)
			res = gcd(res,a[i]) ;
		ull kq = 1;
		for (int i = 1; i <= n; i++)
			kq = kq * nhan(a[i],res) % M;
		cout << kq;
		cout << endl;	
			
	}
	return 0;
}

