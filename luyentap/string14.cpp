#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int kt = 1;
		cin.ignore();
		getline(cin,s);
		int dem=1;
		for(int i=0;i<s.length();i++){
			if(s[i]!=' ') kt=0;
			if(s[i]!=' ' && s[i+1]==' ') {
			dem++;
				}
			}
		if(kt) cout << 0 << endl;
		else	
		cout << dem << endl;
	}
	return 0;
}

