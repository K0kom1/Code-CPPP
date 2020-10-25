#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int m = 1e9+7;
long long c[1001][1001];
void tohop(){
	for(int n=0;n<=1000;n++)
		for(int k=0;k<=n;k++){
			 if(k==n || k==0) c[k][n]=1;
					else c[k][n]=(c[k][n-1]%m+c[k-1][n-1]%m)%m;
		}
}
int main(){
	tohop();
	int t;
	cin >> t;
	while(t--){
		int n,r;
		cin >> n >> r;
		cout << c[r][n] << endl;
	}
	return 0;
}

