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
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		sort(a+1,a+n+1);
		if(n%2==0)
		for(int i=1,j=n;i<=n/2,j>=n/2+1;i++,j--){
			cout << a[j] << " " << a[i] <<" ";
			}
		else{
		for(int i=1,j=n;i<=n/2,j>=n/2+2;i++,j--){
			cout << a[j] << " " << a[i] <<" ";
			}
			cout << a[n/2+1];
		}
		cout << endl;	
	}
	return 0;
}

