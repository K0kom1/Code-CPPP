#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
bool *p = new bool[100002];

void sang(){
	for(int i = 2;i <= 100000;i++)
		p[i]=true;
	p[1]=false;
	for(int i = 2;i <= 1000;i++)
		if(p[i]) {
			for(int j=i*i;j<=100000;j+=i)
				p[j]=false;
		}	
}
int doi(string s, int i, int j){
	int res= 0;
	for(int x=i;x<=j;x++)
		res = res*10+(s[x]-'0');
	return res;	
}
int main(){
	sang();
	//for(int i = 2;i <= 100000;i++)
	//if(p[i]==true) cout << i <<endl;
	string s;
	cin >> s;
	while(s!="0"){
		int max = -1;
		for (int i = 0; i<s.length();i++)
			for(int j = 0;j<=4;j++)
			{
				if (i+j<s.length()) {
					int x = doi(s,i,i+j);
					if (p[x])
					if (x > max) max = x;
				}
			}
	cout << max<<endl;		
	cin >> s;	
	}
	return 0;
}

