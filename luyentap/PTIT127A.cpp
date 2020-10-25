#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int m,n,k;
	int kq = 0;
	cin>>m>>n>>k;
	int m1 = m/2;
	if (m1<=n) kq = m1;
	else kq = n;
	if (m+n-kq*3 >= k) cout << kq ;
		else {
			int x = k-m-n+kq*3;
			if (x%3==0) cout << kq-x/3;
				else cout << kq-x/3-1;
		}  
	return 0;
}

