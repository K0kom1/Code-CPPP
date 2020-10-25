#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int max = -1;
		int min = 100000;
		int a[n+2];
		for (int i = 1; i <= n; i++){
		
			cin >> a[i];
			if (a[i] > max) max = a[i];
			if (a[i] < min) min = a[i];
		}
		cout << (max-min)*2 << endl;
	}
	return 0;
}

