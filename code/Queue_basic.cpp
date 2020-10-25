#include <bits/stdc++.h> 

using namespace std; 
queue <int> q;
int main()
{
    int x,n;
    cin>> n ;
    for ( int i=1 ; i<=n ; i++ )
    {
    	cin >> x ;
    	if ( x==1 ) cout << q.size() << endl ;
    	if ( x==2 ){
			if ( q.empty() ) cout << "YES" << endl ;
			else cout << "NO" << endl ;
			}
    	
    	if ( x==3 ) 
		{ 
			int k ;
			cin >> k ;
			q.push(k) ; 
			}
    	if ( x==4 && !q.empty() )  q.pop() ;
    	if ( x==5 ) 
		{ 
			if ( q.size()==0 ) cout << -1<< endl ;
			else cout << q.front() << endl;
			}
		if ( x==6 ) 
		{ 
			if ( q.size()==0 ) cout << -1<< endl ;
			else cout << q.back() << endl;
			}	
	}
	return 0 ;
}

