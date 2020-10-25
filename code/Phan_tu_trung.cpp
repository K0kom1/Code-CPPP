#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int main()
{
	int a[MAX] ,n;
	int b[100000]={0};
	cin >> n ;
	for ( int i=1 ; i<=n ; i++ ) cin >> a[i] ;
	for ( int i=1 ; i<=n ; i++ ) 
	{
		if ( b[a[i]]==0 ) 
		{
			cout << a[i] << " ";
			b[a[i]]=1 ;
		}
	}

	return 0 ;
}

