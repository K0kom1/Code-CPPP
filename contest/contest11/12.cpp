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
void taoNode(Node *root,int n1,int n2,char c){
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
	else {
		them(root->left,n1,n2,c);
		them(root->right,n1,n2,c);
	}
}
bool isfullTree(Node *root){
	if(root==NULL) return true;
	if(root->left==NULL && root->right==NULL) return true;
	Node *l,*r;
	l=root->left;
	r=root->right;
	if(l && r){
		if(isfullTree(l) && isfullTree(r)) return true;
	}
	return false;
}
int main(){
	int t,n,n1,n2;char c;
	cin>>t;
	while(t--){
		cin>>n;
		Node *root=NULL;
		while(n--){
			cin>>n1>>n2>>c;
			if(root==NULL){
				root=new Node(n1);
				taoNode(root,n1,n2,c);
			}
			else them(root,n1,n2,c);
		}
		if(isfullTree(root)) cout<<1<<endl;
		else cout<<0<<endl;
	}
}
