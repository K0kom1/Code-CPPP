#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,temp;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        if(n == 1 || v[0] == v[n-1])
            cout << -1 << endl;
        else
            cout << v[0] << " " << v[1] << endl;    
        

    }
}