#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int test;
    cin >> test;
    while(test--) {
        string s;
        ll M, res=0;
        cin >> s >> M;
        for (int i=0; i < s.length(); i++){
            res = (res*10 + (s[i] - '0')) % M;
        }
        cout << res << endl;
    }
    return 0;
}