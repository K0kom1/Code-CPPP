#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int m=1e9+7;

ll Pow(ll a,ll b){
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
		int n,x;
		cin >> n >> x;
		int a[n+2];
		for(int i=n-1;i>=0;i--)
			cin >> a[i];
		ll res=0;	
		for(int i=n-1;i>=0;i--)
			res=(res+a[i]*Pow(x,i)%m)%m;
		cout << res << endl;		
	}
	return 0;
}

