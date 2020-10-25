#include<iostream>

using namespace std;

long long fibo[1005], k, n;

string fibo_word(long long , long long);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        fibo[1] = fibo[2] = 1;
        for(int i  = 3; i <= n; i++)
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        cout << fibo_word(n, k) << endl;
    }
}

string fibo_word(long long n, long long k)
{
    if(n==1)    return "A";
    if(n==2)    return "B";
    if(k <= fibo[n - 2])  
		return fibo_word(n - 2, k); 
    else                
		return fibo_word(n - 1, k - fibo[n - 2]);  
}



