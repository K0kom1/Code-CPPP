#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n,k;
		cin >> n >> k;
		ll res =0;
		for(int i=1;i<=n;i++)
			res=res+i%k;
		if(res == k)	
			cout << 1;
		else cout << 0;	
		cout << endl;	
	}
	return 0;
}

