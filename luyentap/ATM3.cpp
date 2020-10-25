#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
int a[9] = {500,200,100,50,20,10,5,2,1};
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		int dem = 0;
		cin >> n;
		for (int i = 0; i < 9; i++)
			{
			dem += n/a[i];
			n = n % a[i];
			}
		cout << dem << endl;	
	}
	return 0;
}

