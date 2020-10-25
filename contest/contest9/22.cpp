#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int V, E;
int vs[1007];
vector<int> ke[1007];
int previous[1007];
vector< pair<int, int> > ans;
void Reset(){
	for(int i = 0; i < 1001; i++)
		ke[i].clear();
	memset(vs, false, sizeof(vs));
}

void BFS(int u){
	vs[u] = 1;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		u = q.front();
		q.pop();
		vs[u] = 1;
		for(int i = 0; i < ke[u].size(); i++){
			if(vs[ke[u][i]] == 0){
				vs[ke[u][i]] = 1;
				previous[ke[u][i]] = u;
				q.push(ke[u][i]);
			}
		}
	}
}

int tplt(){
	int dem = 0;
	for(int i = 1; i <= V; i++){
		if(!vs[i]){
			dem++;
			BFS(i);
		}
	}
	return dem;
}

void CanhCau(int canh, int res, vector< pair<int, int> > tmp){
	for(int i = 0; i < E; i++){
		if(i != canh){
			ke[tmp[i].first].push_back(tmp[i].second);
			ke[tmp[i].second].push_back(tmp[i].first);
		}
	}
	int demlt = tplt();
	if(demlt > res){
		if(tmp[canh].first < tmp[canh].second)
			ans.push_back({tmp[canh].first, tmp[canh].second});
		
	}
}

void solve(){
	Reset();
	ans.clear();
	
    cin >> V >> E;
    vector< pair<int, int> > tmp;
    
    for(int i = 0; i < E; i++){
    	int u, v;
        cin >> u >> v;
        tmp.push_back({u, v});
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    
    int demlt = tplt();
    
    for(int i = 0; i < E; i++){
    	Reset();
    	CanhCau(i, demlt, tmp);
	}
	
	for(int i = 0; i < ans.size(); i++){
		cout << ans[i].first << " " << ans[i].second << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
