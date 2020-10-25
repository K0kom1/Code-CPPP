#include<iostream>

using namespace std;
int n,s,m;
int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s >> m;
        if(n*(s-s/7) < s*m) cout << -1 << endl;
        else
        {
            int i;
            for( i = 1; i <= (s-s/7); i++)
            {
                if(n*i >= s*m)  break;
            }
            cout << i << endl;
        }
    }
    
}
