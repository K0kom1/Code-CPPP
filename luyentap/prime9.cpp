#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if (n % 2 == 0) {
		cout <<"2" << " ";
		int dem = 0;
		while (n % 2 == 0){
			n/=2;
			dem ++;
		}
		cout << dem << " ";
	}
		for (int i = 3; i <= n; i+=2)
			if (n % i == 0) {
							cout << i << " ";
							int dem = 0;
							while (n % i == 0){
								n/=i;
								dem ++;
						}
				cout << dem << " ";		
		}
		if (n > 1)	cout << n;
		cout << endl;				
	}
	return 0;
}

