#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t;
	while(t --){
		string s;
		int kt = 1;
		cin >> s;
		for (int i = s.length()-1; i >= 0; i--){
			if (s[i] < s[i-1]){
				char temp = s[i];
				s[i] = s[i-1];
				s[i-1] = temp;
				cout << s << endl;
				kt = 0;
				break;
			}
		}
		if (kt)
		cout << "-1"<< endl;
	}
	return 0;
}

