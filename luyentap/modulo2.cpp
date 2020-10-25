#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll tinh(ll x,ll y,ll p){
	ll res=0;
	x%=p;
	while(y){
		if(y%2!=0)	res = (res + x) % p;
		x = (x + x) % p;
		y/=2;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int res=-1;
		int a,m;
		cin >> a >> m;
		for(int i=0;i<m;i++){
			ll x = tinh(a,i,m);
			if(x==1) {
				res=i;
				break;
			}
		}
		cout << res << endl;
	}
	return 0;
}

