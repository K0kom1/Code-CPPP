#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x;
	cin >> n;
	while (n--){
		cin >> x;
		if (x % 4) m=x/4+1;
		else m=x/4;
		for (int i=0; i<x-m; i++) cout << 9 ;
		for (int i=0; i<m; i++) cout << 8;
		cout << endl;
	}

	return 0 ;
}

