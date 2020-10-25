#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int a[12];
	for (int i=1;i<=4;i++)
	{
		cin >> a[i];
	}
	int dem = 0;
	a[0] = -1;
	sort(a+1,a+4+1);
		for(int i=1;i<=4;i++)
		if(a[i]!=a[i-1]) dem++;
	cout << 4-dem;	
	return 0;
}

