#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,kt=1,res;
		cin >> n;
		int a[n+2];
		map <int,int> dem;
		for(int i=1;i<=n;i++){
			cin >> a[i];
			dem[a[i]]++;
			if(dem[a[i]]==2 && kt==1) {
				res=a[i];
				kt=0;
			}
		}
		
		if(kt) cout <<-1;
		else cout << res;
		cout << endl;		
	}
	return 0;
}

