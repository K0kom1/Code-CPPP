#include<bits/stdc++.h>

using namespace std;
string s;
int check[20], a[20], n;

void display()
{
    for(int i = 1; i <= n ; i++)
        cout << s[a[i] - 1];
    cout << " ";    
}

void back_track_permutation(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(check[j] == 0)
        {
            a[i] = j;
            check[j] = 1;
            if(i == n)  display();
            else    back_track_permutation(i+1);
            check[j] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        n = s.length();
        memset(check, 0, sizeof( check ));
        back_track_permutation(1);
        cout << endl;
    }
}
