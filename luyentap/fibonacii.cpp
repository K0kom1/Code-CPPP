#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull a[100000];
void fibo(){
	
	a[0] = 0; a[1] = 1;
	a[2] = 1;
	for (int i = 3; i <= 10000; i++)
		a[i] = a[i-1] + a[i-2];
	return;	
}

int main(){
	fibo();
	int t;
	cin >> t;
	while (t --)
	{
		ull n;
		cin >> n;
		int i = 0;
		while(1){
		
			if (a[i] == n) {
				cout << "YES" << endl;
				break;
				}
				else if (a[i] > n){
					cout << "NO" << endl;
					break;
				}
			i++ ;					
	}
	
	}
	return 0;
}
