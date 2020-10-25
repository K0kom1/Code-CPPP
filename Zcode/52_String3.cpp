#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        int l=s.length(), sum = s[l-1]-'0';
        for (int i=l-2; i >= 0; i--) {
            if (s[i] == '1') 
                switch ((l-1-i)%4) {
                    case 0: 
                        sum +=6;
                        break;
                    case 1: 
                        sum +=2;
                        break;
                    case 2: 
                        sum +=4;
                        break;
                    default:
                        sum +=8;
                        break;
                }
        }
        if (sum % 5) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}