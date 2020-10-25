#include<bits/stdc++.h>
using namespace std;
struct Node{
	string data;
	Node *left,*right;
	Node(string x){
		data=x;
		left=right=NULL;
	}
};
long long Num(string s){
	long long ans=0;
	if(s[0]=='-'){
		s.erase(0,1);
		for(int i=0;i<s.length();i++) ans=ans*10 + s[i]-'0';
		return -ans;
	}
	for(int i=0;i<s.length();i++) ans=ans*10 + s[i]-'0';
		return ans;
}
int Tinh(Node *root){
	if(root->left==NULL && root->right==NULL) return Num(root->data);
	if(root->data=="+") return Tinh(root->left) + Tinh(root->right);
	if(root->data=="-") return Tinh(root->left) - Tinh(root->right);
	if(root->data=="*") return Tinh(root->left) * Tinh(root->right);
	return Tinh(root->left) / Tinh(root->right);
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		int p=0;
		Node *root=new Node(s[p]);
		queue<Node *> q;
		q.push(root);
		p=1;
		while(!q.empty()){
			Node *f=q.front();q.pop();
			Node *l,*r;
			if(p!=n){
				l=new Node(s[p]);
				f->left=l;
				p++;
				q.push(l);
			}
			else f->left=NULL;
			if(p!=n){
				r=new Node(s[p]);
				f->right=r;
				p++;
				q.push(r);
			}
			else f->right=NULL;
		}
		cout<<Tinh(root)<<endl;
	}
}
