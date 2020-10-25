#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull gcd(ull a, ull b){
	if (b == 0) return a;
    return gcd(b, a % b);
}
long long lcm(ull a,ull b){
	return (a*b)/(gcd(a,b));
}
int main(){
	int t;
	cin >> t;
	while(t -- ){
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		ull c1,c2,c3;
		c1 = (n/a)-(m/a);
		c2 = (n/b)-(m/b);
		c3 = (n/(lcm(a,b)) - m/(lcm(a,b)));
		if (m % a == 0) c1 ++;
		if (m % b == 0) c2 ++;
		if (m % (lcm(a,b)) == 0) c3 ++;
		cout << c1 + c2 - c3<< endl;
	}	
	return 0;
}

