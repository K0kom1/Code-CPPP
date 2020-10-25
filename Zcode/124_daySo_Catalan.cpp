#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    unsigned long long S=1;
    cin >> n;
    for (int i=1; i <= n; i++){
        S = S* (2*i+1) * (2*i+2) / (i+1)/ (i+2);
    }
    cout << S;
    return 0;

}