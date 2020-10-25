#include<iostream>
#include<algorithm>

using namespace std;

int a[1001], f[1001][51], n, k;

int sub(int, int);
void qhd(int, int);

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(int i = 1; i <= n; ++i) 
		{
			cin >> a[i]; a[i] %= k;
		}
		qhd(n, k);
	}
	return 0;
}

int sub(int j,int y)
{
    j = j - y;
    if(j < 0)return j + k;
    return j;
}

void qhd(int n, int k)
{
	f[0][0] = 0;
	for(int i = 1; i < k; ++i)
        f[0][i] = INT_MIN;
        
	for(int i = 1; i <= n; ++i)
		for(int j = 0; j < k; ++j)
			f[i][j] = max(f[i - 1][j], f[i - 1][sub(j, a[i])] + 1);
			
    cout << f[n][0] << endl;
}
