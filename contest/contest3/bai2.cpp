#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a,b;
vector<int> t_a;
vector<int> t_b;
int main()
{
    cin >> a >> b;
    long max_a=0,max_b=0,min_a=0,min_b=0;
    while(a > 0){
        int t = a%10;
        t_a.push_back(t);
        a/=10;
    }
    reverse(t_a.begin(),t_a.end());
    for(int i = 0; i < t_a.size(); i++)
    {
        if(t_a[i] == 5)   t_a[i] = 6;
        max_a = max_a*10 + t_a[i];
    }

    for(int i = 0; i < t_a.size(); i++)
    {
        if(t_a[i] == 6)   t_a[i] = 5;
        min_a = min_a*10 + t_a[i];
    }
   
  
    while(b > 0){
        int t = b%10;
        t_b.push_back(t);
        b/=10;
    }
    reverse(t_b.begin(),t_b.end());
    for(int i = 0; i < t_b.size(); i++)
    {
        if(t_b[i] == 5)   t_b[i] = 6;
        max_b = max_b*10 + t_b[i];
    }
  
    for(int i = 0; i < t_b.size(); i++)
    {
        if(t_b[i] == 6)   t_b[i] = 5;
        min_b = min_b*10 + t_b[i];
    }
    
    cout << min_a + min_b << " " << max_a + max_b << endl;

}
