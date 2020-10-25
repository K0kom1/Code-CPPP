#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main(){
	int n, k;
	cin >> n >> k;
	ull a[n+1];
	a[0] = -1;
	for (int i=0; i<n; i++)
		cin >> a[i];
	sort(a,a+n);
	cout << a[k];	
	return 0;
}

