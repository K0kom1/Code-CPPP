#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n,i;
        cin >> n;
        int a[n];
        for (int i=0; i < n; i++)
            cin >> a[i];
        for (i=0; i < n; i++) 
            if (a[i] != 1) break;
        if (i == n) i=n-1;
        if (i % 2) cout << "TWO" << endl;
        else cout << "ONE" << endl;
    }
    return 0;
}