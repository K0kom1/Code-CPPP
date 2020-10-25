#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main(){
	ull a[60];
	a[1] = 2;
	ull k = 2;
	for (ull i = 2; i<= 55; i++){
		k*=2; 
		a[i] = k + a[i-1];
 	}
 	int n;
 	cin >> n;
 	cout << a[n];
	return 0;
}

