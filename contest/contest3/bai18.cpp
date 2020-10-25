#include<iostream>

using namespace std;
int n;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a = 0, b = 0;
        // chạy các số 4
        for(int i = 0 ; i*4 <= n; i++)
        {
            int j = (n - i*4)/7;
            if(4*i + 7*j == n){
                a = i;
                b=j;
                break;
            }
        }
        if(a== 0 && b ==0)  cout << -1 << endl;
        else
        {
            for(int i  = 0 ; i <  a; i++)
                cout << 4;
            for(int i  = 0 ; i <  b; i ++)
                cout << 7;    
            cout << endl;    
        }

        
    }
    
}