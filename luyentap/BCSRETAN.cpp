#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	string s="";
	cin >>n;
	while(n){
		int mod = n%2;
		if(mod == 0) s.insert(0,1,'7');
			else if(mod == 1) s.insert(0,1,'4');
		n=(n-1)/2;	
	}
	cout << s;
	return 0;
}

