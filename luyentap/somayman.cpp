#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int l=s.length();
		if(s[l-2]=='8' && s[l-1]=='6') cout << 1;
		else cout << 0;
		cout << endl;
	}
	return 0;
}

