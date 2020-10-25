#include<bits/stdc++.h>
using namespace std;
int main() {
		string s1,s2;
		getline(cin, s1);
		getline(cin, s2);
		while (s1.find(s2) != -1) s1.erase(s1.find(s2), s2.length());
		cout << s1 << endl;
	return 0;
}