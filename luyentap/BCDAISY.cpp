#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
bool kt[251][251];
bool fre[251];
int n,m;
void dfs(int i){
	fre[i] = false;
	for(int j = 1;j<=n;j++)
		if((fre[j]==true)&&(kt[i][j])) dfs(j);
	return;		
}
int main(){
	int ok = 0;
	memset(kt,false,sizeof(kt));
	memset(fre,true,sizeof(fre));
	cin >> n >> m;
	for (int i = 1; i<=m;i++){
		int c1,c2;
		cin >> c1 >> c2;
		kt[c1][c2] = true;
		kt[c2][c1] = true;
	}
	dfs(1);
	for(int i = 1; i <= n; i++)
		if(fre[i]) {
		cout << i <<endl;
		ok = 1;
		}
	if(ok == 0)	cout << "0";
	return 0;
}

