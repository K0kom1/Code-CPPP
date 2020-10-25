#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	int n,x,a[1001];
	cin >> test;
	while(test--){
		int min=1001, max=0,count=0, b[100001]={0};
		cin >> n;
		for (int i=0; i < n; i++){
			cin >> a[i];
			if (min > a[i]) min = a[i];
			if (max < a[i]) max = a[i];
			b[a[i]]=1;
		}
		for (int i=min; i < max; i++)
			if (b[i] == 0) count++;
		cout << count << endl;
	}
	return 0 ;
}

