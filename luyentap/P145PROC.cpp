#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int a[12];
	for (int i=1;i<=10;i++)
	{
		cin >> a[i];
		a[i]=a[i]%42;
	}
	int dem = 0;
	a[0] = -1;
	sort(a+1,a+10+1);
		for(int i=1;i<=10;i++)
		if(a[i]!=a[i-1]) dem++;
	cout << dem;	
	return 0;
}

