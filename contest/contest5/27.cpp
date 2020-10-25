#include <iostream>
#include <algorithm>

using namespace std;

int V[1000], W[1000];

int Bag(int, int);

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
    	int n, M;
	    cin >> n >> M;
    	for(int i = 0; i < n; i++) cin >> W[i];
    	for(int i = 0; i < n; i++) cin >> V[i];
    	cout << Bag(n, M) << endl;
	}
    return 0;
}

int Bag(int n, int m)
{
    int DP[n + 1][m + 1];
    for(int i = 0; i <= m; i++)    DP[0][i] = 0;
    for(int i = 0; i <= n; i++)    DP[i][0] = 0;
    for(int i = 1; i <= n; i++)
	{
        for(int j = 1; j <= m; j++)
		{
            if(W[i - 1] <= j)
                DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - W[i - 1]] + V[i - 1]);
            else
                DP[i][j] = DP[i - 1][j];
        }
    }
    return DP[n][m];
}
