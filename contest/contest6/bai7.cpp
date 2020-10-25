#include<bits/stdc++.h>

using namespace std;
int n;
vector<int> a,b;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int temp;
        for(int i = 1; i <= n; i++)
        {
            cin >> temp;
            a.push_back(temp);
            b.push_back(temp);
        }
        sort(a.begin(),a.end());
        for(int i = 0; i < n; i++)
        {
            if(a[i] != b[i])    
            {
                cout << i + 1 << " ";
                break;
            }
        }
       
        for(int i = n-1; i >= 0; i--)
        {
            if(a[i]!=b[i])   
            {
                cout << i + 1 << endl;
                break;
            }   
        }
        a.clear();
        b.clear();

    }
}