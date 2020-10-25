#include<bits/stdc++.h>
using namespace std;

void Searching() {
    int n,*a;
    cin >> n;
    a= new int[n];
    int sum=0;
    for (int i=1; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << n*(n+1)/2-sum << endl;
    delete(a);
    return;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        Searching();
    }
    return 0;
}