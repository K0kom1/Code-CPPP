#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int b_s(int a[],int x, int l, int r){
	if(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x) return mid;
		else if(a[mid]<x) return b_s(a,x,mid+1,r);
		else return b_s(a,x,l,mid-1);
	}
	else return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x,k=n+1;
		cin >> n >> x;
		int a[n+2];
		for(int i=1;i<=n;i++)
			{
			cin >> a[i];
			if(a[i]<a[i-1]) k = i;
			}
		//sort(a+1,a+n+1);	
		if (b_s(a,x,1,k-1)!=-1)	cout << b_s(a,x,1,k-1);
		else cout << b_s(a,x,k,n);
		cout << endl;	
	}
	return 0;
}

