#include<iostream>
#include<vector>
#include<algorithm>
#define MOD 1000000007
using namespace std;
int n;
vector<int> a;
long long sum;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int temp;
        cin >> n;
        sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        
        for(int i = 0; i < n; i++)
        {
            sum += a[i]*i;
            sum = sum%MOD;
        }
        cout << sum << endl;
        a.clear();
    }
    
}