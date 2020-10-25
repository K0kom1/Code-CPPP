#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<ll>x;
		ll a[n+2],b[m+2];
		for(int i=1;i<=n;i++){
			ll k;
			cin >> k;
			x.push_back(k);
		}
		for(int i=1;i<=m;i++){
			ll k;
			cin >> k;
			x.push_back(k);
		}
		sort(x.begin(),x.end());
		for(int i=0;i<x.size();i++)
			cout << x[i]<<" ";
		cout << endl;	
	}
	return 0;
}

