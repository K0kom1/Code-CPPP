#include<bits/stdc++.h>

using namespace std;
int binary_search(vector<int> a, int n, int k)
{
    int left = 0, right = n-1;
    while (left <= right)
    {
        int middle = (left+right)/2;
        if(a[middle] == k)
        {
            return 1;
            break;
        }
        else if(a[middle] > k)  right = middle-1;
        else                    left = middle + 1;
    }
    return -1;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,temp,k;
        vector<int> v;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        cout << binary_search(v,n,k) << endl;
        
        
    }
    
}