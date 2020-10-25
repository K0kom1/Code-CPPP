#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,f0=0, f1=1,f;
	cin >> n;
	cout << f0 << " " << f1 << " ";
	for (int i=1; i <= n-2; i++)
	{
		f=f0+f1;
		cout << f << " " ;
		f0=f1;f1=f;
	}
	
	return 0 ;
}

