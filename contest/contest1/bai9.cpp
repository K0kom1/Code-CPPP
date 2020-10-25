#include <iostream>

using namespace std;
int b[20], g[20], nv, check = 0;
int display()
{
    for (int i = 1; i <= nv; i++)
        cout << g[i];
    cout << " ";
}
void next_binary()
{
    int i = nv;
    while (b[i] == 1)
        i--;
    if (i == 0)
        check = 1;
    else
    {
        b[i] = 1;
        for (int j = i + 1; j <= nv; j++)
            b[j] = 0;
    }
}
void next_gray()
{
    g[1] = b[1];
    for (int i = nv; i > 1; i--)
    {
        if (b[i] != b[i - 1])
            g[i] = 1;
        else
            g[i] = 0;
    }
}
void khoitao()
{
    for (int i = 1; i <= nv; i++)
        b[i] = 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> nv;
        khoitao();
        while (!check)
        {
             next_gray();
            display();
            next_binary();
        }
        cout << endl;
        check = 0;
    }
}
