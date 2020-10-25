#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,count = 0,temp,k;
        vector<int> a;
        cin >> n >> k;
        for(int i = 0 ; i < n ;i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(abs(a[i]-a[j]) < k)  count++;
            }
        }
        cout << count << endl;

    }
    
}