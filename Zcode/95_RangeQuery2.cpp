#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n,l,r;
        cin >> n;
        int a[n];
        for (int i=0; i < n; i++) cin >> a[i] ;
        cin >> l >> r;
        while (l < r && a[l] <= a[l+1]) l++;
        while (l < r && a[l] >= a[l+1]) l++;
        if (l == r) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}