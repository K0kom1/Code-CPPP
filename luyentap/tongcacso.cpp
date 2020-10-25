#include<iostream>
using namespace std;
int x[1000],n,sum = 0;
void in(int);
void Try(int i)
{	
	for (int j = x[i-1]; j <= n - sum; j++ )
		{
		x[i] = j;
		sum += x[i];
		if (sum == n) in(i);
			else Try(i+1);
		sum -=x[i];	
		}
}
void in(int k)
{
	for (int i = 1; i <= k; i ++)
		cout<< x[i]<<" ";
	cout << endl;	
}
int main()
	{	
		x[0] = 1;
		cin >> n;
		Try(1);
		
	}
