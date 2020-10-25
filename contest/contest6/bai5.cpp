#include <bits/stdc++.h>

using namespace std;
int a, b;
vector<int> v;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int temp;
        for (int i = 0; i < a + b; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != v[i + 1])
                cout << v[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == v[i + 1])
                cout << v[i] << " ";
        }
        cout << endl;
        v.clear();
    }
}