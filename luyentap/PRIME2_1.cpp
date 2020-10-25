#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll Max=-1;
		while(n%2==0){
			n/=2;
			Max=2;
		}
		for(ll i=3;i<=sqrt(n);i+=2)
			while(n%i==0){
				n/=i;
				Max=max(Max,i);
			}
		if(n!=1) Max=max(Max,n);
		cout << Max << endl;
			
	}
	return 0;
}

