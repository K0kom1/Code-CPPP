#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n,l,r,k;
        cin >> n >> k;
        int a[n+1];
        for (int i=1; i <= n; i++) cin >> a[i] ;
        for (int i=0; i < k; i++) {
            cin >> l >> r;
            int sum=0;
            for (int i=l; i <= r; i++) sum += a[i];
            cout << sum << endl;
        }
        
    }
}