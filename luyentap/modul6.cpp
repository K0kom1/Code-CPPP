#include<bits/stdc++.h>
using namespace std;
define ll long long 
ll Pow(ll a,ll b, ll m){
	ll res =1;
	while(b){
		if(b%2!=0) res = res*a % m;
		a = a * a % m;
		b/=2; 
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ll b,M;
		cin >> b >> M;
		ll res=0;
		for(int i=0; i < s.length(); i++)
			res = (res * 10 + (s[i] - '0')) % M;
		cout << Pow(res,b,M) << endl;	
	}
	return 0;
}

