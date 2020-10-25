#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool p[10002];

void sang(){
	memset(p,true,sizeof(p));
	p[1]=false;
	for(int i=2;i<=10000;i++)
		if(p[i]){
			for(long long j=i*i;j<=10000;j+=i)
				p[j]=false;
			}
}
int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		for(int i=1;i<=n;i++)
			if(p[i]) cout << i <<" ";
		cout << endl;
			
	}
	return 0;
}

