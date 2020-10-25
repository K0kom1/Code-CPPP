/*Dãy con dài nhất có tổng chia kết cho K
Cách giải: CHọn ra một số tối thiếu các phần tử có tổng đồng dư vs S theo mudul K
Gọi f[i,t] là số phần tử tối thiểu phải chọn trong dãy a[1,n] để có tổng chia K dư t
Cơ sở qhd: f[0,0]=0; f[0,i]=1e9;
Công thức truy hồi:
    +Không chọn a[i]: f[i,t]=f[i-1,t]
    +Chọn a[i]: f[i,t]=1+f[i-1,t-a[i]] (t-a[i] được hiểu là phép trừ trên các lớp đồng dư mod K)
Vậy f[i,t]=min(f[i-1,t], 1+f[i-1,t-a[i]])
*/
//#include<iostream>
//#include<vector>
#include<bits/stdc++.h>
using namespace std;
int k;
int sub(int x){ 
    return (x >= 0) ? x : (x+k);
}
int main(){
    int n,x,s=0;
    int f[101][101];
    // int a[1001] ;
    vector <int> a;
    // vector < vector <int> > f;
    a.push_back(0);
  
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        x %= k;
        a.push_back(x);
        s=(s + x) % k;
    }
    
    f[0][0]=0;
    for (int i = 1; i <= k; i++) f[0][i]=1e9;
    for (int i = 1; i <= n; i++)
        for (int t = 0; t < k; t++)
            f[i][t] = min(f[i-1][t], 1 + f[i-1][sub(t-a[i])]);

    cout << n-f[n][s%k];
    return 0;
}
