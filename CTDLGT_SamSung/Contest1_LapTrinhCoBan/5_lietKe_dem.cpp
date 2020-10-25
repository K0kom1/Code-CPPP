#include<bits/stdc++.h>
using namespace std;
int check_snt(int x){
	while (x){
		int m=x%10;
		if (m!=2 && m!=3 && m!=5 && m!=7) return 0;
		x/=10;
	}
	return 1;
}
int main()
{
	int a[10005],x,n=0,b[10005];
	
	while((cin >> x) != NULL){
		a[n++]=x;
		b[n]=1;
	}

	for (int i=0; i<n ; i++ ){
		if (b[i]==1 && check_snt(a[i])){
			int dem=1;
			for( int j=i+1; j < n; j++)
				if (a[j] == a[i]){
					dem++;
					b[j]=0;
				}
			cout << a[i] << " " << dem << endl;
		}
	}

	return 0 ;
}

