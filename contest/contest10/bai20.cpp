#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int d[102][102];
void FLOYD(int n){
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++){
				if(!(i==k || j==k))
					if(d[i][k]+d[k][j]<d[i][j]) d[i][j]=d[i][k]+d[k][j];		
		}
	}	
}

int main(){
	int t;
	cin >> t;
	while(t--){
	
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			d[i][j]=1e9;
			}
	for(int i=1;i<=m;i++){
		int u,v;
		cin >> u >> v;
		d[u][v]=1;
	}
	FLOYD(n);
	int dem=0;
	int tong =0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			if(i!=j && d[i][j]!=1e9){
				dem++;
				tong+=d[i][j];
			}
		}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++)
//			cout << d[i][j]<< " ";
//		cout << endl;
//		}
	printf("%.2f\n",(float)tong/dem);		
	}
	return 0;
}

