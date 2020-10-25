#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--){
        int n,p, count=0, i=0;
        cin >> n >> p;
        while (i <= n-p) {
            i += p;
            int m=i;
            while (m % p == 0){
                count ++;
                m /= p;
            }
        }
        cout << count << endl;
    }
    return 0;

}