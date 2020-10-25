#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	cin >> n;
	char s[n+2];
	int dem = 0;
	
	for(int i = 1; i <= n; i++)
		{
		cin >> s[i];
		if (s[i]=='S') dem ++;
	}
	int k = (n - dem)/2;
	cout << n - k +1;
	return 0;
}

