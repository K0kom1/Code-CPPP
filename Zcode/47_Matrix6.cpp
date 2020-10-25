#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n,x;
        cin >> n;
        for (int i=0; i < n; i++){
            for (int j=0; j < n; j++) {
                cin >> x;
                if (i == 0 || i == n-1 || j == 0 || j == n-1) cout << x << " ";
                else cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
