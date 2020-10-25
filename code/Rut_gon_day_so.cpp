#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,test;
    cin >> test;
    while (test--) {
        int n,i;
        cin >> n;
        int a[n];
        for (int i=0; i < n; i++) cin >> a[i];
        for (i=0; i < n-1; i++)
            if (a[i] != a[i+1]) {
                cout << 1 << endl;
                break;
            }
        if (i == n-1) cout << n << endl;
    }
    return 0;
}