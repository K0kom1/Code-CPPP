#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull nhan(ull x,ull y,ull p){
	ull res = 0;
	while(y){
		if (y&1) res = (res+x) % p;
		x = (x + x) % p;
		y >>=1;
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ull a,m;
		cin >> a>>m;
		for (int i = 0; i <= m-1;i++)
			if (a * i % m == 1) 	{
				cout << i <<endl;
				goto thoat;	
			}
		cout << "-1"<<endl;
		thoat:;	
	}
	return 0;
}

