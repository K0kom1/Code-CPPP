#include<iostream>
using namespace std;
int x[1000],k,n;
void in();
void Try(int i)
{
	for (int j = x[i-1] + 1; j <= n - k + i; j++ )
		{
		x[i] = j;
		if (i == k) in();
			else Try(i+1);
		}
}
void in()
{
	for (int i = 1; i <= k; i ++)
		cout<< x[i];
	cout << endl;	
}
int main()
	{	x[0] = 0;
		cin >> k >> n;
		Try(1);
		
	}
