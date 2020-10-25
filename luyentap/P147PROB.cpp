#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	cin >> n;
	double a[n+2];
	double  x = 0;
	for (int i=1;i<=n;i++)
		{
		cin >> a[i];
		x+=(a[i]);
		}
	printf("%.12lf",(double)x/n);	
	return 0;
}

