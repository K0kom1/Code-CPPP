#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	string s;
	int a[100];
	a['O'] = 16;
	a['H'] = 1;
	a['C'] = 12;
	cin >> s;
	stack<int> st;
 	int i = 0;
	int l = s.length();
	int temp =0;
	int res = 0;
	while(i <= l-1){
			if (s[i]!=')') 
				if ((s[i] >= '2')&&(s[i] <= '9')) 
					for (int j=1; j<=int(s[i]-'1');j++) st.push(st.top());
				else st.push(s[i]);
			else 
			{	int res = 0;
				int k ;
				if ((s[i+1] >= '2')&&(s[i+1] <= '9')) {
					k = (s[i+1] -'0');
					i++;
				} 
				else k = 1;
				while(st.top() != '(' ){
					if((st.top()=='O')||(st.top()=='H')||(st.top()=='C'))
						res += (a[st.top()]*k);
					else res+= ((st.top()-100)*k);	
					st.pop();
				}
				st.pop();
				st.push(res+100);
				//cout << st.top() << endl;		
			}
			
		i++;
	}
	int kq= 0;
	while(!st.empty()) {
	if((st.top()=='O')||(st.top()=='H')||(st.top()=='C'))
						res += (a[st.top()]);
					else res+= ((st.top()-100));	
	st.pop();
	}
	cout << res;
	return 0;
}

