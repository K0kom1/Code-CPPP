#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	string s,res[1000];
	getline(cin,s);
	int c = 1;
	for(int i=0;i<s.length();i++){
		if(s[i]==' ') c++;
		else res[c]+=s[i];
	}
	for(int i=0;i<res[c].length();i++)
		if(res[c][i]>=65 && res[c][i]<=91)	res[c][i]+=32;
	cout << res[c];	
	for(int i=1;i<c;i++){
		if(res[i][0]>=65 && res[i][0]<=91)	res[i][0]+=32;
		cout << res[i][0];
		}
	cout <<"@ptit.edu.vn";	
	return 0;
}

