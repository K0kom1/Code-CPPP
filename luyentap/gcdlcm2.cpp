#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull gcd(ull a, ull b){
	if (b == 0) return a;
		else return gcd(b , a % b);
}
ull lcm(ull a, ull b){
	return (a*b)/gcd(a,b);
}

int main(){
	int t;
	cin >> t;
	while(t --){
		ull n;
		cin >> n;
		ull res = 1;
		for (int i = 2; i <= n; i++)
			res = lcm(res,i);
		cout << res << endl;
	}
	return 0;
}

