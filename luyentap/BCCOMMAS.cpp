#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	string s;
	cin >> s;
	int i = s.length()-3;
	while(i>0){
	
		s.insert(i,1,',');
		i-=3;
		}
	cout << s;	
	return 0;
}

