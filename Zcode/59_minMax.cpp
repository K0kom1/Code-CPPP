#include<bits/stdc++.h>
using namespace std;
void min(int m, int s) {
    int cs[m]={0};
    s--;
    int k=s/9;
    cs[m-k-1] = s-9*k;
    cs[0]++;
    for (int i=m-k; i < m; i++) cs[i]=9;
    for (int i=0; i < m; i++) cout << cs[i];
    return;
}
void max(int m, int s) {
    int cs[m]={0};
    int k=s/9;
    cs[k] = s-9*k;
    for (int i=0; i < k; i++) cs[i]=9;
    for (int i=0; i < m; i++) cout << cs[i];
    return;
}
int main() {
    int m,s;
    cin >> m >> s;
    if (s < 1 || s > 9*m) {
        cout << "-1 -1" << endl;
        return 0;
    }
    min(m,s);
    cout << " ";
    max(m,s);
    return 0;
}