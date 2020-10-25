#include<bits/stdc++.h>
using namespace std;
void Searching() {
    int n,x;
    cin >> n >> x;
    int m,count=0;
    for (int i=1; i <= n; i++){
        cin >> m;
        if (m == x) count ++;
    }
    if (count) cout << count << endl;
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