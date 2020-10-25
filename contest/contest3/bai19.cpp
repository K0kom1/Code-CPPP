#include<iostream>

using namespace std;
long long a,b,result;
// a tử b mẫu
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        while(true)
        {
            if(b % a == 0)
            {
                cout << "1/" << b/a <<  endl;
                // đây là phân số cuối cùng dk tách
                break;
            }
            else{
                result = b/a + 1;
                cout << "1/" << result << " + ";
                // quy đồng để tìm phân còn lại
                a = a*result - b*1;
                b = b*result;
            }
        }
    }
    
}
