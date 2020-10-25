#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char,int>dem;
		priority_queue <int> q;
		for(int i=0;i<s.length();i++)
			dem[s[i]]++;
		for(int i=0;i<s.length();i++)
			if(dem[s[i]]==1) 	cout << s[i];	

		cout << endl;
	}
	return 0;
}

