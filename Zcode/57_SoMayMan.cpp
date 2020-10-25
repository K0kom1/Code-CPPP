#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        int n=s.length();

        if (n > 1 && s[n-1] == '6' && s[n-2] == '8')
            cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}