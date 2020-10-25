#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define ill pair<int,long long>
#define lli pair<long long,int>
int V,E;
bool vs[100002];
map<long long,long long> dem;
vector <ill> ke[100002];
DIJKSTRA(int begin){
	for(int i=1;i<=V;i++) dem[i]=1;
	priority_queue<lli, vector<lli>, greater<lli> > q;
	long long d[V+2];
	for(int i=1;i<=V;i++)	d[i]=1e18;
	d[begin] = 0;
	q.push(lli(d[begin],begin));
	while(!q.empty()){
		int u = q.top().second;
		vs[u]=true;
		q.pop();
		for(int i=0;i<ke[u].size();i++){
			long long w=ke[u][i].second;
			int v=ke[u][i].first;
			if(!vs[v])
			if(d[u]+w<=d[v]) {
				if(d[u]+w == d[v]) {
					dem[v]=dem[v]+dem[u];
				}
				else{
				d[v]=d[u]+w;
				q.push(lli(d[v],v));
				dem[v]=dem[u];
				}
			}
		}
	}
	cout << d[V] <<" " << dem[V];
}
int main(){
		
		cin >> V >> E;
		for(int i=1;i<=E;i++){
			int u,v;
			long long wt;
			cin >> u >> v >> wt;
			ke[u].push_back(ill(v,wt)); 
			ke[v].push_back(ill(u,wt));
			}
		memset(vs,false,sizeof(vs));	
		DIJKSTRA(1);
		return 0;
}

