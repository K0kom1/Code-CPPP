#include <bits/stdc++.h>
using namespace std;
string LargeNumber1(string X, string Y) {
    int n=X.length(), mem=0;
    string res;
    for (int i=n-1; i >= 0; i--) {
        int k = ((X[i]-'0') - (Y[i]-'0')  -mem);
        if (k < 0) {
            res = char(k +10 + '0') + res;
            mem = 1;
        }
        else {
            res = char(k + '0') + res;
            mem = 0;
        }
    }
    return res;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        string X,Y;
        cin >> X >> Y;
        if (X.length() < Y.length()) swap(X,Y);
        if (X.length() == Y.length() && X < Y) swap(X,Y);
        while (X.length() != Y.length())
            Y = '0' + Y;
        cout << LargeNumber1(X,Y) << endl;
    }
    return 0;
}