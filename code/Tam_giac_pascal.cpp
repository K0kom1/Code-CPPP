#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100][100];
	cin >> n;
	
	for (int i=1; i <= n; i++)
	{
		a[i][1]=1; a[i][i]=1;
		if (i != 1) cout << 1 << " " ;
		for (int j=2; j <= i-1; j++) 
		{
			a[i][j] = a[i-1][j-1] + a[i-1][j];
			cout << a[i][j] << " ";
		}
		cout << 1 << endl;
			
	}

	return 0 ;
}

