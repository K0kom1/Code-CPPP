#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef unsigned long long ull;
int main(){
	string s;
	cin >> s;
	while( s != "R0C0"){
		ull a = 0;
		int k;
		for(int i = 1; i< s.length(); i++)
		{
			if (s[i] == 'C') k = i;
		}
		for(int i = k+1; i < s.length(); i++){
			a = a*10 +s[i] - '0';
		}
		string y = "";    
		int nho = 0;                                                                     
		while(a != 0){
			 int mod = a % 26;
			if (mod == 0) {
						y += "Z";
						}
				else {
					y+=(char)(mod+64);
					}
			a=(a-1)/26;
				 
		}
		reverse(y.begin(), y.end());
		cout << y;
		for (int i = 1; i <= k-1; i++)
			cout << s[i];
		cout << endl;
		cin >> s;	
	}
	return 0;
}

