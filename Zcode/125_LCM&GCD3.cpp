#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int N=61;
int gcd(int a,int b){
    int tmp;
    while(b != 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
long long Powll(long long  x, int y, int p) {
    long long res=1;
    while (y) {
        if (y & 1) 
            res = res * x % p;
        y >>= 1;
        x = x * x % p;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a[N], g=0;
        cin >> n;
        long long h=1;
        for (int i=0; i < n ; i++) {
            cin >> a[i];
            h = (h * a[i]) % mod;
            g = gcd(g,a[i]);
        }
        cout << Powll(h,g,mod) << endl;
    }
}