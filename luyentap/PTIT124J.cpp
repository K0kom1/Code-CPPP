#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int so(char a,char b,char c){
	if ((a == '0')&&(b == '0')&&(c == '0')) return 0;
 	if ((a == '0')&&(b == '0')&&(c == '1')) return 1;
 	if ((a == '0')&&(b == '1')&&(c == '0')) return 2;
 	if ((a == '0')&&(b == '1')&&(c == '1')) return 3;
 	if ((a == '1')&&(b == '0')&&(c == '0')) return 4;
	if ((a == '1')&&(b == '0')&&(c == '1')) return 5;
 	if ((a == '1')&&(b == '1')&&(c == '0')) return 6;
 	if ((a == '1')&&(b == '1')&&(c == '1')) return 7;
 }
int main(){
	string s;
	cin >> s;
	int l = s.size();
	int mod = 3 - l % 3;
	if(mod<3)	s.insert(0,mod,'0');
	//cout << s << endl;
	if (mod < 3)l+=mod;
	for (int i=0;i<=l-3;i+=3)
		cout << so(s[i],s[i+1],s[i+2]);
	
	return 0;
}

