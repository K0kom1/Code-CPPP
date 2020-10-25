#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[105];
    cin >> n;
    for(int i = 1; i <= n ;i++) cin >> a[i];
    for(int i = 1; i <= n; i++)
    {
        bool check = true;
        for(int j = 1; j <= n - i ;j++) 
        {
            if(a[j] > a[j+1])  
            {
                swap(a[j],a[j+1]);
                check = false;
            } 
        }
         if(check)  break; 
        cout << "Buoc "<<i<<": ";
        for(int z = 1; z <= n; z++)
            cout << a[z] << " ";
         cout << endl;  
        
    }
}
