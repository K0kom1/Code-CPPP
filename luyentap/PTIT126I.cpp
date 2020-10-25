#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	string a,b;
	cin >> a >> b;
	//cin.ignore(); 
	int x,y;
	int la = a.length(),lb = b.length();
	char f[lb+1][la+1];
	for (int i = 0; i < la; i++)
		for(int j = 0; j < lb; j++)
			{
				//cout << a[i] <<" "<<b[j]<<endl;
			if(a[i]==b[j]) {
				x = i;
				y = j;
				goto cp;
				}
		}
	//cout << x << y <<endl;
	cp : memset(f,'.',sizeof(f));
	for(int i=0;i<=la;i++){
		f[y][i] = a[i];
	}
	for(int i=0;i<=lb;i++){
		f[i][x] = b[i];
	}		
	for (int i = 0; i < lb; i++){
	
		for(int j = 0; j < la; j++)
			cout << f[i][j];
		cout << endl;
	}
	return 0;
}

