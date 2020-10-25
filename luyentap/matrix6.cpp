#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+2][n+2];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++){
				cin >> a[i][j];
			}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==1 || i==n) cout << a[i][j];
				else if(j==1 || j==n) cout << a[i][j];
				else cout <<" ";
				cout << " ";
			}
			cout << endl;	
		}
	}
	return 0;
}

