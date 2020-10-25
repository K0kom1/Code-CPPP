#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a,m;
        cin >> a >> m;
        int check=0;
        for (int i=1; i < m; i++)
            if (a * i % m == 1) {
                check = 1;
                cout << i << endl;
                break;
            }
        if (!check) cout << -1 << endl;
    }
    return 0;
}