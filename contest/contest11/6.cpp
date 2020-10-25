#include<bits/stdc++.h>
using namespace std;
int n;
int in[1005],lev[1005];
int vt1[10005];
void pos(int d,int c){
	if(d>c) return;
	else if(d==c) cout<<in[d]<<" ";
	else{
		int vt;
		for(int i=1;i<=n;++i){
			if(vt1[lev[i]]>=d&&vt1[lev[i]]<=c){
				vt=i;
				break;
			}
		}
		vt=vt1[lev[vt]];
		pos(d,vt-1);
		pos(vt+1,c);
		cout<<in[vt]<<" ";
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;++i){
			cin>>in[i];
			vt1[in[i]]=i;
		}
		for(int i=1;i<=n;++i){
			cin>>lev[i];
		}
		pos(1,n);
		cout<<"\n";
	}
}
