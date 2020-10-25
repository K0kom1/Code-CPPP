#include <bits/stdc++.h>
using namespace std;
int in_matran(int n, int m, int b[100][100]) {
    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++)
            cout << b[i][j] << " ";
        // cout << endl;    
    }
    cout << endl;
    return 0;
}
int Matrix1(int n, int m, int a[100][100]) {
    int b[100][100]={0};
    int hang=n, cot=m, d=0;

    while (d < n/2 || d < m/2) {
        for (int i = d+1; i < cot; i++)
            b[d][i] = a[d][i-1];

        for (int i = d+1; i < hang; i++)
            b[i][cot-1] = a[i-1][cot-1];

        if (d != hang)
            for (int i = cot-2; i >= d; i--)
                b[hang-1][i] = a[hang-1][i+1]; 
        if (d != cot)
            for (int i = hang-2; i >= d; i--)
                b[i][d] = a[i+1][d];
        d++;
        hang--;
        cot--;
        // in_matran(n,m,b);
    }
    if (m == n && m%2 == 1) b[n/2][m/2]=a[n/2][m/2];
    in_matran(n,m,b);
    return 0;
}
int main() {
    int test, a[100][100];
    cin >> test;
    while (test--) {
        int n,m;
        cin >> n >> m;
        for (int i=0; i < n; i++)
            for (int j=0; j < m; j++) 
                cin >> a[i][j];
        Matrix1(n,m,a);
    }
    return 0;
}