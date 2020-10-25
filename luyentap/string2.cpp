#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ll sumchan=0,sumle=0;
		for(int i=0;i<s.length();i+=2)	sumchan+=(s[i]-'0');
		for(int i=1;i<s.length();i+=2)	sumle+=(s[i]-'0');
		if(abs(sumchan-sumle)%11==0)	cout << 1;
		else cout << 0;
		cout << endl;	
	}
	return 0;
}

