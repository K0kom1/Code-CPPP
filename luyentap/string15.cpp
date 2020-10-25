#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int dem=0;
		for(int i=0;i<s.length();i++){
			for(int j=i;j<s.length();j++)
				if(s[i]==s[j]) dem++;
			}
		cout << dem << endl;	
	}
	return 0;
}

