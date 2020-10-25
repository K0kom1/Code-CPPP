#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<int> a;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long temp, tong1 = 0, tong2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++)
        {
            if (i % 2 == 0)
                tong1 = tong1 * 10 + a[i];
            else
                tong2 = tong2 * 10 + a[i];
        }
        cout << tong1 + tong2 << endl;
        a.clear();
    }
}
