#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(string x,string y){
	string tmp=x;
	x.append(y);
	y.append(tmp);	
	return x > y;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s[n+2];
		for(int i=1;i<=n;i++)
			cin >> s[i];
			cout << s[n] << endl;
		sort(s+1,s+n+1,cmp);
		for(int i=1; i <= n; i++) cout << s[i];
		cout << endl;	
	}
	return 0;
}