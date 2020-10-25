#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const ull M = 1000000000000000000;
const ull m = 1000000000;
int main(){
	int t;
	cin >> t;
	while(t--){
		ull n;
		cin >> n;
		ull tong = 1;
		if	(n<m)
		{
		for (int i = 2; i <= sqrt(n);i++)
			if (n%i == 0) tong += (i +n/i);
		if(tong == n) cout <<"1" ;
			else cout << "0";
		}
		else cout << "0";
		cout <<endl;		
	}
	return 0;
}

