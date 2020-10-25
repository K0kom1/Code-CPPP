#include<bits/stdc++.h>

using namespace std;

string s;
int c[1000],d[1000];

int dynamic_programing()
{
    int res = 1,n=s.length();
    for(int i = 1; i < n; i++)
    {
         c[i] = 1;
        for(int j = 1; i - j >= 0 && i + j < n; j++)
        {
            if(s[i-j] != s[i+j])    break;
            else                    c[i] += 2;
        }
        res = max(res,c[i]);
    }
    
    for(int i = 1; i < n; i++)
    {
        d[i]  = 0;
        for(int j = 1; i - j + 1 >= 0 && i+j < n; j++)
        {
            if(s[i-j+1] != s[i+j])  break;
            else                    d[i] += 2;
        }
        res = max(res, d[i]);
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        cout << dynamic_programing() << endl;
    }
    
}
