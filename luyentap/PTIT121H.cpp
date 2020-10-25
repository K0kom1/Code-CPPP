#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int m,k;
	string s;
	cin >> m >> k ;
	cin>> s;
	
	int a[10000];
	for (int i = 0; i< m;i++)
		a[i] = i;
	int j = -1;	
	for (int i = 0; i < s.length();i++)
		{	j ++;
			if (s[i] == 'A') a[j+m] = a[j];
				else if(s[i] == 'B') {
					int temp = a[j+1];
						a[j+1] = a[j];
						a[j] = temp;
						a[j+m] = a[j];	
				}
				else break;
			}
	cout << a[k-1+j] << " "<< a[k+j]<<" "<< a[k+1+j];			
	return 0;
}

