#include<bits/stdc++.h>
using namespace std;
int sum_cs(int n){			//Tong chu so cua n
	int sum=0;
	while (n){
		sum += n%10;
		n/=10;
	}
	return sum;
}
int sum_nt(int n){			// Tong chu so cac nhan tu cua n
	int sum=0, i=1;
	while(n != 1){
		i++;
		if (n%i == 0){
			int count=0;
			while(n%i == 0){
				count++;
				n/=i;
			}
			sum += count * sum_cs(i);
		}
	}
	return sum;
}
int main()
{
	int test, n;
	cin >> test;
	
	while(test--){
		cin >> n;
		if (sum_cs(n) == sum_nt(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0 ;
}

