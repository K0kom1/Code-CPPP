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
	sang();
	int n;
	cin >> n;
	while(n){
		int dem =0;
		for (int i = n+1; i <= 2*n;i++)
			if (prime[i]) dem++;
		cout << dem << endl;
	cin >> n;		
	}
	
	return 0;
}

