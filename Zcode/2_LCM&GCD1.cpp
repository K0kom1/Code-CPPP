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
        long long a,b,x;
        cin >> a >> b;
        x = gcd(a,b);
       cout << a * b / x << " " << x << endl;
    }
}