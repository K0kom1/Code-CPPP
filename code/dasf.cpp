#include<bits/stdc++.h>
using namespace std;
int main()
{
	int dau,cuoi,n,dem=0;
	cin >> n;
	int m=n;
	cuoi=n%10;
	while (m>0){
		dau=m%10;
		m/=10;
		dem++;
	}
	n=n-(cuoi + dau*pow(10, dem-1)) + cuoi*pow(10, dem-1) + dau;

	cout << endl << n;
	return 0 ;
}

