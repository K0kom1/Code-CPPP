#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n;
		int a[n+2];
		for(int i=1;i<=n;i++)
			cin >> a[i];
		sort(a+1,a+n+1);
		cout << a[n]<< endl;	
	}
	return 0;
}

