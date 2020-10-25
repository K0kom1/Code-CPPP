#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<long long,int>f;
ll fibo[1000];
void fibonacci(){
	fibo[0]=0;
	fibo[1]=1;
	f[0]=1;f[1]=1;
	for(int i=2;i<=100;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
		f[fibo[i]]=1;
		}
}
int main(){
	fibonacci();
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(f[n]==1) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}

