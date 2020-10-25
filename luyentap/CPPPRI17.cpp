#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
bool *prime = new bool[1000009];
void sang(){
	for (int i = 1; i<=1000001;i++)
		prime[i] = true;
	prime[1] = false;	
	for (int i = 2; i<=sqrt(1000001);i++)
		if (prime[i]) {
			for (int j = i*i; j <= 1000001;j+=i)
				prime[j] = false;
		}	
}
int main(){
	int t;
	cin >> t;
	sang();
	while(t--){
		ull m,n,dem = 0;
		cin >>m >> n;
		for(ull i = sqrt(m); i <= sqrt(n);i++)
			if (prime[i]) dem++;
		cout << dem << endl;	
	}
	return 0;
}

