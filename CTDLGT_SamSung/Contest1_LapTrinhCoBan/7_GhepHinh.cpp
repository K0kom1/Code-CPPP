#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int a, b, c, d, e, f, se, s;
	int test;
	cin >> test;
	while (test--){
		cin >> a >> b >> c >> d >> e >> f; 
		s = a*b + c*d +e*f;
		se = sqrt(s);
		if (se*se == s)
		{
			if (a < b) swap(a,b);
			if (c < d) swap(c,d);
			if (e < f) swap(e,f);
			if (a==se && c==se && e==se ) cout << "YES" << endl;
			else{
				if (c == se){
					swap(a,c);
					swap(b,d);
				} 
				if (e == se){
					swap(a,e);	
					swap(b,f);
				}
				if (a == se){
					b = a - b;
					if ((c==e && e==b) || (c == f && f == b) || (d == e && e == b) || (d == f && f == b))
						cout << "YES"<< endl;
					else			
						cout << "NO"<< endl;
				}
				else
					cout << "NO"<< endl;
			}
		}
		else 
			cout << "NO"<< endl;
	}
	return 0;
}
