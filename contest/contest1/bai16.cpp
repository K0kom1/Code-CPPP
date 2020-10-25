#include<iostream>
#include<vector>

using namespace std;
int n,k,b[100][100],sumt,check;
vector<int> a(20);
vector< vector<int> > v;
bool test()
{
    sumt = 0;
    for(int i  = 0; i < n; i++)
    {
        sumt += b[i][a[i]];
        if(sumt > k)  return 0;
    }
    if(sumt == k)  return 1;
    else        return 0;    

}
void next_permutation()
{
    int i = n-2;
    while(a[i] > a[i+1])    i--;
    if(i < 0) check = 1;
    else
    {
        int j = n-1;
        while(a[j] < a[i])  j--;
        swap(a[j],a[i]);
        int d = i+1,m=n-1;
        while(d < m)
        {
            swap(a[d],a[m]);
            d++;
            m--;
        }
    }  
}
int main()
{
    cin >> n >> k;
    check = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n ;j++)
            cin >> b[i][j];
    }
    for(int i = 0 ; i < n ; i++)
        a[i] = i;
    while(!check)
    {
        if(test())
            v.push_back(a);
        next_permutation();    
    }   
    cout << v.size() << endl;
    for(int i = 0 ; i < v.size(); i++)
    {
        for(int j = 0 ; j < n; j++)
            cout << v[i][j] + 1 << " ";
        cout << endl;    
    } 
 
}
