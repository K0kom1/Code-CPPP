#include<bits/stdc++.h>
using namespace std;
const int N=1e7+1;
int check[11] ;
void tach_cs(long long x) {
    while (x) {
        check[x%10]=1;
        x /= 10;
    }
    return;
}
void Sorting10() {
    int n;
    cin >> n;
    long long x;
    for (int i=0; i < 10; i++) check[i]=0;
    for (int i=0; i < n; i++) {
        cin >> x;
        tach_cs(x);
    }
    for (int i=0; i < 10; i++)
        if (check[i]) cout << i << " ";
    cout << endl;
    return;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        Sorting10();
    }
    return 0;
}