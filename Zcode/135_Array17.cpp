#include<bits/stdc++.h>
using namespace std;
#include<stack>
int main() {
    int test;
    string s;
    cin >> test;
    while (test--) {
        cin >> s;
        int dem[10]={0}, max=1;
        for (int i=0; i < s.length(); i++) {
            int x=s[i]-'0';
            dem[x]++;
        }
        bool check_c=false, check_l=false;
        for (int i=1; i < 10; i++) {
            if (dem[i] > 0 && dem[i] % 2 == 0) check_c = true;
            if (dem[i] % 2 == 1) {
                if (check_l == false) {
                    max=i;
                    check_l = true;
                }
                if (dem[max] <= dem[i]) max=i;
            }
        }
        cout << max;
        cout << endl;
    }
    return 0;
}