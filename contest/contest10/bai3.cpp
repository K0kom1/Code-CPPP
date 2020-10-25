#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

vector <int> ke[1001];
int V,E;
int mau[1001];
bool vs[1001];
bool check;
void tomau(int u){
//	cout << u <<" ";
	vs[u]=true;
	for(int j=0;j<ke[u].size();j++){
		int v = ke[u][j];
		if(!vs[v]){
			mau[v]=1-mau[u];
			tomau(v);
			}
	}
}
bool checkmau(int u,int c){
	for(int i=0;i<ke[u].size();i++)
		if(mau[ke[u][i]]==c) return false;
	return true;	
}	

int main(){
	int t;
	cin >> t;
	while(t--){
		check = true;
		cin >> V >> E;
		for(int i=1;i<=V;i++)
			ke[i].clear();
		for(int i=1;i<=E;i++){
			int a,b;
			cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		memset(vs,false,sizeof(vs));
		memset(mau,-1,sizeof(mau));
		mau[1]=1;
		tomau(1);
		for(int i=1;i<=V;i++){
			if(!vs[i]) tomau(i);
		}
		for(int i=1;i<=V;i++){
		//	cout << mau[i] <<" ";
			if(!checkmau(i,mau[i])) {
				check = false;
				break;
			}
		}
		if(check)	cout << "YES";
		else cout << "NO";
		cout << endl;
		
	}
	return 0;
}

