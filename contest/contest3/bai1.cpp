#include<iostream>

using namespace std;
int money[15]={1,2,5,10,20,50,100,200,500,1000};
int n,dem;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        dem = 0;
        int i = 9;
        while(n > 0)
        {
        	if(n >= money[i])
        	{
        		int sototien = n/money[i];
        		n = n - sototien * money[i];
        		dem += sototien;
			}
			else i--;
			if(i < 0)	break;
       	}
       	cout << dem << endl;
    }
    
}
