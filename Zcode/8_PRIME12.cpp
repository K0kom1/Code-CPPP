#include <bits/stdc++.h>
using namespace std;

void pt(int n,int k)
{
    int m=1 ;
    int dem=0;
    while (n!=1) {
        m++; 
        while ( n%m==0 ) {
            dem++;
            if (dem==k) {
                cout << m << endl;
                return;
            }
            n/=m ;
       }
    }
    if (dem < k) cout << -1;
    return ;
}
int main() {
    int test;
    cin >> test;
    for (int i=0; i < test; i++)
    {
        int n,k;
        cin >> n >> k;
        pt(n,k);
        cout << endl;
    }
    return 0;
}