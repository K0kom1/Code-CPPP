#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
 
int main ()
{
	ull n;
	cin>>n;
	int t[100005];
	for (long i=1; i<=n; i++)
		cin>>t[i];
	if (n==1)
	{
		cout<<"1 0";
		return 0;
	}
	int d1=0, d2=0;
	for (int i=1, j=n; i<=n, j>=1;)
	{
		if (t[i]==t[j])
		{
			d1++;
			d2++;
			i++;
			j--;
			if (i==j)
			{
				d1++;
				break;
			}
		}
		else if (t[i]<t[j])
		{
			t[j]=t[j]-t[i];
			d1++;
			i++;
			if (i==j)
			{
				d2++;
				break;
			}
		}
		else
		{
			t[i]=t[i]-t[j];
			d2++;
			j--;
			if (j==i)
			{
				d1++;
				break;
			}
		}
	}
	cout<<d1<<" "<<d2;
	return 0;
}

