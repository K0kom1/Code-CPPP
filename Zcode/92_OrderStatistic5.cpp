#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i < n; i++) cin >> a[i];
        
        int max=-1;
        for (int i=0; i < n-1; i++)
            for (int j=i+1; j < n; j++)
                if (max < a[j]-a[i]) max=a[j]-a[i];
        
        cout << max << endl;
    }
    return 0;
    
}