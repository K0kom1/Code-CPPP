#include<bits/stdc++.h>
using namespace std;
void Searching() {
    int n,x;
    cin >> n >> x;
    int a[n];
    for (int i=0; i < n; i++) cin >> a[i];
    int i=0;
    while (i < n && a[i] != x) i++;
    if (i < n) cout << i+1;
    else cout << -1;
    cout << endl;
    return;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        Searching();
    }
    return 0;
}