#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--){
		int n;
		stack <int> s;
		cin >> n;
		for (int i=0; i < n; i++)
			cin >> a[i];
		for (int i=0; i < n; i++){
			int x=a[i];
			if(!s.empty()){
				int T=s.top();
				s.pop();
				while (T<X){
					if(s.empty()) break;
					T=s.top();
					s.pop();
				}
				if (T>X) s.push(T);
			}
			s.push(X);
		}
		while (!s.empty()){
			s.top();
			s.pop();
		}
	}
	
	return 0 ;
}

