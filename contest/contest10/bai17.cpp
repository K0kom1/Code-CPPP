#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int W[102][102];
int d[102][102];
void FLOYD(int n){
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++){
				if(!(i==k || j==k))
					if(d[i][k]+d[k][j]<d[i][j]) d[i][j]=d[i][k]+d[k][j];
					
			}
	}
	
	
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
		
			W[i][j]=1e9;
			d[i][j]=1e9;
			}
	for(int i=1;i<=m;i++){
		int u,v,w;
		cin >> u >> v >> w;
		W[u][v]=w;
		W[v][u]=w;
		d[u][v]=w;
		d[v][u]=w;
	}
	FLOYD(n);

	int q;
	cin >> q;
	while(q--){
		int u,v;
		cin >> u >> v;
		if(u==v) cout <<0;
		else
		cout << d[u][v]; 
		cout << endl;
	}	
	return 0;
}

