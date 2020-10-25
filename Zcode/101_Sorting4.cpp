#include<bits/stdc++.h>
using namespace std;
const int N=1e5+1;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, m, x, A[N]={0};
        cin >> n >> m;
        while (n--) {
            cin >> x;
            A[x] ++;
        }
        while (m--) {
            cin >> x;
            A[x] ++;
        }
        for (int i=0; i < N; i++){
            if (A[i] > 0) cout << i << " ";
        }
        cout << endl;
        for (int i=0; i < N; i++){
            if (A[i] == 2) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}