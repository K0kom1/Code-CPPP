#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n,m;
	cin >> n >> m;
	int a[n+3];
	ull t=0;
	for (int i =1;i<=n;i++)
		{
		cin >> a[i];
		t+=a[i];
		}
	sort(a+1,a+1+n);
	ull s=0;
	a[0]=0;
	int i;
	for(i =1;i<=n;i++)
	{
		s+=(a[i]-a[i-1])*(n-i+1);
		if(t-s<m) break;
	}
	s-=(a[i]-a[i-1])*(n-i+1);
	ull k = (t-s-m)/(n-i+1);
	cout << a[i-1]+k;
		
	return 0;
}

