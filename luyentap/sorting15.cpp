#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int T; cin >> T;
	while(T--){
		int n; cin >> n;
		int a[n+5];
		int k; cin >> k;
		for(int i=1; i<=n; i++)
			cin >> a[i];
		sort(a+1,a+n+1);
		ll dem = 0;
		for(int i=n; i>1; i--){
		    int tmp = upper_bound(a+1,a+n+1,a[i]-k)-a;
		    tmp = i - tmp;
		    if(tmp>0) dem += tmp;
		}
		cout << dem << "\n";
	}
}
