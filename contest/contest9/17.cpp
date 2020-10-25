#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int vs[1001], e[1001], V, E;
vector<int> ke[1001];
void DFS(int u){
	vs[u] = 1;
	for(int i = 0; i < ke[u].size(); i++){
		if(vs[ke[u][i]] == 0){
			vs[ke[u][i]] = 1;
//			e[ke[u][i]] = u;
			DFS(ke[u][i]);
		}
	}
}
void kiemtra(){
	for(int i = 0; i < 1001; i++) vs[i] = 0;
	DFS(1);
	int k = 0;
	for(int i = 1; i <= V; i++){
		if(vs[i] == 1) k++;
	}
	if(k == V) cout << "YES";
	else cout << "NO";
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> V >> E;
		memset(ke,0,sizeof(ke));
		for(int i = 1; i <= E; i++){
			int u, v;
			cin >> u >> v;
			ke[u].push_back(v);
		}
		kiemtra();
		cout << endl;	
	}
}


