#include<bits/stdc++.h>

using namespace std;
int a[10005],value[10005],quantity[10005],n,dem;
void buble_sort()
{
    for(int i = 0; i <= dem; i++)
    {
        bool check = true;
        for(int j = 0; j < n-i-1;j++)
        {
            if(quantity[j] < quantity[j+1])
            {
                swap(quantity[j],quantity[j+1]);
                swap(value[j],value[j+1]);
                check  = false;
            }
            
        }
        if(check)   break;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
           cin >> n;
      for(int i  = 0; i < n; i++)
        cin >> a[i];
        sort(a,a+n);
        dem = 0;
        memset(quantity,0,sizeof(quantity));
        value[dem] = a[0];
        quantity[dem]++;
        for (int i = 1; i < n; i++)
        {
            if(a[i] != a[i-1])
            {
                dem++;
                value[dem] = a[i];
                quantity[dem]++;
            }
            else    quantity[dem]++;
        }
        buble_sort();
        for(int i = 0; i<= dem; i++)
        {
            while (quantity[i] >= 1)
            {
                cout << value[i] << " ";
                quantity[i]--;
            }
            
        }
        cout << endl;

    }
    
 

}