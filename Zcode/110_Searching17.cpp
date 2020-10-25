#include<bits/stdc++.h>
using namespace std;
const int N=1e6+1;
long long a[N];
void Searching16() {
    int n, k;
    cin >> n >> k;
    for (int i=0; i < n; i++) cin >> a[i];  
    sort(a,a+n);
    cout << a[k-1] << endl;
    return;
}
int main()
{
	int test;
	cin >> test;
	while(test--){
        Searching16();
	}
	return 0 ;
}