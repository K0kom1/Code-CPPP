#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,temp,x;
        cin >> n >> x;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp == x)   cout << i + 1 << endl;
        }
    }
        
}