#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull gcd(ull a, ull b){
	if (b == 0) return a;
		else return gcd(b, a % b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ull a;
		string b;
		cin >> a;
		cin >> b;
		ull res = 0;
		for (int i = 0; i < b.length(); i++)
			res = (res*10 + b[i] - '0' )% a;
		cout << gcd(a,res)<< endl;	
	}
	return 0;
}

