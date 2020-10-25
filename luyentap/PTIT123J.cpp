#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	string s;
	getline(cin,s);
	while(s!="."){
		stack<int> st;
		st.push('l');
		for (int i = 0; i <s.size();i++){
			if ((s[i] == '(') ||  (s[i]=='[')) st.push(s[i]);
			if (s[i] == ')') 
				if (st.top()=='(') st.pop();
				else {
						cout << "no" << endl;
						goto thoat;
				}
			if (s[i] == ']') 
				if (st.top()=='[') st.pop();
				else {
						cout << "no" << endl;
						goto thoat;
				}					
		}
		st.pop();
		if (st.empty()) cout << "yes" <<endl;
			else cout << "no" <<endl;
		thoat : getline(cin,s);
	}
	return 0;
}

