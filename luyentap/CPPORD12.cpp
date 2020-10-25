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
		for(int i=1;i<=n;i++)
			cin >> a[i];
		sort(a+1,a+n+1);
		int res=a[n]+1;
		if(a[n]<=0) res =1;	
		for(int i=1;i<=n-1;i++)
			if((a[i]>=0) && (a[i+1]-a[i]>1)){
				res = a[i]+1;
				break;
			}
		cout << res << endl;
	}
	return 0;
}

