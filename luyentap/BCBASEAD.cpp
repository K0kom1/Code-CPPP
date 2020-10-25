#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
string s[35];
void init(){
	s[0] = "{}";
	for (int i = 1; i <= 15; i++){
			s[i] += '{';
		for (int j = 0; j < i; j++){
			s[i]+=s[j];
			if (j < i-1) s[i]+=',';
			
		}
		s[i]+='}';
			
	}
	return;
}
int main(){
	init();
	int t;
	cin >> t;
	while(t --){
		int tong = 0;
		string a, b;
		cin >> a >> b;
		for (int i = 1; i<= 15; i++)
			{
				if (s[i] == a) tong +=i;
				if (s[i] == b) tong +=i;
			}
	cout << s[tong] << endl;	
	}
//	for (int i = 0; i <= 15; i++)
//		cout << s[i] << endl;
	return 0;
}

