#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int P=1e9+7;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x, *A;
        ll res=1, sum=0;
		cin >> n >> x;
        A = new int[n];
		for (int i=n-1; i >= 0; i--) cin >> A[i];
        for (int i=0; i < n; i++){
            sum = (sum + (A[i]*res) % P) % P;
            res = res * x % P;
        }
        cout << sum << endl;
        delete(A);
	}
	return 0;
}

