#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t,k;
	cin >> t;
	k=t-1;
	while(t--){
		string s;
		stack<string>st;
		if(t==k)cin.ignore();
		getline(cin,s);
		string tmp="";
		for(int i=0;i<s.length();i++){
			if(s[i]!=' ') tmp+=s[i];
			else if(s[i]==' '){
				tmp+=' ';
				st.push(tmp);
				tmp="";
			}
		}
		tmp+=' ';
		st.push(tmp);
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}	
		cout << endl;
	}
	return 0;
}

