#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
vector<long long> a;
vector<long long> b;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long temp,sum=0;
        for(int i = 0; i < n ; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        for(int i = 0; i < n ; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        for(int i = 0; i < n; i++)
            sum += a[i]*b[i];
        cout << sum << endl;
        a.clear();
        b.clear();    
    }
    
}