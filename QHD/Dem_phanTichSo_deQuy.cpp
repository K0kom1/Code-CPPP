/* gọi f[m,v] là số cách phân tích số v thành tổng các số nguyên dương <=m 
    Công thức truy hồi:
        + f[m,v]=f[m-1,v] nếu m>v
        + f[m,v]=f[m-1,v]+f[m,v-m] nếu m<=v

    Dùng mảng 2 chiều f[m,v] để lưu

*/
#include<iostream>
#include<vector>
using namespace std;

// Khai báo vector 2 chiều 100*100 với các phần tử khởi tạo giá trị =-1
vector < vector <int> > f (100001, vector <int> (100001,-1)) ; 

int GetF(int m, int v)
{
    if (f[m][v] == -1) 
    {
        if (m == 0) 
            if (v == 0) f[m][v] = 1;
            else f[m][v] = 0;
        else 
            if (m > v) f[m][v] = GetF(m-1,v);
            else f[m][v] = GetF(m-1,v) + GetF(m,v-m);
    }
    return f[m][v];
}
       
int main(){
    int n;
    cin >> n;
    cout << GetF(n,n);
    return 0;
}
