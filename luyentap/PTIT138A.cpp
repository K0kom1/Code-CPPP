#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	ull a,b,c;
	cin >> a >> b >> c;
	while((a!=0)&&(b!=0)&&(c!=0)){
		if (a*a+b*b==c*c) cout << "right";
			else if (a*a+c*c==b*b) cout << "right";
				else if(a*a == b*b+c*c) cout << "right";
					else cout << "wrong";
	cout << endl;
	cin >> a >>b >> c;				
	}
	return 0;
}

