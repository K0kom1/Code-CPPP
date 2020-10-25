#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> snt;
int d[10001] = {};
int vs[10001], dem[10001];
vector<ll> ke[10001];
void SNT(){ //tao mang snt gom cac snt co 4 cs
	for(int i = 2; i <= 9999; i++){
		if(d[i] == 0){
			for(int j = i*i; j <= 9999; j += i){
				d[j] = 1;
			}
		}
	}
	for(int i = 1000; i <= 9999; i++){
		if(d[i] == 0) snt.push_back(i);
	}
}
int check(int x, int y){ //ktra xem 2 snt co khac nhau 1 cs khong
	int dem = 0, x1, y1;
	while(x != 0 && y != 0){
		x1 = x % 10; x /= 10;
		y1 = y % 10; y /= 10;
		if(x1 != y1) dem++;
	}
	return (dem == 1);
}
void khoitao(){ // do thi (DS ke) cac snt khac nhau 1 cs
	for(int i = 0; i < snt.size()-1; i++){
		for(int j = i+1; j < snt.size(); j++){
			if(check(snt[i],snt[j])){
				ke[snt[i]].push_back(snt[j]);
				ke[snt[j]].push_back(snt[i]);
			}
		}
	}
}
int BFS(int s, int t){
	queue<int> q;
	q.push(s);
	dem[s] = 0;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		vs[u] = 1;
		if(u == t) return dem[u];
		for(int i = 0; i < ke[u].size(); i++){
			if(vs[ke[u][i]] == 0){
				vs[ke[u][i]] = 1;
				q.push(ke[u][i]);
				dem[ke[u][i]] = dem[u] + 1;
			}
		}
	}
	
}
main(){
	SNT();
	khoitao();
	int T;
	cin >> T;
	while(T--){
		int s, t;
		cin >> s >> t;
		memset(vs,0,sizeof(vs));
		memset(dem,0,sizeof(dem));
		int res = BFS(s,t);
		cout << res << endl;
	}
}
