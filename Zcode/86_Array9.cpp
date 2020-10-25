#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i < n; i++) cin >> a[i];
        cout << a[0]*a[1] << " ";
        for (int i=1; i < n-1; i++) cout << a[i-1]*a[i+1] << " ";
        if (n > 2) cout << a[n-2]*a[n-1];
        cout << endl;
    }
    return 0;
}