#include <bits/stdc++.h>
using namespace std;
int a[11]={1,2,5,10,20,50,100,200,500,1000};
int doiTien(int n)
{
    int dem=0, i=10;
    while (n!=0){
        dem += n/a[--i];
        n %= a[i];
    }
    return dem;
}

int main() {
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        cout << doiTien(n) << endl;
    }
    return 0;
}
