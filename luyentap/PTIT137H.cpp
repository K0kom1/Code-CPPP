#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int change(char c){
	if ((c >='0')&&(c<='9')) return c-48;
	if ((c >='A')&&(c<='Z')) return c-65+10;
	if ((c >='a')&&(c<='z')) return c-97+36;
}
int main(){
	char s[100000];
	cin >> s;
	while(strcmp(s,"end")!=0){
		int n =0;
		while(s[n]!='\0') n++;
		n--;
		int t = 0;
		for(int i = n;i>=0;i--)
			{
				t = t*62+change(s[i]);
				t = t% 61;
			}
		if (t==0) cout << "yes"<<endl;
		else cout << "no"<<endl;
		cin >> s;	
	}
	return 0;
}

