#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	string s;
	cin >> test;
	while (test--){
		cin >> s;
		int l=s.length();
		int k=l-1;
		while (s[k] != '0' && k >= 0) k--;
		
		if (k == -1){
			k=0;
			s[k]='0';
		}
		else s[k]='1';
		for (int i=l-1; i>k; i--)
			if (s[i] == '1') s[i]='0';
		cout << s << endl;
	}
	return 0 ;
}

