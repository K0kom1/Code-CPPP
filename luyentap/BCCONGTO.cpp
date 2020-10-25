#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main(){
	
	string s;
	cin >> s ;
	while(s != "0"){
		ull kq = 0;
		for (int i = 0; i< s.length();i++){
			kq = kq * 9;
			int mod = s[i] - '0';
			if (mod >= 5) kq += mod-1;
				else kq+=mod;
 		}
		cout << s<<": "<<kq << endl;	
		cin >> s;
	}
	return 0;
}

