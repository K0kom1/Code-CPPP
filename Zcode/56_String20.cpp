#include <bits/stdc++.h>
using namespace std;
const int N=1e3+1;
int main() {
    int n,dem=0;
    string s;
    cin >> n;
    getline(cin,s);
    while (n--) {
        getline(cin,s);
        int l=s.length();
        int i=l-1;
        while (i >= 0) {
            // while (i >= 0 && s[i] == ' ') i--;
            int t=i;
            while (i >= 0 && s[i] != ' ') i--;
            for (int j=i+1; j <= t; j++) cout << s[j];
            i--;
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}