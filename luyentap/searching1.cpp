#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int res = -1;
		int a[n+2];
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		for(int i=1;i<=n;i++)
			if(a[i]==x){
				res=1;
			}
			
		cout <<res<< endl;	
	}
	return 0;
}

