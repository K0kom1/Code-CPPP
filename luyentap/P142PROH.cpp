#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int m,n,demhang=0,demcot=0;
	cin >> m >> n;
	char s[m+1][n+1];
	int hang[m+1];
	int cot[n+1];
	for(int i=1;i<=m;i++)
		hang[i]=0;
	for(int j=1;j<=n;j++)
		cot[j]=0;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			{
			cin >> s[i][j];
			if (s[i][j]=='S'){
				if (hang[i]==0){
					demhang++;
					hang[i]=1;
				}
				if (cot[j]==0){
					demcot++;
					cot[j]=1;
				}
			}
			}
//	cout << demhang<<" "<<demcot;		
	cout << (m-demhang)*n+(n-demcot)*(demhang);		
	return 0;
}

