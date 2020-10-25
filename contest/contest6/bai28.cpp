#include<bits/stdc++.h>

using namespace std;
// inter-section
int main()
{
    int n,a[105],j;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Buoc 0: " << a[0] << endl;
    for(int i = 1; i < n; i++)
    {
        int key = a[i];
        j = i-1;
        while (j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        cout << "Buoc " << i << ": ";
        for(int z = 0; z <= i; z++)
        {
            cout << a[z] <<" ";
        }
        cout << endl;
    }
    
}