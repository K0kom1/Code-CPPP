#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        int n,m,temp;
        long long min = 10000000,max = -100000000;
        cin >> n >> m;
        for(int i = 0 ; i < n; i++)
        {
            cin >> temp;
            if(temp > max)  max = temp;
           
        }
        for(int i = 0 ; i < m; i++)
        {
            cin >> temp;
            if(temp < min)  min = temp;
        }
        cout << max*min << endl;
    }
    
}