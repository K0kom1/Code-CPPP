#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull gcd(ull a, ull b){
	if (b == 0) return a;
		else return gcd(b , a % b);
}

int main(){
	int t;
	cin >> t;
	while(t --){
		ull a, b;
		cin >> a >> b;
		ull uoc = gcd(a,b);
		ull boi = a*b/uoc;
		cout << boi << " " << uoc;
		cout << endl;
	}
	return 0;
}

