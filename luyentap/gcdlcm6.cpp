#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull tong(ull a){
	if (a == 0) return 0;
		else return (a + tong(a-1));
}
ull gcd(ull a,ull b){
	if (b == 0) return a;
		else return gcd(b , a % b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ull n,m;
		cin >> n >> m;
		ull sum = tong(n);
		ull dif = m;
		if (((dif ^ sum) & 1 ) || (dif >= sum)) cout << "No";
			else {
				ull a = (sum + dif)/2;
				ull b = (sum - a);
				ull uoc = gcd(a,b);
				if (uoc == 1) cout << "Yes";
					else cout << "No";
			}
		cout << endl;	
	}
	return 0;
}

