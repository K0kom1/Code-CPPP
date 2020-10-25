#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,max = 0, min = 1000;
        cin >> n;
        int a[n+1];
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if(a[i] > max)  max = a[i];
            if(a[i] < min)  min = a[i];
        }
        sort(a+1,a+1+n);
        int same =0;
        for(int i = 1; i <= n-1; i++)
        {
            if(a[i] == a[i+1])  same++;
        }
        cout << (max-min+1) - (n-same) << endl;
        // cong thuc: so phan tu trong khoang max min tru di so cac phan tu khac nhau trong khoang mang a
        
    }
    
}