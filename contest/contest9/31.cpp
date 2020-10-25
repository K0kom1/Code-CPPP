#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> ke[1001];
int vs[1001];
void DFS(int u){
	vs[u] = 1;
	for(int i = 0; i < ke[u].size(); i++)
		if(vs[ke[u][i]] == 0)
			DFS(ke[u][i]);
}
main(){
	int t;
	cin >> t;
	while(t--){
        int n;
        cin >> n; 
		memset(ke,0,sizeof(ke));   
        for(int i = 0; i < n - 1; i++){
    	    int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        for(int i = 0; i < 1001; i++) vs[i] = 0;
        int dem = 0;
        DFS(1);
        for(int i = 1; i <= n; i++){
        	if(vs[i] == 1) dem++;
		}   
        if(dem == n) cout << "YES";
        else cout << "NO";
        cout << endl;
	}
}

