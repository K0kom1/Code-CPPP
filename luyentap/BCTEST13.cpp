#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
bool kt(int n){
	while(n!=0){
		int mod = n%10;
		if ((mod!=4)&&(mod!=7)) return false;
		n/=10;
	}
	return true;
}
int main(){
	int l,r;
	int x = 0;
	ull kq = 0;
	cin >> l >> r;
	for(int i = l; i<=r;i++)
		{
		if(kt(i)){
			kq += (x+1)*i;
			x = 0;
		}
		else x++;
		}
	cout << kq;	
	return 0;
}

