#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	int a[8]={2,3,5,7,13,17,19,31};
	while(t--){
		ll n;
		cin >> n;
		int res=0;
		for(int i=0;i<8;i++){
			ll u=pow(2,a[i]-1)*(pow(2,a[i])-1);
			if(u==n) {
				res=1;
				break;
			}
		
	}
		cout << res << endl;
	}
	return 0;
}

