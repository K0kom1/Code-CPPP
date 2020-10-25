#include<iostream>
using namespace std;
int x[1000],n,res[1000];
int kt[1000],Min;
int a[100][100];
int cost;
void kiemtra(int);
void Try(int i)
{
	for (int j = 1; j <= n; j++ )
		if (kt[j] == 1)
			{
			kt[j] = 0;
			x[i] = j;
			cost += (a[x[i-1]][x[i]]);
			if (i == n) kiemtra(cost);
				else Try(i+1);
			kt[j] = 1;	
			cost -= (a[x[i-1]][x[i]]);
			}

}
void kiemtra(int c)
{	
	c += a[x[n]][x[1]];
	for (int i = 1; i <= n; i ++)
		cout<< x[i] <<" ";
	cout << endl;	
	cout << "chi phi di lai la: "<< c <<endl;
	if (c<Min){
		Min = c;
		for(int i=1;i<=n;i++)
			res[i]=x[i];
	}
}
int main()
	{
		Min = 99999;
		cin >> n;
		cost = 0;
		for (int i = 1; i<= n; i++)
			kt[i] = 1;
		for (int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				cin >> a[i][j];
		Try(1);
		cout << Min << endl;
		for(int i=1;i<=n;i++)
			cout << res[i] <<" ";
					
		
}
 /* n = 5
  1 -> 2 -> 5 -> 3 -> 4
  2 -> 5 -> 3 -> 4 -> 1
  */
 	
