#include <bits/stdc++.h>
using namespace std;
void RangeQuery12() {
    int n;
    cin >> n;
    int a[n],b[n];
    for (int i=0; i < n; i++) cin >> a[i] ;
    for (int i=0; i < n; i++) cin >> b[i] ;
    for (int l=n; l >= 1; l--) {
        for (int i=0; i <= n-l; i++){
            int sum1=0, sum2=0;
            for (int j=i; j <= i+l-1; j++){
                sum1 += a[j];
                sum2 += b[j];
            }
            if (sum1 == sum2) {
                cout << l << endl;
                return; 
            }
        }
    }
    return;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        RangeQuery12();
    }
    return 0;
}