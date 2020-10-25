#include<bits/stdc++.h>
using namespace std;
int ok=1, a[20];

void in(int x){
	for (int i=1; i <= x; i++) cout << a[i];
	cout << " ";
	return;
}
void sinhHoanVi(int n){
	int i=n-1;
	while (i>0 && a[i]>a[i+1]) i--;
	if (i>0){
		int j=n;
		while (a[i]>a[j]) j--;
		swap (a[i],a[j]);
		sort(a+i+1,a+n+1);
	}
	else ok=0;
    return;
}
int main()
{
	int test;
	cin >> test;
	while (test--){
		int n;
		cin >> n;
		for(int i=1; i<=n; i++) a[i]=i;
		while (ok){
			in(n);
			sinhHoanVi(n);
		}
		cout << endl;
	}

	return 0 ;
}

