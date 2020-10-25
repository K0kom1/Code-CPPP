#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test--) {
        stringstream ss;
        string s;
        cin >> s;
        for (int i=0 ; i < s.length(); i++)
            if (s[i] >= 'a') s[i]=' ';
        int l=s.length();
        while (s[l-1] == ' ') l--;
        s.erase(l);
        ss << s;
        int k, sum = 0;
        while (!ss.eof()){
            ss >> k;
            sum += k; 
        }
    cout << sum << endl;
    }
	return 0;
}