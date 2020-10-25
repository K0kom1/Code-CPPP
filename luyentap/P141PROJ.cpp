#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	char s[10][10];
	int kt = 0;
	for (int i=1;i<=4;i++)
		for(int j=1;j<=4;j++)
			cin >> s[i][j];
	for (int i=1;i<=3;i++)
		for(int j=1;j<=3;j++)
		{	int dem =0;
			if(s[i][j]=='#') dem++;
			if(s[i][j+1]=='#') dem++;
			if(s[i+1][j]=='#') dem++;
			if(s[i+1][j+1]=='#') dem++;
			if (dem!=2) {
			goto thoat;
			kt = 1;
			}
				}		
		if(!kt) cout << "NO";
		else thoat: cout <<"YES";
				
	return 0;
}

