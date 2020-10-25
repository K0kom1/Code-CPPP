#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int dem = 0,n,m;
char s[105][105];

void danhdau(int i,int j){
	if (s[i][j] == 'W'){
		s[i][j]= 'o';
		danhdau(i+1,j);
		danhdau(i,j+1);
		danhdau(i+1,j+1);
		danhdau(i-1,j-1);
		danhdau(i-1,j);
		danhdau(i-1,j+1);
		danhdau(i,j-1);
		danhdau(i+1,j-1);
	}
}
void rasoat(){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			if(s[i][j]=='W'){
				dem ++;
				danhdau(i,j);
		}
		}
}
int main(){
	cin >> n >> m;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=m;j++)
			cin >> s[i][j];
	rasoat();
	for (int i=1;i<=n;i++)
		{
		for (int j=1;j<=m;j++)
			cout << s[i][j];
		cout << endl;
	}
	cout << dem;		
	return 0;
}

