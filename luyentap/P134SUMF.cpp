#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int sang(int x,int n){
	int k = 0;
	bool *prime = new bool[n+4];
	for (int i = 1; i<=n;i++)
		prime[i] = true;
	prime[1] = false;	
	for (int i = 2; i<=sqrt(n);i++)
		if (prime[i]) {
				prime[i] = false;
				k++;
				if(k==x) return i;
			for (int j = i*2; j <= n;j+=i)
				if(prime[j]){cout << j <<" ";
				prime[j] = false;
				k++;
				if(k==x) return j;
				}	
		}
}

int main(){
	int n,k;
	cin >> n>>k;
	cout << sang(k,n);
	return 0;
}

