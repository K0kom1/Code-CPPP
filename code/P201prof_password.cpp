#include<bits/stdc++.h>
using namespace std;
int check1(long long n){
	int count=0;
	while (n%10 == 0){
		count ++;
		n/=10;
	}
	return count;
}
int main()
{
	long long n;
	int k;
	cin >> n >> k;
	if (check1(n) >= k){
		cout << n;
		return 0;
	}
	long long m=n;
	while (m%10 == 0) m/=10;
	long long luu=m*pow(10,k);
	while (1){
		int c=m%10;
		if (c%2==0){
			m/=2;
			if (luu/2 < n || (luu/2) % n != 0) break;
			luu/=2;	
			}
		else 
			if (c == 5){
				m/=5;
				if (luu/5 < n || (luu/5) % n != 0) break;
				luu/=5;
				}
			else break;
	}
	cout << luu ;
	return 0 ;
}
