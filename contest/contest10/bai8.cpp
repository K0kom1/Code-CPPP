#include<bits/stdc++.h>
using namespace std;
#define Pair pair<int,int>
typedef unsigned long long ull;
queue <Pair> q;
vector <int> ke[1001]; 
bool vs[1001];
void DFS(int u){
	vs[u]=true;
//	cout << u <<" ";
	for(int i=0;i<ke[u].size();i++){
		int v = ke[u][i];
		if (!vs[v]){
			q.push(Pair(u,v));
			DFS(v);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		bool kt = true;
		memset(vs,false,sizeof(vs));
		int V,E,u;
		cin >> V >> E >> u;
		for(int i=1;i<=V;i++)
			ke[i].clear();
		for(int i=1;i<=E;i++){
			int a,b;
			cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		DFS(u);
		for(int i=1;i<=V;i++) {
			if(!vs[i]) {
				kt = false;
				break;
			}
		}
		if(!kt) cout << "-1" << endl;
		else while(!q.empty()){
			Pair x = q.front();
			q.pop();
			cout << x.first << " " << x.second << endl;
		}
		while(!q.empty()){
			
			q.pop();
		}
	}
	return 0;
}

