#include <iostream>

using namespace std;
int n, c[20][20], cost, cmax, cmin, check[20], p[20], ketqua;
void find_max_min()
{
    cmax = cmin = c[1][2];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (c[i][j] != 0 && c[i][j] < cmin)
                cmin = c[i][j];
            if (c[i][j] > cmax)
                cmax = c[i][j];
        }
    }
}
void back_track_permutation(int i)
{
    for (int j = 2; j <= n; j++)
    {
        if (check[j])
        {
            p[i] = j;
            check[j] = 0;
            cost += c[p[i - 1]][p[i]];
            if (i == n)
            {
                if (cost + c[p[i]][1] < ketqua)
                    ketqua = cost + c[p[i]][1];
            }
            else if (cost + (n - i + 1) * cmin < ketqua)
                back_track_permutation(i + 1);
            cost -= c[p[i - 1]][p[i]];
            check[j] = 1;
        }
    }
}
int main()
{
    cin >> n;
    cost = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> c[i][j];
    }
    find_max_min();
    ketqua = n * cmax;
    for (int i = 1; i <= n; i++)
        check[i] = 1;
    p[1] = 1; 
    back_track_permutation(2);
    cout << ketqua << endl;
    return 0;
}
