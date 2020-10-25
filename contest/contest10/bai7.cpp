#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int V,E;
vector<int> ke[100009];
bool Social(){
	for(int i=1;i<=V;i++){
		int fr=ke[i].size();
		for(int j=0;j<fr;j++){
			int fr_of_fr=ke[ke[i][j]].size();
			if(fr!=fr_of_fr) return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		
		cin >> V >> E;
		for(int i=1;i<=V;i++) ke[i].clear();
		for(int i=1;i<=E;i++){
			int u,v;
			cin >> u >> v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		if(Social()) cout << "YES";
		else cout <<"NO";
		cout << endl;
	}
	return 0;
}

