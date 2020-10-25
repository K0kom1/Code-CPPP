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
        sort(a,a+n);
        int bd=n/2;
        if (n %2 != 0) bd++;
        for (int i=0; i < n/2; i++) 
            cout << a[i] << " " << a[bd+i] << " ";
        if (n %2 != 0) cout << a[n/2];
        cout << endl;
    }
    return 0;
}