#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[1005];
int m=1e9+7;
void fibo(){
	f[0]=0;f[1]=1;
	for(int i=2;i<=1000;i++)
		f[i]=(f[i-1]+f[i-2])%m;
}
int main(){
	fibo();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << f[n] << endl;
	}
	return 0;
}

