#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int d=0;
		for(int i=2;i<=sqrt(n);i++){
			int dem=0;
			while(n%i==0){
				n/=i;
				dem++;
			}
			if(dem==1) d++;
			if(dem>1) {d=-1;break;
			}
		}
		if(n!=1) d++;
		if(d==3)cout << 1 << endl;
		else cout << 0 << endl;
		
	}
	return 0;
	
}

