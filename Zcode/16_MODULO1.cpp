#include <bits/stdc++.h>
using namespace std;
long long Powll(long long  x, int y, int p) {
    long long res=1;
    while (y) {
        if (y & 1) 
            res = res * x % p;
        y >>= 1;
        x = x * x % p;
    }
    return res;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        long long x;
        int y,p;
        cin >> x >> y >> p;
        cout << Powll(x,y,p) << endl;
    }
}