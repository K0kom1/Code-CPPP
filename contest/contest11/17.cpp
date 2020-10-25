#include<bits/stdc++.h>
using namespace std;
int n;
int a[10005][5];
void duyet(int u){
	queue<int> qu;
	qu.push(u);
	vector<int> b;
	while(!qu.empty()){
		int s=qu.front();
		qu.pop();
		b.push_back(s);
		if(a[s][1]!=0) qu.push(a[s][1]);
		if(a[s][2]!=0) qu.push(a[s][2]);
	}
	sort(b.begin(),b.end());
	for(int i=0;i<b.size();++i) cout<<b[i]<<" ";
}
main(){
	int t;
	cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		cin>>n;
		int u,v;
		char x;
		cin>>u>>v>>x;
		if(x=='L') a[u][1]=v;
		else a[u][2]=v;
		int d=u;
		for(int i=2;i<=n;++i){
			cin>>u>>v>>x;
			if(x=='L') a[u][1]=v;
			else a[u][2]=v;
		}
		duyet(d);
		cout<<"\n";
	}
}
