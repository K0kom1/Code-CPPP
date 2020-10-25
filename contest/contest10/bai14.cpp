#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define ii pair<int,int>
int V,E;
int w[1002][1002];
vector <ii> ke[1002];
DIJKSTRA(int begin){
	priority_queue<ii, vector<ii>, greater<ii> > q;
	int d[V+2];
	for(int i=1;i<=V;i++)	d[i]=1e9;
	d[begin] = 0;
	q.push({d[begin],begin});
	while(!q.empty()){
		int u = q.top().second;
		q.pop();
		for(int i=0;i<ke[u].size();i++){
			int w=ke[u][i].second;
			int v=ke[u][i].first;
			if(d[u]+w<d[v]) {
				d[v]=d[u]+w;
				q.push({d[v],v});
			}
		}
	
	}
	for(int i=1;i<=V;i++) cout << d[i] <<" ";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int begin;
		cin >> V >> E >> begin;
		for(int i=1;i<=V;i++)
			ke[i].clear();
		for(int i=1;i<=E;i++){
			int u,v,wt;
			cin >> u >> v >> wt;
			ke[u].push_back({v,wt}); 
			ke[v].push_back({u,wt});
			}
		DIJKSTRA(begin);
		cout << endl;
	}
	return 0;
}

