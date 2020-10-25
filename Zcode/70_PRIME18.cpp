#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int tmp;
    while(b != 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int chiaHet(int m, int n, int x) {
    if (m%x) return n/x - m/x ;
    else return n/x - m/x +1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        
        cout << chiaHet(m,n,a) + chiaHet(m,n,b) - chiaHet(m,n,a*b/gcd(a,b)) << endl;
    }
    return 0;
}