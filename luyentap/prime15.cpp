#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int f[100005];
void sang(ll n){
	for(int i=1;i<=n;i++)
		f[i]=i;
	for(int i=2;i<=n;i++)
		if(f[i]==i)
			for(ll j=i*i;j<=n;j+=i)
				if(f[j]==j)	f[j]=i;	
}

int main(){
	int t;
	sang(10000);
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=1;i<=n;i++)
			cout << f[i] <<" ";
		cout << endl;	
	}
	return 0;
}

