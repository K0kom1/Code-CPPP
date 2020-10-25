#include<bits/stdc++.h>
using namespace std;
const int N =1e7;
void Searching() {
    int n, Min1=N, Min2=N;
    cin >> n;
    int a[n];
    for (int i=0; i < n; i++) cin >> a[i];
    for (int i=0; i < n; i++) {
        if (Min1 > a[i]) Min1=a[i];
    }
    int check=0;
    for (int i=0; i < n; i++) {
        if (Min2 > a[i] && a[i] != Min1) {
            check=1;
            Min2=a[i];
        }
    }
    if (check) cout << Min1 << " " << Min2 << endl;
    else cout << -1 << endl;

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