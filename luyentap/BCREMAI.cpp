#include<bits/stdc++.h>
using namespace std;
//#define for(i,m,n) for(long long i = m; i<=n; i++)
//#define ford(i,x,y) for(long long i = x; i>=y; i--)
typedef unsigned long long ull;

ull luythua(ull a, ull b,ull m){
	ull res = 1;
		a %= m;
		b %=m-1;
		while(b>0){
			if (b&1) res = res * a % m;
			a = a * a % m;
			b >>= 1;			
		}
	return res;	
}
ull tich(ull a, ull b,ull m){
	return ((a%m) *(b%m)) %m;	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ull n,m;
		cin >> n>> m;
		ull a[n+1];
		ull b[n+1];
		for(ull i = 1; i<=n ; i++) cin >> a[i];
		for(ull i = 1; i<=n ; i++) {
			b[i] = 1;
			for (ull j = 1; j<= a[i]; j++) b[i] = tich(b[i],j,m);
		}
		ull kq = b[n];
		for(ull j= n -1; j>=1; j--)
			kq = luythua(a[j],kq,m);
		cout << kq << endl;
	}
	return 0;
}

