#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum(string s){
	ll res=0;
	for(int i=0;i<s.length();i++)
		res+=(s[i]-'0');
	return res;	
}
string n_to_str(ll n){
	string res="";
	while(n){
		int mod=n%10;
		res.insert(0,1,mod+'0');
		n/=10;
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		while(s.length()>1){
			ll S=sum(s);
			s=n_to_str(S);
		}
		cout << s << endl;
	}
	return 0;
}

