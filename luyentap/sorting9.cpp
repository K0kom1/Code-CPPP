#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n+2],dem=0;
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		for(int i=1;i<n;i++){
			int sum=0;
			for(int j=i+1;j<=n;j++){
				sum=a[j]+a[i];
				if(sum==k) dem++;
			}
		}
		cout << dem << endl;	
	}
	return 0;
}

