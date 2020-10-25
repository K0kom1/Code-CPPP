#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	string s,res[1000];
	getline(cin,s);
	int c = 1;
	for(int i=0;i<s.length();i++){
		if(s[i]>=65 && s[i]<=91)	s[i]+=32;
		if(s[i]!=' ' && s[i-1]==' ') c++;
		if(s[i]!=' ')	res[c]+=s[i];
	}
	for(int i=0;i<res[c].length();i++)
		if(res[c][i]>=97 && res[c][i]<=123)	res[c][i]-=32;		
	for(int i=1;i<c;i++){
		if(res[i][0]>=97 && res[i][0]<=123)	res[i][0]-=32;
		}
	for(int i=1;i<c;i++){
		cout << res[i];
		if(i==c-1) cout << ", ";
		else cout <<" ";	
	}
	cout << res[c];
	
	return 0;
}

