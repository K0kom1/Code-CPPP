#include<bits/stdc++.h>
using namespace std;
const int N=1e6+1;
int snt[N];
void sang_nt() {
    for (int i=2; i <= N; i++) snt[i]=1;
    for (int i=4; i <= N; i+=2) snt[i]=0;
    for (int i=3; i <= N; i+=2) {
        if (snt[i]) 
            for(int j=2*i; j <= N; j+=i) snt[j]=0;
    }
    return;
}
void Searching10(int n) {
    if (snt[n-2]) { cout << 2 << " " << n-2 << endl; return; }
    for (int i=3; i <= n/2; i+=2)
        if (snt[i] && snt[n-i]) {
            cout << i << " " << n-i << endl;
            return;
        }
    cout << -1 << endl;
    return;
}
int main() {
    sang_nt();
    int test;
    cin >> test;
    while (test--) {
        int n ;
        cin >> n;
        Searching10(n);
    }
    return 0;
}