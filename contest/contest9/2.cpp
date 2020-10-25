#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[51][51], x, y;
	for(int i = 1; i <= n; i++){
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] == 1)
			{
				cout << i << " " << j << endl;
				a[i][j] = 0;
				a[j][i] = 0;
			}
		}
	}
	return 0;
}
