#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
		long long n,s,kt=1;
		cin >> n>> s;
		ull a[n+2];
		for(int i=1;i<=n;i++){
			cin>> a[i];
			}	
		
		ull L[s+2];
		L[s] = 0; L[0] = 1;
		for (int i=1;i<=n;i++)
			for (int t=s;t>=a[i];t--)
				if (L[t]==1 || L[t-a[i]] ==1) L[t] = 1;
		if(L[s] ==1) kt = 1;
		else kt = 0;
		if(kt==1) cout << "YES";
			else cout << "NO";
	return 0;
}

