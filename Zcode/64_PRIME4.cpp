#include <bits/stdc++.h>
using namespace std;
const int N=10000;
int snt[10000];
void sang_nt() {
    for (int i=2; i <= N; i++) snt[i]=0;
    for (int i=2; i <= N; i++) {
        if (snt[i]==0)
            for (int j=i; j <= N; j+=i)
                if (snt[j]==0) snt[j]=i;
    }
    snt[1]=1;
    return;
}
int main() {
    int test;
    cin >> test;
    sang_nt(); 
    while (test--) {
        int n;
        cin >> n;
        for (int j=1; j <= n; j++) cout << snt[j] << " ";
        cout << endl;
    }
}