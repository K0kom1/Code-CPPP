// n < 10^9

#include <bits/stdc++.h>
using namespace std;
int Kiem_tra(long long n) {
    long long sum =1, k = sqrt(n);
    for (int i=2; i <= k; i++) {
        if (n % i ==0) {
            sum += i;
            sum += n/i;
        } 
    }
    if (k * k == n) sum -=k;
    if (sum == n) return 1;
    else return 0;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        long long n;
        cin >> n;
        cout << Kiem_tra(n) << endl;
    }
    return 0;
}