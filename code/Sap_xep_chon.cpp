// Selection sort
#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int main()
{
	int a[N], min,n;
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> a[i];
	for (int i=0; i<n-1; i++){
		min=i;
		for (int j=i+1; j<n; j++)
			if (a[min]>a[j]) min=j;
		swap(a[i],a[min]);
	}
	for (int i=0; i<n; i++) cout << a[i] << " ";
	return 0 ;
}

