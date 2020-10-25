#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,a[100],sum,s,check;
vector<int>b;
void sinh(int i,int sum,vector<int> temp)
{
    if(sum > s) return;
    for(int j = i; j <=n; j++)
    {
        if(sum + a[j] <= s)
		{
            temp.push_back(a[j]);
            sinh(j,sum + a[j],temp);
            temp.pop_back(); 
        }

    }
    if(sum == s)
    {
        check = 1;
        cout << "[";
        for(int i = 0; i < temp.size()-1; i++)
            cout << temp[i] << " ";
        cout << temp[temp.size() - 1] << "]"; 
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        check = 0;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
      for(int i = 1; i <= n - 1; i++)
	  {
        for(int j = i + 1; j <= n; j++)
		{
            if(a[i] > a[j])
			{
              
               int tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
        sinh(1,0,b); 
        if(check == 0)  cout << -1;
        cout << endl;      
    }   
        return 0;  
}
   

