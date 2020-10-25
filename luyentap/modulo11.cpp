#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Pow(ll a,ll b, ll m){
	ll res =0;
	while(b){
		if(b & 1) 
			res = (res+a) % m;
		a = (a + a) % m;
		b >>= 1; 
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a,b,c;
		cin >> a >> b >> c;
		cout << Pow(a,b,c) << endl;
	}
	return 0;
}

