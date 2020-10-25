/* gọi f[m,v] là số cách phân tích số v thành tổng các số nguyên dương <=m 
    Công thức truy hồi:
        + f[m,v]=f[m-1,v] nếu m>v
        + f[m,v]=f[m-1,v]+f[m,v-m] nếu m<=v
*/
#include<iostream>
using namespace std;
const long long mod = 1e9 + 7;

int main(){
    int n;
    cin >> n;
    /*
    Cách 1:
    int f[100][100]={0};
    f[0][0]=1;
    for (int m = 1 ; m <= n ; m++)
        for(int v=0 ; v <= n ; v++)
            if (m > v) f[m][v] = f[m-1][v];
            else 
                f[m][v] = f[m-1][v] + f[m][v-m];
    cout << f[n][n];
    */

   // Cách 2(tối ưu cách 1:Dùng mảng 1 chiều để lưu 1 dòng của bảng f)
    long l[100001]={0};
    l[0]=1;
    for (int m = 1 ; m <= n ; m++)
        for (int v = m ; v <= n ; v++)
            l[v] = (l[v] + (l[v-m] % mod)) % mod;
	cout << l[n];
    return 0;
}
