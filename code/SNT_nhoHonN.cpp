#include<bits/stdc++.h>
using namespace std;
int kt_SNT(int x){
	if (x < 2) return 0;
	
	for (int i=2; i <= sqrt(x); i++)
		if (x%i == 0) return 0;
	return 1;
}
int main()
{
	int n,sum=0;
	cin >> n;
	for (int i=2; i < n; i++)
		if (kt_SNT(i)) cout << i <<  " ";
		// sum+=i;
	// cout << sum;
	return 0 ;
}

