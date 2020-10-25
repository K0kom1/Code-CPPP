#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0,a[100][100];
	cin >> n;
	for (int i=1; i <= n; i++)
	{
		if (i % 2) 
			for (int j=1; j <= i; j++) a[i][j] = ++count;
		else 
			for (int j=i; j >= 1; j--) a[i][j] = ++count;
	}
	for (int i=1; i <= n; i++)
	{
		for (int j=1; j <= i; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
		

	return 0 ;
}

