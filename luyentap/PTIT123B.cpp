#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int kt(int a[],int n){
	for (int i = 1; i<=n;i++){
		if (a[i] != a[1]) return 0;
		
 	}
 	return 1;
}
int main(){
	int n;
	cin >> n;
	int k = 0;
	while(n){
		k++;
		int a[30];
		for (int i=1;i<=n;i++)
			cin >> a[i];
		if(kt(a,n)) {cout << "Case "<<k<<": "<<"0"<<" iterations"<<endl;
						goto thoat; 
			}	
		for(int j=1;j<=1000;j++){
			int b[30];
			for (int i =1;i<=n;i++)	b[i] = a[i];
			for (int i =1;i<=n-1;i++){
				a[i] = abs(b[i+1] - b[i]);
			}
			a[n] = abs(b[1]-b[n]);
			if(kt(a,n)) {cout << "Case "<<k<<": "<<j<<" iterations"<<endl;
						goto thoat; 
			}
		}	
		cout << "Case "<<k<<": "<<"not attained"<<endl;	
		thoat : cin >> n;
	}
	return 0;
}

