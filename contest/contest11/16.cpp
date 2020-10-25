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
	else{
		them(root->left,n1,n2,c);
		them(root->right,n1,n2,c);
	}
}
int maxPathSumUtil(struct Node *root, int &res) 
{ 
    if (root==NULL) return 0; 
    if (!root->left && !root->right) return root->data; 
    int ls = maxPathSumUtil(root->left, res); 
    int rs = maxPathSumUtil(root->right, res); 
    if (root->left && root->right) 
    { 
        res = max(res, ls + rs + root->data); 
        return max(ls, rs) + root->data; 
    } 
    return (!root->left)? rs + root->data: 
                          ls + root->data; 
} 
int maxPathSum(struct Node *root) 
{ 
    int res = INT_MIN; 
    maxPathSumUtil(root, res); 
    return res; 
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
		cout<<maxPathSum(root)<<endl;
	}
}
