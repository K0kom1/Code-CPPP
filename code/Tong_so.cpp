#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, i=0;
    cin >> k;
    long long sum=0;
    while (k >= i) {
        sum += i*i;
        k -= i;
        i++;
    }
    sum += k*(i+1);
    cout << sum;
}