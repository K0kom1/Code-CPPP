// Demo quay lui:
#include<bits/stdc++.h>
using namespace std 

// Giả sử cấu hình cần liệt kê có dạng x[1..n]
try_QL(int i){
    for (mọi giá trị V có thể gán cho x[i])
    {
        Thử cho x[i]=V ;
        if (x[i] là phần tử cuối cùng trong cấu hình)
            { Thông báo/in cấu hình tìm được}
        else {
            (Ghi nhận việc cho x[i] nhận giá trị V<nếu cần>);
            try_QL(i+1);
            (Nếu cần, bỏ việc ghi nhận x[i]=V để tìm giá trị khác);
        }
    }
}
int main{
    try_QL(1);
}
