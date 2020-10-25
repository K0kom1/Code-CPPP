#include<bits/stdc++.h>
using namespace std ;
const long long MOD = 1e9 + 7; 

int main(){
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL); cout.tie(NULL);
	int test , n , r ;
	cin >> test ;
	while ( test-- )
	{
		cin >> n >> r ;
// 		if ( r>n/2 ) r=n-r ;
// //		vector <unsigned long long > a(r+1,1);
// 		unsigned long long a[r+1] ;
// 		a[0]=1 ; a[n]=1 ;
// 		for (int i=1; i <= r; i++ )
// 		{
// 			if (a[i-1] % i == 0 ) a[i] = (a[i-1] / i * (n-i+1)) % m ;
// 			else a[i] = ((n-i+1) / i * a[i-1]) % m ;
// 		}
// 		cout << a[r] << endl ;
// 	}
	
		vector< vector<unsigned long long> > C(n + 1, vector<unsigned long long> (n + 1, 0));
		C[0][0] = 1;
		for(int i = 1; i <= n; ++i)
		{
			C[i][0] = 1; C[i][i] = 1;
			for(int j = 1; j < i; ++j)
			C[i][j] = (C[i - 1][j - 1] % MOD + C[i - 1][j] % MOD) % MOD;
		}
		cout << C[n][r] << endl ;
	}
	return 0 ;
}

