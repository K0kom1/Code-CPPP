#include <iostream>
#include <algorithm>
using namespace std;
 
struct gio
{
	int s;
	int f;
} typedef timeh;
 
int cmp (timeh a, timeh b)
{
	if (a.f>b.f) return 0;
	return 1;
}
 
int main ()
{
	//IN;
	timeh h[10004];
	int n;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>h[i].s>>h[i].f;
	}
	//OUT;
	sort (h, h+n, cmp);
	int count=0;
	int next=0;
	int x=h[0].s;
	for (int i=0; i<n; i++)
	{
		if (x<=h[i].s)
		{
			count++;
			x=h[i].f;
		}
	}
	cout<<count;
 
	return 0;
}
