#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
bool prime[1000000];
ull kount[1000000];

int main(){
	memset(prime, true, sizeof(prime));
	memset(kount, 0, sizeof(kount));
	prime[1] = false;
	kount[2] = 1;
	ull k = 1;
	for	(ull i = 2; i <= 1000000; i++)
		if (prime[i] == true) {
			for (ull j = i*i; j <= 1000000; j+=i)
				{
				prime[j] = false;
				}
		}
	for (ull i = 3; i <= 1000000; i++){
		if (prime[i]) k ++;
		if (kount[i] == 0) kount[i] = k;
	}
	ull t;
	cin >> t;
	while(t--){
		ull n;
		ull dem = 0;
		cin >> n;
		long long can = sqrt(n);
		cout << kount[can] << endl;
	}		 
	return 0;
}

