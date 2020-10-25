#include<bits/stdc++.h>

using namespace std;
vector<int> a;
int n;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        for (int i = 0; i < n/2; i++)
        {
            cout << a[n-i-1] << " " << a[i] << " ";
        }
        if(n % 2 != 0)  cout << a[n/2];
        cout << endl;
        a.clear();
    }
    

}