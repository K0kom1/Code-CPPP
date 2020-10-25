#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        long long a,d,h;
        long long b;
        cin >> a >> b;
        cin >> d >> h;
        long long max_d=d, max=d-h;
        for (int i=1; i < a; i++) {
            cin >> d >> h;
            if (max_d < d) max_d=d;
            if (max < d-h) max=d-h;
        }
        if (max < 1 && max_d < b) cout << "Social Quarantine;
        else {
            b -= max_d;
            if (b < 0) b=0;
            // if (b % max == 0) cout << b/max+1;
            // else cout << b/max+2;
            cout << (((b % max) == 0) ? b/max+1 : b/max +2 );
        }
        cout << endl;
    }
    return 0;
}