#include <bits/stdc++.h>
using namespace std;
const int N=1e6;
int snt[N];
void sang_nt() {
    for (int i=2; i <= N; i++) snt[i]=1;
    for (int i=2; i <= N; i++) {
        if (snt[i]) 
            for (int j=2*i; j <= N; j+=i) snt[j]=0;
    }
    return;
}
int main() {
    int test;
    cin >> test;
    sang_nt();
    while (test--) {
        long long l,r;
        cin >> l >> r;
        int count=0;
        int k = sqrt(l);
        if (k * k < l) k++;
        for (int j=k; j <= sqrt(r); j++)
            if (snt[j]) count ++;
        cout << count << endl;
    }
}
