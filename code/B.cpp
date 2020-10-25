#include <bits/stdc++.h>
using namespace std;
bool Digit(int n)
{
	int res = 0;
	while (n > 0)
	{
		res = n % 10;
		if ( res != 2 && res != 3 && res != 5 && res != 7)
		{
			return false;
			break;
		}
		n /= 10;
	}
	return true;
}
int main()
{
	int n = 1, a[50005] = {0};
	set <int> s;
	vector <int> v;
	vector <int>::iterator iter;
	while (cin >> n)
	{
		if (Digit(n))
		{
			int c = 0;
			for (int i=0; i < v.size(); i++)
				if (n == v[i])
				{
					a[i]++;
					c = 1;
					break;
				}
			if (c == 0)
				v.push_back(n);
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] <<  " " << a[i]+1  << "\n" ;
	}
   return 0;
}

