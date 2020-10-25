#include <bits/stdc++.h>
using namespace std;
const int N=1000;
const int mod=1e9+7;

int main() {
    int test;
    long long fibo[N]={0,1};
    cin >> test;
    for (int i=2; i <= N; i++)
        fibo[i] = (fibo[i-2] + fibo[i-1]) % mod ;
    while (test--)      
    {
        int n; 
        cin >> n;
        cout << fibo[n] << endl;
    }
    return 0;
}
#include<iostream>  
using namespace std;

int main() {  
	int test;
	cin >> test;
	while (test--) {
		int n1 = 0, n2 = 1, n3, n; 
		cin >> n;
		if (n == 0) 
			cout << "0";
		else if (n == 1)
			cout << "1";   
		if (n > 1){
			for(int i = 2; i < n; ++i)  {  
				n3 = n1 + n2;  
				n1 = n2;  
				n2 = n3;
			}
		cout << n3;	 
		}
		cout << endl;
	}  
}