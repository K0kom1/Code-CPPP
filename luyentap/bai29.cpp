#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m,n;
		cin >> m >> n;
		int a[m+1][n+1],t[m+1][n+1];
		for(int i=0;i<=m+1;i++) t[i][1] =1;
		for(int j=0;j<=n+1;j++) t[1][j] =1;
		for(int i=1;i<=m;i++)
			for(int j=1;j<=n;j++)
				cin >> a[i][j];
		t[1][1] = 1;
		for(int i=2;i<=m;i++)
			for(int j=2;j<=n;j++)
				 t[i][j] = t[i-1][j] + t[i][j-1];
//		for(int i=1;i<=m;i++){
//		for(int j=1;j<=n;j++)
//				cout << t[i][j];
//			cout << endl;
//		}
		cout << t[m][n]<< endl;			
	}
	return 0;
}

