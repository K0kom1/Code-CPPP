#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int m,n;
	cin >> m >> n;
	char s[m+2][n+2];
	int check[m+2][n+2];
	for (int i =1;i<=m;i++)
		for (int j = 1; j<=n;j++)
			check[i][j]=1;
	for (int i =1;i<=m;i++)
		for (int j = 1; j<=n;j++)
			cin >> s[i][j];
	int max = -1,kt =1,maxi=0,maxj=0;		
	for (int i =1;i<=m;i++)
		for (int j = 1; j<=n;j++)
			if (s[i][j]=='.') {
				kt = 0;
				int dem = 0;
				if (s[i][j+1]=='o') dem++;
				if (s[i+1][j]=='o') dem++;
				if (s[i+1][j+1]=='o') dem++;
				if (s[i-1][j-1]=='o') dem++;
				if (s[i][j-1]=='o') dem++;
				if (s[i-1][j]=='o') dem++;
				if (s[i-1][j+1]=='o') dem++;
				if (s[i+1][j-1]=='o') dem++;
				if (dem>max) {
					max = dem;
					maxi=i;
					maxj=j;
				//	cout << dem <<" "<< maxi<<" "<<maxj<<endl;
				}
			}
	int dem = 0;		
	if (kt==0)	s[maxi][maxj]='o';
//	for (int i =1;i<=m;i++){
//		for (int j = 1; j<=n;j++)
//			cout << s[i][j];
//		cout <<endl;
//	}
	for (int i =1;i<=m;i++)
		for (int j = 1; j<=n;j++)
			if (s[i][j]=='o') {
				check[i][j]=0;
				if ((s[i][j+1]=='o')&&(check[i][j+1])==1) dem++;
				if ((s[i+1][j]=='o')&&(check[i+1][j])==1) dem++;
				if ((s[i+1][j+1]=='o')&&(check[i+1][j+1])==1) dem++;
				if ((s[i-1][j-1]=='o')&&(check[i-1][j-1])==1) dem++;
				if ((s[i][j-1]=='o')&&(check[i][j-1])==1) dem++;
				if ((s[i-1][j]=='o')&&(check[i-1][j])==1) dem++;
				if ((s[i-1][j+1]=='o')&&(check[i-1][j+1])==1) dem++;
				if ((s[i+1][j-1]=='o')&&(check[i+1][j-1])==1) dem++;
				
			}
	cout <<dem;					
	return 0;
}

