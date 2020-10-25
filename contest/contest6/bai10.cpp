#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,bucket[10];
        string temp;
        vector<string> v;
        cin >> n;
        memset(bucket,0,sizeof(bucket));
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                bucket[v[i][j] - '0']++;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            if(bucket[i] != 0)  cout << i << " ";
        }
        cout << endl;
        
    }
    
}