#include <bits/stdc++.h>
using namespace std;
const int N=1000;
int snt[1000000];
void sang_nt(int n) {
    for (int i=2; i <= n; i++) snt[i]=1;
    for (int i=2; i <= n; i++) {
        if (snt[i]) 
            for (int j=2*i; j <= n; j+=i) snt[j]=0;
    }
    return;
}
int main() {
    int m,n;
    cin >> m >> n;
    if (m > n) swap(m,n);
    sang_nt(n);
    for (int i=m+1; i < n; i++)
        if (snt[i]) cout << i << " ";
    return 0;
}