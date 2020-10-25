#include<bits/stdc++.h>
using namespace std;
int pre[1000005];
void pos(int d,int c){
	if(d>c) return;
	else if(d==c) cout<<pre[d]<<" ";
	else{
		int vt=c+1;
		for(int i=d+1;i<=c;++i){
			if(pre[i]>pre[d]){
				vt=i;
				break;
			}
		}
		pos(d+1,vt-1);
		pos(vt,c);
		cout<<pre[d]<<" ";
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;++i) cin>>pre[i];
		pos(1,n);
		cout<<"\n";
	}
}
