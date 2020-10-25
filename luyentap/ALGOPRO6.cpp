#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
const int ngay = 3584;
int nam(int n){
	int res = 0;
	while(n != 0){
		int mod = n % 10;
		res += mod;
		n /= 10;
	}
	return res;
}
int main(){
	int n;
	cin >> n;
	int kq = 0;
	if (((n % 4 == 0) && ( n % 100 != 0)) || (n % 400 == 0)){
		kq = ngay + nam(n)*366 + 13 ;
	}
		else kq = ngay + 365 *(nam(n));
		cout << kq;
	return 0;
}

