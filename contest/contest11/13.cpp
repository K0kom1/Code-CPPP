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
bool check(Node *r1, Node *r2){
	if(r1==NULL && r2==NULL) return 1;
	if(r1 && r2){
		if(check(r1->left,r2->left) && (r1->data==r2->data) && check(r1->right,r2->right)) return 1;
		else return 0;
	}
	return 0;
}
int main(){
	int t,n,n1,n2;char c;
	cin>>t;
	while(t--){
		cin>>n;
		Node *root1=NULL;
		while(n--){
			cin>>n1>>n2>>c;
			if(root1==NULL){
				root1=new Node(n1);
				taoNode(root1,n1,n2,c);
			}
			else them(root1,n1,n2,c);
		}
		cin>>n;
		Node *root2=NULL;
		while(n--){
			cin>>n1>>n2>>c;
			if(root2==NULL){
				root2=new Node(n1);
				taoNode(root2,n1,n2,c);
			}
			else them(root2,n1,n2,c);
		}
		cout<<check(root1,root2)<<endl;
	}
}
