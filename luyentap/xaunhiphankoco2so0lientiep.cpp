#include<iostream>
using namespace std;
int x[1000],n;
void in();
int dem = 0;
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
	for (int i = 1; i < n; i ++)
		if(x[i]==0 && x[i+1]==0) {dem++;return;};
	
}
int main()
	{
		cin >> n;
		Try(1);
		cout << dem << endl;
	}
