#include <iostream>
#include <queue>

#include <vector>
#define MOD 1000000007
#define ll long long
using namespace std;
int n;

int main()
{
    cin >> n;
    long long temp, first, second, sum = 0;
    priority_queue<ll, vector<ll>, greater_equal<ll>> q;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        q.push(temp);
    }
    while (q.size() > 1)
    {
        first = q.top();
        q.pop();

        second = q.top();

        q.pop();
        sum = (sum + (first + second)) % MOD;
        q.push((first + second) % MOD);
    }
    cout << sum << endl;
}
