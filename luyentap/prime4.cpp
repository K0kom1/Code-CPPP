#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull prime[10000];

int main(){
	memset (prime, 0, sizeof(prime));
	prime [1] = 1;
	for (int i = 2; i <= 10000; i++)
		if (prime[i] == 0) {
			prime [i] = i;
			for (int j = i*i; j <= 10000; j+=i)
				if (prime[j] == 0)	prime[j] = i;
		}
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
			cout << prime[i]<< " ";
		cout << endl;	
	}		
	return 0;
}

