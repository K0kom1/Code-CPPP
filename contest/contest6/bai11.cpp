#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,temp,min = INT_MAX,res;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(abs(v[i]+v[j]) < min)   
                {
                    res = v[i]+v[j];
                    min = abs(v[i]+v[j]);
                }

            }
        }
        cout << res << endl;
        
    }
    
}