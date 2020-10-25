#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main(){
	int n, m;
	cin >> n >> m;
	if (m > n){
		int temp = m;
		m = n;
		n = temp;
	}
	cout << m << " ";
	cout << (n-m)/2;
	
	return 0;
}

