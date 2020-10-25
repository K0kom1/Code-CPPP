#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main(){
	string s;
	cin >> s;
	ull kq = 0;
	for (int i = 0; i < s.length(); i++){
		kq = kq * 2 + s[i] - '0';
	}
	string res="";
	while(kq != 0 ){
		int mod = kq % 8;
		res.insert(0,1,char(mod + 48));
		kq /= 8;
	}
	cout << res;
	return 0;
}

