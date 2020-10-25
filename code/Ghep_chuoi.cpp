#include<bits/stdc++.h>
using namespace std ;
const long mod=1e9+7;
int n , a ;

priority_queue <int,vector<int>,greater<int> > p ;

void init()
{
	cin >> n ;
	for ( int i=1 ; i<=n ; i++ )
	{
		cin >> a ;
		p.push(a) ;
	}
	return ;
}

void xuatmang(int a[], int n ) 
{
	for ( int i=1 ; i<=n ; i++ )
		cout << a[i] << " " ;
	return ;
}
int main(){
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL); cout.tie(NULL);

	init() ;
	long min ;
	while (p.size() >1)
	{
		long first=p.top()%mod ; p.pop() ;
		long second=p.top()%mod ; p.pop() ;
		min+= (first+second)%mod ;
		min%=mod ;
		p.push((first+second)%mod) ;
	}
	cout << min ;
	return 0 ;
}


