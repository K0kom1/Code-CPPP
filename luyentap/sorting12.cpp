#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		ll a[n+2],b[m+2];
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		for(int i=1;i<=m;i++){
			cin >> b[i];
		}
		sort(b+1,b+m+1);
		sort(a+1,a+n+1);
		cout << a[n]*b[1] << endl;	
	}
	return 0;
}

