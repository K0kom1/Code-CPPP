#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--){
		int S,D,a[1001]={1};
		cin >> S >> D;
		S--;
		for (int i=D-1; i >= 1; i--)
			if (S>9){
				a[i]=9;
				S-=9;
			}
			else if(S>0){
					a[i]=S;
					S=0;
				}
				else break;
		a[0]+=S;
		if (a[0]>=10) cout << -1;
		else 
			for (int i=0; i < D; i++) cout << a[i];
		cout << endl;
	}

	return 0 ;
}

