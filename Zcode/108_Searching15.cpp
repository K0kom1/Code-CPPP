#include<bits/stdc++.h>
using namespace std;
const int N=1e6+1;
int a[N];
void Searching15(int n, int k, int x) {
    int j=0; 
    while (a[j] < x) j++;
    int r=j;
    if (a[j] == x){ r=j+1;}
    if (j < k/2) {
        for (int i=0; i < j; i++) cout << a[i] << " ";
        for (int i=r; i < r+k-j; i++) cout << a[i] << " ";

    }       
    else
        if (n-r<k/2) {
            // cout << l-k+n-r+1 << endl;
            for (int i=j-k+n-r; i < j; i++) cout << a[i] << " ";
            for (int i=r; i < n; i++) cout << a[i] << " ";
        } 
        else{
            for (int i=j-k/2; i < j; i++) cout << a[i] << " ";
            for (int i=r; i < r+k/2; i++) cout << a[i] << " ";
        }
    cout << endl;
    return;
}
int main()
{
	int test;
	cin >> test;
    int n, k , x;
	while(test--){
        cin >> n;
        for (int i=0; i < n; i++) cin >> a[i];
        cin >> k >> x;
        Searching15(n,k,x);
	}
	return 0 ;
}