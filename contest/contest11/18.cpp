#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left,*right;
	Node(int x){
		data=x;
		left=right=NULL;
	}
};
Node *them(Node *root,int x){
	if(root==NULL) root=new Node(x);
	else if(x<=root->data) root->left=them(root->left,x);
	else root->right=them(root->right,x);
	return root;
}
void Tree(Node *root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	Tree(root->left);
	Tree(root->right);
}
Node *cautrucTree(int a[],int n){
	Node *root=NULL;
	for(int i=0;i<n;i++){
		root=them(root,a[i]);
	}
	return root;
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		Node *root=cautrucTree(a,n);
		Tree(root);
		cout<<endl;
	}
}
