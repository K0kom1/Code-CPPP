#include<iostream>
using namespace std;

void nhap(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
}

int xuat(int A[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i] == x)
		{
			return i++;
		}
	}
	return -1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int A[n];
		nhap(A, n);
		xuat(A, n, x);
		cout << endl;
	}
	return 0;
}