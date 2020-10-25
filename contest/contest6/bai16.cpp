#include <bits/stdc++.h>

using namespace std;
int a[1000001], n;
void quick_sort(int l, int r)
{
    if (l == r)
        return; // dieu kien thoat de quy.

    int mid = (l + r) / 2;
    int value = a[mid];
    int i = l, j = r;
    while (i <= j)
    {
        while (a[i] < value)
            i++; // tim vi tri phan tu lon hon phan tu mid trong doan left -> mid
        while (a[j] > value)
            j--; // tim vi tri phan tu nho hon phan tu mid trong doan right -> mid

        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l < j)
        quick_sort(l, j); // sap xep mang nhung phan tu nho hon a[mid]
    if (r > i)
        quick_sort(i, r); // sap xep mang nhung phan tu lon hon a[mid]
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        quick_sort(0, n - 1);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}