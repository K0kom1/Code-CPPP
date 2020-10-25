#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	string s, d, res[1000];
	int i = 0;
	getline(cin,s);
	getline(cin,d);
	
	int c = 1;
	for(int i=0;i<s.length();i++){
		if(s[i]==' ') c++;
		else res[c]+=s[i];
	}
	for(int i=1;i<=c;i++){
		if(res[i]==d) continue;
		 cout << res[i] <<" ";
	}
		
	return 0;
}

