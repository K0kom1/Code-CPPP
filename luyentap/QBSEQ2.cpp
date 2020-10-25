#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int a[1002];
long long tinh(int n,int k){
	long long f[n+2][k+2]; 
	for(int i=1;i<k;i++) f[0][i]=-1000000;
	f[0][0] = 0;
		for(int i=1;i<=n;i++){
			long long mod=a[i]%k;
			for(int j=0;j<k;j++){
				long long x = (k-mod+j)%k;
				f[i][j] = max(f[i-1][j],f[i-1][x]+1);
			}
		}		
//	for(int i=1;i<=n;i++){
//		for(int j=0;j<k;j++)
//			cout << f[i][j]<<" ";
//		cout << endl;
//		}
	return f[n][0];	
}

int main(){
	
		int n,k;
		cin >> n >> k;
		for(int i=1;i<=n;i++)
			cin >> a[i];
		cout << tinh(n,k) << endl;	
	
	return 0;
}

