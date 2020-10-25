#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//cach 2 la bai 8
ll np(ll a){
	if(a == 1) return 1;
	else if(a % 2 == 0) return 10*np(a/2);
	else return 10*np(a/2) + 1;
}
main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll a = 1, d = 9;
		if(d % n == 0) cout << d << endl;
		else{
			while(d % n != 0){
				a++;
				d = 9 * np(a);
			}
			cout << d << endl;
		}
	}
}

