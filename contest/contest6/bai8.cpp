#include<bits/stdc++.h>

using namespace std;
vector<int> x,y;
int n,m;
// long long lt(int n, int k)
// {
    
//     if(k==0)    return 1;
//     if(k % 2 == 0)
//     {
//         long long x = lt(n,k/2);
//         return x*x;
//     }
//     return (lt(n,k-1)*n);
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int temp,count = 0;
        for (int i = 0; i < n; i++)
        {
                cin >> temp;
                x.push_back(temp);
        }
        for(int j = 0; j < m; j++)
        {
            cin >> temp;
            y.push_back(temp);
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        for(int i  = 0 ; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(pow(x[i],y[j]) > pow(y[j],x[i]))
                    count++;
            }
        }
        cout << count << endl;
        x.clear();
        y.clear();
    }
    
}