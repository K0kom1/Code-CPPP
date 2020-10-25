#include<iostream>

using namespace std;

int n,k,b[20],A[20],mark;

void display()
{
    for(int i = 1; i <= n ; i++)
        cout<< b[i];
        cout << " ";
}
void act()
{
    int sum = 0, dem = 0, Result[20];
    for(int i = 1; i <= n; i++) sum = sum + A[i]*b[i];
    if(sum == k)
    {
        mark = 1;
        for(int i = 1; i <= n ; i++)
        {
            if(b[i])  Result[dem++] = A[i]; 
        }
        cout << "[";
        for(int i  = 0; i < dem - 1; i++)
     	cout << Result[i] << " ";
     	cout << Result[dem - 1] << "] ";
    }
}
void back_track_binary(int k)
{
    for(int i = 1 ; i >= 0; i--)
    {
        b[k] = i;
        if(k == n)  act();
        else        back_track_binary(k+1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        mark = 0;
        for(int i = 1; i <= n ; i++)
        {
            cin >> A[i];
        }
        for(int i = 1; i <= n-1; i++)
        {
            for(int j = i+1; j <= n; j++)
            {
                if(A[i] > A[j]) swap(A[i],A[j]);
            }
        }
        back_track_binary(1);
        if(mark == 0)   cout << -1 << endl;
        cout << endl;
    }
    return 0;

}
