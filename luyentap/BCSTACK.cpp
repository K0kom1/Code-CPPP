#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	stack<int>st;
	string s;
	cin >> s;
	while(s!="end"){
		if (s == "init") 
			while (!st.empty()){
				st.pop();
			} 
		if (s == "empty") 
			if (!st.empty()) cout << "0" << endl;
			else cout << "1" << endl;
		if (s == "push") {
			int n;
			cin >> n;
			st.push(n);
		}		
		if(s == "top") if (!st.empty())cout << st.top() << endl; else cout << "-1" << endl;
		if (s == "pop") if(!st.empty()) st.pop();
		if (s == "size") cout << st.size() <<endl;
		cin >> s;	
	}	

	return 0;
}

