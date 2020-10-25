#include <bits/stdc++.h>
using namespace std;
const  int N=1e6;
void RangeQuery8() {
    int n, k, sum=0, luu=0;
    cin >> n >> k;
    int a[n];
    for (int i=0; i < n; i++) cin >> a[i] ;
    
    for (int i=0; i < k; i++) sum += a[i];
    int max=sum;
    for (int i=1; i <= n-k; i++) {
        sum = sum - a[i-1] + a[i+k-1];
        if (max < sum) {
            max = sum;
            luu=i;
        }
    }
    for (int i=luu; i < luu+k; i++)
        cout << a[i] << " ";
    cout << endl;
    return;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
       RangeQuery8();
    }
    return 0;
}