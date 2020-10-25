#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int test;
    cin  >> test;
    while (test--){
        ll a,res=0;
        string s;
        cin >> a >> s;
        for (int i=0; i < s.length(); i++){
            res = (res*10 + (s[i]-'0')) % a;
        }
        cout << __gcd(res,a) << endl;
    }
    return 0;
}