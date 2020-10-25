#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool p[1002],f[1000002];

void sang(){
	memset(p,true,sizeof(p));
	memset(f,false,sizeof(f));
	p[1]=false;
	for(int i=2;i<=1000;i++)
		if(p[i]){
			f[i*i]=true;
			for(ll j=i*i;j<=1000;j+=i){
				p[j]=false;
			}
		}			
}
int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=1;i<=n;i++){
			if(f[i]) cout << i <<" ";
		}
		cout << endl;
	}
	return 0;
}

