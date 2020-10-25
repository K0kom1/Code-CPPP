#include <iostream>

using namespace std;
int n, k, c[40], a[40],check = 0,demz = 0;

int next_combination()
{
    int i = k;
    while (c[i] == n - k + i)
        i--;
    if(i == 0)  check = 1;    
    else{
        c[i]++;
        for(int j = i + 1; j <= n; j++)
            c[j] = c[j-1] + 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (k < n)
        {

            for (int i = 1; i <= k; i++)
            {
                cin >> a[i];
                c[i] = a[i];
            }
            next_combination();
            if(check == 1)
            {
                demz = k;
                cout << k << endl;
            }
            else
            {
                for(int i  = 1; i <= k; i++)
                {
                    for(int j = 1; j <= k ; j++){
                        if(c[i] == a[j]) demz++;
                    }
                }
                cout << k - demz << endl;
            }
            demz = 0;
            check = 0;
        }
        else break;
    }
}
