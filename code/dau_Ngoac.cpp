#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack <int> a;
	string s;
	cin >> s;
	int l=s.length(),left=1, right=1;
	for (int i=0; i < l; i++){
		if (s[i]=='('){
			cout << left;
			a.push(left);
			left++;
		} 
		else if (s[i]==')'){
			cout << a.top();
			a.pop();
		}
	}

	return 0 ;
}

