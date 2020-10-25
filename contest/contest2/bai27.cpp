#include<iostream>

using namespace std;
int n,a[100],k,tong,value_each_array;
bool check,kt[100];
void sinh(int sum,int dem)
{
    
    if(check == true)   return;	
    if(dem == k)
    {
        check = true;
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        if(kt[i])
        {
            kt[i] = false;
            if(sum == value_each_array)
            {
                 sinh(0,dem+1);
            }
            if(sum > value_each_array) return;
            else        sinh(sum + a[i],dem);   
            
        }
         kt[i] = true;  
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        tong = 0;
        check = false;
        
        for(int i = 1; i <= n ; i++)
           {
               cin >> a[i];
                tong += a[i]; 
                kt[i] = true;
           }
           
        value_each_array = tong / k;
        if(tong % k != 0)   
			cout << 0 << endl;
        else
		{
            sinh(0,0);
            if(check == true)   cout << 1 << endl;
            else                cout << 0 << endl;
         }       
    }
    
}
