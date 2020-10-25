#include <bits/stdc++.h>
using namespace std;
string LargeNumber3(string X, string Y) {
    int x=X.length(), y=Y.length(), mem[x+y]={0};
    string res;
    for (int i=x-1; i >= 0; i--)
        for (int j=y-1; j >= 0; j--)
            mem[i+j+1] += (X[i]-'0') * (Y[j]-'0');

    for (int i=x+y-1; i >= 0; i--)
        if (mem[i] > 9) {
            mem[i-1] += mem[i]/10;
            mem[i] %= 10;
        }
    for (int i=0; i < x+y; i++ )
        res += (mem[i]+'0'); 
    if (res[0] == '0') res.erase(0,1);
    return res;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        string X,Y;
        cin >> X >> Y;
        cout << LargeNumber3(X,Y) << endl;
    }
    return 0;
}