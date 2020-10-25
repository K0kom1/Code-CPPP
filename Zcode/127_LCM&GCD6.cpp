#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int test;
    cin  >> test;
    while (test--){
        ll n,m,sum;
        cin >> n >> m;
        sum = n * (n+1)/2;
        if ((sum + m) % 2) {
            cout << "No" << endl;
            continue;
        }
        if (__gcd((sum+m)/2, (sum-m)/2) == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
        
    }
    return 0;
}