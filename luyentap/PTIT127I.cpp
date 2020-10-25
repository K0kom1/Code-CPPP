#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	do{	
		cin >> n;
		if(n==0) exit(0);
		bool dem[100];
		memset(dem,false,sizeof(dem));
		int a[n+1][7];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=6;j++)
				cin >> a[i][j];
		if(n<=8) {
				cout << "No" ;
				}
		else		
		{
		for(int i=1;i<=n;i++)
			for(int j=1;j<=6;j++)
				dem[a[i][j]] = true;
		for(int i=1;i<=49;i++)
			if(dem[i]==false) {
				cout <<"No";
				goto Exit;
			}
		cout << "Yes";
		}
		
		
		Exit: cout <<endl;					
	}while(n!=0);
	return 0;
}

