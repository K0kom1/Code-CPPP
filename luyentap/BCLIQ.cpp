#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for (int i=1;i<=n;i++)	
		cin >> a[i];
	int f[n+1],b[n+1];
	for (int i=1;i<=n;i++) f[i] = 1;
	
	for (int i = 1; i <= n; i++){
		for(int j = 1; j <=i-1;j++)
		if(a[i] > a[j]) {
			f[i] = max(f[i],f[j]+1);
			}
		}
	sort(f+1,f+n+1);	
	cout << f[n];			
	return 0;
}

