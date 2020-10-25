#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,q;
		cin >> n >> q;
		int tong[n+1],a[n+1];
		tong[0]=0;
		for(int i=1;i<=n;i++){
			cin >> a[i];
			tong[i]=tong[i-1]+a[i];
			}
		while(q--){
			int l,r;
			cin >> l >> r;
			cout << tong[r]-tong[l-1] << endl;
		}	
	}
	return 0;
}

