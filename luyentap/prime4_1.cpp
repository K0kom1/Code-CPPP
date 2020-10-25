#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int f[10005];
void sang(){
	for(int i=1;i<=10000;i++)
		f[i]=i;
	for(int i=2;i<=10000;i++)
		if(f[i]==i)
			for(int j=i*i;j<=10000;j+=i)
				if(f[j]==j)	f[j]=i;	
}

int main(){
	int t;
	sang();
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=1;i<=n;i++)
			cout << f[i] <<" ";
		cout << endl;	
	}
	return 0;
}

