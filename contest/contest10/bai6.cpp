#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

set <int> ke[100001];
bool vs[100001];
int BFS(int i){
	int dem=1;
	set <int> ::iterator it;
	vs[i]=true;
	queue <int> q;
	q.push(i);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(it=ke[v].begin();it!=ke[v].end();it++){
			int tmp=*it;
			if(!vs[tmp]){
				vs[tmp]=true;
				dem++;
				q.push(tmp);
			}
		}
	}
	return dem;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int E,V;
		cin >> V >> E;
		for(int i=1;i<=V;i++)
			ke[i].clear();
		memset(vs,false,sizeof(vs));
		for(int i=1;i<=E;i++){
			int u,v;
			cin >> u >> v;
			if(ke[u].find(v)==ke[u].end()) ke[u].insert(v);
			if(ke[v].find(u)==ke[v].end()) ke[v].insert(u);
			}
			
		int Max = 0;	
		for(int i=1;i<=V;i++){
			if(!vs[i]) {
				int fr=BFS(i);
				if(fr>Max) Max=fr;
		}
		}
		cout << Max << endl;	
	}
	return 0;
}

