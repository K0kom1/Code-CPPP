#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	string s;
	cin >> s;
	int demR=0;
	int demL=0;
	int R=0;
	int L=0;
	int max = 0;
	for(int i=0;i<s.length();i++)
		{
			if(s[i]=='L') {
				L++;
				demL++;
				if(demL-R>max) max = demL-R;
			}
			if(s[i]=='R') {
				demR++;
				R++;
				if(demR-L>max) max = demR-L;
			}
			if(s[i]=='?') {
				demL++;
				demR++;
				if(demL-R>max) max = demL-R;
				if(demR-L>max) max = demR-L;
			}
		}
	cout << max;
	return 0;
}

