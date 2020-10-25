#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	int dem = 0;
	cin >> n;
	int a[n+5];
	for (int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n-1;i++)
		for(int j=i+1;j<=n;j++)
			if(a[i]>a[j]) dem++;
	cout << dem;			
	return 0;
}

