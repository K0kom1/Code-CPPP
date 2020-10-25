#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n], d = 0, x = 0, ans;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] <= k){
				a[i] = 0;
				d++;
			}
			else
				a[i] = 1;
		}
		for(int i = 0; i < d; i++)
			x += a[i];
		ans = x;
		for(int i = 1; i < n - d + 1; i++){
			x = x - a[i-1] + a[i + d - 1];
			ans = min(ans, x);
		}
		cout << ans << endl;
	}
	return 0;
}
