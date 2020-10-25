#include<iostream>

using namespace std;
int n, mt[1000];

void next_permutation()
{
    int i = n-1;
    while(mt[i] > mt[i+1])    i--;
    if(i == 0)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        
    }
    else
    {
        int k = n;
        while(mt[k] < mt[i]) k--;
        int t = mt[i]; mt[i] = mt[k]; mt[k] = t;
        int d = i+1,m=n;
        while(d < m)
        {
            int temp = mt[d];
            mt[d] = mt[m];
            mt[m] = temp;
            d++; m--;
        }
        for (int j = 1; j <= n; j++)
        {
            cout << mt[j] << " ";
        }
        
    }
    cout << endl;
    
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> mt[i];
        }
        next_permutation();
    }
    return 0;
}
