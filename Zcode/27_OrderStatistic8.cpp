#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int max=0,x;
        for (int i=0; i < n; i++) {
            cin >> x;
            if (max < x) max=x;
        }
        cout << max << endl;
    }
    return 0;
    
}