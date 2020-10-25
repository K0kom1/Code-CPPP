#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

	int T; cin >> T;
	while(T--){
		int n; cin >> n; 
		ll a[n+5]; 
		for(int i=1; i<=n; i++) cin >> a[i];
		ll Max = INT_MIN;
		for(int i=1; i<=n; i++){
			ll Max1 = 1;
			for(int j=i; j<=n; j++){
				Max1 *= a[j];
				Max=max(Max1,Max);
			}
		}
		cout << Max << "\n";
	}
}
