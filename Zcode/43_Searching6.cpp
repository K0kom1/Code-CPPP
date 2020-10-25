#include<bits/stdc++.h>
using namespace std;

void Searching() {
    int n,min=1e7;
    cin >> n;
    int a[n];
    for (int i=0; i < n; i++) cin >> a[i];
    for (int i=0; i < n-1; i++) 
        for (int j=i+1; j < n; j++) {
            if (abs(a[i] + a[j]) < abs(min))
                min = a[i] + a[j];
        }
            
    
    cout << min << endl;
    return;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        Searching();
    }
    return 0;
}