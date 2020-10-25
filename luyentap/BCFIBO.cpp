#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull* a = new ull[1000001];
void fibo(){
	
	a[0] = 0; a[1] = 1;
	a[2] = 1;
	return;	
}

int main(){
	fibo();
	int t;
	cin >> t;
	for (int i = 3; i <= t; i++)
		a[i] = (a[i-1] + a[i-2])%1000000007;
						
	cout <<a[t];
	
	
	return 0;
}
