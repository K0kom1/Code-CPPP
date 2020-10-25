#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool f[10005];
void sang(){
	for(int i=1;i<=10000;i++)
		f[i]=true;
	f[1]=false;	
	for(int i=2;i<=10000;i++)
		if(f[i]==true)
			for(int j=i*i;j<=10000;j+=i)
				f[j]=false;	
}

int main(){
	int t;
	sang();
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=2;i<=n/2;i++)
			
			if(f[i]&&f[n-i]) {
			cout << i <<" " << n-i;break;
			}
		cout << endl;	
	}
	return 0;
}

