#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Powll(ll a, ll b, ll m){
    ll res=1;
    while (b){
        if (b & 1) // Nếu b lẻ
            res = res * a % m;
        a = a * a % m;
        b >>= 1;   // b=b/2;
    }
    return res;
}
int main(){
    int test;
    cin >> test;
    while(test--) {
        string s;
        ll M, res=0,b;
        cin >> s >> b >>  M;
        for (int i=0; i < s.length(); i++){
            res = (res*10 + (s[i] - '0')) % M;
        }
        cout << Powll(res,b,M) << endl;
    }
    return 0;
}