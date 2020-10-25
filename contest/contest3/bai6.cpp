#include<bits/stdc++.h>

using namespace std;
vector<int> a,b;
int n;
bool act()
{
    for(int i  = 0 ; i < n ; i++)
    {
        if(b[i] != a[i] && b[i] != a[n-1-i])    return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        cin >> n;
        for(int i  = 0 ; i < n ; i ++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
            b.push_back(temp);
        }
        sort(b.begin(),b.end());
        if(act())   cout << "Yes" << endl;
        else        cout << "No" <<endl;            
        a.clear();
        b.clear();
    }
    
}