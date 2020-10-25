#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull; 
int n,s;
int t[30];
int res = 999999;
void Try(int i , ull sum , int d){
	if (sum>s || d>res) return;	
	if(i==n){
		if (sum == s) res = min(res,d);
		return;
	}
	Try(i+1,sum,d);
	Try(i+1,sum+t[i],d+1);
}
int main(){
	cin >> n >> s;
	for (int i = 1; i <= n; i++)
		cin >> t[i];
	Try(0,0,0);	
	if (res == 999999) cout << -1;
	 else cout << res;
	return 0;
}

