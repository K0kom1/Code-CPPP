#include<bits/stdc++.h>

using namespace std;
int n,m,a[505][505],res[505][505];
int qhd()
{
    int result = 0;
    for(int i = 1; i <= n; i++) 	res[i][1] = a[i][1];
    for(int j = 1; j <= m ; j++)    res[1][j] = a[1][j];
    
    for(int i = 2; i <= n ; i++)
    {
        for(int j = 2; j <= m; j++)
        {
            if(a[i][j] == 1)    
				res[i][j] = min(min(res[i-1][j],res[i][j-1]),res[i-1][j-1]) + 1; 
            else                
				res[i][j] = 0;
				
            result = max(result,res[i][j]);
        }

    }
    return result;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for(int i = 1; i <= n ;i++)
        {
            for(int j = 1; j <= m; j++)
                cin >> a[i][j];
        }
        cout << qhd() << endl;
    }
}
