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
	int a[5];
	cin >> a[1]>>a[2]>>a[3]>>a[4];
	int k = 0;
	while((a[1]!=0)&&(a[2]!=0)&&(a[3]!=0)&&(a[4]!=0)){
		k++;
		if(kt(a,4)) {cout << "0"<<endl;
						goto thoat; 
			}	
		for(int j=1;j<=1000;j++){
			int b[30];
			for (int i =1;i<=4;i++)	b[i] = a[i];
			for (int i =1;i<=4-1;i++){
				a[i] = abs(b[i+1] - b[i]);
			}
			a[4] = abs(b[1]-b[4]);
			if(kt(a,4)) {cout <<j<<endl;
						goto thoat; 
			}
		}	
		cout << k <<endl;	
		thoat : cin >> a[1]>>a[2]>>a[3]>>a[4];
	}
	return 0;
}

