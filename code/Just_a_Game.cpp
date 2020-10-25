#include<bits/stdc++.h>
using namespace std;
int n,count_chan,count_le;
int snt(int x){
	if(x < 2) return 0;
	int m=trunc(sqrt(x));
	for (int i=2; i<=m; i++)
		if (x%i == 0) return 0;
	return 1;	
}
int main()
{
	int test;
	cin >> test;
	while (test--){
		cin >> n;
		if (n==1) cout << "Shin" << endl;
		else
			if (n==2) cout << "Lin" << endl;
			else
				if (n%2==1) cout << "Lin" << endl;
				else{
					n/=2;
					if (n%2==1)
						if (snt(n)) cout << "Shin" << endl;
						else cout << "Lin" << endl;
					else{
						while (n%2==0) n/=2;
						if (n==1) cout << "Shin" << endl;
						else cout << "Lin" << endl;
					}	
				}
	}
	return 0 ;
}

