#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int n,k;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int temp,count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        for(int i  = 0; i < n - 1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(v[i] + v[j] == k)    count ++;
                if(v[i] + v[j] > k)     break;
            }
        }
        cout << count << endl;
        v.clear();
    }
    
}