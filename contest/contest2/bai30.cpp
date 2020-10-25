#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int n,p,s,c[100],sum,check,dem;
vector <int> nguyento;
vector< vector<int> > result;
void backtrack(int i,int sum,vector <int>  temp)
{
    if(sum > s)    return;  
    for(int j = i; j < nguyento.size(); j++)
    {
        if(sum + nguyento[j] <= s)
        {
            temp.push_back(nguyento[j]);
            backtrack(j+1,sum+nguyento[j],temp);
            temp.pop_back();
        }
    }
    if(sum == s && temp.size() == n )    result.push_back(temp);

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nguyento.clear();
        result.clear();
        cin >> n >> p  >> s;
      
        bool prime[321];
        for(int i = 2; i <= s; i++)
            prime[i] = true;
        for(int i = 2; i*i <= s; i++)
        {
            if(prime[i])
            {
                for(int j = i*2; j <= s; j += i)
                    prime[j]=false;
            }
        }
        for(int i = p+1; i < s && i <= 320; i++)
            {
                if(prime[i])    nguyento.push_back(i);
            }   
          
        vector <int> temp;
        backtrack(0,0,temp);
        cout << result.size() << endl;  
        for(int i = 0; i < result.size(); i++)
        {
            for(int j =0; j < n; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    
}
