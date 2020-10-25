#include<bits/stdc++.h>
using namespace std;
// const int Max=20;
int Max = 0;
string s;

string Tao_chuoi() {
    int l=s.length();
    while (s.length() < Max) {
        int sum=0;
        string s1;
        ostringstream ss;
        int n=s.length();
        for (int i=n-1; i >= n-l; i--)
            sum += (s[i] - '0');
        ss << sum;
        s1 = ss.str();
        s = s + s1;
    }
    return s;
}
int main(){
    int n;
    cin >> s >> n;
    int a[n];
    for (int i=0; i < n; i++) {
        cin >> a[i];
        if (Max < a[i]) Max = a[i];
    }
    Tao_chuoi();
    for (int i=0; i < n; i++) cout << s[a[i]-1] << endl;
    return 0;
}