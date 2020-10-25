#include<bits/stdc++.h>
using namespace std;
const int N=1e6+1;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[N]={0}, x;
        for (int i=0; i < n; i++) {
            cin >> x;
            if (x > 0) a[x]=1;
        }
        int i=1;
        while (a[i]) i++; 
        cout << i << endl;
    }
    return 0;
    
}