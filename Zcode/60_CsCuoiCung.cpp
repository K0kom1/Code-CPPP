#include<bits/stdc++.h>
using namespace std;
int x;
void rutgon() {
    int sum=0,k=x;
    while (k) {
        sum += k%10;
        k /= 10;
    }
    x=sum;
    return ;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        cin >> x;
        while (x > 9) rutgon() ;
        cout << x << endl;
    }
    return 0;
}