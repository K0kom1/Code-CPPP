#include<iostream>

using namespace std;
int m,n,a[20][20],b[20],dem;
void act(){
    int cot = 0,hang=0;
    for(int i = 0; i < m+n-2; i++)
    {
        if(b[i] == 1)   cot++;
        else            hang++;
        if(hang >= m || cot >= n)
            return ;
    }
    if(hang == m- 1 && cot == n-1)  dem++;
}
void back_track_binary(int k)
{
    for(int i = 0 ; i <= 1; i++)
    {
        b[k] = i;
        if(k == m+n-2-1)  act();
        else          back_track_binary(k+1); 
    }

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        dem = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[m][n];
            }
        }
        back_track_binary(0);
        cout << dem << endl;
    }
    
}