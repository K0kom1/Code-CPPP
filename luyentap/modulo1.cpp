#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll tinh(ll x,ll y,ll p){
	ll res=1;
	x%=p;
	while(y){
		if(y%2!=0)	res = res * x % p;
		x = x * x % p;
		y/=2;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y,p;
		cin >> x >> y >> p;
		cout << tinh(x,y,p) << endl;
	}
	return 0;
}

