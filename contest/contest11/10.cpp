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
int sum(Node *root){
	if(root==NULL) return 0;
	else {
		int sumleft=sum(root->left);
		int sumright=sum(root->right);
		int Sum=root->data + sumleft + sumright;
	}
}
bool isSum(Node *root){
	if(root==NULL) return 1;
	if(root->left== NULL && root->right==NULL) return 1;
	int sumleft=sum(root->left);
	int sumright=sum(root->right);
	if(root->data==(sumleft+sumright) && isSum(root->left) && isSum(root->right)) return 1;
	return 0;
}
int main(){
	int t,n,n1,n2; char c;
	cin>>t;
	while(t--){
		map<int,Node*> m;
		cin>>n;
		Node *root=NULL;
		Node *con;
		while(n--){
			cin>>n1>>n2>>c;
			Node *cha;
			if(m.find(n1)==m.end()){
				cha=new Node(n1);
				m[n1]=cha;
				if(root==NULL) root=cha;
			}
			else cha=m[n1];
			con=new Node(n2);
			if(c=='L') cha->left=con;
			else cha->right=con;
			m[n2]=con;
		}
		cout<<isSum(root)<<endl;
	}
}
