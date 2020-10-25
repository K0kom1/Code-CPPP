#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		ull m;
		cin >> s >> m;
		ull res = 0;
		for (int i = 0; i< s.length();i++)
			res = (res*10 + (s[i]-'0')) % m;
		cout <<res <<endl;	 
	}
	return 0;
}

