#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int n,a[100],m,fopt = -1,tong =0;
void update(int k){
	if (k <= m) if (k > fopt) fopt = k;
}
void Try(int i)
{
	for (int j = 0; j <= 1; j++ )
		{
		tong = tong+ j*a[i];
		if (i == n) update(tong);
			else Try(i+1);
		tong -= j*a[i];	
		}
}
int main(){
	cin >>m>> n;
	for (int i = 1;i <= n;i ++)
		cin >> a[i];
	Try(1);	
	cout << fopt;
	return 0;
}

