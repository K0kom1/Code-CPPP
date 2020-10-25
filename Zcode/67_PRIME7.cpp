#include <bits/stdc++.h>
using namespace std;

void test ()
{
    int n,count=0;
    cin >> n;
    if (n % 2 == 0){
        n /= 2;
        if (n % 2== 0){
            cout << 0<< endl;
            return;
        }
        count ++;
    } 

    for (int i = 3; i <= sqrt (n); i += 2) {
        if (n % i == 0){
            n /= i;
            if (n % i== 0){
                cout << 0 << endl;
                return;
            }
            count ++;
        } 
    }
    if (n > 2) count++ ;
    if (count==3) cout << 1 << endl;
    else cout << 0 << endl;
    return ;
}

int main ()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    int t;
    cin >> t;
    while (t--){
        test ();
    }
    
    return 0;
}
