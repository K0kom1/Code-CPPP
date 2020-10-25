#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, sum=0;
    string s1, s2;
    cin >> n >> s1 >> s2;
    for (int i=0; i < n; i++) {
        int a = (int)s1[i]-'0';
        int b = (int)s2[i]-'0';
        if (a<b) swap(a,b);
        sum += min((a-b),(9-a+b+1));
    }
    cout << sum;
    return 0;
}