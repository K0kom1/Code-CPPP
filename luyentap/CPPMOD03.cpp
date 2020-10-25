#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;
	while(t--){
		ull n,k;
		cin >> n >> k;
		ull a=n/k;
    	ull b=n%k;
    	cout<<k*(k-1)/2*a+b*(b+1)/2<<endl;
	}
	return 0;
}

