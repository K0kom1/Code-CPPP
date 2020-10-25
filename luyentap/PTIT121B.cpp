#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
void change(int i,int n){
	string s ="";
	while(i){
		int mod = i % 2;
		s.insert(0,1,(char) (mod + '0'));
		i/=2;
	}
	int l=s.length(); 
	if (l < n) s.insert(0,n-l,'0');
	cout << s << endl;
	return;
}
int main(){
	int n;
	cin >> n;
	for (int i = 0; i <= pow(2,n)-1; i++){
		int k = ((i) ^(i>>1));
		change(k,n);
		}
	return 0;
}

