#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<ll> a;
		for(int i=1;i<=n;i++){
			ll x;
			cin >> x;
			a.push_back(x);
		}
		int i = 0,dem=0;
		while(i<a.size()){
			if(a[i]==0){
				a.erase(a.begin()+i);
				dem++;
				continue;
			}
			i++;
		}
		for(int i=0;i<a.size();i++)
			cout << a[i] <<" ";
		for(int i=1;i<=dem;i++)
			cout << 0 <<" ";	
		cout << endl;	
	}
	return 0;
}

