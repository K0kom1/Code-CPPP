#include<bits/stdc++.h>
using namespace std;
int ok=1, a[20];

void in(int x){
	for (int i=1; i <= x; i++) cout << a[i];
	cout << " ";
	return;
}
void sinhToHop(int n, int k){
	int i=k;
	while (a[i] == n-k+i && i>0) i--;
	if (i>0){
		a[i]+=1;
		for (int j=i+1; j <= k; j++) a[j]=a[j-1]+1;
	}
	else ok=0;
	return;
}
int main()
{
	int test;
	cin >> test;
	while (test--){
		int n, k;
		cin >> n >> k;
		for(int i=1; i<=k; i++) a[i]=i;
		ok=1;
		while(ok){
			in(k);
			sinhToHop(n,k);
		}
		cout << endl;
	}

	return 0 ;
}

