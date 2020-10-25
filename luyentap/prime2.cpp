#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t;
		srand(time(NULL));
	while(t--){
		
		ull n = (ull)rand() * (ull)rand() * (ull)rand() % 10000000000;
		cout << n<<" ";
		int kt = 1;
		while (n % 2 == 0){
			n/=2;
			if (n == 1) {
				cout << "2";
				kt = 0;
				break;
			}
		}
		ull i = 3; 
		if (kt)
			while(i*i<=n){
			while(n % i == 0){
				n/=i;
				if (n == 1){
					cout << i;
					kt = 0;
					break;
				}
			}		
				i+=2;
		}
		if (kt) cout << n;
		cout << endl;
		}
	return 0;
}

