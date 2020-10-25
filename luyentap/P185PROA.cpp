#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for(int i=0;i<s.length();i++){
			if(i==0){
				if('9'-s[i]!=0 && '9'-s[i]<s[i]-'0') s[i]=('0'+57-s[i]);
			}
			else if('9'-s[i]<s[i]-'0') s[i]=('0'+'9'-s[i]);
		}
		cout << s << endl;
	}
	return 0;
}

