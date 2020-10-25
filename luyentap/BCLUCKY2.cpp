#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	
		int n;
		cin >> n;
		int i = 0;
		while(i*4<=n){
			if((n-i*4)%7==0)
				{
					for(int j=1;j<=i;j++) cout <<4;
					for(int j=1;j<=(n-i*4)/7;j++) cout <<7;
					break;
				}
			i++;	
		}
		if(i*4>n) cout <<"-1";
		cout <<  endl;
	
	return 0;
}

