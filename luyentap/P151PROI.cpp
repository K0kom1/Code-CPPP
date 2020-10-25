#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;
	while(t--){
	
	int n;
	cin >> n;
	while(n>=10){
		int m = n;
		n = 0;
		while(m){
			int mod = m % 10;
			n += mod;
			m/=10;
		}
		
	}
	cout << n << endl;
	}
	return 0;
}

