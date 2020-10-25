#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool p[10000002];

void sang(){
	memset(p,true,sizeof(p));
	p[1]=false;
	for(ll i=2;i<=1000000;i++)
		if(p[i]){
			for(ll j=i*i;j<=1000000;j+=i){
				p[j]=false;
			}
		}			
}
int main(){
	sang();
	int a,b;
	cin >> a >> b;
	if(a<b){
	for(int i=a;i<=b;i++)
		if(p[i]) cout << i << " ";
	}
	else
	for(int i=b;i<=a;i++)
		if(p[i]) cout << i << " ";
	return 0;
}

