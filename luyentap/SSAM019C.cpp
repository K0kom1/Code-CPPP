#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >>k;
		int a[100],b[100],check[100],dem = 0;
		memset(check,0,sizeof(check));
		int kt = 1;
		for (int i = 1; i<= k; i++){
			cin >> a[i];
		}
		for (int i = 1; i<= k; i++){
			b[i] = a[i];
		}
		for (int i = k; i>=1; i--){
			if (a[i] < n - k + i) {
				a[i] ++;
				for (int j = i+1; j<=k; j++){
					a[j] = a[j-1] + 1;
				}
				kt = 0;
				break;
			}
		}
		//	for (int i = 1; i<= k; i++){
		//	cout<< a[i] <<" ";
		//}
		if (kt) cout << k;
			else {
				for (int i = 1; i <= k; i++)
					{
					check[b[i]] --;
					check[a[i]] ++;
			}
		for (int i = 1; i<=k; i++)
			if (check[b[i]] == -1 ) dem++;
		cout << dem;
		}
		cout << endl;		
	}
	return 0;
}

