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
		int b[n+2];
		for(int i=1;i<=n;i++){
			cin >> a[i];
			b[i]=a[i];
			}
		int l=1;
		int r=n;	
		sort(b+1,b+n+1);
		for(int i=1;i<=n;i++){
			if(a[i]!=b[i]){
				l=i;
				break;
			}
		}
		for(int i=n;i>=0;i--){
			if(a[i]!=b[i]){
				r=i;
				break;
			}
		}
		cout << l <<" "<< r <<endl;	
	}
	return 0;
}

