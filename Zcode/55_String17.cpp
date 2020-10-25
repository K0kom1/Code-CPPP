#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        int check[26]={0}, l=s.length();
        for (int i=0; i < l; i++)
            check[s[i]-'0'-17]++;
        for (int i=0; i < l; i++)
            if (check[s[i]-'0'-17] == 1) cout << s[i];
        cout << endl;
    }
    return 0;
}