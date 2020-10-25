#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;
	while(t--){
		int dem = 0;
		int m,n;
		cin >> m>> n;
		for (int i = 2; i<= sqrt(2*n); i++){
			if (2*n % i == 0) if ((i + (2*n)/i -1 ) % 2 == 0 ) dem ++;
			}
		cout << m << " " << dem << endl;
	}
	
	return 0;
	
}

