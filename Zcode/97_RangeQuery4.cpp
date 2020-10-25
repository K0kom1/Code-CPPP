#include <bits/stdc++.h>
using namespace std;
const  int N=1e6;
void RangeQuery4() {
    int n;
    cin >> n;
    long long a[n];
    for (int i=0; i < n; i++) cin >> a[i] ;
    long long max1=a[0], max_so_far=a[0];
    for (int i=1; i < n; i++){
        max1 = max (a[i], max1+a[i]);
        max_so_far = max (max1, max_so_far);
    }
    cout << max_so_far << endl;
    return;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
       RangeQuery4();
    }
    return 0;
}