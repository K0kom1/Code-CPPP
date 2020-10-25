#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,dem=0;
		cin >> n;
		int kt[103];
		for (int i =1;i<=n;i++) kt[i] = 1;
		for (int i = 1; i <= n; i++){
			for (int j = i; j<=n; j+=i)
				kt[j]*=(-1);
			//for (int i =1;i<=n;i++) cout << kt[i] <<" ";cout << endl;	
		}
//		for (int i =1;i<=n;i++) cout << kt[i] <<" ";cout << endl;
		for (int i =1;i<=n;i++)
			if(kt[i]==-1) dem++;
			cout << dem <<endl;
	}
	return 0;
}

