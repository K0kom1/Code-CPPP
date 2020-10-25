#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    int tmp;
    while(b != 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x,y,a;
        cin >> a >> x >> y;
        long long n=gcd(x,y) ;
        while (n--) cout << a;
        cout << endl;
    }
    return 0;
}