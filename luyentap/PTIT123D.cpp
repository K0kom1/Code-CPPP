#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	cin >> n;
	while(n){
		ull a[33][33];
	memset(a,0,sizeof(a));	
	for(int i=1;i<=n+1;i++)
	a[i][1]=1;
	for (int j = 2;j <=n+1;j++)
		for(int i=j;i<=n+1;i++)
			a[i][j]=a[i][j-1]+a[i-1][j];
		
	
	cout<<a[n+1][n+1]<<endl;
	cin >> n;
	}
	return 0;
}

