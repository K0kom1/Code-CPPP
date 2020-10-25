#include<bits/stdc++.h>
#include<cmath>
using namespace std;
typedef unsigned long long ull;
ull luythua(ull a,ull b, ull m){
	ull res = 1;
	while (b){
		if (b & 1 )res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		ull b , m;
		ull x = 0;
		cin >> a >> b >> m;
		for (int i = 0; i < a.length(); i ++){
			x = (x*10 + a[i]-'0')%m;
			}
		cout << luythua(x,b,m) << endl;	 
		
	}
	return 0;
}

