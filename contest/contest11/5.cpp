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
void Tree(Node *root){
	queue<Node *>q;
	q.push(root);
	while(!q.empty()){
		Node *f=q.front();q.pop();
		cout<<f->data<<" ";
		if(f->left!=NULL) q.push(f->left);
		if(f->right!=NULL) q.push(f->right);
	}
}
int taoNode(Node *root,int n1,int n2,char c){
	switch(c){
		case 'L': root->left=new Node(n2);
			break;
		case 'R': root->right=new Node(n2);
			break;
	}
}
void them(Node *root,int n1,int n2,char c){
	if(root==NULL) return;
	if(root->data==n1) taoNode(root,n1,n2,c);
	else{
		them(root->left,n1,n2,c);
		them(root->right,n1,n2,c);
	}
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		Node *root=NULL;
		while(n--){
			int n1,n2; char c;
			cin>>n1>>n2>>c;
			if(root==NULL){
				root=new Node(n1);
				taoNode(root,n1,n2,c);
			}
			else them(root,n1,n2,c);
		}
		Tree(root);
		cout<<endl;
	}
}
