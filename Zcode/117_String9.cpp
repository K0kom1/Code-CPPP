#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--) {
        stringstream ss;
        string s;
        cin >> s;
        for (int i=0 ; i < s.length(); i++)
            if (s[i] >= 'a') s[i]=' ';
        
        ss << s;
        int k, max = 0;
        while (!ss.eof()){
            ss >> k;
            if (max < k) max = k; 
        }
    cout << max << endl;
    }
	return 0;
}