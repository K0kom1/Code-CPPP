#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	cin >> n;
	while (n--){
		cin >> s;
		if (s[0]==s[s.length()-1]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0 ;
}

