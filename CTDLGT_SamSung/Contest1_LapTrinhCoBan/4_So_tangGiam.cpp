#include<bits/stdc++.h>
using namespace std;
int check_tang(string s){
	int l=s.length();
	for (int i=0; i < l-1; i++)
		if (s[i] > s[i+1]) return 0;
	return 1;
}
int check_giam(string s){
	int l=s.length();
	for (int i=0; i < l-1; i++)
		if (s[i] < s[i+1]) return 0;
	return 1;
}
int main()
{
	int n;
	string s;
	cin >> n;

	while(n--){
		cin >> s;
		if (check_tang(s) || check_giam(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0 ;
}

