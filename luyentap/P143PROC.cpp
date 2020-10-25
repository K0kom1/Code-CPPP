#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	ull y,k,n;
	cin >> y >> k >> n;
	ull mod = y % k;
	mod = k-mod;
	if (y>=n) cout <<"-1";
	else if(y+mod<=n)
	for (ull i=mod; i+y<=n; i+=k)
		cout << i <<" ";
		else cout << "-1";
	return 0;
}

