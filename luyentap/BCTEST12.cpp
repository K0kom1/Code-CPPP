#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	string s;
	cin >> s;
	for(int i =0;i<s.length();i++){
		switch (s[i]){
			case 'A':
			case 'O':
			case 'Y':
			case 'E':
			case 'U':
			case 'I':
			case 'a':
			case 'o':
			case 'y':
			case 'e':
			case 'u':
			case 'i':break;
			default:{
				cout <<".";
				if(s[i]<97) cout << (char)(int)(s[i]+32);
				else cout<<s[i];
				break;
			}
		}
	}
	
	return 0;
}

