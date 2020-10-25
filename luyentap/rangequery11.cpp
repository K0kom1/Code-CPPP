#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n ;
		int a[n+1];
		int Min=100000;
		for(int i=1;i<=n;i++)
			cin >> a[i];
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++)
				Min = min(Min,abs(a[i]-a[j]));
		cout << Min << endl;	
	}
	return 0;
}

