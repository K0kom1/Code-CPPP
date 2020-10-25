#include<bits/stdc++.h>

using namespace std;
bool prime[1000001];
int n;
void sang_nguyen_to()
{
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i = 2; i*i <= 1000000; i++)
    {
        if(prime[i])
        {
            for(int j = i*2; j <= 1000000; j += i)
                prime[j] = false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    sang_nguyen_to();
    while (t--)
    {
        cin >> n;
        if(n <= 3)  cout << -1 << endl;
        else
        {
           bool test = true;
        for(int i = 2; i <= n;i++)
        {
            if(prime[i])
            {
                if(prime[n-i])
                {
                    cout << i << " " << n - i << endl;
                    test = false;
                    break;
                }
            }
        }
             if(test)    cout << -1 << endl; 
        }
        
        
    }
    
}