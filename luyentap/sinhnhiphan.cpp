#include<iostream>
using namespace std;
int x[1000],n;
void in();
void Try(int i)
{
	for (int j = 0; j <= 1; j++ )
		{
		x[i] = j;
		if (i == n) in();
			else Try(i+1);
		}
}
void in()
{
	for (int i = 1; i <= n; i ++)
		cout<< x[i];
	cout << endl;	
}
int main()
	{
		cin >> n;
		Try(1);
		
	}
