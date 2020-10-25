#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	cin >> n;
	int a[n+2][4];
	int dem = 0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=3;j++)
			cin >> a[i][j];
	for(int i=1;i<=n;i++){
		int k = 0;
		for(int j=1;j<=3;j++)
			k+=a[i][j];
		if (k>=2) dem++;	
		}		
	cout << dem;	
	return 0;
}

