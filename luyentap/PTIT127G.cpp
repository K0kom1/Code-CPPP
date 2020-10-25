#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
bool cmp(string x, string y){
	if(x.size()==y.size())
		return x < y; 
	else return x.size() < y.size();
}
int main(){
	int n;
	cin >> n;
	string s[n+2];
	for(int i =1;i<=n;i++)
		{
		cin >> s[i];
		s[i].insert(0,1,'a');
		}
	string *a=new string[1000000];
	int k = 1;
	string x = "";
	for (int i = 1;i<=n;i++)
		for(int j = 1;j<s[i].length();j++){
			if ((s[i][j]>='1')&&(s[i][j]<='9'))  x +=s[i][j];
			else if(s[i][j]=='0') 
					if (x=="") ;
					else x+=s[i][j];
				else if((s[i][j-1]>='0')&&(s[i][j-1]<='9')){
					if(x=="") x="0";
					a[k]=x;
					k++;
					x	= "";
				}
			if (j==s[i].length()-1)
				if ((s[i][j]>='0')&&(s[i][j]<='9')){
					if(x=="") x="0";
					a[k] = x;
					k++;
					x = "";
				}
		2		  	
		}
	sort(a+1,a+k,cmp);	
	for(int i = 1;i <=k-1;i++)
		cout << a[i]<<endl;	
			
	return 0;
}

