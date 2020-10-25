#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define ii pair<int,int>
vector <ii> ke[500002];
//bool vs[500002];
int a[500002];
int V,E,x;
DIJKSTRA(int begin){
	priority_queue<ii, vector<ii>, greater<ii> > q;
	long long d[V+2];
	for(int i=1;i<=V;i++)	d[i]=1e9;
	d[begin] = 0;
	q.push(ii(d[begin],begin));
	while(!q.empty()){
		int u = q.top().second;
	//	vs[u]=true;
		q.pop();
		for(int i=0;i<ke[u].size();i++){
			long long w=ke[u][i].second;
			int v=ke[u][i].first;
		//	if(!vs[v])
			if(d[u]+w<d[v]) {
				d[v]=d[u]+w;
				q.push(ii(d[v],v));	
			}
		}
	}
	cout << d[V]+x <<endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		V = n*m;
		for(int i=1;i<=V;i++) ke[i].clear();
		for(int i=1;i<=V;i++) cin >> a[i];
		for(int i=1;i<=V;i++){
			int w=a[i];
			if(i==1) continue;
			if(i == m*(n-1)+1) {// goc trai duoi
				ke[i+1].push_back({i,w});
				ke[i-m].push_back({i,w});
				
			}
			else if(i == m){//goc phai tren
				ke[i+m].push_back({i,w});
				ke[i-1].push_back({i,w});
			}
			else if(i == m*n){// goc phai duoi
				ke[i-m].push_back({i,w});
				ke[i-1].push_back({i,w});
			}
			else if(i<m && i>1){// hang tren
				ke[i+m].push_back({i,w});
				ke[i-1].push_back({i,w});
				ke[i+1].push_back({i,w});
			}
			else if(i % m==1 && i!=1 && i!=m*(n-1)+1){//cot trai
				ke[i+1].push_back({i,w});
				ke[i-m].push_back({i,w});
				ke[i+m].push_back({i,w});
			}
			else if(i%m==0 && i!=m && i!=m*n){//cot phai
				ke[i+m].push_back({i,w});
				ke[i-1].push_back({i,w});
				ke[i-m].push_back({i,w});
			}
			else if(i>m*(n-1)+1 && i<m*n){//hang duoi
				ke[i-m].push_back({i,w});
				ke[i-1].push_back({i,w});
				ke[i+1].push_back({i,w});
			}
			else{// cac truong hop con lai
				ke[i-m].push_back({i,w});
				ke[i-1].push_back({i,w});
				ke[i+1].push_back({i,w});
				ke[i+m].push_back({i,w});
			}
		}
//		for(int i=1;i<=m*n;i++){
//			for(int j=0;j<ke[i].size();j++)
//				cout << ke[i][j].first <<" ";
//			cout << endl;	
//			}
		x=a[1];
	//	memset(vs,false,sizeof(vs));
		DIJKSTRA(1);
	}
	return 0;
}

