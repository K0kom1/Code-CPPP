#include<iostream>

using namespace std;
 int n,check,k,x[100];
void khoitao()
{
    k = 1;
    x[k] = n;
}
void display()
{
    cout << "(";
    for(int i = 1; i <= k; i++)
       {
           if(i == k)   cout << x[i] ;
           else         cout << x[i] << " ";
       }
    cout << ") ";   
}
void next_division()
{
    int i = k,R,S,D;
    while(x[i] == 1)    i--;
    if(i == 0)  check = 1;
    else{
        x[i] = x[i] - 1;
        D = k - i + 1; 
        R = D / x[i];
        S = D % x[i];
        k = i;
        if(R > 0)
        {
            for(int j = i + 1; j <= R + i ; j++)
                x[j] = x[i];
            k += R;    
        }
        if(S > 0)
        {
            k++;
            x[k] = S;
        } 
    }

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {   
        cin >> n;
        check = 0;
        khoitao();
        while(!check)
        {
            display();
            next_division();
        }
        cout << endl;
    }
    
    return 0;
}
