#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
bool cmp(string x,string y){
	if (x.size() == y.size()) return x > y;
		else return x.size()>y.size();
}
int main(){
	int n;
	cin >>  n;
	int d = 0;
	while(n!=0){
		d++;
		string s[n+1];
		for (int i=1;i<=n;i++) {
			string x;
			cin >> x;
			int k = 0;
			while(x[k]=='0') k++;
		//	cout<<k<<" ";
			for(int j=k;j<x.length();j++)
						s[i]+=x[j];
			if (s[i]=="") s[i]+='0';			
			 //cout << s[i]<<endl;			
				}
			
		sort (s+1,s+n+1,cmp);
		if(s[1]!=s[n])
		cout << "Case "<<d<<": "<<s[n]<<" "<<s[1]<<endl;
		else cout << "Case "<<d<<": "<<"There is a row of trees having equal height."<<endl;
		cin >> n;
		
	}
	return 0;
}

