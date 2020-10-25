#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        int l=s.length(), count=l;
        for (int i=0; i < l-1; i++) 
            for (int j=i+1; j < l; j++)
                if (s[i] == s[j]) count ++;

        cout << count << endl;
    }
    return 0;
}