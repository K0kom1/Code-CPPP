#include<bits/stdc++.h>
using namespace std;
int chinh[100],phu[100],cot[100],dem= 0,x[100];
int n;
typedef unsigned long long ull;

void Try(int i)
{
	for (int j = 1; j <= n; j++ )
		if ((cot[j] == 1) && (chinh[i+j-1] == 1) && (phu[i-j+n] == 1))
			{
			cot[j] = 0;
			chinh[i+j-1] = 0;
			phu[i-j+n] = 0;
			x[i] = j;
			if (i == n) dem++;
				else Try(i+1);
			cot[j] = 1;
			chinh[i+j-1] = 1;
			phu[i-j+n] = 1;	
			}

}
int main(){
	
	cin >> n;
	for(int i = 1; i<=n;i++)	cot[i] = 1;
	for (int i =1 ; i<=2*n;i++)	{
		phu[i] = 1;
		chinh[i]=1;
	}
	Try(1);
	cout << dem;
	return 0;
}

