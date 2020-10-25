#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+2];
		ll sum=0;
		for(int i=1;i<=n-1;i++){
			cin >> a[i];
			sum+=a[i];
		}
		ll res = (n)*(n+1)/2-sum;
			
		cout <<res<< endl;	
	}
	return 0;
}

