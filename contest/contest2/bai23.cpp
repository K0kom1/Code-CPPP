#include <iostream>

using namespace std;
// D L R U
int n, mark, a[20][20],dem;
string result;
int display(int dem)
{
    for (int i = 0; i < dem; i++)
        cout << result[i];
    cout << " ";
}
void try1(int i, int j, int dem)
{
    if (i == n && j == n)
    {
        mark = 1;
        display(dem);
        return;
    }
    if (i < n && a[i + 1][j])
    {
        result[dem] = 'D';
        try1(i + 1, j, dem + 1);
    }
    if (j > 1 && a[i][j - 1])
    {
        result[dem] = 'L';
        try1(i, j - 1, dem + 1);
    }
    if (j < n && a[i][j + 1])
    {
        result[dem] = 'R';
        try1(i, j + 1, dem + 1);
    }
    if (i > 1 && a[i - 1][j])
    {
        result[dem] = 'U';
        try1(i - 1, j, dem + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        mark = 0;
        dem = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        }
        try1(1, 1, dem);
        if (mark == 0)
            cout << -1;
        cout << endl;
    }

    return 0;
}