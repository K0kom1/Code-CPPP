#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string res="";
		if(s.length()%2!=0) s.insert(0,1,'0');
		for(int i=0;i<s.length();i+=2){
			if(s[i]=='0' && s[i+1]=='0') res+='0';
			if(s[i]=='0' && s[i+1]=='1') res+='1';
			if(s[i]=='1' && s[i+1]=='0') res+='2';
			if(s[i]=='1' && s[i+1]=='1') res+='3';
		}
		int tongchan=0,tongle=0;
		for(int i=0;i<res.length();i+=2) tongchan+=(res[i]-'0');
		for(int i=1;i<res.length();i+=2) tongle+=(res[i]-'0');
		if(abs(tongle-tongchan)%5==0) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
	return 0;
}

