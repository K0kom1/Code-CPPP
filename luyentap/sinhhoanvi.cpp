#include<iostream>
using namespace std;
int x[1000],n;
int kt[1000];
void in();
void Try(int i)
{
	for (int j = 1; j <= n; j++ )
		if (kt[j] == 1)
			{
			kt[j] = 0;
			x[i] = j;
			if (i == n) in();
				else Try(i+1);
			kt[j] = 1;	
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
		for (int i = 1; i<= n; i++)
			kt[i] = 1;
		Try(1);
		
}
 /* cho truoc n, in ra cac hoan vi nguoc
 	n = 5;
 	5 4 3 2 1*/
 	
