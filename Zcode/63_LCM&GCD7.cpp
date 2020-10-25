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
long long bc(int x, int y, int z) {
    int k=gcd(x,y);
    long long lmc=x*y/k;
    k=gcd(lmc,z);
    return lmc*z/k;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z,N;
        cin >> x >> y >> z >> N;
        long long k=bc(x,y,z);
        long long a=(pow(10,N-1)-1)/k;
        if (k*(a+1) >= pow(10,N)) cout << -1 << endl;
        else cout << k*(a+1) << endl;
    }
    return 0;
}