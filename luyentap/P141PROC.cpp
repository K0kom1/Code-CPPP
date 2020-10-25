#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	cin >> n;
	int x = 0;
	for (int i = 1; i<=n;i++){
		string s;
		cin >> s;
		if (s == "++X") ++x;
		if (s == "X++") x++;
		if (s == "--X") --x;
		if (s == "X--") x--;
		
	}
	cout << x;
	return 0;
}

