#include <iostream> 
#include <stack> 
#include <string.h>
using namespace std; 
stack <int> s;
int main()
{
	stack <int> s;
	char tt[10]="";
    int x;
    do{
    	cin>> tt ;
    	if ( strcmp(tt,"end")==0 ) break ;
    	if ( strcmp(tt,"init")==0 ) 
		{
			while (!s.empty()) s.pop() ;
		}
    	if ( strcmp(tt,"size")==0 ) cout << s.size() << endl ;
    	if ( strcmp(tt,"empty")==0 ) cout << s.empty() << endl ;
    	if ( strcmp(tt,"push")==0 ) { cin >> x ; s.push(x) ; }
    	if ( strcmp(tt,"pop")==0 && !s.empty())  s.pop() ;
    	if ( strcmp(tt,"top")==0 ) { if ( s.size()==0 ) cout << -1<< endl ;
									else cout << s.top() << endl;}
	}while (1) ;
	return 0 ;
}

