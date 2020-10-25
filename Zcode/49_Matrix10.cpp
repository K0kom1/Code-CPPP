#include<bits/stdc++.h>
using namespace std;
int main() {
	int test;
	cin >> test;
	while (test--) {
		int n,m;
		cin >> n >> m;
		int a[n][m];
		int hang[n]={0} ,cot[m]={0};
		for (int i=0; i < n; i++)
			for (int j=0; j < m; j++) cin >> a[i][j];
		for (int i=0; i < n; i++)
			for (int j=0; j < m; j++) 
				if (a[i][j]) {
					hang[i] = 1;
					cot[j] = 1;
				}
		for (int i=0; i < n; i++){
			for (int j=0; j < m; j++) 
				if (hang[i] || cot[j]) 
					cout << 1 << " ";
				else cout << 0 << " ";
			cout << endl;
		}
	}
	return 0;
}