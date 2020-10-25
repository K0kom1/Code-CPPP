#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>a;
int tong1,tong2,n,k;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tong1 = 0;
        tong2 = 0;
        cin >> n >> k;
        int temp;
        for(int i = 0 ; i < n ; i++)
            {
                cin >> temp;
                a.push_back(temp);
            }
        sort(a.begin(),a.end());
        if(k >= n/2 + 1)
		{
			reverse(a.begin(),a.end());
			for(int i = 0; i < a.size(); i++)
        {
            if(i <= k-1)    tong1 += a[i];
            else            tong2 += a[	i];    
        }
        	cout << tong1 - tong2 << endl;
		}
		else
		{
				for(int i = 0; i < a.size(); i++)
        {
            if(i <= k-1)    tong1 += a[i];
            else            tong2 += a[i];    
        }
        	cout << tong2 - tong1 << endl;
		}
        a.clear();    
    }
    
}
