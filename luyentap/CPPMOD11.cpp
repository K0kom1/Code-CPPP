#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull mu(ull x,ull y,ull p){
	ull res = 0;
	while(y){
		if (y&1) res = res+x % p;
		x = x + x % p;
		y >>=1;
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ull x,y,p;
		cin >> x>>y>>p;
		cout << mu(x,y,p) <<endl;
	}
	return 0;
}

