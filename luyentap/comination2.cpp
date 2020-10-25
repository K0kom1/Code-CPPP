#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
int x[22];
void Try(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if(i==k) {
			for(int l=1;l<=k;l++)
				cout << x[l];
			cout <<" ";	
		}
		else Try(i+1);
	}
		
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		x[0]=0;
		Try(1);
		cout << endl;
	}
	return 0;
}

