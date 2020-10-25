#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for (int i = 1; i<=n;i++)
		cin >> a[i];
	for (int i =1;i<=n;i++){
		int dem = 1;
		while(a[i]>=10){
			int mod = a[i]%10;
			a[i]/=10;
			if (mod >= 5) a[i]++;
			dem*=10;  
		}
		dem*=a[i];
	cout <<dem <<endl;
	}
	return 0;
}

