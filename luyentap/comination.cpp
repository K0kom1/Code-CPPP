#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int x[25];
void Try(int i,int n){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			for(int k=1;k<=n;k++)	cout << x[k];
			cout << " ";
		}
		else Try(i+1,n);
	}
		
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		Try(1,n);
		cout << endl;
	}
	return 0;
}

