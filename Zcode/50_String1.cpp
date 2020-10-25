#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        int k;
        string s;
        cin >> s;
        cin >> k;
        int check[26]={0}, l=s.length(), count=0;
        for (int i=0; i < l; i++)
                check[s[i]-'0'-49]++;
        for (int i=0; i < 26; i++) 
            if (check[i]){
                count ++;
            }
        if (l >= 26 && k >= (26-count)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}