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
int deep(Node *root){
	if(root==NULL) return 0;
	return (1+max(deep(root->left),deep(root->right)));
}
bool check(Node *root,int cap,int h){
	if(root==NULL) return true;
	if(root->left==NULL && root->right==NULL && cap<h) return false;
	return check(root->left,cap+1,h) && check(root->right,cap+1,h);
}
bool test(Node *root){
	int h=deep(root);
	return check(root,1,h);
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
		if(test(root)) cout<<1<<endl;
		else cout<<0<<endl;
	}
}
