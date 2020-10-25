#include <bits/stdc++.h>
using namespace std;
const int N=16;
const int mod=1e9+7;

int main() {
    int test, check[1001]={1,1};
    int fibo[N]={0,1};
    for (int i=2; i <= N; i++) {
        fibo[i] = (fibo[i-2] + fibo[i-1]);
        check[fibo[i]]=1;
    }
    cin >> test;
    while (test--)      
    {
        int n,x; 
        cin >> n;
        for (int i=0; i < n; i++){
            cin >> x;
            if (check[x]) cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}