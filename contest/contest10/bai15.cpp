#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define ii pair<int,int>
int V,E;
long long W[1002][1002];

bool BELLMAN_FORD(int begin){
	long long d[V+2];
	for(int i=1;i<=V;i++)	{
		d[i]=W[begin][i];
		}
	d[begin] = 0;
	bool check = false;
	for(int v=1;v<=V-1;v++){
		check = true;
		for(int j=1;j<=V;j++){
			if(j!=begin) 
			for(int k=1;k<=V;k++)
				if(W[k][j]+d[k]<d[j]) {
					d[j]=W[k][j]+d[k];
					check = false;
					}
		}			
		if(check==true) break;
	}
	for(int i=1;i<=V;i++)	// kiem tra chu trinh am
		for(int j=1;j<=V;j++){
			if(W[i][j]!=0 && W[i][j]!=1e18)
			if(d[j]>d[i]+W[i][j]){
				return false;
			}
		}
	for(int i=1;i<=V;i++){	// in duong di
			if(d[i]>=1e18) cout << "INFI";
			else cout << d[i];
				cout << " ";
			}
	return true;
			
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int begin;
		cin >> V >> E >> begin;
		for(int i=1;i<=V;i++)
			for(int j=1;j<=V;j++)
				W[i][j]=1e18;
		for(int i=1;i<=E;i++){
			int u,v;
			long long wt;
			cin >> u >> v >> wt;
			W[u][v] = wt;
			
			}
		if(!BELLMAN_FORD(begin))
			cout <<"-1";
		cout << endl;
	}
	return 0;
}



