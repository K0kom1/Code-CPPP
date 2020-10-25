#include<bits/stdc++.h>
using namespace std;
int tim(int a[],int x,int n){
	for(int i=0;i<n;i++){
		if(a[i]==x) return i;
	}
	return -1;
}
void post(int in[],int pre[],int n){
	int root=tim(in,pre[0],n);
	if(root!=0) post(in,pre+1,root);
	if(root!=n-1) post(in+root+1,pre+root+1,n-root-1);
	cout<<pre[0]<<" ";
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int in[1005],pre[1005];
		for(int i=0;i<n;i++) cin>>in[i];
		for(int i=0;i<n;i++) cin>>pre[i];
		post(in,pre,n);
		cout<<endl;
	}
}
