#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct So{
	int gtri;
	int dem;
};
int BFS(ll u){
	set<ll> vs;
	queue<So> q;
	q.push({u,0});
	vs.insert(u);
	while(!q.empty()){
		So top = q.front();
		q.pop();
		if(top.gtri == 1) return top.dem;
		if(top.gtri-1 == 1) return top.dem+1;
		if(top.gtri > 1 && vs.find(top.gtri-1) == vs.end()){
			vs.insert(top.gtri-1);
			q.push({top.gtri-1, top.dem+1});
		}
		for(int i = 2; i*i <= top.gtri; i++){
			if(top.gtri % i == 0){
				if(vs.find(top.gtri/i) == vs.end()){
					vs.insert(top.gtri/i);
			        q.push({top.gtri/i, top.dem+1});
				}
			}
		}
		     
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
	    ll res = BFS(n);
	    cout << res << endl;
	}
}

