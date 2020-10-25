/* L[i]: độ dài dãy con đơn điệu tăng dài nhất bắt đầu tại a[i]
Cơ sở: L[n+1]=1 (với a[n+1]=+vc)
Công thức truy hồi: tính L[i]:
    L[n+1]=1;
    L[i]=max(L[j]) + 1; (0<=i<=n)
        { i < j <= n+1
          a[i] < a[j] }
*/

#include<iostream>
using namespace std;
const int max = 1001;
void dayTang_max() {
    int n, L[1001]={0}, a[1001], res=0;
    cin >> n;
    for (int i = 0 ; i < n ; i++) cin >> a[i];

    for (int i = n-1 ; i >= 0 ; i--) {
        int lmax=0;
        for ( int j = i+1 ; j < n ; j++)
            if (a[i] < a[j] && L[j] > lmax) lmax = L[j];
        L[i] = lmax + 1;            // L[i]: độ dài dãy con đơn điệu tăng dài nhất bắt đầu tại a[i]
        if ( L[i] > res ) res = L[i] ;  // res lưu lại gia trị l[i] max 
    }
    cout << res << endl;
    return ;
}
int main(){
    int test;
    cin >> test;
    while (test--) {
       dayTang_max();
    }
	return 0;
}
