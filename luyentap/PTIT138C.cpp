#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	cin>> n;
	while(n--){
		string s,res="";
		cin >> s;
		for (int i =0;i<s.length();i++)
			if((s[i]>='a')&&(s[i]<='z')) s[i]-=('a'-'A');
		for (int i =0;i<s.length();i++){
				switch(s[i]){
					case 'A':
					case 'B':
					case 'C':{
						res+='2';
						break;
					}
					case 'D':
					case 'E':
					case 'F':{
						res+='3';
						break;
					}
					case 'G':
					case 'H':
					case 'I':{
						res+='4';
						break;
					}
					case 'J':
					case 'K':
					case 'L':{
						res+='5';
						break;
					}
					case 'M':
					case 'N':
					case 'O':{
						res+='6';
						break;
					}
					case 'P':
					case 'Q':
					case 'R':
					case 'S':{
						res+='7';
						break;
					}
					case 'T':
					case 'U':
					case 'V':{
						res+='8';
						break;
					}
					case 'W':
					case 'X':
					case 'Y':
					case 'Z':{
						res+='9';
						break;
					}
						
				}
			}
		string x = res;
		reverse(x.begin(),x.end());
		if(x==res) cout << "YES";
			else cout <<"NO";
		cout <<endl;		
	}
	return 0;
}

