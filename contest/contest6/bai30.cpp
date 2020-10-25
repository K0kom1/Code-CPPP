#include<bits/stdc++.h>

using namespace std;

// using RADIX SORT
void radix_sort(long long a[],int n)
{
    int max = a[0],exp=1,res[10];
    for (int i = 1; i < n; i++)
    {
        if(max < a[i])  max = a[i];
    }
    while (max/exp > 0)
    {
        int bucket[10];
         for (int i = 0; i < n; i++)
    {   
        bucket[(a[i]/exp)%10]++;
        // đếm số kí tự xuất hiện
    }
    for (int i = 1; i < 10; i++)
    {
        bucket[i] += bucket[i-1];
    } 
    for (int i = n - 1; i >= 0; i--)
    {
        res[bucket[(a[i]/10)%10]-1] = a[i];
    }
    
    exp *= 10;    
    
    }
    
}
int main()
{
    int n;
    long long a[100005];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    radix_sort(a,n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
    
    
}