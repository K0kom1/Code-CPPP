#include<bits/stdc++.h>

using namespace std;
int n;
long long a[100005];
void meger(long long a[], int l, int m, int r)
{
    int i,j,k;
    int n1 = m - l + 1;
    int n2 = r - m;
    long long left[n1],right[n2];
    for ( i = 0; i < n1; i++)
    {
        left[i] = a[l+i];
    }
    for ( j = 0; j < n2; j++)
    {
        right[j] = a[m + j + 1];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if(left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
}
void merge_sort(long long a[],int l, int r)
{
    if(l < r)
    {
        int m = (l + r -1)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        meger(a,l,m,r);
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    merge_sort(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
    
}