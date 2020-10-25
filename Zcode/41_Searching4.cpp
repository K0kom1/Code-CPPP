#include<bits/stdc++.h>
using namespace std;
void Searching() {
    int n,x;
    cin >> n >> x;
    int m;
    for (int i=1; i <= n; i++){
        cin >> m;
        if (m == x) cout << i << endl;
    }
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

// void Searching() {
//     int n,x,*m;
//     cin >> n >> x;
//     m=new int[n];
//     for (int i=0; i < n; i++)
//         cin >> m[i];
//     if (x < m[0]) cout << n-m[0]+x+1 << endl;
//     else cout << x-m[0]+1 << endl;
//     delete(m);
//     return;
// }
