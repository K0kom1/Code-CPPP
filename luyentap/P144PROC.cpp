#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const ull M =1000000007;
ull luythua(ull a,ull b){
	ull res = 1;
	while(b){
		if (b&1) res = res * a %M;
		a = a*a%M;
		b>>=1;
	}
	return res;
}
int main(){
	ull a,b;
	cin >> a >> b;
	while(!((a==0)&&(b==0))){
		cout << luythua(a,b)<<endl;
		cin >> a >> b;
	}
	return 0;
}

