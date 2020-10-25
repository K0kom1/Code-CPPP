#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int i = 1, t = n;
		while(i <= n)
		{
			t /= i++;
			int tmp = sqrt(t);
			if(tmp * tmp == t) 
			{
				cout << i-1 << endl;
				break;
			}
		}
	}
	return 0;
}

