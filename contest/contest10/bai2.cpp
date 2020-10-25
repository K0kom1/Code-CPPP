#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

vector <int> ke[15];
int V,E;
bool check ;
bool vs[15];
void hamilton(int i,int count){
	if(count == V) {
		check = true;
		return;
		}
	for(int j=0;j<ke[i].size();j++){
		int v = ke[i][j];
		if(!vs[v]) {
			vs[v]=true;
			hamilton(v,count+1);
			vs[v]=false;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check = false;
		memset(vs,false,sizeof(vs));
		cin >> V >> E ;
		for(int i=1;i<=V;i++)
			ke[i].clear();
		for(int i=1;i<=E;i++){
			int a,b;
			cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		for(int i=1;i<=V;i++){
			vs[i]=true;
            hamilton(i,1);
            vs[i]=false;
		}
		if(check) cout << "1";
		else cout << "0";
		cout << endl;
	}
	return 0;
}

