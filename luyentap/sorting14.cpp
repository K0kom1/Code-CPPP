#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,d=0;
		cin >> n;
		map <int,int> dem;
		int a[n+2];
		for(int i=1;i<=n;i++){
			cin >> a[i];
			dem[a[i]]=1;
		}
		sort(a+1,a+n+1);
		for(int i=a[1];i<=a[n];i++)
			if(dem[i]!=1) d++;
		cout <<d<< endl;	
	}
	return 0;
}

