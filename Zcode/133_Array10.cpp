#include<bits/stdc++.h>
using namespace std;
#include<stack>
int main() {
    int test;
    string s;
    stack <int> st;
    cin >> test;
    while (test--) {
        cin >> s;
        int j=0;
        st.push(1);
        while (j < s.length()) {
            if (s[j] == 'I') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                while (s[j] == 'I' && s[j+1] == 'I') {
                    j++;
                    cout << j+1;
                }
                j++;
                st.push(j+1);
                
            }
            else {
                while (s[j] == 'D') {
                    j++;
                    st.push(j + 1);
                } 
            }

        }
        while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
        cout << endl;
    }
    return 0;
}