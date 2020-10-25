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
        long long n,bc=1;
        cin >> n;
        long long k=1;
        for (int i=2; i <=n ; i++){
            k=gcd(bc,i);
            bc=bc*i/k;
        }
       cout << bc << endl;
    }
}