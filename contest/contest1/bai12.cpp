#include<iostream>

using namespace std;
int b[20] = {0},n,k,check1=0;
void next_binary()
{
    int i = n;
    while(b[i] == 1)    i--;
    if(i == 0)  check1 = 1;
    else
    {
        b[i] = 1;
        for(int j = i + 1; j <= n ; j++)
            b[j]=0;
    }
}
void display()
{
    for(int i = 1; i <= n; i++)
        cout << b[i];
    cout << endl;    
}
bool test()
{
    int dem = 0;
    for(int i = 1; i <= n ; i++)
    {
        if(b[i] == 1)   dem++;
    }
    if(dem == k)    return true;
    else            return false;
}
void khoitao()
{
    for(int i = 1; i <= n; i++)
        b[i]=0;
}
int main()
{   
    int t;
    cin >> t;
    while (t--)
    {   
        cin >> n >> k;
        khoitao();
        while(!check1)
        {
            if(test())  display();
            next_binary();
        }
        check1 = 0;
    }
    
    return 0;
}
