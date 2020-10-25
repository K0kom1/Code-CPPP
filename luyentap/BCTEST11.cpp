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
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		if	((n%i==0)&&(kt(i))) {
		cout << "YES";
			return 0;}
	}
	cout << "NO";
	return 0;
}

