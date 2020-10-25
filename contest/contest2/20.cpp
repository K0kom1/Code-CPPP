#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, a[11][11];
		cin >> n;	
		for(int i = 1; i <= n; ++i){
			cin >> a[1][i];
		}
		
		for(int i = 2; i <= n; ++i){
			for(int j = 1; j <= n; ++j){
				a[i][j] = a[i-1][j+1] + a[i-1][j];
				}
		}
		
		for(int i = n; i >= 1; --i){
			cout << "[";
			for(int j = 1; j <= n; ++j){
				if(i+j==n+1) {
				cout << a[i][j]; break;
				}
				else cout << a[i][j] << " ";
			}
			cout << "] ";
		}
		
	}
		
		
	return 0;
}

