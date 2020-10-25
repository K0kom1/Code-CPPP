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
    	ull x =k*(k-1)/2*a+b*(b+1)/2;
    	if (x == k) cout << "1" ;
    		else cout <<"0";
    	cout <<endl;	
	}
	return 0;
}

