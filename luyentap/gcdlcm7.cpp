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
ull luythua(ull a, ull b){
	ull kq = 1;
	for (int i = 1; i <= b; i++)
		kq *= a;
	return kq;	
}
int main(){
	int t;
	cin >> t;
	while (t --){
		int n,x,y,z;
		cin >> x >> y >> z >> n;
		ull bcnn = lcm(x,lcm(y,z));
		ull liml = luythua(10,n-1)-1;
		ull limr = luythua(10,n)-1;
		ull kq = (liml / bcnn + 1) * bcnn ;
		if (kq > limr) cout << "-1";
			else cout << kq;
		cout << endl;	
		
	}
	return 0;
}


