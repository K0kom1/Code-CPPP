#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i < n; i++) a[i]=-1;
        for (int i=0; i < n; i++) {
            long long x;
            cin >> x;
            if (x < n) a[x]=x;
        }
        for (int i=0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    
}