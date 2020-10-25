#include <bits/stdc++.h>
using namespace std;
const int N=10000;
int snt[10000];
void sang_nt() {
    for (int i=2; i <= N; i++) snt[i]=1;
    for (int i=2; i <= N; i++) {
        if (snt[i]==1)
            for (int j=i*2; j <= N; j+=i) snt[j]=0;
    }
    return;
}
int main() {
    int test;
    cin >> test;
    sang_nt(); 
    while (test--) {
        int n;
        cin >> n;
        for (int i=2; i <= n/2; i++) 
            if (snt[i] && snt[n-i]){
                cout << i << " " << n-i;
                break; 
            }
        cout << endl;
    }
}