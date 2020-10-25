#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int snt(int x){
	if(x < 2) return 0;
	int m = trunc(sqrt(x));
	for (int i=2; i<=m; i++)
		if (x%i == 0) return 0;
	return 1;	
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        int x,count=0;
        cin >> x;
        for (int i=1; i < x; i++) {
            if (__gcd(i,x) == 1) count ++;
        }
        if (snt(count)) cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}