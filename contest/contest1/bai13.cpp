#include<iostream>
#include<vector>
using namespace std;
vector<char> b(20);
vector< vector<char> > v;
char result[20][20];
int dem,nv,k,check=0;
void next_binary()
{
    int i = nv-1;
    while(b[i] == 'B')
    {
        b[i] = 'A';
        i--;
    }
    if(i < 0)  check  = 1;
    else        b[i] = 'B';
}
char test()
{
    int dem1 =0, dem2 = 0;
    for(int i = 0; i < nv; i++)
    {
       if(b[i] == 'A') dem1++;
       if((dem1 == k && b[i] != 'A') || (dem1 == k && i == nv-1))
       {
           dem1 = 0;
           dem2++;
       }
       if(b[i] == 'B')  dem1 = 0; 
    }
    if(dem2 == 1)   v.push_back(b);
}
int main()
{   
    cin >> nv >> k;
    dem = 0;
    for(int i = 0; i < nv ;i++)
        b[i]='A';
    while(!check)
    {
        test();
        next_binary();
    }
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < nv; j++)
            cout << v[i][j];
        cout << endl;    
    }
        
    return 0;
}
