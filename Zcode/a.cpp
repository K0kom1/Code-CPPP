#include<bits/stdc++.h>
using namespace std;
int main() {
	int t ;
	cin>> t ;
	while(t--) {
		int n  ;	
		int a[10000] , b[10000];
		cin >> n ;
		for(int i = 0 ; i < n ; i ++) {
			cin >> a[i] ;
		}
		for(int i = 1; i < n ; i ++) {
			if(i % 2 == 1 && a[i] < a[i-1]) {
				int temp = a[i];
				a[i] = a[i-1];
				a[i-1] = temp;
			}
			if(i % 2 == 0 && a[i] > a[i-1]) {
				int temp = a[i];
				a[i] = a[i-1];
				a[i-1] = temp;
			}
		}
		for( int i = 0 ; i < n ; i ++) {
			b[i] = a[i];
			cout<< b[i] <<" ";
		}
		cout<<endl;
	}
	return 0;
}