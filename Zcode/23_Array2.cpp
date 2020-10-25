#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        long long x;
        int count = 0;
        for (int i=0; i < n; i++) {
            cin >> x;
            if (x == 0) count++;
            else cout << x << " ";
        }
        while (count--) cout << 0 << " ";
        cout << endl;
    }
    
}