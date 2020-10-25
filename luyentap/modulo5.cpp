#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ll n;
		cin >> n;
		ll res=0;
		for(int i=0;i<s.length();i++)
			res = (res*10+(s[i]-'0')) % n;
		cout << res << endl;	
	}
	return 0;
}

