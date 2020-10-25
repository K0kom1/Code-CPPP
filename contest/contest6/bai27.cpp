#include<iostream>

using namespace std;

int main()
{
    int n,a[105];
    cin >> n;
    for(int i = 1; i <= n ;i++) cin >> a[i];
    for(int i = 1; i <= n-1; i++)
    {
        int min_index = i,min_value=a[i];
        for(int j = i+1; j<=n; j++)
        {
            if(min_value > a[j]) 
            {
                min_value = a[j];
                min_index=j;
            }

        }
        swap(a[i],a[min_index]);
        cout << "Buoc " << i <<": ";
        for(int z = 1; z <= n; z++) cout << a[z] << " ";
        cout << endl;
    }
}