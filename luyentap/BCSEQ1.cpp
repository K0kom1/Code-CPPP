#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull tong(ull a[],ull l,ull u){
	return a[u] - a[l-1];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int q,n;
		cin >> q >> n;
		ull a[n+1],s[n+1];
		s[0]=0;
		a[0]=0;
		for (int i=1;i<=n;i++)
			cin >> a[i];
		for (int i=1;i<=n;i++)
			s[i] = s[i-1]+a[i];
		//for (int i=1;i<=n;i++) cout << s[i] << " ";
		//cout << endl;
		for (int i = n; i >= 1; i--){
			if (s[n]%i == 0){
				int kt = 1;
				int x = s[n]/i;
				int k = x;
				for(int j=1;j<=n;j++){
					x -= a[j];
					if (x < 0) {
					kt = 0;
					break;
					}
					if (x == 0) x = k; 
					}
				if (kt == 1) {
				cout << q <<" "<< k << endl;
				break;
				}
			}
		}		
	}
	return 0;
}

