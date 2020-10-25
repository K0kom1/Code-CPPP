#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test, n;
	cin >> test;
	while(test--){
		cin >> n;
		int dem=0, k=trunc(sqrt(n));
		for (int i=2; i <= k; i++){
			if (n%i == 0){
				if (i%2==0) dem++;
				if ((n/i)%2==0) dem++;
			}
		}
		if (n%2 == 0) dem++;
		if (n%k == 0 && k*k==n && k%2==0) dem--;
		cout << dem << endl;
	}
	return 0 ;
}

