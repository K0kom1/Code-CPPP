#include<bits/stdc++.h>
using namespace std;
int n, a[1001];
void lat_mang(int k){
	for (int i=k; i <= (n-1+k)/2; i++){
		swap(a[i],a[n-1-i+k]);
	}
	return;
}
int main()
{
	int test;
	cin >> test;
	while(test--){
		cin >> n;
		for (int i=0; i<n; i++) cin >> a[i];
		int k=n-2;
		while (a[k] > a[k+1] && k>=0) k--;
		
		if (k>-1) swap(a[k],a[n-1]);
		lat_mang(k+1);
		
		for (int i=0; i<n; i++) cout << a[i] << " ";
		cout << endl;
	}

	return 0 ;
}


