#include<bits/stdc++.h>
using namespace std ;
stack <int > s ;
int main(){
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL); cout.tie(NULL);
	int n,k ;
	cin >> n >> k ;
	for ( int i=1 ; i<=n ; i++ )
	{
		char tmp_char ;
		cin >> tmp_char ;
		int tmp_int= tmp_char - '0' ;
		if ( s.empty() )
			s.push(tmp_int) ;
		else 
		{
			while ( !s.empty() && tmp_int > s.top() && k>0 )
			{
				s.pop() ;
				k-- ;
			}
			s.push(tmp_int) ;
		}
	}
	while (k>0 && !s.empty())
	{
        s.pop();
        k--;
	}
	vector <int> v;
	while ( !s.empty() )
	{
		int m=s.top() ;
		s.pop() ;
		v.push_back(m) ;
	}
	for ( int i=v.size()-1 ; i>=0 ; i-- )
		cout << v[i] ;
	return 0 ;
}


