#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int w[1002][1002];
int xuli(int V){
	int d[1002];
	int check = 0;
	for(int i=1;i<=V;i++)
		d[i]=1e9;
	d[1]=0;
	for(int k=2;k<=V;k++)
		for(int i=1;i<=V;i++)
			for(int j=1;j<=V;j++)
				if(d[j]>w[i][j]+d[i])
					d[j]=d[i]+w[i][j];
	for(int i=1;i<=V;i++)
		for(int j=1;j<=V;j++){
			int x = d[i]+w[i][j];
			if(x < d[j]) {
				check = 1;
				break;
			}
		}
	return check;						
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int V,E;
		cin >> V >> E;
		for(int i=1;i<=V;i++)
			for(int j=1;j<=V;j++)
				w[i][j]=1e9;
		for(int i=1;i<=E;i++){
			int u,v,wt;
			cin >> u >> v >> wt;
			w[u][v]=wt; 
			}			
		cout << xuli(V)<< endl;		
		
	}
	return 0;
}

