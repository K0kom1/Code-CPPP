#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;
	while(t--){
		ull n;
		cin >> n;
		while(n%2==0){
			cout << 2 <<" ";
			n/=2;
		}
		for(int i=3;i<=sqrt(n);i+=2)
			while(n%i==0){
				cout << i << " ";
				n/=i;
			}
		if(n!=1) cout << n;
		cout << endl;	
	}
	return 0;
}

