#include <bits/stdc++.h>
using namespace std;
const int N=1e5+1;
int snt[N];
void sang_nt() {
    for (int i=2; i < N; i++) snt[i]=1;
    for (int i=2; i < N; i++) {
        if (snt[i]) 
            for (int j=2*i; j < N; j+=i) snt[j]=0;
    }
    return;
}
int main() {
    sang_nt();
    int test;
    cin >> test;
    while (test--) {
        int l,r,count=0;
        cin >> l >> r;
        for (int i=l; i <= r; i++) 
            if (snt[i]) count ++;
        cout << count << endl;
    }
    return 0;
}