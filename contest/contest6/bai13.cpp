#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,count = 0,temp;
        cin >> n >> x;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp == x)   count++;
        }
        if(count)       cout << count << endl;
        else            cout << -1 << endl;
    }
    
}