#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

vector <int> ke[15];
int V,E,M;
int mau[15];

bool checkmau(int u,int c){
	for(int i=0;i<ke[u].size();i++)
		if(mau[ke[u][i]]==c) return false;
	return true;	
}
bool tomau(int i){
	if(i==V+1) return true;
	for(int j=1;j<=M;j++)
		if(checkmau(i,j)){
			mau[i]=j;
			if (tomau(i+1)) return true;
			mau[i]=0;
		}
		return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> V >> E >> M;
		for(int i=1;i<=V;i++)
			ke[i].clear();
		for(int i=1;i<=E;i++){
			int a,b;
			cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		memset(mau,0,sizeof(mau));
		
		if(tomau(1)) cout << "YES";
		else cout << "NO";
		cout << endl;
		
	}
	return 0;
}

