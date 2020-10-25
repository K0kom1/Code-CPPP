#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
int max(int a, int b){
	if (a > b) return a;
		else return b;
}
int main(){
	string a, b;
	cin >> a >>b;
	int m = a.size();
	int n = b.size();
	a.insert(0,1,'l');
	b.insert(0,1,'l');
	int f[m+2][n+2];
	memset(f,0,sizeof(f));
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			if (a[i] == b[j]) f[i][j] = f[i-1][j-1] +1;
				else f[i][j] = max(f[i-1][j],f[i][j-1]);
	cout << f[m][n];			
	return 0;
}

