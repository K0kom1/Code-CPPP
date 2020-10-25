#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n,dem=0,x;
	cin >> n;
	int a[n+1];
	x = n;
	for(int i =1;i<=n;i++)
		cin >> a[i];
	for (int i=n;i>=1;i--)
		if(a[i]!=x) dem++;
		else{
			x--;
		}
	cout <<dem;	 	
	return 0;
}

