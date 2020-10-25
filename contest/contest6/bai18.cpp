#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,temp;
        vector<int> v;
        cin >> n >> m;
        for(int i = 0; i < n+m; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        
    }
    
}