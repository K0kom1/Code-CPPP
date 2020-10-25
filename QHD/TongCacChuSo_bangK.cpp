/* Tìm tất cả các số < n chữ số có tổng các chữ số bằng K.
Cách giải: Các số thỏa mãn sẽ cos các chữ số đc biểu diễn theo mảng x[1],x[2],...,x[n] (x[i] có thể bằng 0)
Gọi f[n,k] là số các chữ số có n chữ số và tổng các chữ số bằng k
Cơ sở QHD:
    F[1,k]=1 nếu k<=9
    f[1,k]=0 nếu k>9
Công thức truy hồi:
    F[n,k] += F[n-1,k-t] (0 <= t <= 9 && t<=k)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,F[101][101]={0};
    cin >> n >> k;
    if (k <= 9) F[1][k]=1;
    else F[1][k]=0;
    for (int i=1; i <= 9; i++) F[1][i]=1;
    for (int i=2; i <= n; i++)
        for (int t = 0; t <= 9; t++)
            if (k-t >= 0) F[i][k] += F[i-1][k-t];
    
    cout << F[n][k];
    return 0;
}
