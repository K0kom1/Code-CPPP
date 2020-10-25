#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int res = -1;
		int n,k;
		cin >> n >> k;
		int dem = 0;
		for(ll i=2;i<=sqrt(n);i++){
			while(n%i==0){
				dem++;
				n/=i;
				if(dem==k) {
					res=i;
					goto Exit;
				}
			}
		}
		if(n!=1){
			dem++;
			if(dem==k) {
				res=n;
			}
		}	
		Exit:
			cout << res << endl;
	}
	return 0;
}

