#include <bits/stdc++.h>
using namespace std;
int UocNT_min(int x) {
    if (x%2 == 0) return 2;
    int i=3;
    while (i <= sqrt(x)) {
        if (x%i == 0) return i;
        i+=2;
    }
    return x;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        for (int j=1; j <= n; j++) {
            cout << UocNT_min(j) << " ";
        }
        cout << endl;
    }
    return 0;
}