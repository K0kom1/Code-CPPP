#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n%2==1){ cout << "0" <<endl;
		}
		else{
		
		n=n/2;
		ull kq = 1;
		int i =2,dem=0;
		while(n%2==0){
			dem++;
			n/=2;
		}
		kq = kq*(dem+1);
		for(int i = 3; i<=sqrt(n);i+=2)
			{
			dem = 0;
			while(n%i==0){
				dem++;
				n/=i;
			}
			kq = kq*(dem+1);
		}
		if(n>1) kq = kq*2;
		cout << kq << endl;
		}
	}
	return 0;
}

