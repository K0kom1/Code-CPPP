#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lcm(ll x,ll y){
	ll G=__gcd(x,y);
	return x*y/G;
}
int leng(ll x){
	int dem=0;
	while(x){
		x/=10;
		dem++;
	}
	return dem;
}
ll Pow(ll x, ll n){
	ll res=1;
	while(n--){
		res*=x;
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll x,y,z,n;
		cin >> x >> y >> z >> n;
		ll LCM=lcm(lcm(x,y),z);
		ll res=LCM;
		ll i = Pow(10,n-1)/LCM-1;
		
		while(leng(res)!=n){
			i++;
			res=LCM*i;
			if(leng(res)>n) {
				res=-1;
				break;
			}
		}
		cout << res << endl;
	}
	return 0;
}

