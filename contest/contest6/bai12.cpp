#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n,k;
        cin >> n >> k;
        int temp;
        for(int i = 0; i < n ; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        for(int i = n-1; i >= n-k; i--)
            cout << v[i] << " ";
        cout << endl;    
    }
    
}