#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test, n, k, a[1001];
	cin >> test;
	while(test--){
		cin >> n >> k;
		for (int i=0; i<k; i++) cin >> a[i];
		int j=k-1;
		while (a[j] == n-k+j+1 && j>=0) j--;
		a[j]++;
		if (j == -1){
			a[0]=1;
			for (int i=1; i<k; i++) a[i]=i+1;
		}
		else 
			for (int i=j+1; i<k; i++)
				a[i]=a[i-1]+1;
		
		for (int i=0; i<k; i++) cout << a[i] << " ";
		cout << endl;
	}

	return 0 ;
}


