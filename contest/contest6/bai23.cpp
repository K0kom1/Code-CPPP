#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,temp;
        cin >> n;
        vector<int> v;
        v.push_back(0);
        for(int i = 1; i <= n-1; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] != i)  
            {
                 cout << i << endl;
                 break;

            }
        }
    
    }
    
}