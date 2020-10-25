#include<bits/stdc++.h>
using namespace std;
int n, a[10], ok=1;
char s[10];
int in(int n){
	for (int i=1; i <= n; i++)
		cout << s[a[i]-1];
	cout << " ";	
}
int sinhHoanVi(){
	int i=n-1;
	while (a[i]>a[i+1]) i--;
	if (i>0){
		int j=n;
		while (a[j]<a[i]) j--;
		swap (a[i],a[j]);
		sort(a+i+1,a+n+1);
	}
	else ok=0;	
}
int main()
{
	int test;
	cin >> test;
	while(test--){
		cin >> s; 
		n=strlen(s);
		for (int i=0; i <= n; i++) a[i]=i;
		ok=1;
		while (ok){
			in(n);
			sinhHoanVi();
		}
		cout << endl;
	}
	return 0 ;
}

