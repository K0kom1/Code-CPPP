#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
bool *prime = new bool[300001];
void sang(){
	for (int i = 1; i<=300000;i++)
		prime[i] = true;
	prime[1] = false;	
	for (int i = 2; i<=sqrt(300000);i++)
		if (prime[i]) {
			for (int j = i*i; j <= 300000;j+=i)
				prime[j] = false;
		}	
}
int main(){
	int t;
	cin >> t;
	sang();
	while(t--){
		int n;
		cin >> n;
		cout << "2 ";
		for (int i=3; i<=n;i+=2)
			if(prime[i]) cout << i << " ";
		cout <<endl;
	}
	return 0;
}

