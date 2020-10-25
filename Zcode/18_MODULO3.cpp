#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n,k;
        cin >> n >> k;
        long long sum=0;
        for ( int i=1; i <= n; i++) {
            sum += i % k;
        }
        cout << sum << endl;
    }
    return 0;
}