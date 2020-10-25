#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
bool cmp(string x,string y){
	return x > y;
}
int main(){
    int test;
    cin >> test;
    while (test--) {
        stringstream ss;
        string s[N];
        cin >> s;
        int l=s.length();
        sort(s,s+l,cmp);
        cout << s;
        // for (int i=0 ; i < s.length(); i++)
        //     if (s[i] >= 'a') s[i]=' ';
        
        // ss << s;
        // int k, max = 0;
        // while (!ss.eof()){
        //     ss >> k;
        //     if (max < k) max = k; 
    //     }
    // cout << max << endl;
    }
	return 0;
}