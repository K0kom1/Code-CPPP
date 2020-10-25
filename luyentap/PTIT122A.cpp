#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;
	int x = t;
	while(t--){
	string s;
	if (x-1==t)cin.ignore();
	getline(cin,s);
	stack<int> st;
	stack<int> check;
 	int i = 0;
 	int dem = 0;
	int l = s.length();
	st.push('l');
		while(s[i]!=NULL){
			if(s[i] == '(')
				if ((st.top() == '-') && (s[i+2] !=')'))
					{
					st.push('(');
					check.push(1);
					}
				else check.push(0);	
			else if ((s[i] != ' ') && (s[i] != ')')) st.push(s[i]);
				else if (s[i] == ')') {
					if (check.top() == 1) st.push(s[i]);
					check.pop();
					
					}		
		i++;
	}
	string kq="";
	while(st.top() != 'l'){
		kq.insert(0,1,st.top());
		st.pop();
	}
	cout << kq << endl;
}
	return 0;
}

