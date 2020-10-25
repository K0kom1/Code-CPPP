#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
main(){
	int t;
	cin >> t;	
	while(t--){
		int v, e;
		cin >> v >> e;
		vector<int> ke[v+1]; //vector 2 chieu
		for(int i = 1; i <= e; i++){
			int a, b;
			cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		for(int i = 1; i <= v; i++){
			sort(ke[i].begin(), ke[i].end());
		}
		for(int i = 1; i <= v; i++){
			cout << i << ": ";
			for(int j = 0; j < ke[i].size(); j++){
			    cout << ke[i][j] << " ";
			}
			cout << endl;
		}
	}
} */
int matran[1001][1001];
main(){
	int t;
	cin >> t;	
	while(t--){
		int v, e;
		cin >> v >> e;
		memset(matran,0,sizeof(matran));
		for(int i = 1; i <= e; i++){
			int a, b;
			cin >> a >> b;
			matran[a][b] = matran[b][a] = 1;
		}
		for(int i = 1; i <= v; i++){
			cout << i << ": ";
			for(int j = 1; j <= v; j++){
				if(matran[i][j] == 1){
					matran[i][j] = 0;
					cout << j << " ";
				}
			}
			cout << endl;
		}
	}
}
