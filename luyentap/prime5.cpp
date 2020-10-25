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
		int n,m;
		cin >> m >> n;
		for(int i=m;i<=n;i++)
			if(f[i]) cout << i <<" ";
		cout << endl;	
	}
	return 0;
}

