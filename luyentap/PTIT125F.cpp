#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	cin >> n;
	int minu=100000,mind=100000;
	int su=0,sd=0;
	int u[n+1],d[n+1];
	for(int i=1;i<=n;i++)
		{
		cin >> u[i]>>d[i];
		su+=u[i];
		sd+=d[i];
		if(u[i]<minu) minu=u[i];
		if(d[i]<mind) mind=d[i];
		}
	su+=mind;
	sd+=minu;
	if(su>sd) cout << su;
		else cout << sd;	
	return 0;
}

