#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        int l=s.length(), sum_le = 0, sum_chan = 0;
        s[l]='0';
        for (int i=0; i < l; i+=2) {
            sum_le+= s[i]-'0';
            sum_chan += s[i+1]-'0';
        }
        if (abs(sum_le - sum_chan) % 11) cout << 0 << endl;
        else cout << 1 << endl;
    }
    return 0;
}