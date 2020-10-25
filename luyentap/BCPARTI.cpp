#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t;
	int x = 0;
	while(t--){
		int n;
		x ++;
		cin >> n;
		int a[n+1];
		a[1] = 1;
		a[2] = 2;
		for (int i = 3 ; i <= n; i++){
			a[i] = 1; 
			for (int j = 1; j <= i/2; j++)
				a[i] += a[j];
	}
		cout << x << " " << a[n];
		cout << endl;		
		
	}
	return 0;
}

