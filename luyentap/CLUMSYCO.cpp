#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	char *s=new char[1000000];
	cin >> s;
	stack<int>st;
	int i = 0,dem=0;
	while(s[i]!=NULL){
		if (s[i]=='(') st.push(1);
			else {
				if (!st.empty()) st.pop();
					else {
						dem++;
						st.push(1);
					}
			}
		i++;
	}
		dem+=st.size()/2;
		cout <<dem;	
	return 0;
}

