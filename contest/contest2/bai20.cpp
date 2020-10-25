#include<iostream>

using namespace std;
int a[20],n;
void display(int a[],int n)
{
    cout << "[";
    for(int i = 0; i < n-1; i++)
        cout << a[i] << " ";
    cout << a[n-1] << "]";    
    cout << " ";
}
void backtrack(int a[],int n)
{
    if(n < 1)   return;
    else
    {
        int temp[n-1];
        for(int i = 0; i < n-1; i++)
            temp[i] = a[i] + a[i+1];
        backtrack(temp,n-1);
        display(a,n);    
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n ; i++)    
            cin >> a[i];
            backtrack(a,n);
            cout << endl;
    }
    
}
