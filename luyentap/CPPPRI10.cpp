#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
bool *prime = new bool[300001];
void sang(){
	for (int i = 1; i<=200000;i++)
		prime[i] = true;
	prime[1] = false;	
	for (int i = 2; i<=sqrt(200000);i++)
		if (prime[i]) {
			for (int j = i*i; j <= 200000;j+=i)
				prime[j] = false;
		}	
}
ull sum(int n){
	ull tong = 0;
	while(n){
		int mod = n%10;
		tong+=mod;
		n/=10;
	}
	return tong;
}
int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		int m = n;
		int tong =0;
		
		bool kt = false;
			for (int i=2; i*i<=n;i++) 
						if(n%i==0){
						kt = true;
						while(n%i==0){
							tong+=sum(i);
							n/=i;
							}
						}
			if(n>1) tong+=sum(m);								
			if ((tong == sum(m))&&(kt) )cout << "YES";
			else cout << "NO";
			
		cout << endl;
			
	}
	return 0;
}

