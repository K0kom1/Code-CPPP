#include<bits/stdc++.h>
using namespace std;
const int N=1e5+1;

void Searching12(int n, int x) {
    int a[N]={0};
    int max=0;
    for (int i=0; i < n; i++) {
        int k; 
        cin >> k;
        if (max <k) max=k;
        a[k] = 1;
    }
    for (int i=max; i > 0; i--)
        if (a[i] && i-x >= 0 && a[i-x]) {
            cout << 1 << endl;
            return;
        }
    cout << -1 << endl;
    return;
}
int main()
{
	int test;
	cin >> test;
	while(test--){
        int n,x;
        cin >> n >> x;
        Searching12(n,x);
	}
	return 0 ;
}