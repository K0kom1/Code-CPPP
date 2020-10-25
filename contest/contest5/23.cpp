#include<bits/stdc++.h>

using namespace std;
int A[1005], F[1005], n;
int qhd()
{
	int i, j, kq = 1;
	for(i = 1; i <= n; ++i)
	{
		F[i] = 1;
		for(j = 1; j < i; ++j)
		if(A[j] <= A[i])
			F[i] = max(F[i], F[j] + 1);
		kq = max(kq, F[i]);
	}
	return n - kq;
}
	
int main()
{
	int i, test; cin >> test;
	while(test--)
	{
		cin >> n;
		for(i = 1; i <= n; ++i) cin >> A[i];
		cout << qhd() << endl;
	}
	return 0;
}

