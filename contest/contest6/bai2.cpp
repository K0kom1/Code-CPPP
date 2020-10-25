#include<bits/stdc++.h>

using namespace std;
int n,x,temp;
 vector<int> v;
void buble_sort()
{
    for(int i = 0; i < n ; i++)
    {
        bool check = true;
        for(int j = 0; j < n - i -1; j++)
        {
            if(abs(x-v[j]) > abs(x-v[j+1]))
                {
                    swap(v[j],v[j+1]);
                    check = false;
                }    
        }
        if(check)   break;
    }
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        cin >> n >> x;
        for(int i = 0 ;i < n ; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        buble_sort();
        for(int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;    
        v.clear();
        
    }
    
}
