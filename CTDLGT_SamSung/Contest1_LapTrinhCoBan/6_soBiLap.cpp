#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	int n, a[100001];
	cin >> test;
	while (test--){
		int check=0;
		cin >> n;
		for (int i=0; i < n; i++) cin >> a[i];
		
		for (int i=0; i < n-1; i++){
			for(int j=i+1; j < n; j++)
				if(a[i]==a[j]){
					check=1;
					cout << a[i] << endl;
					break;
				}
			if (check==1) break;
		}
		if (check==0) cout << "NO" << endl;
	}
	return 0 ;
}

