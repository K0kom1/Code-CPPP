#include<bits/stdc++.h>
using namespace std;
#define Pair pair<int,int>
typedef unsigned long long ull;
queue <Pair> q;
vector <int> ke[1001]; 
bool vs[1001];
void BFS(int u){
	vs[u]=true;
	queue <int> qu;
//	cout << u <<" ";
	qu.push(u);
	while(!qu.empty()){
		int tmp = qu.front();
		qu.pop();
		for(int i=0;i<ke[tmp].size();i++){
			int v = ke[tmp][i];
			if(!vs[v]) {
				vs[v]=true;
				qu.push(v);
				q.push(Pair(tmp,v));
			}
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
		BFS(u);
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

